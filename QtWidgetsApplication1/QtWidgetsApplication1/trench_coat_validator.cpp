#include "trench_coat_validator.h"

TrenchCoatValidator::TrenchCoatValidator()
{
}

TrenchCoatValidator::~TrenchCoatValidator()
{
}

void TrenchCoatValidator::validate_trench_coat(TrenchCoat t)
{
	std::vector<std::string> errors;

	if (t.GetPrice() < "0")
		errors.push_back("The price can not be negattive.\n");

	if (t.GetSize() != "XXS" && t.GetSize() != "XS" && t.GetSize() != "S" && t.GetSize() != "M" && t.GetSize() != "L" && t.GetSize() != "XL" && t.GetSize() != "XXL" && t.GetSize() != "XXXL")
		errors.push_back("The size is invalid!\n");


	int e1 = t.GetPhotograph().find("www");
	int e2 = t.GetPhotograph().find("http");
	if (e1 != 0 && e2 != 0)
		errors.push_back("The link of the photograph must start with 'www' or 'http'!\n");

	if (errors.size() > 0)
		throw TrenchCoatException(errors);
}

TrenchCoatException::TrenchCoatException(std::vector<std::string> errors_)
{
	this->errors = errors_;
}

std::vector<std::string> TrenchCoatException::getErrors() const
{
	return this->errors;
}
