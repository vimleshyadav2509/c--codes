#include<stdio.h>
#define max 20
void printsparse(int[][])
void readsparse(int[][3])
void transpose(int[][3],int[][3])
void main()
{
    int b1[max][3],b2[max][3],m,n;
    printf("Enter size of matrix");
    scanf("%i%i",&m,&n);
    b1[0][0]=m;
    b1[0][1]=n;
    readsparse (b1);
    transpose(b1,b1);
    printsparse (b2);
}
void readsparse(int b[max][3])
{
    int i,t;
    printf("non zero element");
    scanf("%i",&t);
    b[0][2]=t;
    for(i=0;i<=t;i++)
    {
        printf("Enter triple row,column,value");
        scanf("%i%i%i",&b[i][0],&b[i][1],&b[i][2]);
    }
}
void printsparse(int b[max][3])
{
    int i,n;
    n=b[0][n];
    printf("%i%i",b[0][0],b[0][1]);
    printf("\n");
    for(i=0;i<n;i++)
    printf("%i%i%i",b[i][0],b[i][1],b[i][2]);
}
void transpose(int b1[][3],int b2[][3])
{
    int i,j,n,k;
    b2[0][0]=b1[0][1];
    b2[0][1]=b1[0][0];
    b2[0][2]=b1[0][2];
    k=1;
    n=b1[0][2];
    for(i=0;i<b1[0][1];i++)
    for(j=0;j<=n;j++)
    if (i==b1[j][i])
    {
        b2[k][0]=i;
        b2[k][1]=b1[j][0];
        b2[k][2]=b1[j][2];
        k++;
    }

}
