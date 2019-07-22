#include<stdio.h>
int main()
{
  int arr[10][10];
int m,n;
printf("\n Enter the size of rows and column \n");
scanf("%d %d",&m,&n);
printf("\n Enter the elements in dda \n");
for(int i=0;i<m;i++)
{
  for(int j=0;j<n;j++)
  {
    scanf("%d",&arr[i][j]);
  }
  printf("\n");
}
printf("\n Original Array \n");
for(int i=0;i<m;i++)
{
  for(int j=0;j<n;j++)
  {
    printf("%d ",arr[i][j]);
  }
  printf("\n");
}
int temp=0;
for(int i=0;i<m;i++)
{
  for(int j=0;j<i;j++)
  {
    temp=arr[i][j];
    arr[i][j]=arr[j][i];
    arr[j][i]=temp;
  }
}
printf("\n Array after transpose \n");
for(int i=0;i<m;i++)
{
  for(int j=0;j<n;j++)
  {
    printf("%d ",arr[i][j]);
  }
  printf("\n");
}
}
