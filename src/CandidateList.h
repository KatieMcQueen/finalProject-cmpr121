#include"Node.h"
#include"CandidateType.h"

class CandidateList
{
private:
	Node* first;
	Node* last;
	int count;
public: //Figure out what should be const laterrrrr.....
	//JD starts here
	CandidateList();
	void addCandidate(CandidateType newCandidate);
	CandidateType getWinner() const;
	bool searchCandidate(int ssn) const;
	void printCandidateName(int ssn) const;
	//Dylan starts here
	void printAllCandidates() const;
	void printCandidateCampusVotes(int ssn, int division) const;
	void printCandidateTotalVotes(int ssn) const;
	void destroyList(); //could be private ig but lets leave it here for now 
	~CandidateList();
};