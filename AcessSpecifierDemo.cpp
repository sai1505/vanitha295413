#include<iostream>
using namespace std;
class AccessSpecifierDemo{
    private:
    int priVar;
    protected:
    int proVar;
    public:
    int pubVar;
    public:
    void setVar(int priValue,int proValue, int pubValue)
    {
        priVar=priValue;
        proVar=proValue;
        pubVar=pubValue;
    }
    void getVar(){
        cout<<"Private value: "<<priVar<<endl;
        cout<<"Protected value: "<<proVar<<endl;
        cout<<"Public value: "<<pubVar<<endl;
    }
};
int main()
{
    AccessSpecifierDemo a;
    int x,y,z;
    cout<<"Enter private value: "<<endl;
    cin>>x;
    cout<<"Enter protected value: "<<endl;
    cin>>y;
    cout<<"Enter public value: "<<endl;
    cin>>z;
    a.setVar(x,y,z);
    a.getVar();
}
