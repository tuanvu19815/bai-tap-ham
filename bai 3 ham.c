#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void array(int arr[] , int size);

int main()
{
    int arr[5] , i ;
    for(i=0 ; i < 5 ; i++)
    {
        printf("Nhap arr[%d]" , i+1);
        scanf("%d" , &arr[i]);
    }
    array(arr,5);
}

void array(int arr[] , int size)
{
    int i ;
    printf("Array alements are:\n");
    for(i=size-1 ; i >= 0 ; i--)
    {
        printf("%d" , arr[i]);
    }
}



