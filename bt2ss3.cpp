#include<stdio.h>

int main(){
	float C,F;
	printf("hay nhay do c:");
	scanf("%f",&C);
	F = (C * 9 / 5 ) + 32;
	printf("%.1f do c doi sang = %.1f do f\n",C,F);
	return 0;
}
