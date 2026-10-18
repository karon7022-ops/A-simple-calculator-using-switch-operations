/*NAME: Aron kipkoech langat
 REG No: CT101/G/26629/25
 GROUP B; BSC computer science */

#include <iostream>
using namespace std;

int main (){
    int num1,num2;
    char operators;
    float result;

    cout <<"Enter the first number: "<< endl;
    cin >> num1;

    cout <<"Enter the second number: "<< endl;
    cin >> num2;

    cout <<"Which operator would you use ('+','-','*','/'): "<< endl;
    cin >> operators;

    switch (operators){
        case '+':
           cout << num1<< "+" << num2<< "="<< (num1 +num2);
           cin >> result;
           break;
        case '-':
           cout << num1<< "-" << num2<< "="<< (num1 - num2);
           cin >> result;
           break;
        case '*':
           cout << num1<< "*" << num2<< "="<< (num1 * num2);
           cin >> result;
           break;
        case '/':
         if (num2 !=0){
            cout << num1<< "/" << num2<< "="<< (num1 / num2);
            cin >> result; 
        }
         else{
            cout <<"Error: division by zero";
         }
           break;
         
        cout << "You have entered invalid operator"<<endl;

    }   
    return 0;
}