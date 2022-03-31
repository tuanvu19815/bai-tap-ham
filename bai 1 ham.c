#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float tamgiac(float a, float b, float c){
	float s,p;
	p = (a+b+c)/2;
	s = sqrt(p*(p-a)*(p-b)*(p-c));
  
	return s;
}	
int main(){
     float a,b,c;
	printf("nhap gia tri a, b, c\n");
	scanf("%f%f%f", &a, &b, &c);
   if (a + b > c && a + c > b && a + c > b ){
   printf("dientichtamgiac la %f", tamgiac(a,b,c));
   }else 
   printf("khong hop le");
  
    }

	
