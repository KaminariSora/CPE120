#include<stdio.h>
#include<conio.h>
void main(){
    int a[10] = {93,5,26,1,90,7,54,8};
    int *a_p[4];
    a_p[0] = a;
    for(int i = 0;i<10;i++){
        printf("%d\t",*a_p[0]++);
    }
}