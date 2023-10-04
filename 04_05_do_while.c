#include<stdio.h>
int main(){
//     int i=0;
//     do{
// printf("%d\n",i);
// i++;
//     }while(i<10);
//quick quiz on di while loop
// int n=1;
// do{
//     printf("%d\n",n);
//     n++;
// }while(n<5);
int i=0;
int n;
printf("Enter the value of n");
scanf("%d",&n);
do{
    printf("%d\n",i+1);
    i++;

}while(i<n);
    return 0;
}