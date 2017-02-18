#include <iostream>


int key()
{
    int n;

    std::cout<<"Input a password: \n";
    std::cin>>n;
    std::cout<<"Your password is "<<n<<std::endl;
   
    return n; 
}

int main()
{
    int key1;
    int key2;
    
    key1 = key();
 
    key2 = key(); 
   
    while( key1!=key2 )
    {
       {
          std::cout<<"Your passwords do not match, please try again. "<<std::endl;
          key2 = key();   
       }
    }
    std::cout<<"Good job!! Your password worked!\n";
}


