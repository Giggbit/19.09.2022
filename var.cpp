#include "var.h"
#include <iostream>
#include<string>
#include <cstdlib>
using namespace std;

Var::Var() {
	a = 0;
	c = 0;
	str = nullptr;
	amount = 0;
}

Var::Var(int x, double y) :Var() {
	a = x;
	c = y;
}

Var::Var(int a, char* p) :Var() {
	str = new char[strlen(p) + 1];
	strcpy_s(str, strlen(p) + 1, p);
	amount = a;
}


//Var Var::operator+(Var& obj) {
//	a += obj.a;
//	c += obj.c;
//
//  //////////////////////
//
//	int count = 0;
//	char* ch = new char[to_string(obj.a).size() + 1];
//	
//	for (int sd = 0; sd < to_string(obj.a).size(); sd++) {
//		ch[sd] = (to_string(obj.a))[sd];
//	}
//	ch[to_string(obj.a).size()] = '\0';
//	
//	int length = strlen(this->str) + strlen(ch);
//
//	char *ch2 = new char[length];
//	for (int v = 0; v < length; v++) {
//		if (v < strlen(this->str)) {
//			ch2[v] = str[v];
//		}
//		else {
//			ch2[v] = ch[count];
//			count++;
//			
//		}
//		ch2[length] = '\0';
//	}
//
//	return Var(obj.a, ch2);
//}

Var Var::operator+(Var& obj) {
	int num = a;
	a = atoi(obj.str);
	a += num;
	cout << a << endl;
	return *this;
}

Var& Var::operator-(Var& obj) {
	a -= obj.a;
	c -= obj.c;
	return *this;
}

Var& Var::operator*(Var& obj) {
	a *= obj.a;
	c *= obj.c;

	for (int j = 0; j < amount; j++) {
		for (int i = 0; i < amount; i++) {
			if (str[i] == obj.str[j]) {
				cout << str[i] << " ";
			}
		}
	}

	return *this;
}

Var& Var::operator/(Var& obj) {
	a /= obj.a;
	c /= obj.c;

	for (int i = 0; i < obj.amount; i++) {
		for (int j = 0; j < obj.amount; j++) {
			if (obj.str[i] != str[j]) {
				cout << str[i] << " ";
				break;
			}
			if (obj.str[i] == str[j]) {
				i++;
			}
		}
	}

	return *this;
} 

Var& Var::operator<(Var& obj) {
	if (a < obj.a) {
		cout << a << " < " << obj.a << endl;
	}
	else {
		cout << a << " > " << obj.a << endl;
	}

	if (c < obj.c) {
		cout << c << " < " << obj.c << endl;
	}
	else {
		cout << c << " > " << obj.c << endl;
	}
	return *this;
}

Var& Var::operator>(Var& obj) {
	if (a > obj.a) {
		cout << a << " > " << obj.a << endl;
	}
	else {
		cout << a << " < " << obj.a << endl;
	}

	if (c > obj.c) {
		cout << c << " > " << obj.c << endl;
	}
	else {
		cout << c << " < " << obj.c << endl;
	}
	return *this;
}

Var& Var::operator==(Var& obj) {
	if (a == obj.a) {
		cout << a << " == " << obj.a << endl;
	}
	else {
		cout << a << " != " << obj.a << endl;
	}
	if (c == obj.c) {
		cout << c << " == " << obj.c << endl;
	}
	else {
		cout << c << " != " << obj.c << endl;
	}
	return *this;
}

Var& Var::operator!=(Var& obj) {
	if (a != obj.a) {
		cout << a << " != " << obj.a << endl;
	}
	else {
		cout << a << " == " << obj.a << endl;
	}
	if (c != obj.c) {
		cout << c << " != " << obj.c << endl;
	}
	else {
		cout << c << " == " << obj.c << endl;
	}
	return *this;
}


void Var::Input_Str() {
	cout << "Enter amount of string: ";
	cin >> amount;
	cin.ignore();

	cout << "Enter string: ";
	char buf[100];
	cin.getline(buf, amount);

	str = new char[strlen(buf) + 1];
	strcpy_s(str, strlen(buf) + 1, buf);
}

void Var::Show_Str() {
	cout << str << endl;
}

void Var::Input() {
	cout << "Enter a: ";
	cin >> a;
	
	cout << "\nEnter c: ";
	cin >> c;
}

void Var::Show() {
	cout << "int: " << a << endl;
	cout << "double: " << c << endl;
}



