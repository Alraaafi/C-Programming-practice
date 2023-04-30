#include<stdio.h>
int sLn(char str[500]){
    int i;
    for(i=0; str[i]!='\0'; i++)
    return i; 
}
int main()
{   
    char *myN = "Tanvir Rafi";
    int sz = sLn(myN);
    printf("%d",sz);
}
