#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	int boi50(int n)
{
	if(n%50==0)
	return 1;

else
    return 0;
}
    int main(){
    int h;
    int x[50];
    int i;
	printf("nhap so luong can ktra");
	scanf("%d", &i);
    for(h=0;h<i;h++)
{
	scanf("%d", &x[h]);}
	for(h=0;h<i;h++){
		int kt=boi50(x[h]);
		if(kt==45)
		printf("%d la boi so\n",x[h]);
		if(kt==0)
		printf("%d khong la boi so\n",x[h]);
	}
}
		
			
	




