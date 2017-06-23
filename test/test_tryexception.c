#include "unity.h"
#include "tryexception.h"
#include "Exception.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_tryexception_circle(void)
{
  tryexception(-5);
  tryexception(5);
  tryexception(0);
}
