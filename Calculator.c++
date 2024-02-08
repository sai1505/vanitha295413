#include<iostream>
#include<string>
  using namespace std;
 int main()
 {
    float num1,num2;
    cout<<"1.addition,2.substraction,3.multiplication,4.division ";
    int choice;
    cin>>choice;
    cout<<"Enter two operands : "<<endl;
    cin>>num1>>num2;
    switch (choice)
    {
        case 1:
        cout<<"addition of two operands is "<<num1+num2<<endl;
        break;
        case 2 :
        cout<<"substraction of two operands is "<<num1-num2<<endl;
        break;
        case 3:
        cout<<"multiplication of two operands is "<<num1*num2<<endl;
        break;
        case 4:
        cout<<"division of two operands is "<<num1/num2<<endl;
        break;
        default :
        cout<<"invalid choice "<<endl;
    }
