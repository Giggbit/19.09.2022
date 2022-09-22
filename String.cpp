#include "String.h"
#include "var.h"
#include <iostream>
using namespace std;

String::String() {
	amount = 0; 
	str = nullptr;
}

String::String(int a, char* s) {
	amount = a;

	str = new char[strlen(s) + 1];
	strcpy_s(str, strlen(s) + 1, s);
}


void String::Input() {
	cout << "Enter amount of string: ";
	cin >> amount;
	cin.ignore();

	cout << "Enter string: ";
	char buf[100];
	cin.getline(buf, amount); 

	str = new char[strlen(buf) + 1];
	strcpy_s(str, strlen(buf) + 1, buf);
}

void String::Print() {
	cout << str << endl;
}

