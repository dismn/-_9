#include <iostream>
using namespace std;


class Base
{
public:
    virtual void myname() { //������� ����
        cout << " This is class Base" << endl;
    }
};

class DerA : public Base { //�������� ���� DerA
public:
    virtual void myname() {
        cout << "This is class DerA" << endl;
    }
};
class DerB : public Base { //�������� ���� DerB
public:
    virtual void myname() {
        cout << "This is class DerB" << endl;
    }
};

class DerAB : public DerA, public DerB { //�� ����� DerA � DerB ������ ���������� ������������ ��������� ���� DerAB
public:
    virtual void myname() {
        cout << "This is class DerAB" << endl;
    }
}; 
