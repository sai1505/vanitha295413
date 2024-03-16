#include <iostream>
using namespace std; 
class Addition{
    public : 
    void add(int a, int b)
{
cout << "sum = " << (a + b);
}
void add(double a, double b)
{
    cout<< "sum = " << (a + b)<<endl;
}
};
int main()
{
    Addition a;
    a.add(10, 2);
    a.add(5.3, 6.2);
   return 0;
 }
