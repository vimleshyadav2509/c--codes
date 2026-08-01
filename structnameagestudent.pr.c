#include<stdio.h>
#include<conio.h>
 struct student
 {
     int student;
     char studentname[20];
     int age;
     int marks;
    };
    struct student b1[5];
    int main()
    {
       int i;
       for(i=0;i<5;i++)
       {
           printf("Enter the student name");
           scanf("%s",b1[i].studentname);
           printf("Enter the  age");
           scanf("%i",&b1[i].age);
           printf("Enter the marks");
           scanf("%i",&b1[i].marks);
       }
       for(i=0;i<5;i++)
       {
           printf("%s\t%i\t%i\n",b1[i].studentname,b1[i].age,b1[i].marks);

       }
           getch();
           return(0);

       }




