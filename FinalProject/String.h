/***************************************************************************
 * File: String.h
 * Author: Casey Cole
 * Function: 
 * Input: 
 * Output:                                                                        *
 ***************************************************************************/

#include <iostream>
#include <cstdlib>

using namespace std;

class String {
    friend ostream & operator<<(ostream & outStream, String & rhs);
    friend istream & operator>>(istream & inStream, String & rhs);
private:

    int _length;
    char *data;

protected:
    int getCharArraySize(const char arr[]);
    void setLength(int size);
    void setData(int size);


public:

    String();
    String(int size);
    String(char str[]);
    String(const String &);
    virtual ~String(); //Destructor should delete your data pointer.

    void print() const;
    int length() const;
    void clear();
    bool empty() const;
    int find(char substr[], int startIndex);
    void setData(int index, char value);

    bool operator==(String& two) const; //Should replace your equal() method. 
    String operator+(String& two) const; //Should replace your add() method. Should append the char* in two to the object doing the calling. Return true if you were able to add the two together, false if not. 
    String & operator=(String two); //Should assign two to the calling object. 
    String & operator=(const char *);
    char operator[](int index) const; //Should replace your at() method. 
    
    //the following methods are needed.
    String subString(int Start, int length); //Return string[start] - string[start+length-1]
}
