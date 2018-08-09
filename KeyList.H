#ifndef __KEYLIST_H
#define __KEYLIST_H

#include <string>
#include <map>

class KeyList{
private:
	std::string fileName;
	std::map<std::string,std::string> mappedWords;

	void parseMappedWords();

public:
	KeyList(string _fileName);

	std::string getFileName();
	std::string getKeyPhrase(const string &);


};
#endif
