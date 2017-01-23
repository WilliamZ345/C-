#include <iostream>


int input_and_find()
{
     int k=0; 

     std::cout<<std::endl;
     std::cout<<"Input a number to determine how many numbers you want.\n";
     std::cin>>k;
     int array[k];

     int num;

     for(int i=0;i<k;i++)
     {
        std::cout<<std::endl;
        std::cout<<"Input a number:\n";
        std::cin>>num;
        array[i]=num;
      }

   
      std::cout<<"Your input numbers are: " <<std::endl;
      for(int j=0;j<k;j++)
      {
         std::cout<< " "<<array [j];
      }

      std::cout<<std::endl;
      std::cout<<std::endl;

      int key;
  
      std::cout<<"Input a number: ";
      std::cin>>key;
   
      int j;
      for (j=0;j<k;j++)
      {
         if(array[j] == key)
         {
            std::cout<<"Your number has a match! It was on line  " <<j<<std::endl;
            break;
          }
      }

      if(j == k)
      {
         std::cout<<"Your number does not have a match " <<std::endl; 
      }
}



int main() 
{
   for(;;)
   {
     input_and_find();
   }

   return 0;
}

