#include <iostream>
#include <string>


void createInstanceFromTemplate(std::string templateFilename,std::string keylistFilename,std::string outputFilename){
	/*
	 * TODO: Write body for creating the Template class and then generate instance
	*/
}

void createInstanceFromTemplate(std::string templateFilename, std::string keylistFilename){
	createInstanceFromTemplate(templateFilename,keylistFilename,templateFilename+"instance.txt");
}

int main(int argc, char * argv[]){
	using namespace std;

	if (argc < 3 || argc > 4){
		cout << "Usage: ./textGenerator <template-file-name> <keylist-file-name> <output-file-name(Optional)>" << endl;	
		exit(-1);
	}
	if (argc == 3){
		createInstanceFromTemplate(string(argv[1]),string(argv[2]));	
	}
	if (argc == 4){
		createInstanceFromTemplate(string(argv[1]),string(argv[2]),string(argv[3]));	
	}
	return 0;
}
