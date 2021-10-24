#include "repository.h"
#include <vector>
#include "trench_coat_validator.h"
#include "repository_exception.h"

Repository::Repository()
{
	this->da = std::vector<TElement>();
	this->trench_validator = TrenchCoatValidator();
}

Repository::~Repository()
{}

int Repository::SearchTrenchCoatRepository(std::string photograph)
{
	auto i = [&photograph](TrenchCoat c) {return c.GetPhotograph() == photograph;  };
	auto it = std::find_if(this->da.begin(), this->da.end(), i);
	if (it != this->da.end())
		return it - this->da.begin();
	return -1;
}

int Repository::AddTrenchCoatRepository(TElement t)
{
	if (Repository::SearchTrenchCoatRepository(t.GetPhotograph()) != -1)
		throw DuplicateTrenchCoatException();

	this->trench_validator.validate_trench_coat(t);
	this->da.push_back(t);
	return 1;
}

int Repository::DeleteTrenchCoatRepository(std::string photograph)
{
	int position = SearchTrenchCoatRepository(photograph);
	if (position == -1)
		return -1;

	this->da.erase(this->da.begin() + position);
	return 1;
}

int Repository::UpdateTrenchCoatRepository(std::string old_photograph, std::string new_photograph)
{
	int position = SearchTrenchCoatRepository(old_photograph);
	if (position == -1)
		return -1;

	this->da[position].SetPhotograph(new_photograph);
	return 1;
}

void Repository::InitialiseRepository()
{
	std::string size = "XS";
	std::string colour = "blue";
	std::string price = "100";
	std::string photograph = "https://www.reserved.com/ro/ro/3243g-55x/bluzka-k-bjt";
	TrenchCoat t1{ size, colour, price, photograph };
	this->da.push_back(t1);

	size = "S";
	colour = "black";
	price = "80";
	photograph = "https://www.reserved.com/ro/ro/3243g-99x/bluzka-k-bjt";
	TrenchCoat t2{ size, colour, price, photograph };
	this->da.push_back(t2);

	size = "M";
	colour = "black";
	price = "120";
	photograph = "https://www.reserved.com/ro/ro/3243g-00x/bluzka-k-bjt";
	TrenchCoat t3{ size, colour, price, photograph };
	this->da.push_back(t3);

	size = "L";
	colour = "green";
	price = "150";
	photograph = "https://www.reserved.com/ro/ro/5806b-01x/bluzka-k-re";
	TrenchCoat t4{ size, colour, price, photograph };
	this->da.push_back(t4);

	size = "XL";
	colour = "red";
	price = "140";
	photograph = "https://www.reserved.com/ro/ro/0104c-99x/koszulka-k-re";
	TrenchCoat t5{ size, colour, price, photograph };
	this->da.push_back(t5);

	size = "S";
	colour = "pink";
	price = "180";
	photograph = "https://www.reserved.com/ro/ro/7591b-01x/bluzka-k-re";
	TrenchCoat t6{ size, colour, price, photograph };
	this->da.push_back(t6);

	size = "XXS";
	colour = "orange";
	price = "90";
	photograph = "https://www.reserved.com/ro/ro/7591b-03x/bluzka-k-re";
	TrenchCoat t7{ size, colour, price, photograph };
	this->da.push_back(t7);

	size = "L";
	colour = "cyan";
	price = "200";
	photograph = "https://www.reserved.com/ro/ro/7909b-mlc/koszulka-k-re";
	TrenchCoat t8{ size, colour, price, photograph };
	this->da.push_back(t8);

	size = "XL";
	colour = "lime";
	price = "190";
	photograph = "https://www.reserved.com/ro/ro/7909b-03x/koszulka-k-re";
	TrenchCoat t9{ size, colour, price, photograph };
	this->da.push_back(t9);

	size = "XXL";
	colour = "green";
	price = "160";
	photograph = "https://www.reserved.com/ro/ro/yt863-99x/koszulka-k-re";
	TrenchCoat t10{ size, colour, price, photograph };
	this->da.push_back(t10);
}

void Repository::open()
{
}

void Repository::save(std::vector<TElement> da)
{
}
