#include "FileWriter.h"

using std::ofstream;

CFileWriter::CFileWriter() {
}

CFileWriter::~CFileWriter() {
}

void CFileWriter::WriteToFile(ostream& os, string sData) {

	os << sData;
}

/*
 * This is how production code would look like. It deals with the file.
   int main() {
	
	string sData = "test"; 
	ofstream ofs;
	ofs.open ("test.txt", ofstream::out | ofstream::app);
	CFileWriter cfw;
	cfw.WriteToFile(ofs, sData);
	
}
* 
*/
