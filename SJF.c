#include<stdio.h>
oid main()
{
int i,j,k;
int B[10],W[10],T[10];
int P[10],n,temp;
printf("Enter no of processors:");
scanf("%d",&n);
printf("enter burst times of processes :");
for(i=0;i<n;i++)
{
scanf("%d",&B[i]);
P[i]=i;
}
for(i=0;i<n;i++)
{
for(j=0;j<n-1;j++)
{
if(B[j]>B[j+1])
{
temp=B[j];
B[j]=B[j+1];
B[j+1]=temp;

temp=P[j];
P[j]=P[j+1];
P[j+1]=temp;
}
}
}
for(i=0;i<n;i++)
{
printf(" %d\n ",B[i]);
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
printf("p%d\t%d\t%d\t%d\n",P[i],B[i],W[i],T[i]);
}
}
