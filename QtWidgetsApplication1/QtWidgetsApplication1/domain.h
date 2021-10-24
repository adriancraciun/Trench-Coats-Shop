#pragma once
#include <iostream>

class TrenchCoat {
private:
	std::string size;
	std::string colour;
	std::string price;
	std::string photograph;

public:
	/// <summary>
	/// The default constructor for the domain.
	/// </summary>
	TrenchCoat();

	/// <summary>
	/// The constructor with parameters for the domain.
	/// </summary>
	/// <param name="size">the size for the trench coat</param>
	/// <param name="colour">the colour for the trench coat</param>
	/// <param name="price">the name for the trench coat</param>
	/// <param name="photograph">the photograph for the trench coat</param>
	TrenchCoat(std::string size, std::string colour, std::string price, std::string photograph);

	/// <summary>
	/// The copy constructor for the domain.
	/// </summary>
	/// <param name="tc">another TrenchCoat</param>
	TrenchCoat(const TrenchCoat& tc);

	/// The destructor of the domain.
	~TrenchCoat();

	/// <summary>
	/// This function is supposed to get the size of the trench coat.
	/// </summary>
	/// <returns>the size of the trench coat</returns>
	std::string GetSize()
	{
		return this->size;
	}

	/// <summary>
	/// This function is supposed to get the colour of the trench coat.
	/// </summary>
	/// <returns>the colour of the trench coat</returns>
	std::string GetColour()
	{
		return this->colour;
	}

	/// <summary>
	/// This function is supposed to get the price of the trench coat.
	/// </summary>
	/// <returns>the price of the trench coat</returns>
	std::string GetPrice()
	{
		return this->price;
	}

	/// <summary>
	/// This function is supposed to get the photograph of the trench coat.
	/// </summary>
	/// <returns>the photograph of the trench coat</returns>
	std::string GetPhotograph()
	{
		return this->photograph;
	}

	/// <summary>
	/// This function is supposed to set the size of the trench coat.
	/// </summary>
	/// <param name="new_size">the new size for the trench coat</param>
	void SetSize(std::string new_size);

	/// <summary>
	/// This function is supposed to set the colour of the trench coat.
	/// </summary>
	/// <param name="new_colour">the new colour for the trench coat</param>
	void SetColour(std::string new_colour);

	/// <summary>
	/// This function is supposed to set the price of the trench coat.
	/// </summary>
	/// <param name="new_price">the new price for the trench coat</param>
	void SetPrice(std::string new_price);

	/// <summary>
	/// This function is supposed to set the photograph of the trench coat.
	/// </summary>
	/// <param name="new_photograph">the new photograph for the trench coat</param>
	void SetPhotograph(std::string new_photograph);

	/// <summary>
	/// This function is supposed to return a string that helps the writing of the domain.
	/// </summary>
	/// <returns>string that helps the writing of the domain</returns>
	std::string ToString();

	friend std::ostream& operator<<(std::ostream& stream, const TrenchCoat& d);
	friend std::istream& operator>>(std::istream& stream, TrenchCoat& d);
};