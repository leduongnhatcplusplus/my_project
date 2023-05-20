#include "Room.h"
int cnt = 0;
void Room::nhap()
{
	while (true)
	{
		cout << "Lua chon loai phong  \n";
		cout << "1.Phong binh dan\n";
		cout << "2.Phong cao cap\n";
		cout << "3.Thoat\n";
			int luachon;
		cout << "Nhap lua chon cua ban \n";
		cin >> luachon;
		if (luachon == 1)
		{
			loaiphong = "Binh dan";
			while (true)
			{
				cout << "Lua chon loai giuong \n";
				cout << "1.Giuong don\n";
				cout << "2.Giuong doi\n";
				
				int chon;
				cout << "Nhap lua chon cua ban\n";
				cin >> chon;
				if (chon == 1)
				{
					cout << "Ban da lua chon giuong don.";
					sogiuong = 1;
					tienphong = 2000000;
					break;
				}
				else if (chon == 2)
				{
					cout << "Ban da lua chon giuong doi.";
					sogiuong = 2;
					tienphong = 5000000;
					break;
				}
				else {
					cout << "Nhap sai! Nhap lai";
				}
				break;
			}
		}
		else if (luachon == 2)
		{
			loaiphong = "Cao cap";
			while (true)
			{
				cout << "Lua chon loai giuong\n";
				cout << "1.Giuong don\n";
				cout << "2.Giuong doi\n";
				int chon;
				cout << "Nhap lua chon cua ban\n";
				cin >> chon;
				if (chon == 1)
				{
					cout << "Ban da lua chon giuong don\n";
					sogiuong = 1;
					tienphong = 5000000;
					break;
				}
				else if (chon == 2)
				{
					cout << "Ban da lua chon giuong doi\n";
					sogiuong = 2;
					tienphong = 10000000;
					break;
				}
				else {
					cout << "Ban da nhap sai !Vui long nhap lai";
				}

			}
			break;
		}
		else if (luachon == 3)
		{
			break;
		}
		else {
			cout << "Khong co loai phong bann yeu cau";
		}
		break;
		}
		
		string tmp = to_string(cnt);
		cnt++;
		maphong = string(3 - tmp.size(), '0') + tmp;
		cout << "\nnNhap ngay ban den \n";
		cin >> ngayden;
		cout << "\nNhap ngay ban di \n";
		cin >> ngaydi;

}

	void Room::in()
	{
		cout << "Ma so phong : " << maphong << endl;
		cout << "Loai phong : " << loaiphong << endl;
		cout << "So giuong : " << sogiuong << endl;
		cout << "Ngay nhan phong : " << ngayden << endl;
		cout << "Ngay tra phong : " << ngaydi << endl;
		cout << "So tien phai tra : " << (size_t)tinhtienphong() << endl;
	}
	double Room::tinhtienphong()
	{
		int sogio = 0;
		string nam1 = ngayden.substr(8, 4);
		string nam2 = ngayden.substr(8.4);
		string thang1 = ngayden.substr(3, 2);
		string thang2 = ngaydi.substr(3, 2);
		string  ngay1 = ngayden.substr(0, 2);
		string ngay2 = ngaydi.substr(0, 2);
		if (nam1 == nam2)
		{
			if (thang1 == thang2)
			{
				sogio = (stoll(ngay2) - stoll(ngay1)) * 24;
			}
			else {
				sogio = (stoll(ngay2) - stoll(ngay1)) * (int)24 + (stoll(thang2) - stoll(thang1)) * 30 * 24;
			}
		}
		else 
		{
			if (thang1 == thang2)
			{
				sogio = (stoll(ngay2) - stoll(ngay1)) * 24 + (stoll(nam2) - stoll(nam1)) * 365 * 30 * 24;
			}
			else {
				sogio = (stoll(ngay2) - stoll(ngay1)) * 24 + (stoll(thang2) - stoll(thang1)) * 30 * 24 + (stoll(nam2) - stoll(nam1)) * 365 * 30 * 24;
			}
		}
		return sogio * tienphong;
	}
