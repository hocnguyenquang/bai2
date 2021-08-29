#include <iostream.h>
#include <string.h>
#include <iomanip.h>
using namespace std;
struct vattu{
	char mavattu[8],tenvattu[30],donvitinh[20];
	int soluong;
};
void nhap(vattu a[],int &n)
{
	do{
		cout<<"\n Nhap so luong vat tu: ";cin>>n;
		if(n <= 0 || n >= 100)
		cout<<"\n Vui long nhap lai ";
	}while(n <= 0 || n >= 100);
	for(int i = 0; i < n; i++)
	{
		cin.ignore();
		cout<<"\n Vat tu thu "<<i + 1<<":";
		cout<<"\n Nhap ma vat tu: ";
		cin.getline(a[i].mavattu,8);
		cout<<"\n Nhap ten vat tu: ";
		cin.getline(a[i].tenvattu,30);
		cout<<"\n Nhap don vi tinh: ";
		cin.getline(a[i].donvitinh,20);
		cout<<"\n Nhap so luong: ";
		cin>>a[i].soluong;
	}
}
void xuat(vattu a[],int n)
{
	cout<<endl;
	cout<<setw(10)<<"MA";
	cout<<setw(31)<<"TEN VAT TU";
	cout<<setw(21)<<"DON VI TINH";
	cout<<setw(18)<<"SO LUONG"<<endl;
	for(int i = 0; i < n; i++)
	{
	cout<<setw(10)<<a[i].mavattu;
	cout<<setw(31)<<a[i].tenvattu;
	cout<<setw(21)<<a[i].donvitinh;
	cout<<setw(18)<<a[i].soluong<<endl;
	}
}
void vatTuSoLuongItHon100(vattu a[],int n)
{
	int dem=0;
	for(int i =0; i < n; i++)
	{
		if(a[i].soluong<100)
		{
			dem++;
		}
        }
	if(dem!=0)
	    {
		cout<<"\nVat tu co so luong it hon 100 la: ";
		cout<<endl;
	    cout<<setw(10)<<"MA";
		cout<<setw(31)<<"TEN VAT TU";
		cout<<setw(21)<<"DON VI TINH";
		cout<<setw(18)<<"SO LUONG"<<endl;
		for(int i =0; i < n; i++)
		{
			if(a[i].soluong<100){
			cout<<setw(10)<<a[i].mavattu;
			cout<<setw(31)<<a[i].tenvattu;
			cout<<setw(21)<<a[i].donvitinh;
			cout<<setw(18)<<a[i].soluong<<endl;
		}
	    }
	    }
	    else{
    		cout<<"\n KHONG CO VAT TU NAO DUOI 100";
    	}
}
int main()
{
	int n;
	vattu a[100];
	nhap(a,n);
	xuat(a,n);
	vatTuSoLuongItHon100(a,n);
}