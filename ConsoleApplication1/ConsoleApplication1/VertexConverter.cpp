#include "VertexConverter.h"


VertexConverter::VertexConverter()
{
	// Simply initializing a vertex converter automatically starts module.
	std::cout << "Running Vertex Converter" << std::endl;
	std::cout << std::endl;

	Prompt();
	Calculate();
	DisplayInfo();
}


VertexConverter::~VertexConverter()
{
	std::cout << "Ending Vertex Converter" << std::endl;
}

void VertexConverter::Prompt()
{
	// Prompt for Sphere Power
	std::cout << "Enter Sphere: ";
	std::cin >> spherePower;

	// Prompt for Cyl Power
	std::cout << "Enter Cyl: ";
	std::cin >> cylPower;

	// Prompt for Axis
	std::cout << "Enter Axis: ";
	std::cin >> axis;

	// Prompt for Distance
	std::cout << "Enter distance(mm): ";
	std::cin >> distance;

	// Calculate Secondary Meridian Power
	this->secondaryPower = spherePower + cylPower;
}

void VertexConverter::Calculate()
{
	//Calculate Effective Sphere, Secondary, and Cyl.
	effectiveSpherePower = spherePower / (1 - ((distance / 1000) * spherePower));
	effectiveSecondaryPower = secondaryPower / (1 - ((distance / 1000) * secondaryPower));
	effectiveCylPower = effectiveSecondaryPower - effectiveSpherePower;
}

void VertexConverter::DisplayInfo()
{
	using namespace std;

	/*
	If cyl is positive we need to add a "+" before displaying Effective Cyl Power.
	If cyl is negative, we only need to display a space before displaying Effective Cyl Power.
	*/
	string space = " + ";
	if (effectiveCylPower < 0)
		space = " ";

	// Display Calculated results.
	cout << endl << "Your prescription vertex converts to: ";
	cout << effectiveSpherePower << space << effectiveCylPower << " x " << axis << endl;
}