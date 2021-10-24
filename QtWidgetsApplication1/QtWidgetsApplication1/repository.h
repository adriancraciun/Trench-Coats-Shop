#pragma once
#include <string>
#include <vector>
#include "domain.h"
#include "trench_coat_validator.h"

typedef TrenchCoat TElement;

class Repository
{
private:
	std::vector<TElement> da;
	TrenchCoatValidator trench_validator;

public:
	/// <summary>
	/// The default constructor for the repository.
	/// </summary>
	Repository();

	/// The destructor of the repository
	~Repository();

	/// <summary>
	/// This function is supposed to add a trench coat to the repository.
	/// </summary>
	/// <param name="t">the trench coat to be added to the repository</param>
	/// <returns>1 if the element was added, -1 if the element already exists</returns>
	int AddTrenchCoatRepository(TElement t);

	/// <summary>
	/// This function is supposed to search for a trench coat in the repository.
	/// </summary>
	/// <param name="photograph">the parameter by which the search looks for, unique for every element</param>
	/// <returns>the position of the element in the repository or -1 if it does not exist</returns>
	int SearchTrenchCoatRepository(std::string photograph);

	/// <summary>
	/// This function is supposed to delete a trench coat from the repository.
	/// </summary>
	/// <param name="photograph">the parameter by which the search looks for, unique for every element</param>
	/// <returns>1 if the deletion was succesful and -1 otherwise</returns>
	int DeleteTrenchCoatRepository(std::string photograph);

	/// <summary>
	/// This function is supposed to update a trench coat from the repository.
	/// </summary>
	/// <param name="old_photograph">the old photograph of the element</param>
	/// <param name="new_photograph">the new photograph of the element</param>
	/// <returns></returns>
	int UpdateTrenchCoatRepository(std::string old_photograph, std::string new_photograph);

	/// <summary>
	/// This function initialises the repository with 10 pre-made elements.
	/// </summary>
	void InitialiseRepository();

	/// <summary>
	/// This function returns the dynamic array fromt the repository.
	/// </summary>
	/// <returns>the dynamic array fromt the repository</returns>
	std::vector<TElement> GetDynamicArray()
	{
		return this->da;
	}

	virtual void open();
	virtual void save(std::vector<TElement> da);
};