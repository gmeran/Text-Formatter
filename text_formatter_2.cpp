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




int main (int argc, char *agrv[])
{
	ifstream file;
	file.open(agrv[1]);
	string line;
	
	
	if(file.fail())
	{
		cout << "File doesn't exist"<<endl;
	}
	
	vector<char> word;
	char letter;
	int line_limit = 60;
	
	while( getline(file,line) != EOF)) {
		
		
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
		
		f (word[line_limit] == ' ')
		{
			cout << endl;
		}
   
		
	}
	

	
	
	/*
	while(file >> word)
	{
		word.push_back(letter);
	}
	for(it = charvect.begin(); it < charvect.end(); it++)
		{
			cout << *it;
		}
	*/
	 
}
