#include <stdio.h>
int main(){
    int a[10],i,val;
    printf("Enter 10 elements:\n");
    for(i=0;i<10;i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the value to be searched:\n");
    scanf("%d", &val);
    for(i=0;i<10;i++){
        if(a[i]==val){
            printf("The value is found at index %d", i);
            break;
        }
    }
    if(i==10){
        printf("The value is not found");
    }
}