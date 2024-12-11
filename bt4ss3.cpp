#include<stdio.h>
int main(){
	float Toan,Van,Anh,Tong,Tb;
	printf("hay nhap diem toan:");
	scanf("%f",&Toan);
	printf("hay nhap diem van:");
	scanf("%f",&Van);
	printf("hay nhap diem anh");
	scanf("%f",&Anh);
	Tong = Toan + Van + Anh;
	Tb  = Tong / 3;
	printf("tong diem 3 mon la = %.2f\n  trung binh diem 3 mon la = %.2f\n",Tong,Tb);
	return 0;
	
	
	
}
