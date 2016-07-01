#include <iostream>
#include <string>
#include <fstream>

using std::ostream;
using std::string;

class CFileWriter 
{
public:

	CFileWriter();
	~CFileWriter();
	void WriteToFile(ostream& os, string sData);
	
};
