#pragma once
#include<iostream>
#include<string>
using namespace std;

class Room
{
private :

	string loaiphong;
	int sogiuong;
	long long tienphong;
	string maphong;
	string ngayden;
	string ngaydi;
public :
	void nhap();
	void in();
	double tinhtienphong();
};

