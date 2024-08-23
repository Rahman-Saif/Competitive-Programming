#include<stdio.h>


int main(){

    int x;
    int sum=0;

    scanf("%d",&x);

    for(int i=0;i<x;i++){
    int a;
    scanf("%d",&a);
    sum+=a;
    }



    printf("%f",(float)sum/x);



return 0;
}
