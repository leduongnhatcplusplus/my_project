#include "Khachhang.h"
#include<sstream>
string chuanhoa(string s)
{
	stringstream ss(s);
	string token;
	string res = "";
	while (ss >> token)
	{
		res += toupper(token[0]);
		for (int i = 1; i < token.length(); i++)
		{
			res += tolower(token[i]);
		}
		res += " ";
	}
	res.erase(res.length() - 1);
	return res;
}
void Khachhang::nhap()
{
	
	cout << "Nhap ho va ten : \n";
	cin.ignore();
	getline(cin, name);
	cout << "Nhap ngayy sinh\n";
	cin >> ns;
	cout << "Nhap gioi tinh\n";
	cin >> gender;
	cout << "Nhap dia chi thuong tru(xa/huyen/tinh)\n";
	cin.ignore();
	getline(cin, que);
	cout << "Nhap so dien thoai\n";
	cin >> sdt;
	cout << "Nhap cmnd\n";
	cin >> cmnd;
}
void Khachhang::in()
{
	cout << "Ho va ten khach hang : " << chuanhoa(name) << endl;
	if (ns[2] != '/') ns = "0" + ns;
	if (ns[5] != '/') ns.insert(3, "0");
	cout << "Ngay thang nam sinh : " << ns << endl;
	cout << "Gioi tinh : " << gender << endl;
	cout << "Dia chi thuong tru : " << chuanhoa(que) << endl;
	cout << "SDT : " << sdt << endl;
	cout << "CMND : " << cmnd << endl;
}