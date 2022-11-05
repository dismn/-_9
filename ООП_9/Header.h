#include <iostream>
using namespace std;


class Base
{
public:
    virtual void myname() { //базовий клас
        cout << " This is class Base" << endl;
    }
};

class DerA : public Base { //похідний клас DerA
public:
    virtual void myname() {
        cout << "This is class DerA" << endl;
    }
};
class DerB : public Base { //похідний клас DerB
public:
    virtual void myname() {
        cout << "This is class DerB" << endl;
    }
};

class DerAB : public DerA, public DerB { //від класів DerA і DerB шляхом множинного успадкування створений клас DerAB
public:
    virtual void myname() {
        cout << "This is class DerAB" << endl;
    }
}; 
