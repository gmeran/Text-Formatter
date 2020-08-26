/* 
	Name: Gabriel Meran
	Class : CS280
	Section : 3
	Program Name: Text Formater
	Description :
	
	
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;




int main ()
{
	
	ifstream file("test.txt");
	
	if (file.is_open())
	{
		char array[60];
		
		for(int i = 0; i<60; ++i)
		{
			file >> array[i];
			cout << array[i];
		}
		
	 
	}
	
	if (file.fail())
		cout << "File does not Exist" << endl;
	
	cin.get();
 	cin.ignore();
 	return 0;   

}
