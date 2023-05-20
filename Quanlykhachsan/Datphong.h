#pragma once
#include"Khachhang.h"
#include"Room.h"
#include<vector>
#include<map>
using namespace std;
class Datphong
{
private :
	Khachhang khachhang;
	Room room[100];
public:
	void nhap();
	void in();
	Khachhang Getter_khachhang()
	{
		return khachhang;
	}
};

