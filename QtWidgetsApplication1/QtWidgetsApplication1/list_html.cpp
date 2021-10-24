#include "list_html.h"
#include <fstream>
#include <Windows.h>


HTMLList::HTMLList()
{

}

HTMLList::~HTMLList()
{
}

void HTMLList::save(std::vector<TElement> da)
{
	std::ofstream fout("list.html");
	fout << "<!DOCTYPE html>" << "\n";
	fout << "<html>" << "\n";

	fout << "<head>" << "\n";
	fout << "<title>Trench Coats List</title>" << "\n";
	fout << "</head>" << "\n";

	fout << "<body>" << "\n";
	fout << "<table border=\"1\">" << "\n";

	fout << "<tr>" << "\n";
	fout << "<td>Size</td>" << "\n";
	fout << "<td>Colour</td>" << "\n";
	fout << "<td>Price</td>" << "\n";
	fout << "<td>Photograph</td>" << "\n";
	fout << "</tr>" << "\n";

	for (auto i : da)
	{
		fout << "<tr>" << "\n";

		fout << "<td>" << i.GetSize() << "</td>" << "\n";
		fout << "<td>" << i.GetColour() << "</td>" << "\n";
		fout << "<td>" << i.GetPrice() << "</td>" << "\n";
		fout << "<td><a href =" << i.GetPhotograph() << ">Link</a></td>";

		fout << "</tr>" << "\n";
	}
	fout << "</table>" << "\n";
	fout << "</body>" << "\n";
	fout << "</html>" << "\n";
	fout.close();
}

void HTMLList::open()
{
	ShellExecuteA(NULL, "open", "list.html", NULL, NULL, SW_SHOWMAXIMIZED);
}
