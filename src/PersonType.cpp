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

std::string formatSSN(int socialSecurityNumber) {
    std::string strSSN = std::to_string(socialSecurityNumber);
    
    std::string output;

    output += strSSN[0];
    output += strSSN[1];
    output += strSSN[2];
    output += "-";
    output += strSSN[3];
    output += strSSN[4];
    output += "-";
    output += strSSN[5];
    output += strSSN[6];
    output += strSSN[7];
    output += strSSN[8];

    return output;
}

void PersonType::printSSN()
{
}
PersonType::~PersonType()
{
}

