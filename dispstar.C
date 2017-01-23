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





int main()
{
int a; 
std::cout<<"Input a number: \n";
std::cin>>a;
std::cout<<std::endl;

  for ( int i = 0; i < a; i++ )
  {
nstar(i, a);
  }

  for ( int i = a; i>0; i--)
  {
nstar(i, a);
  }
}





