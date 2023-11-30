#include"CandidateList.h"
#include<iostream>

CandidateList::CandidateList()
{
	count = 0;
	first = nullptr;
	last = nullptr;
}

void CandidateList::addCandidate(CandidateType newCandidate)
{
	if (count == 0)
	{
		first = new Node(newCandidate, nullptr);
		last = first;
	}
	else
	{
		Node* newNode = new Node(newCandidate, nullptr);
		last->setLink(newNode);
		last = newNode;
	}
	count++;
}

CandidateType CandidateList::searchCandidate(int ssn) const
{
	Node* checkNode = first;

	while ( ssn != checkNode->getCandidate().getSSN() && checkNode != nullptr )
		checkNode = checkNode->getLink();
	
	if (checkNode != nullptr)
		return checkNode->getCandidate();
}

CandidateType CandidateList::getWinner() const
{
	CandidateType winner = first->getCandidate();
	
	for (Node* checkNode = first; checkNode != nullptr; checkNode = checkNode->getLink())
		if (checkNode->getCandidate().getTotalVotes() > winner.getTotalVotes()) 
			winner = checkNode->getCandidate(); //this is abhorrent!

	return winner;
}

void CandidateList::printCandidateName(int ssn) const
{
	Node* checkNode = first;

	while (ssn != checkNode->getCandidate().getSSN() && checkNode != nullptr)
		checkNode = checkNode->getLink();

	if (checkNode != nullptr)
		checkNode->getCandidate().printName();
}

void CandidateList::printAllCandidates() const
{
	if (count == 0) {
		std::cout << "=> List is empty." << std::endl;
	}
	else {
		Node* currentNode = first;
		while (currentNode != last) { //might not print last
			currentNode->getCandidate().printCandidateInfo();
			currentNode = currentNode->getLink();
		}
		
	}
}

void CandidateList::printCandidateCampusVotes(int ssn, int division) const
{
	if (count == 0) {
		std::cout << "=> List is empty." << std::endl;
	}
	else {
		Node* currentNode = first;
		while (currentNode->getCandidate().getSSN() != ssn) { //might print 1 before the found person, can add 1 then
			currentNode = currentNode->getLink();
		}
		if (currentNode->getCandidate().getSSN() == ssn) {
			currentNode->getCandidate().printCandidateCampusVotes(division);
      std::cout << std::endl << std::endl;
		}
	}
}

void CandidateList::printCandidateTotalVotes(int ssn) const
{

	if (count == 0) {
		std::cout << "=> List is empty." << std::endl;
	}
	else {
		Node* currentNode = first;
		while (currentNode->getCandidate().getSSN() != ssn) {//might print 1 before the found person, can add 1 then and just solve it real quick
			currentNode = currentNode->getLink();
		}
		if (currentNode->getCandidate().getSSN() == ssn) {
      currentNode->getCandidate().printCandidateTotalVotes();
			std::cout << std::endl << std::endl;
		}
	}
}

void CandidateList::destroyList()
{
	Node* currentNode = first;
	Node* nextNode = currentNode->getLink();

	for (int i = 1; i < count; ++i) {
		delete currentNode;
		currentNode = currentNode->getLink();
	}
}

CandidateList::~CandidateList()
{
	destroyList();
}
