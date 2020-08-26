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
#include <vector>

using namespace std;

void get_and_format_text(ifstream &fileIn, char words);



int main (int agrc, char *agrv[] )
{
	char words;
	ifstream fileIn;
	infile.open(argv[1]);
	
	if(fileIn.fail())
	{
		cout << "File doesn't Exist"<<endl;
	}
	
	else
	{
		get_and_format_text(fileIn, words);
	}
	
	fileIn.close()
	cin.get();
 	cin.ignore();
 	return 0;
	   

}

void get_and_format_text(ifstream &fileIn , char words)
{
	vector<char> word;
	char letter;
	int line_limit = 60;
	
	while( (letter = fileIn.get()) != EOF) {
		
		
		word.push_back(letter);
		
	}
	
	
	for(int i = 0; i < word.size(); i ++) {
		
		if (word.at(i) =='\t')
		{
			word.erase(word.begin()+i);
		}
		
		
		
		if(word.at(i) == '\n')
		{
			word.erase(word.begin()+i);
			cout << ' ';
		}
		
		
		 if(word.at(i) == ' ' )
		{
			if(word.at(i+1) == ' ')
			{
				word.erase(word.begin()+i);
			}
		}
		
		cout << word.at(i);
	
		if((i+1) % line_limit == 0 ){
		
				cout<< '-' << endl;
		} 
			
		
		
	}
		

	
		
		
	
	
		
	
	
}
