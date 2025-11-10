#include <iostream>
using namespace std;

int main()
{

    // int a , b;
    // cout<<"Enter a value :";
    // cin>>a;
    // cout<<"Enter b value :";
    // cin>>b;

    // if(a>b){
    //     cout<<"value of a is greater :"<<a;
    // }
    // else{
    //     cout<<"value of b is greater :"<<b;
    // }

    // int num;

    // cout<<"Enter  value :";
    // cin>>num;

    // if(num%2==0){
    //     cout<<"Number is EVEN";
    // }
    // else{
    //     cout<<"Number is ODD ";
    // }

    // int income;
    // cout<<"Enter your chillar income :";
    // cin>>income;

    // if(income < 500000){
    //     cout<<"0% TAX ";

    // }

    // else if(income >= 500000 && income <= 1000000){
    //     cout<<"20% TAX"<<endl;
    //     cout<<"You have to pay :"<<(income*0.20);
    // }

    //  else {
    //     cout<<"30% TAX"<<endl;
    //     cout<<"You have to pay :"<<(income*0.30);

    // }

    // int a,b,c;
    // cout<<"a:";
    // cin>>a;
    // cout<<"b:";
    // cin>>b;
    // cout<<"c:";
    // cin>>c;

    // if(a>b && a>c){
    //     cout<<"A is largest";
    // }
    // else if(b>c && b>a){
    //     cout<<"B is largest";
    // }
    // else {
    //     cout<<"C is largest";
    // }

    int a, b;
    char op;
    cout << "a:";
    cin >> a;
    cout << "b:";
    cin >> b;
    cout << "op:";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "Addition is :" << a + b;
        break;

    case '-':
        cout << "Subtraction is :" << a - b;
        break;

    case '*':
        cout << "Prod is :" << a * b;
        break;

    case '/':
        cout << "Quotient is :" << a / b;
        break;

    default:
        cout << "Enter valid operators(+ , - ,* ,/)";
    }

    return 0;
}