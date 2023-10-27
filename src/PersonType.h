#include<string>

string formatName();
string formatPersonInfo();
string formatSSN();


class PersonType
{
  private:
    std::string fName;
    std::string lName;
    int SSN;
  public:
    PersonType();
    PersonType(std::string firstName, std::string lastName, int SSN);
    void setPerfonInfo(std::string fName, std::string lName, int SSN);
    std::string getFirstName();
    std::string getLastName();
    int getSSN();
    void printName();
    void printPersonInfo();
    void printSSN();
    ~PersonType();
};
