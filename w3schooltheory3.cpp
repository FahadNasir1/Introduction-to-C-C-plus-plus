// (Maths, booleans, Conditions, Switch, default)

/* C++ has many functions that allows you to perform mathematicals tasks on numbers
MAX AND MIN ( this function is used to find the highest or lowest value) */
#include<iostream>
using namespace std;
int main(){
    cout << max(5,10) << endl;
    cout << min(2,100);
  
}
/* Other functions, such as sqrt (square root), round (rounds a number) and log (natural logarithm)
can be found in the <cmath> header file. */

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    cout << sqrt(325) << endl;
    cout << round(2.65) << endl;
    cout << log(2);
}
// boolean

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    bool isfahadcute = false; 
    bool iscodingfun = true;
    cout << isfahadcute << endl ;
    cout << iscodingfun << endl ;
}
/* c++ supports usual logical conditions from mathematics, you can use the comparision operators to perform
different decisions. C++ has following conditional statements :
use (if) to specify a block of code to be executed, if a specified condition is true
use (else) to specify a block of code to be executed, if the same condition is false.
use (else if) to specify a new condition to test, if the first condition is false.
use (switch) to specify many alternative blocks of code to be executed.
(if) is always in lowercase letters. Upper case letters will generate error. */

#include<iostream>
using namespace std;
int main(){
    if (20 > 10);
    cout << "20 is greater than";
}

#include<iostream>
using namespace std;
int main(){
    if ( 12 > 111);
    cout << "12 is greater than 111";
    else {
    cout << "12 is not greater than 111";
    }
}

#include <iostream>
using namespace std;

int main() {
  int time = 20;
  if (time < 18) {
    cout << "Good day.";
  } else {
    cout << "Good evening.";
  }
  return 0;
}

// this is a simple way of if else condition.(short hand if..else)

#include<iostream>
using namespace std;
int main(){
    int time = 20;
    string result = (time > 18) ? "good day" : "good evening";
    cout << result;
}

/* use the (switch) statement to select one of many code blocks to be executed.
. the switch expression is evaluated once.
. the value of the expression is compared with the values of each case.
. if there is a match, the associated block of code is executed.
. the break and default keywords are optional, and will be described later in this chapter.
. when C++ reaches a break keyword, it breaks out of the switch block. This will stop the execution of more code and case testing inside
the code block.
. when a match is found and the job is done its time for a break, no need of more testing.  */

#include<iostream>
using namespace std;
int main(){
    int day = 7;
    switch (day) {
        case 1:
        cout << "monday";
        break;
        case 2:
        cout << "tuesday";
        break;
        case 3:
        cout << "wednesday";
        break;
        case 4:
        cout << "thursday";
        break;
        case 5:
        cout << "friday";
        break;
        case 6:
        cout << "saturday";
        break;
        case 7:
        cout << "sunday";
        break;
    }
}

// The (default) keyword specifies some code to run if there is no case match, it must be used in the last statement and dont need a break.

#include<iostream>
using namespace std;
int main(){
    int day = 4;
    switch(day){
        case 1:
        cout << "today is saturday";
        break;
        case 2:
        cout << "today is sunday";
        break;
        default:
        cout << " looking forward to the weekend ";
    }
}










