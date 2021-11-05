/*
Files :

1. The fstream library allows us to work with files.
2. To use the fstream library, include both the standard <iostream> AND the <fstream> header file
3. There are three classes included in the fstream library, which are used to create, write or read files.

Create and Write To a File :

1. To create a file, use either the ofstream or fstream class, and specify the name of the file.
2. To write to the file, use the insertion operator (<<).

*/

#include <iostream> 
#include <fstream>
using namespace std;

int main() {

    // Create and open a text file 
    ofstream file("file2.txt");

    // write to the text file 
    file << "Table of 5 : \n 5 \n 10 \n 15 \n 20 \n 25 \n 30 \n 35 \n 40 \n 45 \n 50 " ;

    // close the file 
    file.close();
    
    return 0;
}
