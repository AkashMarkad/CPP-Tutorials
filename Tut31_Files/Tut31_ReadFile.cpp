/*

Read a File :

1. To read from a file, use either the ifstream or fstream class, and the name of the file.

2. Note that we also use a while loop together with the getline() function (which belongs to the ifstream class) to read the file line by line, and to print the content of the file.

*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {

    // Create a text string , which is used to output the text file 
    string text;

    // Read from the text file .
    fstream readfile("file2.txt");

    // Use a while loop together with the getline() function to read the file line by line 
    while (getline ( readfile , text))
    {
        cout << text;
    }

    // close the file 
    readfile.close();
    
    return 0;
}