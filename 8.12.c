#include<stdio.h>
struct info{
    int age;
    char nm[100];
    float height;
};
int main()
//struct info;


{
    struct info man1,man2;
    man1.age = 20;
    man2.age = 21;

    man1.height = 5.67;
    man2.height = 5.34;

    strcpy(man1.nm , "abdullah");
    //gets(man1.nm);
    printf("%s",man1.nm);
    //man2.nm = "rahamat";
}

