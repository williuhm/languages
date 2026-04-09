/*
    From previous knowledge, looks like you need to import "iostream" which
    likeley stands for "input/output stream" in order to print to console.

    Name space "std" is similar to "stdout" which could be what that line
    is for, but uncertain at this point.

    "int main()" means we're returning a status code for the main function,
    which is what C++ looks for when running executable.

    "cout << "Hello World!" is unique, have not seen that before, but it
    sends the string to the output.

    "return 0" is returning the status, so the program completed successfully.
*/

#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!";
  return 0;
}

/*
    After running the code, W3Schools explains the example: 

    Line 1: #include <iostream> is a header file library that lets us work
            with input and output objects, such as cout (used in line 5).
            Header files add functionality to C++ programs.

    Line 2: using namespace std means that we can use names for objects
            and variables from the standard library.

    Don't worry if you don't understand how #include <iostream> and using
    namespace std works. Just think of it as something that (almost) always
    appears in your program.

    Line 3: A blank line. C++ ignores white space. But we use it to make
            the code more readable.

    Line 4: Another thing that always appear in a C++ program is int main().
            This is called a function. Any code inside its curly brackets {}
            will be executed.

    Line 5: cout (pronounced "see-out") is an object used together with the
            insertion operator (<<) to output/print text. In our example, it
            will output "Hello World!".

    Note: C++ is case-sensitive: "cout" and "Cout" has different meaning.

    Note: Every C++ statement ends with a semicolon ;.

    Note: The body of int main() could also been written as:
    int main () { cout << "Hello World! "; return 0; }

    Remember: The compiler ignores white spaces. However, multiple lines makes the code more readable.

    Line 6: return 0; ends the main function.

    Line 7: Do not forget to add the closing curly bracket } to actually end the main function.

    Also written without "include namespace std;" as:
    
    int main() {
        std::cout << "Hello World!";
        return 0;
    }
*/