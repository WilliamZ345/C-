#include <iostream>

int main()
{
    int array[10];

    int num;

    for(int i=0;i<10;i++)
    {
       std::cout<<std::endl;
       std::cout<<"Input a number:\n";
       std::cin>>num;
       array[i]=num;
   }

   
    std::cout<<"Your input numbers are: " <<std::endl;
    for(int j=0;j<10;j++)
   {
      std::cout<< " "<<array [j];
   }

   std::cout<<std::endl;
   std::cout<<std::endl;


   int key;
  

   std::cout<<"Input a number: ";
   std::cin>>key;
   
    int j;
    for (j=0;j<10;j++)
   
{
    if(array[j] == key)
    {
    std::cout<<"Your number has a match! It was on line  " <<j<<std::endl;
    break;
    }
}

    if(j == 10)
    {
    std::cout<<"Your number does not have a match " <<std::endl; 
    }




    return 0;
} 
