#include <stdio.h>
#include <stdlib.h>


int main(int argc, char  *argv[])
{
 int nDegeri;
 printf("Binom Acilimi (n) degeri= ");
 scanf("%d", &nDegeri);
 int nBinomAcilimi[nDegeri+1][nDegeri+1];
 for (int i=0;i<nDegeri+1; i++)
 {
  nBinomAcilimi[i][i]=0;
  nBinomAcilimi[i][0]=1;
 }
 for (int i=0;i<nDegeri+1;i++)
  for (int j=1;j<nDegeri+1;j++)
   nBinomAcilimi[i][j]=0;
 for (int i=1;i<nDegeri+1;i++)
 {
  for (int j=1;j<nDegeri+1;j++)
  {
   nBinomAcilimi[i][j] = 0;
   nBinomAcilimi[i][j] = nBinomAcilimi[i-1][j-1]+nBinomAcilimi[i-1][j];
  }
 }
 for (int i=0;i<nDegeri+1;i++)
 {
  for (int j=0;j<nDegeri+1;j++)
  {
   if (nBinomAcilimi[i][j]!=0)
    printf("%d ", nBinomAcilimi[i][j]);
  }
  printf("\n");
  printf("\n");
 }
 int x=nDegeri;
 int y=0;
 for (int j=0;j<nDegeri+1;j++)
 {
  if (nBinomAcilimi[nDegeri][j]!=0)
  {
   if (nBinomAcilimi[nDegeri][j]==1)
   {
    if (x!=0)
     printf("x%d ",x);
    else
     printf(" + y%d",y);
   }
   else
   {
    if (x==1)
     printf(" + x.y%d ", y);
    else if (y==1)
     printf(" + x%d.y ", x);
    else
     printf(" + x%d.y%d ", x,y);
   }
  }
  x--;
  y++;
 }
 printf("\n");
 printf("\n");




    return 0;
}
