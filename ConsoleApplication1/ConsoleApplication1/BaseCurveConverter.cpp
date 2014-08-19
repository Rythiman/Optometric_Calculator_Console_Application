#include "BaseCurveConverter.h"


BaseCurveConverter::BaseCurveConverter()
{
	std::cout << "Starting Base Curve Converter..." << std::endl;
	double input;
	std::cout << "Enter Base Curve or Diopter: ";
	std::cin >> input;
	std::cout << std::endl;
	std::cout << "Calculated value: " << convert(input) << std::endl;
}


BaseCurveConverter::~BaseCurveConverter()
{
	std::cout << "End Base Curve Converter" << std::endl;
}

double BaseCurveConverter::convert(double value)
{
	return CONSTANT / value;
}