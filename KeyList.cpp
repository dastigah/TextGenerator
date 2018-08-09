#include "KeyList.H"

#include<ifstream>

using namespace std;

void parseMappedWords(){
	ifstream inputFile(fileName);

	if (!inputFile.is_open()){	
		throw(string("Unable to open " + fileName));
	}

	string line;
	while (getline(inputFile,line)){

	}


}

KeyList::KeyList(string _fileName): fileName(_fileName){
	try{
		parseMappedWords();
	}
	catch(string & e){
		cout << "Error: " + e << endl;
	}
}

string KeyList::getFileName() {return fileName;}

string KeyList::getKeyPhrase(const string & input){
	return mappedWords[input];
}
