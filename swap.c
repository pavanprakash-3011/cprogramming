#include<stdio.h>
int main() {
    int a,b,temp;
    printf("a:");
    scanf("%d",&a);
    printf("b:");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("%d",a);
    printf("\n");
    printf("%d",b);
    return 0;
}
