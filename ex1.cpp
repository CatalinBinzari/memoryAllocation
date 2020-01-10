#include <iostream>   
#include <cstdlib> 
#include <string>

int main() 
{
    auto p = (std::string*)std::malloc(sizeof(std::string));
    new(p) std::string(5, 'a');
    //new(p+1) std::string(5, 'b'); //error not enough memory


    std::cout<<&p<<std::endl;

    p = (std::string*)std::realloc(p,4*sizeof(std::string));
    new(p+1) std::string(5, 'b');
    std::cout<<*p<<std::endl;
    std::cout<<*(p+1)<<std::endl;


    std::cout<<&p<<std::endl;

    

    std::free(p);

    //std::cout<<*p<<std::endl; //error now nothing pointed there
    
}
