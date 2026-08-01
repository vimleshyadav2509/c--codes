#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
    char str1[20],str2[20];
    printf("Enter first and second string");
    scanf("%s%s",str1,str2);
    printf("Concation string is:%s",strcat(str1,str2));
    getch();
}


