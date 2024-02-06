#include<stdio.h>
#include<string.h>
#define max 100
int main(){
 int alloc[max][max],maxi[max][max],need[max][max],avail[max],ans[max];
 int p,r,index=0,i,j,k;
 printf("Enter no.of processes : ");
 scanf("%d",&p);
 printf("Enter no.of resouruces : ");
 scanf("%d",&r);
 alloc[p][r],maxi[p][r],need[p][r],avail[p];
 printf("Enter Allocation Matrix : ");
 for ( i = 0; i < p; i++)
 {
 for (j = 0; j < r; j++)
 {
 scanf("%d",&alloc[i][j]);
 }
 }
 printf("Enter Max Matrix : ");
 for ( i = 0; i < p; i++)
 {
 for (j = 0; j < r; j++)
 {
 scanf("%d",&maxi[i][j]);
 }
 }
 printf("Enter Available Matrix : ");
 for ( i = 0; i < r; i++)
 {
 scanf("%d",&avail[i]);
 }
 for (i = 0; i < p; i++)
 {
 for ( j = 0; j < r; j++)
 {
 need[i][j]=maxi[i][j]-alloc[i][j];
 }
 }
 int is_finished[p];
 memset(is_finished,0,sizeof(is_finished));
 for ( k = 0; k < p; k++)
 {
 for ( i = 0; i < p; i++)
 {
 int flag=0;
 if (is_finished[i]==0)
 {
 for (j = 0; j < r; j++)
 {
 if(need[i][j]>avail[j])
 {
 flag=1;
 break;
 }
 }
 if (flag==0)
 {
 for ( j = 0; j < r; j++)
 {
 avail[j]+=alloc[i][j];
 }
 ans[index++]=i;
 is_finished[i]=1;
 }
 }
 }
 }
 int flag=0;
 for (i = 0; i < p; i++)
 {
 if(is_finished[i]==flag)
{
 printf("Unsafe State...");
 flag=1;
 }
 }
 if (flag==0)
 {
 printf("The Safe Sequence Is :");
 for ( i = 0; i < p-1; i++)
 {
 printf("P%d->",ans[i]);
 }
 printf("P%d",ans[p-1]);
 }
 return 0;
}
