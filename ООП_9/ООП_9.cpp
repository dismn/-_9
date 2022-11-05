//Copyright (c), Semeniuta Diana 202 TN, 2022
/*Варіант 1. Наданий такий клас :
class Base
{
public:
	virtual void myname() { cout << "This is class Base" << endl; }
};
Від цього класу треба створити два похідних класу : DerA і DerB.
Від класів DerA і DerB шляхом множинного успадкування створити клас
DerAB.
Перевизначити у кожному з створених класів функцію myname таким
чином, щоб вона виводила на екран дійсне ім’я класу об’єкту, для якого вона
викликається.
Для кожного з класів створеної ієрархії створити по одному об’єкту і для
кожного з них викличте функцію myname.
Створіть масив із 4 покажчиків на базовий клас ієрархії.Для кожного з них
створіть динамічний об’єкт, по одному для кожного з класів ієрархії.Запишіть
виклик функції myname для кожного з динамічних об’єктів за допомогою
покажчиків.*/

#include "Header.h"
#include <iostream>

int main()
{
	Base Object1;
	DerA Object2;
	DerB Object3;
	DerAB Object4;
	Object1.myname();
	Object2.myname();
	Object3.myname();
	Object4.myname();

	Base* Arr[4];
	Arr[0] = new Base;
	Arr[1] = new DerA;
	Arr[2] = new DerB;
	Arr[3] = (DerA*)new DerAB;

	Arr[0]->myname();
	Arr[1]->myname();
	Arr[2]->myname();
	Arr[3]->myname();
	return 0;
}


