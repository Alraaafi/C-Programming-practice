#include<stdio.h>
int main(){
    int a=3; //switch case variable must be fixed value i.e int or char but not float/double.

    switch(a){
    case 1:
        printf("1\n");
        break ; //if u Do not give Break then one case true after all case true
    case 2:
        printf("2\n");
        break ;
    case 3:  //There are do not have same case like 1 or 2 . that is error
        printf("3\n");
        break ;
    default:
        printf("None!!!\n");

    }

}
