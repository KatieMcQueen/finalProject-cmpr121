#include "PersonType.h"

const int NUM_OF_CAMPUSES = 4;

class CandidateType : public PersonType {
private:
	int totalVotes;
	int votesByCampus[NUM_OF_CAMPUSES];


public:
	CandidateType();
	CandidateType(std::string firstName, std::string lastName, int socialSecurityNumber, int allVotes, int* voteByCampusPointer);
	void updateVotesByCampus(int campusNum, int votes);
	int getTotalVotes() const;
	int getVotesByCampus(int campusNum) const;
	std::string formatCandidateInfo(int socialSecurityNumber, std::string firstName, std::string lastName);
	void printCandidateInfo();
	std::string formatCandidateTotalVotes(int tVotes);
	void printCandidateTotalVotes();
	std::string formatCandidateCampusVotes(int campusNum, int* votesPerCampus);
	void printCandidateCampusVotes(int campusNum);
	~CandidateType();
};