#include<stdio.h>
void main()
{

int i,j,n,F;
int count=0,miss=0,x;
int p[20],f[10];
clrscr();
printf("Enter no of page numbers:");
scanf("%d",&n);
printf("Enter page nos:\n");
for(i=0;i<n;i++)
{
scanf("%d",&p[i]);
}
printf("Enter no of frames:");
scanf("%d",&F);
for(i=0;i<F;i++)
{
f[i]=0;
}


for(i=0;i<n;i++)
{

	  for(j=0;j<F;j++)
	    {
	     if(f[j]==p[i])
		{
		  goto x;
		}
	    }
	  if(count<F)
	    {
		f[count]=p[i];
		miss++;count++;
	    }
	  else
	    {
		count=count-F;
		f[count]=p[i];
		miss++;count++;
	    }


x:
}
printf("No of hits:%d\n",(n-miss));
printf("No of miss:%d\n",(miss));
getch();
}
