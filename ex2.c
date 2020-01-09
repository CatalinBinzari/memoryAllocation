#include <stdio.h>
#include <stdlib.h>

int main ()
{

  // This pointer will hold the 
  // base address of the block created 
  int *array;
  int n, i, sum = 0;

  // Get the number of elements for the array 
  n = 5;

  // Dynamically allocate memory using realloc() 
  array = realloc (array, n * sizeof (int));

  // Check if the memory has been successfully 
  // allocated by malloc or not 
  if (array == NULL)
    {
      printf ("Memory not allocated.\n");
      exit (0);
    }
  else
    {

      // Memory has been successfully allocated 
      printf ("Memory successfully allocated using calloc.\n");

      // Get the elements of the array 
      for (i = 0; i < n; ++i)
	{
	  array[i] = i + 1;
	}

      // Print the elements of the array 
      printf ("The elements of the array are: ");
      for (i = 0; i < n; ++i)
	{
	  printf ("%d, ", array[i]);
	}

      // Get the new size for the array 
      n = 10;

      // Dynamically re-allocate memory using realloc() 
      array = realloc (array, n * sizeof (int));

      // Check if memory has been succesfully reallocated
      if (array == NULL)
	{
	  printf ("Memory not allocated.\n");
	  exit (0);

	}
      else
	{

	  // Memory has been successfully allocated 
	  printf ("Memory successfully re-allocated using realloc.\n");

	  // Get the new elements of the array 
	  for (i = 5; i < n; ++i)
	    {
	      array[i] = i + 1;
	    }

	  // Print the elements of the array 
	  printf ("The elements of the array are: ");
	  for (i = 0; i < n; ++i)
	    {
	      printf ("%d, ", array[i]);
	    }
	}

      array = realloc (array, 0);//free memory
    }
  return 0;
}