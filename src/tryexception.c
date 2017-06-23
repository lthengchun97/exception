#include "tryexception.h"
#include "CException.h"
#include <stdio.h>




#define zero 2
#define negative 3

void validateradius(float number)
{
  if( number ==0)
    Throw(createException("Cannot be 0 radius", zero));
  else if (number < 0.0)
    Throw(createException("Cannot be negative radius", negative));
}


float circle_area(float radius)
{
  CEXCEPTION_T ex;
  Try {
    validateradius(radius);
  }Catch(ex){
    printf("Error !\n");
    Throw(ex);
  }
  printf("--- %f is a valid radius\n",radius);
  return 3.14 * radius * radius;
}

void tryexception(float radius)
{
  CEXCEPTION_T ex;
  
  Try{
    float area = circle_area(radius);
    printf("The area of the %f radius is %f\n", radius,area);
  }Catch(ex){
    dumpException(ex);
  }
  
}

