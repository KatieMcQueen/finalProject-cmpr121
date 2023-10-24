#include<string>

class PersonType
{
  private:
    string fName;
    string lName;
    int SSN;
  public:
    PersonType();
    PersonType(string firstName, string lastName, int SSN);
    void setPerfonInfo(string fName, string lName, int SSN);
    string getFirstName();
    string getLastName();
    int getSSN();
    void printName();
    void printPersonInfo();
    void printSSN();
    ~personType();
};
