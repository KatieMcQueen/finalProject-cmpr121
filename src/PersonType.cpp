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

std::string PersonType::getFirstName() const
{
  return fName;
}

std::string PersonType::getLastName() const
{
  return lName;
}

int PersonType::getSSN() const
{
  return SSN;
}

void PersonType::printName()
{
    std::cout << formatName() << std::endl;
}

void PersonType::printPersonInfo()
{
    std::cout << formatPersonInfo() << std::endl;
}

void PersonType::printSSN()
{
    std::cout << formatSSN() << std::endl;
}

std::string PersonType::formatSSN() const
{
    std::string strSSN = std::to_string(SSN);

    std::string output;

    output += strSSN.substr(0, 3) + "-"; //3 Digits
    output += strSSN.substr(3, 2) + "-"; //2 Digits
    output += strSSN.substr(5, 4);       //4 Digits

    return output;
}

std::string PersonType::formatName() const
{
    return lName + ", " + fName;
}

std::string PersonType::formatPersonInfo() const
{
    std::string output;

    output += formatSSN();
    output += " ";
    output += lName;
    output += ", ";
    output += fName;

    return output;
}

PersonType::~PersonType()
{
}

