#include<stdio.h>
int main(){
int arr[20] = {1,2,3,4,5};
int n = sizeof(arr)/sizeof(arr[0]);
int key,pos;
printf("Your array is : ");
for (int i = 0; i < n; i++)
{
    printf("%d  ",arr[i]);
}
printf("\nenter element to be inserted : ");
scanf("%d",&key);
printf("\nenter position where to be inserted : ");
scanf("%d",&pos);
arr[pos-1]=key;
for (int i = 0; i < n+1; i++)
{
    printf("%d  ",arr[i]);
}
}
