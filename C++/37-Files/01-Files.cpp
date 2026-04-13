/*
    Files are important. Inputting or outputting from/to
    a file is necessary in most programming.

    Needs the fstream library.

    Looks like this overwrites the file instead of
    appending to it.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Create and open a text file
    ofstream MyWriteFile("filename.txt");

    // Write to the file
    MyWriteFile << "Files can be tricky, but it is fun enough!";

    // Close the file
    MyWriteFile.close();

    // Create a text string, which is used to output the text file
    string myText;

    // Read from the text file
    ifstream MyReadFile("filename.txt");

    // Use a while loop together with the getline() function to read the file line by line
    while (getline (MyReadFile, myText)) {
    // Output the text from the file
    cout << myText << "\n";
    }

    // Close the file
    MyReadFile.close();
}