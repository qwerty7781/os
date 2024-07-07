#include<stdio.h>
#define max 25
void main()
{
 int frag[max],b[max],f[max],i,j,nb,nf,temp;
 static int bf[max],ff[max];
 printf("\n Memory Management Scheme -First Fit");
 printf("\n Enter the number of blocks:");
 scanf("%d",&nb);
 printf("\n Enter the number of files:");
 scanf("%d",&nf);
 printf("\n Enter the size of blocks:\n");
 
 for(i=1;i<=nb;i++)
 {
 printf("Block %d:",i);
 scanf("%d",&b[i]);
 }
 printf("\nEnter the size of the files:\n");
 for(i=1;i<=nf;i++)
 {
 printf("File %d:",i);
 scanf("%d",&f[i]);
 }
 for(i=1;i<=nf;i++)
 {
 for(j=1;j<=nb;j++)
 {
 if(bf[j]!=1)
 { 
 temp = b[j]-f[i];
 ff[i] = j;
 if(temp>=0)
 {
 ff[i] = j;
 bf[ff[i]] = 1;
 break;
 }
 }
 }
 frag[i] = temp;
 }
 printf("\n File_no: \tFile_size: \t Block_no: \t Block_size: \t Fragment:");
 for(j=1;j<=nf;j++)
 {
 if(f[j]>b[ff[j]])
 {
 printf("\n %d \t\t%d \t\t_ \t\t_ \t\t_",j,f[j]);
 }
 else
 {
 printf("\n%d \t\t%d \t\t%d \t\t%d \t\t%d",j,f[j],ff[j],b[ff[j]],frag[j]);
 }
 }
}
