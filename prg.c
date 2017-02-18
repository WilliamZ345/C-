#include <stdio.h>

int main(void)
{
    int    a=0;
    int    b=0;

    int    x; 
    int    i;
   for(i=0;i<100;i++)
   {
      printf("please input for a");
      scanf("%d",&a)  ;
      printf("please input for b ");
      scanf("%d",&b)  ;

      x=a+b;       

      printf("\n\n\nfrom sea to shining C,  my x is:%d\n\n\n",x);
   }

   return 0;
}
