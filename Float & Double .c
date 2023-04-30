#include<stdio.h>
int main(){
int a,i=1;
scanf("%d",&a);
 RAIF:
    printf("Bangladeshi-%d\n\n",i);
    i++;
    if(i<=a)
        goto RAIF;

}
