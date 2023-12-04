#include"Node.h"
#include"CandidateType.h"

class CandidateList
{
private:
	Node* first;
	Node* last;
	int count;
public: 
	CandidateList();
	void addCandidate(CandidateType newCandidate);
	CandidateType getWinner() const;
	bool searchCandidate(int ssn) const;
	void printCandidateName(int ssn) const;
	void printAllCandidates() const;
	void printCandidateCampusVotes(int ssn, int division) const;
	void printCandidateTotalVotes(int ssn) const;
	void destroyList(); 
	~CandidateList();
};
