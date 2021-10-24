#include "tests.h"
#include <assert.h>

void Test::TestDomain()
{
	TrenchCoat t0;

	std::string size = "XS";
	std::string colour = "blue";
	std::string price = "100";
	std::string photograph = "https://www.reserved.com/ro/ro/3243g-55x/bluzka-k-bjt";
	TrenchCoat t1{ size, colour, price, photograph };

	size = "S";
	colour = "black";
	price = "80";
	photograph = "https://www.reserved.com/ro/ro/3243g-99x/bluzka-k-bjt";
	TrenchCoat t2{ size, colour, price, photograph };

	size = "M";
	colour = "black";
	price = "120";
	photograph = "https://www.reserved.com/ro/ro/3243g-00x/bluzka-k-bjt";
	TrenchCoat t3{ size, colour, price, photograph };

	t3 = t2;
	assert(t3.GetColour() == t2.GetColour());

	assert(t1.GetSize() == "XS");
	assert(t1.GetColour() == "blue");
	assert(t1.GetPrice() == "100");
	assert(t1.GetPhotograph() == "https://www.reserved.com/ro/ro/3243g-55x/bluzka-k-bjt");

	t1.SetSize("S");
	t1.SetColour("red");
	t1.SetPrice("1000");
	t1.SetPhotograph("https://www.reserved.com/ro/ro/3243g-99x/bluzka-k-bjt"); 

	t1.ToString();
}

void Test::TestRepository()
{
	std::string size = "XS";
	std::string colour = "blue";
	std::string price = "100";
	std::string photograph = "https://www.reserved.com/ro/ro/3243g-55x/bluzka-k-bjt";
	TrenchCoat t1{ size, colour, price, photograph };

	Repository r1;
	r1.AddTrenchCoatRepository(t1);
	r1.SearchTrenchCoatRepository(t1.GetPhotograph());
	r1.DeleteTrenchCoatRepository(t1.GetPhotograph());

	r1.AddTrenchCoatRepository(t1);
	r1.UpdateTrenchCoatRepository("https://www.reserved.com/ro/ro/3243g-55x/bluzka-k-bjt", "asd");
	r1.DeleteTrenchCoatRepository(t1.GetPhotograph());

	r1.InitialiseRepository();
	r1.GetDynamicArray();
}

void Test::TestService()
{
	std::string file_name = "";
	Service s1(file_name);
	std::string size = "XS";
	std::string colour = "blue";
	std::string price = "100";
	std::string photograph = "https://www.reserved.com/ro/ro/3243g-55x/bluzka-k-bjt";
	TrenchCoat t1{ size, colour, price, photograph };

	s1.AddTrenchCoatService(t1);
	s1.SearchTrenchCoatService(t1.GetPhotograph());
	s1.DeleteTrenchCoatService(t1.GetPhotograph());

	s1.AddTrenchCoatService(t1);
	s1.UpdateTrenchCoatService("https://www.reserved.com/ro/ro/3243g-55x/bluzka-k-bjt", "asd");
	s1.DeleteTrenchCoatService(t1.GetPhotograph());

	s1.InitialiseService();
	s1.GetRepository();
}
