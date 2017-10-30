#include<stdio.h>

int main()
{
int N,Q,p,k;
if(scanf("%d %d",&N,&Q)){};
int ar[N];
for(p=0;p<N;p++)
{
if(scanf("%d",&ar[p])){};
}

int arr[3*Q];
for(p=0;p<Q;p++)
{
if(scanf("%d %d %d",&arr[p*3],&arr[p*3+1],&arr[p*3+2])){};
}



k=0;
for(p=0;p<N;p++)
{
if(p>=arr[k*3] && p<=arr[k*3+1])
{	
ar[p] = ar[p] + arr[k*3+2];
}
else
if(p>arr[k*3+1])
{
k++;
p=arr[k*3]-1;
if(k>Q-1)
{
break;
}
}
}

for(p=0;p<N;p++)
{
printf("%d ",ar[p]);
}



}
