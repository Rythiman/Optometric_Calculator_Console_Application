#pragma once
#include<iostream>
class BaseCurveConverter
{
private:
	double baseCurve;
	const double CONSTANT = 337.5;
public:
	BaseCurveConverter();
	~BaseCurveConverter();
	double convert(double value);
};

