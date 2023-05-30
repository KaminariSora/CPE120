#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main() {
    int a[5] ={1,2,3,4,5};
    int *prt,i,choice,d;
    printf("Original information : ");
    for(i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    printf("\n(1)Input new information (2)Delete information : ");
    scanf("%d",&choice);
    switch(choice){
        case 1 : 
        printf("\nInput new information : ");
        break;
        case 2 : 
        printf("Enter positon to delete : ");
        scanf("%d",&d);
        deleteElement(a,5,d);
        break;
    }
    for(i = 0;i<5;i++){ 
        scanf("%d",&a[i]);
    }
    prt = a;
    bubble_sort(a, 5);
    printf("New array is : ");
    for(i = 0;i<5;i++){
        printf("%d ",*prt++);
    }
}

void bubble_sort(int *a, int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void deleteElement(int *a, int *size, int position) {
    int i;
    for (i = position; i < size - 1; i++) {
        a[i] = a[i + 1];
    }
    *size--;
    printf("The remaining array are ");
    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
}