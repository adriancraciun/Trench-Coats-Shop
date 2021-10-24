#include <iostream>
#include "user_interface.h"
#include "tests.h"

void Tests();

int main_project()
{
	//Tests();
	UI userInterface;
	userInterface.StartUp();
}

void Tests()
{
	Test t;
	t.TestDomain();
	t.TestRepository();
	t.TestService();
}