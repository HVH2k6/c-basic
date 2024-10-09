#include <iostream>
using namespace std;

int main() {
	double a,b,x;
	cout<<"Nhap a: ";
	cin>>a;
	cout<<"Nhap b: ";
	cin>>b; 
	if(a==0 && b==0){
		cout<<"Phuong trinh co vo so nghiem";
	}else if(a==0 && b!=0){
		cout<<"Phuong trinh vo nghiem";
	}else{
		x=-b/a;
		cout<<"Phuong trinh co nghiem la: "<<x;
	}
   
    
    return 0;
}
