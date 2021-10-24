#pragma once
#include "repository.h"
#include "file_repository.h"

class Service {
private:
	std::string file_name;
	FileRepository* repo;

public:
	/// <summary>
	/// The default constructor for the service.
	/// </summary>
	Service(std::string file_name);

	/// The destructor of the service
	~Service();

	/// <summary>
	/// This function is supposed to add a trench coat to the service.
	/// </summary>
	/// <param name="t">the trench coat to be added to the service</param>
	/// <returns>1 if the element was added, -1 if the element already exists</returns>
	int AddTrenchCoatService(TElement t);

	/// <summary>
	/// This function is supposed to search for a trench coat in the service.
	/// </summary>
	/// <param name="photograph">the parameter by which the search looks for, unique for every element</param>
	/// <returns>the position of the element in the service or -1 if it does not exist</returns>
	int SearchTrenchCoatService(std::string photograph);

	/// <summary>
	/// This function is supposed to delete a trench coat from the service.
	/// </summary>
	/// <param name="photograph">the parameter by which the search looks for, unique for every element</param>
	/// <returns>1 if the deletion was succesful and -1 otherwise</returns>
	int DeleteTrenchCoatService(std::string photograph);

	/// <summary>
	/// This function is supposed to update a trench coat from the service.
	/// </summary>
	/// <param name="old_photograph">the old photograph of the element</param>
	/// <param name="new_photograph">the new photograph of the element</param>
	/// <returns></returns>
	int UpdateTrenchCoatService(std::string old_photograph, std::string new_photograph);

	/// <summary>
	/// This function initialises the service with 10 pre-made elements.
	/// </summary>
	void InitialiseService();

	/// <summary>
	/// This function returns the repository from the service.
	/// </summary>
	/// <returns>the repository from the service</returns>
	FileRepository* GetRepository()
	{
		return this->repo;
	}
};