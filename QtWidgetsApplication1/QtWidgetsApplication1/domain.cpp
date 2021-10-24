#include "domain.h"
#include <sstream>

TrenchCoat::TrenchCoat()
{
	this->size = "";
	this->colour = "";
	this->price = "";
	this->photograph = "";
}

TrenchCoat::TrenchCoat(std::string size, std::string colour, std::string price, std::string photograph)
{
	this->size = size;
	this->colour = colour;
	this->price = price;
	this->photograph = photograph;
}

TrenchCoat::TrenchCoat(const TrenchCoat& tc)
{
	this->size = tc.size;
	this->colour = tc.colour;
	this->price = tc.price;
	this->photograph = tc.photograph;
}

TrenchCoat::~TrenchCoat()
{}

void TrenchCoat::SetSize(std::string new_size)
{
	this->size = new_size;
}

void TrenchCoat::SetColour(std::string new_colour)
{
	this->colour = new_colour;
}

void TrenchCoat::SetPrice(std::string new_price)
{
	this->price = new_price;
}

void TrenchCoat::SetPhotograph(std::string new_photograph)
{
	this->photograph = new_photograph;
}

std::string TrenchCoat::ToString()
{
	std::stringstream text;
	text << "size: " << this->size << " colour: " << this->colour << " price: " << this->price << " photograph: " << this->photograph;
	return text.str();
}

std::ostream& operator<<(std::ostream& stream, const TrenchCoat& d)
{
	stream << d.size << ',' << d.colour << ',' << d.price << ',' << d.photograph << std::endl;
	return stream;
}

std::istream& operator>>(std::istream& stream, TrenchCoat& d)
{
	getline(stream, d.size, ',');
	getline(stream, d.colour, ',');
	getline(stream, d.price, ',');
	getline(stream, d.photograph);

	return stream;
}
