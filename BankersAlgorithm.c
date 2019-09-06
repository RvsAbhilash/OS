#include<stdio.h>
void main()
{
int ALL[5][5],M[5][5],N[5][5];
int AV[3],S[5],i,j,k,n=5,m=3,x=0,count=0,countp=0;
printf("Enter Allocated:\n");
for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
   {
        scanf("%d",&ALL[i][j]);
        }
  }
printf("Enter Max:\n");
for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
   {
        scanf("%d",&M[i][j]);
        }
  }
printf("Enter Available:\n");
for(i=0;i<m;i++)
{
scanf("%d",&AV[i]);
}
printf("Need:\n");

for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
   {
        N[i][j]=(M[i][j]-ALL[i][j]);
        printf("%d ",N[i][j]);
        }
        printf("\n");
  }

for(i=0;i<n;i++)
{
S[i]=0;
}

while(countp!=n)
{
for(i=0;i<n;i++)
{
    if(S[i]==0)
    {
    count=0;
 for(j=0;j<m;j++)
  {
    if(N[i][j]<=AV[j])
        {
         count++;
        }
  }
  if(count==m)
   {
        for(k=0;k<m;k++)
         {
          AV[k]=(AV[k]+ALL[i][k]);
         }
    S[i]=1;
   countp++;
  }
}
}


}
printf("S:\n");
for(i=0;i<n;i++)
{
printf("%d",S[i]);
}
printf("\ncountp:%d ",countp);
printf("\nAV:\n");
for(i=0;i<m;i++)
{
printf("%d ",AV[i]);
}

}
