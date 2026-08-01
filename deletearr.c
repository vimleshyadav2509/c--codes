#include<stdio.h>
void main()
{
    int A[]={1,3,5,7,8};
    int k=3,n=5;
    int i,j;
    printf("Enter array element");
     for(i=0;i<n;i++)
     {
      printf("%i",A[i]);
      }
      j=k;
      while(j<n)
      {
      A[j-1]=A[j];
      j=j+1;
      }
      n=n-1;
        printf("Array element after deletion");
         for (i=0;i<n;i++);
          printf("%i",A[i]);
}