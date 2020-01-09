#include <iostream>
#include <cstdlib>
using namespace std;


 class Human{
  public:
     Human(unsigned short age = 0); 
     ~Human();
  };

  Human::Human(unsigned short a) {
     cout << "A "<< a << " years old human has been created." << endl;
  }

  Human::~Human(void) {
   cout << "Object is being deleted" << endl;
  }


int main ()
{
  // Pointer initialization to null 
  int *p = NULL;

  // Request memory for the variable 
  // using new operator 
  p = new int;
  if (!p)
    cout << "allocation of memory failed\n";
  else
    {
      // Store value at allocated address 
      *p = 29;
      cout << "Value of p: " << *p << endl;
    }

  // Request block of memory 
  // using new operator 
  float *r = new float (75.25);

  cout << "Value of r: " << *r << endl;

  // freed the allocated memory 
  delete p;
  delete r;

  int* heap_array = new int[10];

  for(int i=0; i<10; i++)
    heap_array[i] = (rand()%10)+1;

  delete[] heap_array;

  //part a
  int *int_array;
  int_array = (int*) malloc(10*sizeof(int));
  free(int_array);

  //part b
 
  Human* Catalin = new Human(21);
  delete Catalin;


  return 0;
}