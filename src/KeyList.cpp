#include "KeyList.H"
#include "stringUtils.H"

#include<fstream>
#include <iostream>

using namespace std;

void KeyList::generateMappedWords(){
	ifstream inputFile(fileName);

	if (!inputFile.is_open()){	
		throw(string("Unable to open " + fileName));
	}

	string line;
	while (getline(inputFile,line)){
		vector<string> splitKeyPhrases = stringSplit(line,"-->"); 
		mappedWords[splitKeyPhrases[0]] = mappedWords[splitKeyPhrases[1]];	
	}
	
	inputFile.close();
}

KeyList::KeyList(string _fileName): fileName(_fileName){
	try{
		generateMappedWords();
	}
	catch(string & e){
		cout << "Error: " + e << endl;
	}
}

string KeyList::getFileName() {return fileName;}

string KeyList::getKeyPhrase(const string & input){
	return mappedWords[input];
}


const map<string, string>& KeyList::getMap(void){
	return mappedWords; 
}
