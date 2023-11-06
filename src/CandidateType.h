#include "PersonType.h"
#include<string>

const int NUM_OF_CAMPUSES = 4;

class CandidateType : public PersonType 
{
private:
	int totalVotes;
	int votesByCampus[NUM_OF_CAMPUSES];

	std::string formatCandidateInfo(int socialSecurityNumber, std::string firstName, std::string lastName);
	std::string formatCandidateTotalVotes(int tVotes);
	std::string formatCandidateCampusVotes(int campusNum, int* votesPerCampus);

public:
	CandidateType();
	CandidateType(std::string firstName, std::string lastName, int socialSecurityNumber, int allVotes, int* voteByCampusPointer);
	void updateVotesByCampus(int campusNum, int votes);
	int getTotalVotes() const;
	int getVotesByCampus(int campusNum) const;
	void printCandidateInfo();
	void printCandidateTotalVotes();
	void printCandidateCampusVotes(int campusNum);
	~CandidateType();
};
