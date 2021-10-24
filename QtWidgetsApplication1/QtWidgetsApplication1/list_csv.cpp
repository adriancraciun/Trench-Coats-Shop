#include "list_csv.h"
#include <fstream>

CSVList::CSVList()
{
}

CSVList::~CSVList()
{
}

void CSVList::save(std::vector<TElement> da)
{
	std::ofstream fout("list.csv");
	for (auto i : da)
		fout << i;
	fout.close();
}

void CSVList::open()
{
	system("notepad.exe list.csv");
}
