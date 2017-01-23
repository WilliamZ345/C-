#include <iostream>


int square (int c)
{
    return c*c;
}


int cube (int b)
{
return b*b*b;
}

int add(int m, int n)
{
return m+n;
}


int main()

{
int a;
int b;

std::cout<<std::endl;
std::cout<<"Input a number: \n";
std::cin>>a;
std::cout<<"This program will square and cube your number \n ";

std::cout<<square (a)<<", "<<cube (a);

std::cout<<std::endl;
std::cout<<"Input another number. \n";
std::cout<<"This program will cube your number ";
std::cin>>b;

std::cout<<cube (b);

std::cout<<std::endl;
std::cout<<"This is the sum of the two values: ";
std::cout<<add(a, a )<<std::endl;



for(int x=0;x<a;x++)
{
std::cout<<"*";
}
std::cout<<std::endl;


return 0;
}





