#pragma once
#include "repository.h"

class HTMLList : public Repository {
public:
	HTMLList();
	~HTMLList();

	void save(std::vector<TElement> da);
	void open();
};
