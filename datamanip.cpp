#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    //using endl
    cout<<"moni is my best friend"<<endl;
    //
    //using ends
    cout<<"Hi"<<ends;
    cout<<endl;
    //terminates by inserting null operator
    //using ws
    string name;
    getline(cin>>ws,name);
    cout<<name<<endl;
    //removes whitespaces at the left side
    //setw
    cout<<setw(9)<<"venky\n";
    //creates spaces provides in setw(n)
    //setfill
    cout<<setfill('^')<<setw(12)<<"vanitha mouni\n";
    //fills the space given by setw
    //setprecision
    double num=0.5565565756;
    cout<<setprecision(4)<<num<<endl;
    //setprecision decides the values after the decimal points
    //flush
    int a=60;
    cout.flush();
    cout<<"The value of a is "<<a<<"\n";
    return 0;
}
