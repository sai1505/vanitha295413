#include<iostream>
using namespace std;

class Add2int
{
    public:
    void add(int a,int b)
    {
        cout<<"Sum of 2 Integers(int) : "<<a+b<<endl;
    }
    void add(float a,float b)
    {
        cout<<"Sum of 2 Integers(float) : "<<a+b<<endl;
    }
};

int main()
{
    Add2int obj;
    obj.add(1,67);
    obj.add(1.45f,2.78f);
    return 0;
}
