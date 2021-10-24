#pragma once
#include <iostream>
#include "service.h"
#include "list_csv.h"
#include "list_html.h"

class UI {
private:
	Service* service;
	std::string text_file;
	Repository* list;
public:

	UI();

	~UI();

	void StartUp();

	void PrintFirstMenuUI();

	void PrintSecondMenuUI();

	void PrintThirdMenuUI();

	void PrintFourthMenuUI();

	void AddTrenchCoathUI();

	void DeleteTrenchCoathUI();

	void UpdateTrenchCoathUI();

	void DisplayTrenchCoathsUI();

	void StartAdministratorMode();

	void StartUserMode();

	void PropertyAAdmin(std::string& command, Service* shopping_bag);

	void PropertyXAdmin(Service* shopping_bag);
};
