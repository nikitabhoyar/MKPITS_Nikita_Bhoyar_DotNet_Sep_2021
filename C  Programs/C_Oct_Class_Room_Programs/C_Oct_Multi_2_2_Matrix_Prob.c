
#include<stdio.h>
int main()
{

int i,j,k,r1,c1,r2,c2,a[10][10],b[10][10],c[10][10];
printf("\n Enter the dimension of first matrix:");
scanf("%d%d",&r1,&c1);

printf("\n Enter the dimension of second matrix:");
scanf("%d%d",&r2,&c2);

if(c1==r2) /*No of columns of first matrix is equal to no .of rows of second matrix*/
printf("\n Matrix Multiplication is possible:");
printf("\n Enter elements of first matrix:");

for(i=0;i<r1;i++)
{

for(j=0;j<c1;j++)
{
scanf("%d",&a[i][j]);
}

}


printf("\nEnter the elements of second matrix: ");

for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
scanf("%d",&b[i][j]);
}
}

/*Multiplication Matrix*/
 
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
c[i][j]=0;
for(k=0;k<c1;k++)  /*we take k loop to calculate the element of c matrix */ This element is multiplication
of row of first matrix and column of second matrix*/
{
c[i][j]+= a[i][k]*b[k][j];
}
}
}

printf("\n Multiplication matrix is as follows");

for(i=0;i<m;i++)
{
for(j=0;i<n;j++)
{
printf("%2d",c[i][j]);

}

printf("\n");

}

return 0;

}

