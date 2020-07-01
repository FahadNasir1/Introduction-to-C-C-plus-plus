// C++ basics ( data types, operators, strings)
 
/* DATA TYPES
a variable in c++ must be aspecifies data type.
int myNum = 5;
float myFloatMun = 5.99;
double myDoubleNum = 9.98;
char myLetter = 'D;
bool myBoolean = true;
string myText = 'hello';

The data type specifies  the size and type of information the variable will store :
int = 4 bytes
float = 4 bytes
doule = 8 bytes
boolean = 1 byte
char = 1 byte     */

#include<iostream>
using namespace std;
int main(){
    int myNum = 324233;
    float myFloat = 8.56;
    double myDouble = 99.9;
    cout << myNum  << endl   ;
    cout << myFloat << endl ;
    cout << myDouble << endl ;
    cout << myDouble+myFloat;
    return 0;
}

// boolean data type is declared with bool keyword and can only take true or false values.

#include<iostream>
using namespace std;
int main(){
    bool codingIsFun = true;
    bool IsFahadCute = false;
    cout << codingIsFun << endl ;
    cout << IsFahadCute;
    return 0;
}

// (char) data type is used to store a single character, it must be in SINGLE qoutes

#include<iostream>
using namespace std;
int main(){
    char myGrade = 'A';
    cout << myGrade;
    return 0;
}

// string type is used to store sequence of characters(text), it must be in Double quotes

#include<iostream>
using namespace std;
int main(){
    string greetings = " Asslamo Alikum ";
    cout << greetings;
    return 0;
}

/*  ARITHEMETIC OPERATORS
operators are used to perform operations on variables and values.
(x) add operator
(-) subtraction
(*) multiplication 
(/) division
(%) modulus
(++) increment (increasesnthe value by 1)(unary operator)
(--) decrement  (decreases the value by 1) (unary operator)  */

#include<iostream>
using namespace std;
int main(){
    int x = 100+50 ;
    int sum1 = 200-120 ;
    int sum2 = sum1 + 50 ;
    int divide  = 100 / 2 ;
    int modulus = sum1 % sum2 ;
    
    ++x; 
    cout << x << endl;
    cout << "sum1 is " << sum1 << endl;
    cout << "sum2 is " << sum2   << endl ;
    cout << divide << endl;
    cout << modulus ;
    return 0;
    }

/* ASSIGNMENT OPERATORS(binary operators)
 they are used to assign values to variables

 =
 +=
 -=
 *=
 /=
 %=
 &=
 |=
 ^=
 >>=
 <<=
 */

/* COMPARISION OPERATOR (binary operator / relational operator)
 they are used to compare two values, the return value of comparision in either true(1) or false(0)
==    equal to
!=    not equal to
>     greater than
<     less than
>=    greater than or equal to
<=    less than or equal to  */

#include<iostream>
using namespace std;
int main(){
   int x = 5;
   int y = 3;
   cout << (x<y) << endl; 
   cout << (x != y) << endl;
   cout << (x == y) << endl ;
   cout << (x <= y) << endl ;
   cout << (x >= y) << endl ;


   return 0;}

/* LOGICAL OPERATOR 

&& (logical and) returns true if both statements are true
|| (logical or) returns true if one of the statements is true
! (logical not) reverse the result, returns false if the result is true   */

#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int y = 3;
    cout << (x>3 && x<10);
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int y = 3;
    cout << (x>y || x<2);
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int y = 3;
    cout << (!(x>3 && x<10));
    return 0;
}

/* strings are used for storing text surrounded by double quotes.
string concatenation : the (+) operator can be used between strings to add them together to make a new string
it is called concatenation.  */
#include<iostream>
#include<string>
using namespace std;
int main(){
    string firstname = "fahad";
    string lastname = "nasir";
    string fullname = firstname + " " + lastname;
    cout << fullname;
    return 0;
}
// you can also concatenate with the append() function. append function is faster than +

#include<iostream>
#include<string>
using namespace std;
int main(){
    string firstname = "fahad";
    string lastname = " nasir";
    string fullname = firstname. append(lastname);
    cout << fullname;
    return 0;
}

// C++ uses (+) operator for both addition and concatenation. Numbers are added, strings are concatenated.
// you can also use size() function , text.size().
#include<iostream>
#include<string>
using namespace std;
int main(){
   string text = " im better now, you only say that when iam not around ";
   cout << "the length of the text string is : " << text.length();
    return 0;
}
// Access strings : you can access the characters in a string by referring it to index number inside [].
#include<iostream>
#include<string>
using namespace std;
int main(){
    string mystring = "hello";
    cout << mystring[0];
    return 0;
}
// string indexes start with 0 : [0] is the first character. [1] is the second character.
  
#include<iostream>
#include<string>
using namespace std;
int main(){
    string mystring = "hello";
    cout << mystring [3] << endl;
    mystring[0] = 'K' ;
    cout << mystring;
    return 0;
}

// user input strings 

#include<iostream>
#include<string>
using namespace std;
int main(){
  string fullname;
  cout << " Enter your fullname : ";
  cin >> fullname;
  cout << " your name is : " << fullname;
    return 0;
}
/* this only print fahad as your fullname cause cin considers whitespaces,tabs etc as a terminating 
character, which means it will only display a single word even if you type many words (f you write without space).
so we often use getline() function to read a line of text. */
#include<iostream>
#include<string>
using namespace std;
int main(){
  string fullname;
  cout << " Enter your fullname : ";
  getline(cin, fullname);
  cout << " your name is : " << fullname;
    return 0;
}



