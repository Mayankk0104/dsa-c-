#include <iostream>
#include <string>
using namespace std;

// //abstract class
// class Shape{
//     public:

//     virtual void draw() = 0; //pure virtual fn , abstract fn


// };


// class circle : public Shape{
// public:
//     void draw(){
//         cout<<"Drawing circle....\n";
//     }



// };

// class square : public Shape{
// public:
//     void draw(){
//         cout<<"Drawing square........\n";
//     }



// };

//Static keyword
// class Example{
// public:
//    static int x; //declaration


// };

// int Example :: x = 0; //definition


// class Example{
//     public:
//     Example(){
//         cout<<"Constructor Called..\n"; //constructor
//     }


//     ~Example(){
//         cout<<"Destructor Called..\n"; //destructor
//     }

// };





//frnd fn  and fn class

// class A{
//     string secret = "Secret data";
//     friend class B;
//     friend void revealSecret(A &obj);

// };



// class B {
// public:
//     void showSecret(A &obj){
//         cout<<obj.secret<<" \n";
//     }
// };

// void revealSecret(A &obj){
//     cout<<obj.secret<<"\n";

// }



//operator overloading -
// class complexNumbers{
//     int real , img;


//     public:
//     complexNumbers(int r , int i){
//         real = r;
//         img = i;
//     }

//     void show(){
//         cout<<real<<" "<<"+"<<" "<<img<<"i\n";
//     }

//     void operator - (complexNumbers &c2){
//         int realPart =  c2.real- this->real;
//         int imgPart = c2.img - this->img;

//         complexNumbers c3(realPart,imgPart);
//         cout<<"res = ";
//         c3.show();

//     }

// };


// class bankAccount{


//     int accNumber;



//     static int balance;

//     public:

//     void setAcc(int number){
//         accNumber = number;
//     }


//     void deposit(int dep){
//         cout<<"Depositing amount "<<dep<<"\n";
//         balance = balance + dep;
//         cout<<"Amount deposited.\n";

//     };

//     void withdraw(int wr){
//         cout<<"Withdrawing amount "<<wr<<"\n";
//         balance = balance - wr;
//         cout<<"Amount withdrawed\n";

//     };

//     void getBalance(){
//         cout<<"Fetching balance"<<"\n";
//         cout<<"Balance is :"<<balance<<"\n";

//     };



// };

// int bankAccount :: balance = 100000;



// class Person{
// public:
//     string name;
//     int age;

// };

// class Student : public Person{
//     public:
//     int studentId;

//     Student(string name , int age , int studentId){
//         this->name = name;
//         this->age = age;
//         this -> studentId = studentId;
//     }


//     void displayStudentInfo(string name,int age , int studentId){
//         cout<<name<<" "<<age<<" "<<studentId<<"\n";
//     }


// };

// class Person {
// protected:
//     string name;
//     int age;

// public:
//     Person(string n, int a) {
//         name = n;
//         age = a;
//     }
// };

// class Student : public Person {
//     int studentID;

// public:
//     Student(string n, int a, int id) : Person(n, a) {
//         studentID = id;
//     }

//     void displayStudentInfo() {
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//         cout << "Student ID: " << studentID << endl;
//     }
// };

int main(){

    // Student student("Mayank", 20 , 9879402);
    // student.displayStudentInfo();



    // bankAccount myAcc;
    // myAcc.setAcc(907601);

    // myAcc.getBalance();
    // myAcc.deposit(2000);
    // myAcc.getBalance();

    // myAcc.withdraw(50000);
    // myAcc.getBalance();








    // complexNumbers c1(1,2);
    // complexNumbers c2(4,8);

    // c1 - c2;

    // c1.show();
    // c2.show();





    // A a1;
    // B b1;
    // b1.showSecret(a1);

    // revealSecret(a1);


    // int a = 0;
    // if(a == 0){
    //     static Example eg1; //making object static , lifetime !!!
    // }

    // cout<<"Code ended..\n";


    // Example e1;
    // Example e2;
    // Example e3;

    // cout<<e1.x++<<"\n";
    // cout<<e2.x++<<"\n";
    // cout<<e3.x++<<"\n";


    // circle c1;
    // c1.draw();

    // square s1;
    // s1.draw();

    // Shape sh1;
    // sh1.draw();

















    return 0;
}