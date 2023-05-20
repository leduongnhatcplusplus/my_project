#include"Datphong.h";
using namespace std;
int main()
{
	vector<Datphong> ds;
	while (true)
	{

		cout << "\t\t\n\n==== Quan ly khach san ====";
		cout << "\t\t\n\n1. Nhap thong tin";
		cout << "\t\t\n\n2. In thong tin";
		cout << "\t\t\n\n3. Thoat";
		int choice;
		cout << "\nNhap lua chon cua ban\n";
		cin >> choice;
		if (choice == 1)
		{
			Datphong x;
			x.nhap();
			ds.push_back(x);
		}
		else if (choice == 2)
		{
			for (int i = 0; i < ds.size(); i++)
			{
				cout << "Thong tin khach thu  : " << i + 1 << endl;
				ds[i].in();
			}
		}
		else if (choice == 3)
		{
			break;
		}
	}
	system("pause");
}
