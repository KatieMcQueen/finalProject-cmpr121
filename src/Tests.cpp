//tells the testing library to implement a main function to serve as a test driver
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
//include the testing library header
#include"doctest.h"
#include"PersonType.h"
#include"CandidateType.h"
#include"CandidateList.h"
#include<string>

using namespace std;

//one of our tests. checks that the default constructor works. also relies on the get functions behaving
TEST_CASE("test constructor") //the string is the name of our test
{
  PersonType Person;
  //this is supposed to catch if an exception is thrown, 
  //but it just crashes anyway. oh well
  //
  //CHECK_THROWS(Person.fName); //check that this throws an exception
  CHECK(Person.getSSN() == 0); //check that our ssn is initialized to zero
  CHECK(Person.getFirstName() == "");
  CHECK(Person.getLastName() == "");
}

TEST_CASE("test name change")
{
  //every subcase runs this setup code first
  PersonType Person;
  //REQUIRE(Person.getFirstName == "");//require bails out of the test if it fails
  //REQUIRE(Person.getLastName == "");
  //REQUIRE(Person.getSSN == 0);
  SUBCASE("Change details")
  {
    string firstName = "Katelyn";
    string lastName = "McQueen";
    int SSN = 123456789;
    Person.setPerfonInfo(firstName, lastName, SSN);
    CHECK(Person.getFirstName() == firstName);
    CHECK(Person.getLastName() == lastName);
    CHECK(Person.getSSN() == SSN);
  }
  SUBCASE("Change details")
  {
    string firstName = "Jay";
    string lastName = "Reyes";
    int SSN = 192837465;
    Person.setPerfonInfo(firstName, lastName, SSN);
    CHECK(Person.getFirstName() == firstName);
    CHECK(Person.getLastName() == lastName);
    CHECK(Person.getSSN() == SSN);
  }
  SUBCASE("Change details")
  {
    string firstName = "Dylan";
    string lastName = "Berry";
    int SSN = 987654321;
    Person.setPerfonInfo(firstName, lastName, SSN);
    CHECK(Person.getFirstName() == firstName);
    CHECK(Person.getLastName() == lastName);
    CHECK(Person.getSSN() == SSN);
  }
  SUBCASE("Change details twice")
  {
    string firstName = "Dylan";
    string lastName = "Berry";
    int SSN = 987654321;
    Person.setPerfonInfo(firstName, lastName, SSN);
    CHECK(Person.getFirstName() == firstName);
    CHECK(Person.getLastName() == lastName);
    CHECK(Person.getSSN() == SSN);

    firstName = "Katelyn";
    lastName = "McQueen";
    SSN = 987654321;
    Person.setPerfonInfo(firstName, lastName, SSN);
    CHECK(Person.getFirstName() == firstName);
    CHECK(Person.getLastName() == lastName);
    CHECK(Person.getSSN() == SSN);
  }
}

TEST_CASE("add votes")
{
  CandidateType katelyn;
  katelyn.setPerfonInfo("Katie", "McQueen", 123456789);
  CHECK(katelyn.getTotalVotes() == 0);
  katelyn.updateVotesByCampus(0, 100);
  katelyn.updateVotesByCampus(1, 100);
  katelyn.updateVotesByCampus(2, 100);
  katelyn.updateVotesByCampus(3, 100);
  CHECK(katelyn.getTotalVotes() == 400);
}

TEST_CASE("search Candidate")
{
  CandidateType katelyn;
  katelyn.setPerfonInfo("Katie", "McQueen", 123456789);
  CandidateType dylan;
  dylan.setPerfonInfo("Dylan", "Berry", 12);
  CandidateList list;
  list.addCandidate(katelyn);
  list.addCandidate(dylan);
  CHECK(!list.searchCandidate(0));
  CHECK(list.searchCandidate(123456789));
  CHECK(list.searchCandidate(12));
  CHECK(!list.searchCandidate(13));
  CHECK(!list.searchCandidate(15));
} 
