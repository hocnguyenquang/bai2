#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
using namespace std;

typedef struct giangvien{
	char ma[5],ten[40],gv[30];
	int tinchi; 
};

void nhap(giangvien a[],int &n){
	do{
    	cout<<"\n - Nhap n la: ";
    	cin>>n;
    	if(n>=100||n<=0)
    	cout<<"\n - Khong thoa dieu kien - Nhap lai - ";
    }while(n>=100||n<=0); 
    for(int i=1 ; i<=n ; i++){
    	cout<<"\n - Thong tin mon hoc thu "<<i<<endl;
    	cin.ignore();
    	cout<<"\n - Nhap Ma Mon la: ";
    	cin.getline(a[i].ma,5);
    	cout<<"\n - Nhap Ten Mon la: ";
    	cin.getline(a[i].ten,40);
    	cout<<"\n - Nhap Ten Giang Vien la: ";
    	cin.getline(a[i].gv,30);
    	do{
    	cout<<"\n - Nhap tin chi la: ";
    	cin>>a[i].tinchi;
    	if(a[i].tinchi<=0)
    	cout<<"\n - Khong thoa man dieu kien - Nhap lai - ";
    	}while(a[i].tinchi<=0);
    }
}

void xuat(giangvien a[],int n){
	int dem=0;
	for(int i=1 ; i<=n ; i++){
		if(a[i].tinchi==3){
			dem++;
		}	
	}
	if(dem!=0){
		cout<<"\n - Danh sach co so tin chi la 3 - "<<endl;
	    cout<<setw(6)<<"Ma"<<setw(40)<<"Ten Mon"<<setw(31)<<"Ten Giang Vien"<<setw(15)<<"Tin Chi"<<endl;
	   for(int i=1 ; i<=n ; i++){
   		   if(a[i].tinchi==3)
       cout<<setw(6)<<a[i].ma<<setw(40)<<a[i].ten<<setw(31)<<a[i].gv<<setw(15)<<a[i].tinchi<<endl;	
   	   }	
	}
	else
        cout<<"\n => Khong co so tin chi la 3 ";
}

main(){
	int n;
	giangvien a[100];
	nhap(a,n);
	xuat(a,n);
	getche();
	return 0;
}