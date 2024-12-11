#include<stdio.h>

int main(){
	const  float PI = 3.14;
	float R,C,S;
	printf("hay nhap ban kinh cua hinh tron:");
	scanf("%f",&R);
	C = PI * 2 * R;
	S = PI * R * R;
	printf(" chu vi cua hinh tron = %.2f\n dien tich cua hinh tron = %.2f\n",C,S);
	return 0;
	
	
}
