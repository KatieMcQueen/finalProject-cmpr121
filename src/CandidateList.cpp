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

CandidateType CandidateList::searchCandidate(int ssn)
{
	Node* checkNode = first;

	while ( ssn != checkNode->getCandidate().getSSN() && checkNode != nullptr )
		checkNode = checkNode->getLink();
	
	if (checkNode == nullptr)
		;//not found
	else
		return checkNode->getCandidate();
}

CandidateType CandidateList::getWinner()
{
	CandidateType winner = first->getCandidate();
	
	for (Node* checkNode = first; checkNode != nullptr; checkNode = checkNode->getLink())
		if (checkNode->getCandidate().getTotalVotes() > winner.getTotalVotes()) 
			winner = checkNode->getCandidate(); //this is abhorrent!

	return winner;
}

void CandidateList::printCandidateName(int ssn)
{
	Node* checkNode = first;

	while (ssn != checkNode->getCandidate().getSSN() && checkNode != nullptr)
		checkNode = checkNode->getLink();

	if (checkNode != nullptr)
		checkNode->getCandidate().printName();
}