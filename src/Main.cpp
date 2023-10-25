//tells the testing library to implement a main function to serve as a test driver
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
//include the testing library header
#include "doctest.h"

//one of our tests. checks that the default constructor works. also relies on the get functions behaving
TEST_CASE("test constructor") //the string is the name of our test
{
  PersonType Person;
  CHECK_THROWS(Person.fName); //check that this throws an exception
  CHECK(Person.getSSN() == 0); //check that our ssn is initialized to zero
  CHECK(Person.getFirstName() == "");
  CHECK(Person.getFirstName() == "");
}

