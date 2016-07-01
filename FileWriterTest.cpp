#include "FileWriter.h"
#include <sstream>
#include "gtest/gtest.h"

using std::stringstream;


TEST(FileWriterTest, WriteString) {
	
	/* The unit test file deals with stringstream. */
	
	CFileWriter cfw;
	stringstream ss;
	string sData = "test";
	cfw.WriteToFile(ss, sData);
	EXPECT_EQ(ss.str(), sData);
}



int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
