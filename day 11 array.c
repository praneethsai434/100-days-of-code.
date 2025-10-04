#include<stdio.h>
int main(){
    int n,i,num=0,arr[100];
    printf("enter yur number: ");
    scanf("%d",&n);
    printf("enter elemrnts: ");
    for(i=0;i<n;i++){
        
     scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        num += arr[i];
    }
    printf("sum = %d", num);
    return 0;
} 
