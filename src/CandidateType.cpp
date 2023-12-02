#include "CandidateType.h"
#include<string>

CandidateType::CandidateType() : PersonType()
{
	for (int i = 0; i < NUM_OF_CAMPUSES; ++i) {
		votesByCampus[i] = 0;
	}
}

CandidateType::CandidateType(std::string firstName, std::string lastName, int socialSecurityNumber, int* voteByCampusPointer) : PersonType(firstName, lastName, socialSecurityNumber) //ok this probably works but still check it out
{
	for (int i = 0; i < NUM_OF_CAMPUSES; ++i) {
		votesByCampus[i] = *(voteByCampusPointer + i);
	}
}

void CandidateType::updateVotesByCampus(int campusNum, int votes)
{
	votesByCampus[campusNum] = votes;
}

int CandidateType::getTotalVotes() const
{
	int total = 0;

	for (int v : votesByCampus) 
		total += v;


	return total;
}

int CandidateType::getVotesByCampus(int campusNum) const
{
	return votesByCampus[campusNum];
}

std::string CandidateType::formatCandidateInfo(int socialSecurityNumber, std::string firstName, std::string lastName) const
{
	std::string output;

	output += formatSSN(socialSecurityNumber);
	output += " - ";
	output += formatName(firstName, lastName);

	return output;
}

void CandidateType::printCandidateInfo()
{
	std::cout << formatCandidateInfo(getSSN(), getFirstName(), getLastName()) << std::endl;
}

std::string CandidateType::formatCandidateTotalVotes(int tVotes) const
{
	std::string output;

	output += "Total votes ( all campuses ) : ";
	output += std::to_string(tVotes);
	
	
	return output;
}

void CandidateType::printCandidateTotalVotes()
{
	std::cout << formatName(getFirstName(), getLastName()) << std::endl;
	std::cout << "    " << formatCandidateTotalVotes(getTotalVotes()) << std::endl;
}

std::string CandidateType::formatCandidateCampusVotes(int campusNum, int* votesPerCampus) const
{
	std::string output;

	output += "Campus ";
	output += std::to_string(campusNum);
	output += " total votes: ";
	output += std::to_string(*(votesPerCampus + campusNum - 1));

	return output;
}

void CandidateType::printCandidateCampusVotes(int campusNum)
{
	std::cout << formatName(getFirstName(), getLastName()) << std::endl;
	std::cout << "    " << formatCandidateCampusVotes(campusNum, votesByCampus) << std::endl;
}


CandidateType::~CandidateType() 
{

}
