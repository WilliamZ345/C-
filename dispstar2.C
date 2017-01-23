#include <iostream>


int mstar(int n)
{
     for(int x=n;x>0;x--)
     {
       std::cout<<"*";
     }
     std::cout<<std::endl;
}


int nstar(int n)
{
     for(int x=0;x<n;x++)
     {
        std::cout<<"*";
     }
     std::cout<<std::endl;

}


int main()
{


int a;
std::cout<<"Input a number: \n";
std::cin>>a;
std::cout<<std::endl;

  for ( int i = 0; i < a; i++ )
  {
nstar(i);
  }

  for ( int i = a ; i>0  ; i--)
  {
nstar(i);
}

  for ( int i = a ; i>0  ; i--)
  {
mstar(i);
}

  for ( int i = 0; i < a; i++ )
  {
mstar(i);
  }

  int z = 10000;
  while( z > 0)
  {
     for ( int i = 0; i < a; i++ )
     {
       nstar(i);
     }

     for ( int i = a ; i>0  ; i--)
     {
       nstar(i);
     }

     z--;
  }

}





