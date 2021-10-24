#include "user_interface.h"
#include <string>
#include "trench_coat_validator.h"
#include "repository_exception.h"

UI::UI()
{
	std::cout << "Please choose a text file in order to read the data: ";
	std::cin >> this->text_file;
	this->service = new Service(text_file);
}

UI::~UI()
{
	delete this->service;
}

void UI::StartUp()
{
	while (true)
	{
		std::string command;
		UI::PrintFirstMenuUI();
		std::cout << "Choose a command from the menu: ";
		std::cin >> command;
		if (command == "A")
			UI::StartAdministratorMode();
		else if (command == "B")
			UI::StartUserMode();
		else if (command == "X")
			exit(0);
		else
			std::cout << "Invalid command!\n";
	}
}

void UI::StartAdministratorMode()
{
	//this->service->InitialiseService();

	std::string command;
	while (true)
	{
		UI::PrintSecondMenuUI();
		std::cout << "Choose a command from the menu: ";
		std::cin >> command;
		if (command == "A")
		{
			UI::AddTrenchCoathUI();
			this->service->GetRepository()->save();
		}
		else if (command == "B")
		{
			UI::DeleteTrenchCoathUI();
			this->service->GetRepository()->save();
		}
		else if (command == "C")
		{
			UI::UpdateTrenchCoathUI();
			this->service->GetRepository()->save();
		}
		else if (command == "D")
			UI::DisplayTrenchCoathsUI();
		else if (command == "X")
			exit(0);
		else
			std::cout << "Invalid command!\n";
	}
}

void UI::StartUserMode()
{
	//this->service->InitialiseService();
	std::string shopping_basket_file;
	std::cout << "Press A if you want to read the shopping basket from a CSV file or B for HTML: ";
	std::cin >> shopping_basket_file;
	while (shopping_basket_file != "A" && shopping_basket_file != "B")
	{
		std::cout << "Wrong command! Please enter A for CSV file or B for html: ";
		std::cin >> shopping_basket_file;
	}

	if (shopping_basket_file == "A")
		this->list = new CSVList;
	else if (shopping_basket_file == "B")
		this->list = new HTMLList;

	Service* shopping_bag = new Service("");


	std::string command;
	while (true)
	{
		UI::PrintThirdMenuUI();
		std::cout << "Choose a command from the menu: ";
		std::cin >> command;
		if (command == "A")
			PropertyAAdmin(command, shopping_bag);
		else if (command == "X")
			PropertyXAdmin(shopping_bag);
		else
			std::cout << "Invalid command!\n";
	}
}

void UI::PropertyAAdmin(std::string& command, Service* shopping_bag)
{
	Service* service_sorted_by_size = new Service("");
	std::cout << "Choose a size to look for: ";
	std::getchar();
	std::getline(std::cin, command);
	std::string trench_size = command;
	int length = this->service->GetRepository()->GetDynamicArray().size();

	if (trench_size == "")
		for (int i = 0; i < length; i++)
		{
			TrenchCoat trench(this->service->GetRepository()->GetDynamicArray()[i]);
			service_sorted_by_size->GetRepository()->GetDynamicArray().push_back(trench);
		}
	else
		for (int i = 0; i < length; i++)
		{
			TrenchCoat trench(this->service->GetRepository()->GetDynamicArray()[i]);
			if (trench.GetSize() == trench_size)
				service_sorted_by_size->AddTrenchCoatService(trench);
		}

	length = service_sorted_by_size->GetRepository()->GetDynamicArray().size();
	for (int i = 0; i < length; )
	{
		std::cout << i + 1 << " ";
		std::cout << service_sorted_by_size->GetRepository()->GetDynamicArray()[i].ToString() << "\n";

		UI::PrintFourthMenuUI();
		std::cout << "Choose a command from the menu: ";
		std::cin >> command;

		if (command == "A")
		{
			TrenchCoat trench(service_sorted_by_size->GetRepository()->GetDynamicArray()[i]);
			shopping_bag->AddTrenchCoatService(trench);
			i++;
			this->list->save(shopping_bag->GetRepository()->GetDynamicArray());
		}
		else if (command == "B")
			i++;
		else if (command == "C")
		{
			std::cout << "\nThe items in your shopping bag are: \n";
			int shopping_bag_length = shopping_bag->GetRepository()->GetDynamicArray().size();
			int shopping_bag_price = 0;
			for (int j = 0; j < shopping_bag_length; j++)
			{
				std::cout << j + 1 << " ";
				TrenchCoat trench(shopping_bag->GetRepository()->GetDynamicArray()[j]);
				std::cout << trench.ToString() << "\n";

				shopping_bag_price += stoi(trench.GetPrice());
			}
			std::cout << "\nThe total price in the shopping bag is: " << shopping_bag_price << '\n';
			std::cout << "Done displaying the shopping items. You can get back to the products.\n\n";
		}
		else if (command == "D")
		{
			this->list->open();
		}
		else if (command == "X")
		{
			delete service_sorted_by_size;
			delete shopping_bag;
			exit(0);
		}
		else
			std::cout << "Invalid command!\n";
	}

	delete service_sorted_by_size;
}


void UI::PropertyXAdmin(Service* shopping_bag)
{
	delete shopping_bag;
	exit(0);
}

void UI::PrintFirstMenuUI()
{
	std::cout << "\nPress A in order to start up administrator mode.\n" 
		<< "Press B in order to start up user mode.\n" 
		<< "Press X in order to close the program.\n";
}

void UI::PrintSecondMenuUI()
{
	std::cout << "\nPress A in order to add a trench coat.\n"
		<< "Press B in order to remove a trench coat.\n"
		<< "Press C in order to update a trench coat.\n"
		<< "Press D in order to display all trench coats.\n"
		<< "Press X in order to close the program.\n";
}

void UI::PrintThirdMenuUI()
{
	std::cout << "\nPress A in order to display the trench coats.\n"
		<< "Press X in order to close the program.\n";
}

void UI::PrintFourthMenuUI()
{
	std::cout << "\nPress A in order to add the trench coat to the shopping basket.\n"
		<< "Press B in order to not add the trench coat from the shopping basket.\n"
		<< "Press C in order to display the shopping basket.\n"
		<< "Press D in order to display the shopping basket in its app.\n"
		<< "Press X in order to close the program.\n";
}

void UI::AddTrenchCoathUI()
{
	std::string size, colour;
	std::string price;
	std::string photograph;

	std::cout << "Please choose the size of the new trench: ";
	std::cin >> size;
	std::cout << "Please choose the colour of the new trench: ";
	std::cin >> colour;
	std::cout << "Please choose the price of the new trench: ";
	std::cin >> price;
	std::cout << "Please choose the photograph of the new trench: ";
	std::cin >> photograph;

	TrenchCoat trench(size, colour, price, photograph);

	try {
		int validate = service->AddTrenchCoatService(trench);
		if (validate == -1)
			std::cout << "A trench with the given photograph already exists.";
	}
	catch (TrenchCoatException& e)
	{
		for (auto error : e.getErrors())
			std::cout << error;
	}
	catch (RepositoryException& repo_error)
	{
		std::cout << repo_error.what();
	}
}

void UI::DeleteTrenchCoathUI()
{
	std::string photograph;
	std::cout << "Please choose the photograph of the trench that you want to delete: ";
	std::cin >> photograph;

	int validate = service->DeleteTrenchCoatService(photograph);
	if (validate == -1)
		std::cout << "There are no trenches with the given photograph in the list.";
}

void UI::UpdateTrenchCoathUI()
{
	std::string old_photograph;
	std::string new_photograph;
	std::cout << "Please choose the photograph of the trench that you want to update: ";
	std::cin >> old_photograph;
	std::cout << "Please choose the photograph of the trench that you want to update with: ";
	std::cin >> new_photograph;

	int validate = service->UpdateTrenchCoatService(old_photograph, new_photograph);
	if (validate == -1)
		std::cout << "A trench coat with the given name does not exist!";
}

void UI::DisplayTrenchCoathsUI()
{
	int length = this->service->GetRepository()->GetDynamicArray().size();
	for (int i = 0; i < length; i++)
	{
		std::cout << i + 1 << " ";
		std::cout << this->service->GetRepository()->GetDynamicArray()[i].ToString() << "\n";
	}
}
