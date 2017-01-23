#include <iostream>



int nstar(int n, int m)
{
    
   for(int x=(m-n)/2;x>0;x--)
   {
      std::cout<<" ";
   }

   for(int x=0;x<n;x++)
   {
      std::cout<<"*";
   }

   std::cout<<std::endl;
}


int  triprint(int a, int b )
{

  if ( b == 1 )
  {
     for ( int i = a; i>0; i--)
    {
       nstar(i, a);
    }

    for ( int i = 0; i < a; i++ )
    {
       nstar(i, a);
    }
  } 
  else
  {
    for ( int i = 0; i < a; i++ )
    {
       nstar(i, a);
    }

    for ( int i = a; i>0; i--)
    {
       nstar(i, a);
    }
  }
}




int main()
{
int a;
int b=0;
std::cout<<"For hourglass first, press 1, for diamond first, press any other number. \n";
std::cin>>b; 
std::cout<<"Input a number: \n";
std::cin>>a;
std::cout<<std::endl;

  if ( b == 1 )
  {
    triprint(a, b);
    triprint(a, 9);
  }
  else
  {
    triprint(a, b);
    triprint(a, 1);
  }
}





