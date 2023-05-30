#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    int a[11][11];
    int result[11][11];
    for(int i = 2;i<=12;i++){
        for(int j = 2;j<=12;j++){
            result[i][j] = (i)*(j);
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
}