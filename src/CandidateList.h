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
	CandidateType getWinner();
	CandidateType searchCandidate(int ssn);
	void printCandidateName(int ssn);
	//Dylan starts here
	void printAllCandidates();
	void printCandidateCampusVotes(int ssn, int division);
	void printCandidateTotalVotes(int ssn);
	void destroyList(); //could be private ig but lets leave it here for now 
	~CandidateList();
};