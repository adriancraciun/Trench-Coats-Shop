#pragma once
#include "repository.h"
#include <string>

class FileRepository : public Repository
{
private:
	std::string file_name;
	void load();

public:
	void save();
	FileRepository();
	FileRepository(const std::string& file_name) : Repository()
	{
		this->file_name = file_name;
		this->load();
	}
	FileRepository(const FileRepository& r);
	~FileRepository();
};