

#include<stdio.h>
void main()
{
int i,j,k;
int B[10],W[10],T[10];
int P[10],n;
printf("Enter no of processors:");
scanf("%d",&n);
printf("enter burst times of processes :");
for(i=0;i<n;i++)
{
scanf("%d",&B[i]);
}
W[0]=0;
for(i=1;i<n;i++)
{
W[i]=B[i-1]+W[i-1];

}
for(i=0;i<n;i++)
{
T[i]=B[i]+W[i];
}
printf("Processors\tBT\tWT\tTAT\n");
for(i=0;i<n;i++)
{
printf("Process%d\t%d\t%d\t%d\n",i,B[i],W[i],T[i]);
}
}
