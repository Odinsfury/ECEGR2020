#include <iostream> 
using namespace std;

class Base
{
    public:
    Base() 
    {
        cout << "Base Constructor\n"; 
    }

    ~Base() 
    {
        cout << "Base Destructor\n"; 
    }
};

class Derived:public Base
{
    public:
    Derived() 
    { 
        cout << "Derived Constructor\n"; 
    }

    ~Derived() 
    { 
        cout << "Derived Destructor\n"; 
    }
}; 

int main()
{
    Base* b;

    cout << "Derived created via new\n";
    b = new Derived;

    cout << "Derived deleted via delete\n";
    delete b;
}