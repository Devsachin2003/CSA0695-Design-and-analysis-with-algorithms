#include <stdio.h>
int main()
{
int a[10][10],b[10][10],mul[10][10],m,c,p,j,k;
printf(" Enter the number of printing the rows=");
scanf("%d",&m);
printf("Enter the number of printing the column=");
scanf("%d",&c);
printf("Enter the first matrix of element=\n");
for(p=0;p<m;p++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[p][j]);
}
}
printf("Enter the second matrix of element=\n");
for(p=0;p<m;p++)
{
for(j=0;j<c;j++)
{
scanf("%d",&b[p][j]);
}
}
printf("multiply of the matrix=\n");
for(p=0;p<m;p++)
{
for(j=0;j<c;j++)
{
mul[p][j]=0;
for(k=0;k<c;k++)
{
mul[p][j]+=a[p][k]*b[k][j];
}
}
}
for(p=0;p<m;p++)
{
for(j=0;j<c;j++)
{
printf("%d ",mul[p][j]);
}
printf("\n");
}
return 0;
}