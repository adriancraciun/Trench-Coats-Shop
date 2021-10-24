#include "file_repository.h"
#include <fstream>

void FileRepository::load()
{
	std::ifstream fin(this->file_name);
	TrenchCoat t;
	while (fin >> t)
		this->AddTrenchCoatRepository(t);

	fin.close();
}

void FileRepository::save()
{
	std::ofstream fout(this->file_name);
	for (auto t : this->GetDynamicArray())
		fout << t;
	fout.close();
}

FileRepository::FileRepository()
{}

FileRepository::FileRepository(const FileRepository& r)
{
	this->file_name = r.file_name;
	load();
}

FileRepository::~FileRepository()
{}
