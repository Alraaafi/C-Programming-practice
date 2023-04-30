#include<stdio.h>
#include<limits.h>
int main(){
printf("size of integer : %d\n",sizeof(int));

printf("Minimum Value of int : %d\n",INT_MIN); //limits.h
printf("Maximum Value of int : %d\n",INT_MAX); //limits.h
printf("Minimum Value of LONG int : %ld\n",LONG_MIN); //limits.h
printf("Maximum Value of LONG int : %ld\n",LONG_MAX); //limits.h

return 0;

}
