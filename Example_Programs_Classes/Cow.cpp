#include <iostream>
using namespace std;

class Mammal 
{
public:
    int aMammalInt;
    
public:
    Mammal(){ cout << "Mammal() called.\n"; }
    Mammal(int j){ cout<<"Mammal(int j) called.\n"; }
    ~Mammal(){ cout << "~Mammal() called.\n"; }

    void eat() {
        cout << "Mammals eat..." << endl;
    }
};

class Cow : public Mammal 
{
public:
    float aCowFloat;
    
public:
    Cow(){ cout << "Cow() called.\n"; }
    Cow(int j){ cout<<"Cow(int j) called.\n"; }
    ~Cow(){ cout << "~Cow() called.\n"; }

    void eat() {
        cout << "Cows eat grass..." << endl;
    }
};

int main(void) 
{
    Cow     aCow = Cow();
    Cow*    pCow = &aCow;
    Mammal* pMammal = &aCow;

    aCow.eat();
    pCow->eat();
    pMammal->eat();
}
