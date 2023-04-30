#include<stdio.h>
#include<string.h>
int main()
{   
    char Sentence[1000],word[50];
    gets(Sentence);
    int i,len = strlen(Sentence),w=0,n=0;
    for (i = 0; i < len; i++)
    {
        if ( (Sentence[i]>='a' && Sentence[i]<='z') || Sentence[i]>='A' && Sentence[i]<='Z' )
        {
            printf("%c",Sentence[i]);
        }
        else{
            printf("\n");
        }
        
    }
    
}