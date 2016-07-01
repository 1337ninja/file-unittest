# file-unittest
A simple unit test using gtest for writing data in a file.

## Building
Please note that the gtest libraries were built on a **x86** machine and might not link properly on  **x64**
```
g++ FileWriter.cpp FileWriterTest.cpp -Iinclude/ -Llib/gtest -lgtest -lpthread 
```
## Blog Article
For further explanation you can refer to my blog on[Tumblr](https://1337ninja.tumblr.com/post/146745661206/unit-testing-writing-to-a-file-in-c)
