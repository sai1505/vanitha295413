#include<iostream>
using namespace std;

class HumanParent
{
    public:
        void displayBreed()
        {
            cout<<"I belong to the omnivore type.\nI belong to genus Homo.\n";
        }
        void eat()
        {
            cout<<"I eat both plants and meat.\n";
        }

};

class HumanChild: public HumanParent
{
    public:
        void play()
        {
            cout<<"I play a lot.\nIt helps me to relax my body and sharpen my brain.\n";
        }
        void skills()
        {
            cout<<"With skills I learn, I can do whatever I want legally.\n";
        }
};

int main()
{
    //HumanParent obj;
    HumanChild obj;
    obj.displayBreed();
    obj.eat();
    obj.play();
    obj.skills();
    return 0;
}
