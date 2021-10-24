#include "repository_exception.h"

RepositoryException::RepositoryException()
{
	this->message = "";
}

RepositoryException::RepositoryException(const std::string& msg)
{
	this->message = msg;
}

RepositoryException::~RepositoryException()
{
}

const char* RepositoryException::what()
{
	return this->message.c_str();
}

const char* DuplicateTrenchCoatException::what()
{
	return "A trench coat with this photograph already exists! \n";
}
