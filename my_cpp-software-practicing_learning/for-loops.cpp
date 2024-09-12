#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b,i;
    cin >> a;
    cin >> b; 
    
    for ( i = a ; i <= b ; i++) {
        switch (i) {
                case 1:
                    cout << "one" << endl;
                    break;
                case 2:
                    cout << "two" << endl;
                    break;
                case 3:
                    cout << "three" << endl;
                    break;
                case 4:
                    cout << "four" << endl;
                    break;
                case 5:
                    cout << "five" << endl;
                    break;
                case 6:
                    cout << "six" << endl;
                    break;
                case 7:
                    cout << "seven" << endl;
                    break;
                case 8:
                    cout << "eight" << endl;
                    break;
                case 9:
                    cout << "nine" << endl;
                    break;
                default:
                    if ( i % 2 == 1) {
                        cout << "odd" << endl;
                    }
                    else {
                        cout << "even" << endl;
                    }
                    break;
            }
    }
    
    return 0;
}


/*
A for loop is a programming language statement which allows code to be repeatedly executed.

The syntax is

for ( <expression_1> ; <expression_2> ; <expression_3> )
    <statement>
expression_1 is used for intializing variables which are generally used for controlling the terminating flag for the loop.
expression_2 is used to check for the terminating condition. If this evaluates to false, then the loop is terminated.
expression_3 is generally used to update the flags/variables.
A sample loop is

for(int i = 0; i < 10; i++) {
    ...
}
In this challenge, you will use a for loop to increment a variable through a range.

Input Format

You will be given two positive integers,  and  (), separated by a newline.

Output Format

For each integer  in the inclusive interval :

If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if  and it is an even number, then print "even".
Else if  and it is an odd number, then print "odd".
Note: 

Sample Input

8
11
Sample Output

eight
nine
even
odd
*/
