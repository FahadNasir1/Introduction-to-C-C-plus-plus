// C++ (loops, break/continue, arrays, references, pointers)

/* C++ LOOPS
loops can execute a block of code as long as a specified coondition is reached.
loops are handy because they save time, reduce errors and make code easily readable.

. The while loop loops through a block of code as long as specified condition is true.(dont forget to increase
the variable used in the condition otherwise the loop will never end)  */

#include<iostream>
using namespace std;
int main(){
    int i = 0;
    while (i < 5){
        cout << i << "\n";
        i++;
    }
}

/* The do/while loop is a variant of the while loop. This loop will execute the code block once,
before  checking if the condition is true, then it will repeat the loop as long as the condition is ture.
in the below eg it uses do/while loop, the loop will always be executed at least once, even if the condition is 
false, because the code block is executed before the condition is tested. */
#include<iostream>
using namespace std;
int main(){
   int i = 0;
   do {
       cout << i << "\n";
       i++;
   }
   while ( i < 5);
}

/* when you know exactly how many times you want to loop through a block of code, use (for) loop instead of
while loop.
. statement 1 is executed once before the execution of code
. statement 2 defines the condition
. statement 3 is executed everytime after the code has executed.    */
#include<iostream>
using namespace std;
int main(){
    for (int i = 0; i < 5; i++)
        cout << i << "\n";   
}

// print even values between 0-10
#include<iostream>
using namespace std;
int main(){
    for (int i = 0; i <= 10; i = i+2)
        cout << i << "\n";   
}

/*  Break statement is  used to jump out of the switch statement or out of a lopp.
continue statement breaks one iteration (in loop), if a specified soncition occurs and continues with the next
iteration in the loop.  */ 

#include <iostream>
using namespace std;

int main(){
    for ( int i = 0; i < 10; i++){
      if (i == 4){
         break;
        }
    cout << i << "\n";
    }
    return 0;
}
// below code skips the value 4
#include<iostream>
using namespace std;
int main(){
  for ( int i = 0; i < 10 ; i++){
    if (i==4){
      continue;
    }
    cout << i << "\n";
   }
return 0;
}

/* C++ Arrays are used to store multiple values in a single variable, instead of declaring seperate variables
for each value. to declare an array, define the variable type, specify the name of the array folowed by 
square brackets and specify the number of elements it should store. */
#include<iostream>
using namespace std;
int main(){
string cars[4]={"ferrari","BMW","porsche","buggati"};
cars[1]="toyota";
cout << cars[1] << endl;
cout << cars[0];
}

// you can loop through the array elements with the for loop.
// following code gives all elements.
#include<iostream>
using namespace std;
int main(){
    string cars[4] = {"BMW","mercedes","bugatti","lamborghini"};
    for ( int i = 0; i < 4; i++){
        cout << cars[i] << "\n";
    }
}
// following code gives values with indexes
#include<iostream>
using namespace std;
int main(){
    string cars[4] = {"BMW","mercedes","bugatti","lamborghini"};
    for ( int i = 0; i < 4; i++){
        cout << i << ":" << cars[i] << "\n";
    }
}

/* well we don't actually have to define the size of the array, it will be only big as the elements that are
inserted into it. you can reserve extra space in the array and add the remaining values later.
it is aslo possible to declare an array without specifying the elements on declaration, add them later */

#include<iostream>
#include<string>
using namespace std;
int main(){
    string cars[5] = {"toyota","audi","BMW","Mazda"};
    cars[4]="ASTON MARTIN";
    for (int i =0; i<5; i++) {
        cout << cars[i] << "\n";
    }
}

// A reference variable is a reference to an existing variable and it is writter with the & operator.

#include<iostream>
#include<string>
using namespace std;
int main(){
    string food = "pizza";
    string &meal = food;
    cout << food << "\n";
    cout << meal << "\n";
}
/* & operator can also be used to get the memory address of a variable, which is the location of where the
variable is stored on computer. When a variable is created in C++ a memory address is assigned to the variable
and we assign a value to the variable stored in memory address.  */
#include<iostream>
#include<string>
using namespace std;
int main(){
    string food = "pizza";
    cout << &food;
}

/* reference and pointers are important is c++ as they give you the ability to manipulate the data in the 
computer's memory that can reduce the code and improve the performance.These two features are one of the things
that make C++ stand out from the other languages. */


/* A POINTER is a variable that stores the memory adress as it's value. it is created with (*) asterisk 
operator, the address of the variable you are woking with is assigned to the pointer. The data type of
pointer and the variable needs to be same.*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    string food = "pizza";
    string* pointer = &food;
    cout << food << "\n";
    cout << &food << "\n";
    cout << pointer << "\n";

}

// you can also use the pointer to get the value of the variable by using (*) (the dereference operator).
#include<iostream>
#include<string>
using namespace std;
int main(){
    string food = "pizza";
    string* pointer = &food;
    cout << pointer << "\n";
    cout << *pointer << "\n";
}
// asterisk when used in declaration (string* pointer) creates a pointer variable.
// asterisk when not used in declaration, it acts as a dereference operator.
// you can also change the value of the pointer but it will also change the value of the variable.

/*  A FUNCTION is a block of code which only runs when it's called, you can pass data known as parameters.
write a function once and use it again and again. Function is created followed by parenthesis ().
use ; when calling a function. void means there is no return value of the function. */

#include<iostream>
using namespace std;
void myFunction(){
    cout << " i just got first in my class \n";
}
int main(){
    myFunction();
    myFunction();
}
/* function has to be defined before the main function because C++ works from top to bottom, means if the function
is not declared above the main() the program is unaware of it. Otherwise it will give an error.
Declaration : the finction's name, return type adn parameters(if any).
Definition : the code(body) of the function to be executed. 
parameter passed to a function is called argument.
parameters are specified after the function name, inside the parenthesis, you can add as many parameters 
as you want just separate them with a comma. */
#include<iostream>
using namespace std;
void fahad(string grades){
    cout << grades << " passed \n";
}
int main(){
    fahad("calculus");
    fahad("OOP");
    fahad("applied physics");
    fahad("SE");
}
/* you can use default parameter by using quals to = sign where you haven't given any value, it called 
optional parameter. */
#include<iostream>
using namespace std;
void fahad(string marks = "grades"){
    cout << marks << " passed \n";
}
int main(){
    fahad("calculus");
    fahad("OOP");
    fahad("applied physics");
    fahad("SE");
    fahad();
}
/*  in above example marks is an optional parameter and grades is a default values.
inside a function you can add as many functions as you want.
when there are multiple parameters, the function call must have the same number of arguments as there are parameters,
and the arguments must be passed in the same order. */

/* To RETURN A VALUE : The void keywords indicates that there is no return value, if you want the function to return a value you
can use the data type ( int, string, etc), instead of void use the return keyword inside the function. */
#include<iostream>
using namespace std;
int myFunction(int x){
    return 5 + x;
}
int main(){
    cout << myFunction(5);
    return 0;
}

#include<iostream>
using namespace std;
int fahad(int x, int y){
    return (x,y);
}
int main(){
    int z = fahad(10,30);
    cout << "z=" << z;
    return 0;
}

/* with FUNCTION overloading multiple functions can have the same name with different parameters. */
#include<iostream>
using namespace std;
int plusfunc(int x , int y){
    return x+y;
}
double plusfunc(double x , double y){
    return x+y;
}
int main(){
    int num1 = plusfunc(22 , 78);
    double num2 = plusfunc(2.87 , 5.5);
    cout << "integer :" << num1 << "\n";
    cout << "double :" << num2 << "\n";
    return 0;
}
....


