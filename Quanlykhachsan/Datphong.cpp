#include "Datphong.h"
int n;
void Datphong::nhap()
{
	khachhang.nhap();
	
	cout << "Nhap so luong phong \n";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		room[i].nhap();
	}
}
void Datphong::in()
{
	khachhang.in();
	cout << "So phong khach hang dat la : " << n << endl;
	long long sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += room[i].tinhtienphong();
		room[i].in();

	}
	cout << "==> Tong so tien phai tra la : " << sum << endl;
}