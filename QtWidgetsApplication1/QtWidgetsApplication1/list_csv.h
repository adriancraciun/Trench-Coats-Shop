#pragma once
#include "repository.h"

class CSVList : public Repository {
public:
	CSVList();
	~CSVList();

	void save(std::vector<TElement> da);
	void open();
};