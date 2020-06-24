////// THE GOAL IS NOT TO JUST PASS REMEMBER THAT DO WHAT MAKES YOU HAPPY //////

// simple hello world program with C++ starting basics

#include<iostream>

int main() {
    printf("hello world");
    return 0;
}

// 1. code stays between {} curly brackets.

// 2. Back slashes are used to write comments compiler ignores them.

// 3. (#include) is a PREPROCESSOR DIRECTIVE used to include files in our program.The above code includes the 
//        contents of iostream file.

// 4. HEADER FILES contains function definitions, data type functions and macros which is imported or used 
//        into any C++ program by using the pre-processor #include statement. Header file have an
//        extension ". h" which contains C++ function declaration and macro definition.
//        In C++ all header files don't end on .h extention but in C they do.
     
// 5. Before the source code is compiled, the preprocessor directive (#include) instructs the compiler that
//        these file needs to be processed before compilation. After this the header files offer their features
//        (written after the preprocessor directive).

/// Every C program should contain <stdio.h> which is a standard input/output which takes input by 
///       scanf() function and gives output by printf() function.

//  6. C++ program should contain the <iostream> header file which is a input/output(io) stream which
//        takes the input by 'cinn>>' function and gives the output by 'cout<<' function.

/// There are two types of header files; standard library header files which are already available in 
///       the C/C++ compiler, second type is user defined starting with '#define' can be designed by the user.

