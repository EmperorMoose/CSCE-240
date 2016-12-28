/***************************************************************************
* File: String.h
* Author: Casey Cole
* Function:
* Input:
* Output:                                                                        *
***************************************************************************/

using namespace std;

class String
{
private:

	int _length;
	char *data;
	int getCharArraySize(char arr[]);

public:

	String();
	String(char str[]);
	virtual ~String(); //Destructor should delete your data pointer.

	void print();
	int length();
	void clear();
	bool empty();
	int find(char substr[], int startIndex);

	bool operator==(String& two); //Should replace your equal() method. 
	bool operator+(String& two); //Should replace your add() method. Should append the char* in two to the object doing the calling. Return true if you were able to add the two together, false if not. 
	void operator=(String& two); //Should assign two to the calling object. 
	char operator[](int index); //Should replace your at() method. 



};
