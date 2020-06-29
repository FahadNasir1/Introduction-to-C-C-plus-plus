/*  #include<iostream> is aheader file library that lets us work with input and output objects, such as cout.
Header files add functionality to C++ programs.
(using namespace std) means that we can use names for objects and variabes from standard library.
intmain() is called a function. 
cout(see out) is an object used togehter with the insertion operator (<<) to output/print text.
return 0 ends the main function
*/

#include<iostream>
using namespace std;

int main(){
    cout << "hello world" << endl;  return 0; }
    
// namespace std can be replaced using std keywork followed by :: operator for some objects.
// eg. {std :: cout << "hello world"; return 0; }
// cout is just like print you can add as many cout function as you want
// (\n) character is used to insert a new line. two of this character will create a blank line.
// (<<endl;) is another method to insert new line.

/*
 there are different types of variable(defined by keyword)
int myNum = 5;               // Integer (whole number without decimals)
double myFloatNum = 5.99;    // Floating point number (with decimals)
char myLetter = 'D';         // Character
string myText = "Hello";     // String (text)
bool myBoolean = true;       // Boolean (true or false)
*/
 
/* declaring (creating variables)
to create a variable you must specify the type and assign it a value
type variable = value;
type is one of c++ types(int) and variable is the name of variable such as x or myName or fahad and equal
sign assigns values to the variable.

#include<iostream>
using namespace std;

int main(){
    int myNum = 15;
    cout << myNum;
    return 0;
}

you can also declare a variable first and then assign it a value
if you assign a new value to existing variable it will overwrite the previous one
*/

/* cout object is used together with the << operator to display variables, to combine both text and variable,
 separate then with << operator.

 #include<iostream>
using namespace std;
int main(){
    int myAge =35;
    cout << "i am " << myAge << "years old";
    return 0; 
} 
*/ 

/*
to display multiple variables of same type use comma's to sperate them

#include<iostream>
using namespace std;
int main(){
    int x=5, y=6,z=100;
    cout << x+y+z;
    return 0;
}
*/

/* c++ variables must be identified with unique names called identifiers
they are like (x or y) but it is reecommended to use descriptive names to understand better
eg.
       int minutesperhour = 60; //good
       but m = 60; // not so easy to understand

rules for constructing variables names are
. names can contain letters,digits and underscores
. names must begin with a letter or an underscore
. names are case sensitive(myVar and myvar are different variables)
. names cannot contain white spaces or special characters like !,@,#,% etc
.reserverd words like(c++ keywords such as int) cant be used as names.

 */

/* when you want privacy an deven don't wanna edit it yourself so use the (const) keyword it will declare the variable as
unchangeable and read-only

const int myNum = 11;
myNum = 10; //error: assignment of read-only variable 'myNum'

you should always set the variable to const when you have values unlikely to change
*/ 

/* (cin) is a predefined variable used to get user input, it reads data from the keyboard with extraction operator (>>).

#include <iostream>
using namespace std;

int main() {
  string x;
  cout << "Type your name: "; // Type a number and press enter
  cin >> x; // Get user input from the keyboard
  cout << "Your name is: " << x;
  return 0;
}

cin(see in) (>>)

creating a simple calculator

#include<iostream>
using namespace std;
int main() {
    int x, y;
    int sum;
cout << "Type a number: ";
cin >> x;
cout << "Type another number: ";
cin >> y;
sum = x + y;
cout << "Sum is: " << sum;
}

*/
/// - user inputs -(last topic)