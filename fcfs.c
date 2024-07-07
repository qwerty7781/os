#include<stdio.h>
#include<stdlib.h>
int main()
{
int aq[100],i,n,totalheadmov=0,initial;
printf("Enter the no.of requests\n");
scanf("%d",&n);
printf("Enter the requests sequence\n");
for(i=0;i<n;i++)
scanf("%d",&aq[i]);
printf("Enter initial head position");
scanf("%d",&initial);
for(i=0;i<n;i++){
totalheadmov=totalheadmov+abs(initial- aq[i]);
initial=aq[i];
}
printf("total head movement is %d",totalheadmov);
return 0;
}
