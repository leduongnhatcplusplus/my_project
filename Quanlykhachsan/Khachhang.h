#pragma once
#include<iostream>
#include<string>
using namespace std;

class Khachhang
{
private:
	string name;
	string ns;
	string gender;
	int cmnd;
	string que;
	long long sdt;
public:
	void nhap();
	void in();
	string Getter_name()
	{
		return this->name;
	}
};

