#pragma once

class Var {
	int a;
	double c;
	char* str;
	int amount;

public:
	Var();
	Var(int x, double y); 
	Var(int a,char* p);
	
	Var operator+(Var& obj); 
	Var& operator-(Var& obj);
	Var& operator*(Var& obj);
	Var& operator/(Var& obj);
	Var& operator<(Var& obj);
	Var& operator>(Var& obj);
	Var& operator==(Var& obj);
	Var& operator!=(Var& obj);

	void Input_Str();
	void Show_Str();
	void Input();
	void Show();

};

