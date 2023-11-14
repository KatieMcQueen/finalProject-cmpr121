#include<string>
#include<iostream>



class PersonType
{
  private:
    std::string fName;
    std::string lName;
    int SSN;
  public:
    std::string formatName(std::string firstName, std::string lastName) const;
    std::string formatPersonInfo(int socialSecurityNumber, std::string firstName, std::string lastName) const;
    std::string formatSSN(int SSN) const;
    PersonType();
    PersonType(std::string firstName, std::string lastName, int SSN);
    void setPerfonInfo(std::string fName, std::string lName, int SSN);
    std::string getFirstName();
    std::string getLastName();
    int getSSN() const;
    void printName();
    void printPersonInfo();
    void printSSN();
    ~PersonType();
};
