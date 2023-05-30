#include<stdio.h>
#include<conio.h>
void main(){
    char list[14] = {'s','u','u','r','c','r','t','a','e','a','t','D','t',' '}; //listก็คือ Data_field
    int prt,first,link[14] = {10,5,4,2,12,8,9,6,6969,13,3,7,1,0} ;//linkคือตัวเชื่อม
    printf("Input first : ");
    scanf("%d",&first);
    while(first != 6969){
        printf("%c",list[first]);
        first = link[first];
}
}