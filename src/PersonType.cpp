#include"PersonType.h"

PersonType::PersonType()
{
  SSN = 0;
}
PersonType::PersonType(std::string firstName, std::string lastName, int socialSecurityNumber)
{
  lName = firstName;
  fName = lastName;
  SSN = socialSecurityNumber;
}

void PersonType::setPerfonInfo(std::string firstName, std::string lastName, int socialSecurityNumber)
{
  fName = firstName;
  lName = lastName;
  SSN = socialSecurityNumber;
}
std::string PersonType::getFirstName()
{
  return fName;
}
std::string PersonType::getLastName()
{
  return lName;
}
int PersonType::getSSN()
{
  return SSN;
}
void PersonType::printName()
{
}
void PersonType::printPersonInfo()
{
}
void PersonType::printSSN()
{
}
PersonType::~PersonType()
{
}

