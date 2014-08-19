#include"VertexConverter.h"
#include"BaseCurveConverter.h"

std::string selection;

// To check if program is done.
bool done;

void println(std::string line);
void prompt_response();
void display_selection();
void run_selection();

int main()
{
	done = false;
	println("Welcome to Optometric Calcultor!");

	/*
	User must explicitely signal to the program that he/she is done
	or the user must input an invalid response before the program
	terminates.
	*/
	while (!done)
		prompt_response();
}

void prompt_response()
{
	// Prompt user to select a module to run.
	display_selection();

	// Run selected module.
	run_selection();
}

void display_selection()
{
	std::cout << std::endl;
	println("Select Module:");
	println("1: Vertex Converter");
	println("2: Base Curve Calculator");
	println("3: Bitoric Fit Calculator");
	println("4: Prism Rx Calculator");
	println("5: Calculated AC/A");
	std::cout << "Selection: ";
	std::cin >> selection;
}

void run_selection()
{
	if (selection == "0")
	{
		done = true;
	}
	else if (selection == "1")
	{
		// Contruct a vertex converter.
		VertexConverter vertexConverter;
	}
	else if (selection == "2")
	{
		// Construct a base curve converter
		BaseCurveConverter baseCurverConverter;
	}
	else if (selection == "3")
	{
		//::TODO Bitoric Fit
	}
	else if (selection == "4")
	{
		//::TODO Prism Rx
	}
	else if (selection == "5")
	{
		//::TODO Calculated AC/A
	}
	else
	{
		done = true;
	}
}

void println(std::string line)
{
	std::cout << line << std::endl;
}