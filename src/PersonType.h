#include<string>
#include<iostream>

#ifndef PERSON_TYPE_H
#define PERSON_TYPE_H

class PersonType
{
  private:
    std::string fName;
    std::string lName;
    int SSN;
  protected:
    std::string formatName() const;
    std::string formatPersonInfo() const;
    std::string formatSSN() const;
   public:
    PersonType();
    PersonType(std::string firstName, std::string lastName, int SSN);
    void setPerfonInfo(std::string fName, std::string lName, int SSN);
    std::string getFirstName() const;
    std::string getLastName() const;
    int getSSN() const;
    void printName();
    void printPersonInfo();
    void printSSN();
    ~PersonType();
};

#endif
