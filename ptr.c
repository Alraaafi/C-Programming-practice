#include<stdio.h>
int main(){
  int a = 10, b = 20;
  int *p1, *p2;
  //int *tmp = &a;

    p1 = &a;
    p2 = &b;
    printf("\tNO CHANGE:\n");
    printf("a = %d \n",a);
    printf("b = %d \n",&a);
    printf("a = %d \n",p1);
    printf("b = %d \n",*p1);
    printf("a = %d \n",&p1);

    p1 = b;

    printf("\tAFTER CHANGE:\n");
    printf("a = %d \n",a);
    printf("b = %d \n",&a);
    printf("a = %d \n",p1);
    printf("b = %d \n",*p1);
    printf("a = %d \n",&p1);
}
