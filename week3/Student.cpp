#include<iostream>
using namespace std;

class Student
{
    public:
        string fullName;
        int rollNum;
        double semPerentage;
        string collegeName;
        int collegeCode;
        Student()
        {
            cout<<"Student class is created!!\nIam a student\n";
        }
        ~Student(){}
};

int main()
{
    Student renu;
    cout<<"Enter your sweet name : ";
    getline(cin,renu.fullName);
    cout<<"Enter your roll number : ";
    cin>>renu.rollNum;
    cout<<"Enter your sem percentage : ";
    cin>>renu.semPerentage;
    cout<<"Enter your college name : ";
    cin>>renu.collegeName;
    cout<<"Enter your college code : ";
    cin>>renu.collegeCode;
    cout<<"Name : "<<renu.fullName<<endl;
    cout<<"Roll Num : "<<renu.rollNum<<endl;
    cout<<"Sem Percentage : "<<renu.semPerentage<<endl;
    cout<<"College Name : "<<renu.collegeName<<endl;
    cout<<"College Code : "<<renu.collegeCode<<endl;
    return 0;
}
