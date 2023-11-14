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

int PersonType::getSSN() const
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

std::string PersonType::formatSSN(int socialSecurityNumber) const
{
    std::string strSSN = std::to_string(socialSecurityNumber);

    std::string output;

    output += strSSN.substr(0, 3) + "-"; //3 Digits
    output += strSSN.substr(3, 2) + "-"; //2 Digits
    output += strSSN.substr(5, 4);       //4 Digits

    return output;
}

std::string PersonType::formatName(std::string firstName, std::string lastName) const
{
    return lastName + ", " + firstName;
}

std::string PersonType::formatPersonInfo(int socialSecurityNumber, std::string firstName, std::string lastName) const
{
    std::string output;

    output += formatSSN(SSN);
    output += " ";
    output += lName;
    output += ", ";
    output += fName;

    return output;
}

PersonType::~PersonType()
{
}

