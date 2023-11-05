#include "PersonType.h"


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
    std::cout << formatName(fName, lName) << std::endl;
}
void PersonType::printPersonInfo()
{
    std::cout << formatPersonInfo(SSN, fName, lName) << std::endl;
}
void PersonType::printSSN()
{
    std::cout << formatSSN(SSN) << std::endl;
}

std::string PersonType::formatSSN(int socialSecurityNumber) {
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

std::string PersonType::formatName(std::string firstName, std::string lastName)
{
    std::string output;

    output += firstName;
    output += ", ";
    output += lastName;

    return output;
}

std::string PersonType::formatPersonInfo(int socialSecurityNumber, std::string firstName, std::string lastName)
{
    std::string output;

    output += formatSSN(SSN);
    output += " ";
    output += fName;
    output += lName;


    return std::string();
}

PersonType::~PersonType()
{
}

