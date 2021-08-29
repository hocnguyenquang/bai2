#include <iostream.h>
#include <iomanip.h>
using namespace std;
struct nv{
	char manv[5],hoten[25];
	float hsl;
	float phucap;
	float tongluong;
};
void nhap(nv a[],int &n)
{
	do{
		cout<<"\nNhap n: ";cin>>n;
		if(n <= 0)
		cout<<"\nNhap lai n";
	}while(n <= 0);
	cout<<"\ -  DANH SACH QUAN LY LUONG CUA NHAN VIEN  -";
	for(int i = 0; i < n; i++)
	{
		cout<<"\nNhan vien thu "<<i + 1<<":";
		cin.ignore();
		cout<<"\nNhap ma nhan vien: ";
		cin.getline(a[i].manv,5);
		cout<<"\nNhap ho ten: ";
		cin.getline(a[i].hoten,25);
		cout<<"\nNhap hsl: ";
		cin>>a[i].hsl;
		cout<<"\nNhap phu cap: ";
		cin>>a[i].phucap;
	}
}
int main()
{
	
}