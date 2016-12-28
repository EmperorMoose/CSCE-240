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
		
		const int max_length;
		int _length;
		char data[256];
		int getCharArraySize(char arr[]);
    
	public:
	
		String();
		String(char str[]);
    
		void print();
		int length();
		void clear(); 
		bool empty();
		char at(int index); 
		int find(char substr[], int startIndex);
		bool equal(String &two);
		bool add(String &two);
		
		
};