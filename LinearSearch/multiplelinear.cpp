#include <stdio.h>
int main(){
    int a[10],i,val,flag=0;
    printf("Enter 10 elements:\n");
    for(i=0;i<10;i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the value to be searched:\n");
    scanf("%d", &val);
    for(i=0;i<10;i++){
        if(a[i]==val){
            printf("The value is found at index %d \n", i);
            flag=flag+1;
        }
    }
    if(flag==0){
        printf("The value is not found");
    }
    else{
        printf("The value is found %d times", flag);
    }
}