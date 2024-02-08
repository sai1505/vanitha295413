#include<iostream>
#include<string>
  using namespace std;
 void Evenorodd(int n){
   if(n%2==0)
 {
    cout<<n<<" Even number"<<endl;
   }
   else
   {
     cout<<n<<" odd number"<<endl;
   }
 }
 int main()
 {
    int number;
    cout<<"Enter the number "<<endl;
    cin>>number;
    Evenorodd(number);
 }
