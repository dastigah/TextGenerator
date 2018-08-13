#include "KeyList.H"
#include "stringUtils.H"

#include<fstream>
#include <iostream>

using namespace std;

string KeyList::parseMappedWords(string input){
	return "";
	//TODO: Write function for parseMappedWords
}

void KeyList::generateMappedWords(){
	ifstream inputFile(fileName);

	if (!inputFile.is_open()){	
		throw(string("Unable to open " + fileName));
	}

	string line;
	while (getline(inputFile,line)){
		vector<string> splitKeyPhrases = stringSplit(line,"->"); 
		mappedWords[parseMappedWords(splitKeyPhrases[0])] = mappedWords[parseMappedWords(splitKeyPhrases[1])];	
	}
	
	inputFile.close();
	//TODO: Finish writing logic to parse key phrase and add to map

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
