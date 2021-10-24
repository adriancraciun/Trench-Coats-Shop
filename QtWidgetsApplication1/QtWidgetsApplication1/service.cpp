#include "service.h"

Service::Service(std::string file_name)
{
	this->repo = new FileRepository(file_name);
}

Service::~Service()
{
	delete this->repo;
}

int Service::AddTrenchCoatService(TElement t)
{
	return this->repo->AddTrenchCoatRepository(t);
}

int Service::SearchTrenchCoatService(std::string photograph)
{
	return this->repo->SearchTrenchCoatRepository(photograph);
}

int Service::DeleteTrenchCoatService(std::string photograph)
{
	return this->repo->DeleteTrenchCoatRepository(photograph);
}

int Service::UpdateTrenchCoatService(std::string old_photograph, std::string new_photograph)
{
	return this->repo->UpdateTrenchCoatRepository(old_photograph, new_photograph);
}

void Service::InitialiseService()
{
	this->repo->InitialiseRepository();
}
