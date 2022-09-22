#include "Var.h"
#include <iostream>
#include <cstdlib>
using namespace std;


int main() {
	/*String obj;
	obj.Input();
	obj.Print();*/

	/*Var a;
	a.Input();
	a.Show();

	Var c;
	c.Input();
	c.Show();*/

	Var a(3, 3.1);
	Var b(2, 2);
	Var c(1,1.5);

	//a + b;
	//a - b;
	//a* b;
	//a / b;
	//a.Show();
	//a < b;
	//b > a;
	//a == b;
	//a != b;

	char ch[] = "";
	Var obj(100, ch);
	obj.Input_Str();
	obj.Show_Str();

	/*Var obj2;
	obj2.Input_Str();
	obj2.Show_Str();*/

	/*Var obj3;
	obj3 = obj / obj2;*/
	
	//(obj + a).Show_Str();
	
	//(a + obj).Show();
}