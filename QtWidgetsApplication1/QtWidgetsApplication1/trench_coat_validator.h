#pragma once
#include "domain.h"
#include <exception>
#include <vector>

class TrenchCoatValidator
{
public:
	TrenchCoatValidator();
	~TrenchCoatValidator();

	void validate_trench_coat(TrenchCoat t);
};

class TrenchCoatException
{
private:
	std::vector<std::string> errors;
public:
	TrenchCoatException(std::vector<std::string> errors_);
	std::vector<std::string> getErrors() const;
};