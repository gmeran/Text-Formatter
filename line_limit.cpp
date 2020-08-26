#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;




int main ()
{
	ifstream file("test.txt");
	
	if(file.fail())
	{
		cout << "File doesn't exist"<<endl;
	}
	
	vector<char> word;
	char letter;
	int line_limit = 60;
	
	while( (letter = file.get()) != EOF) {
		
		
		word.push_back(letter);
		
	}
	
	for( int i = 0; i != word.size(); i++)
	{
		cout << word[i];
		if( i % line_limit == 0)
		{
			cout << endl;
		}
		
		
	}
}
