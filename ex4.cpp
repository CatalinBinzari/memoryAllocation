#include <iostream> 
#include <memory> 
#include <string> 
using namespace std; 
  
int main() 
{ 
  
    allocator<string> myAllocator; 
    string* str = myAllocator.allocate(3); 
  
    myAllocator.construct(str, "advanced"); 
    myAllocator.construct(str + 1, " programing "); 
    myAllocator.construct(str + 2, "techniques\n"); 
  
    cout << str[0] << str[1] << str[2]; 
   
    myAllocator.destroy(str); 
    myAllocator.destroy(str + 1); 
    myAllocator.destroy(str + 2); 
   
    myAllocator.deallocate(str, 3); 
} 