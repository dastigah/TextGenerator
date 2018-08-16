#include "stringUtils.H"

using namespace std;

vector<string> stringSplit(const string & input ,const string & delimiter){
	size_t begin = 0;
	size_t foundIndex;
	vector<string> splitWords;
	
	while (begin != string::npos){ // While not at the end of the string
		foundIndex = input.find(delimiter,begin);
		if (begin == foundIndex) continue; //Dont add empty string to list
		splitWords.push_back(string(begin,foundIndex));
		begin = (foundIndex == string::npos) ? (string::npos) : foundIndex + delimiter.length(); //if not end of string move pointer pass the delimiter
	}

	return splitWords;
}


