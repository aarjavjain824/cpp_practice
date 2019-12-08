#include<iostream>
using namespace std;
class helloworld
{
    public:
    helloworld()
    {
        cout<<"constructor is called"<<endl;

    }
    ~helloworld()
    {
        cout<<"destructor is called"<<endl;

    }
    void display()
    {
        cout<<"helloworld"<<endl;

    } 

};
int main()
{
    helloworld obj;
    obj.display();
    return 0;
}
