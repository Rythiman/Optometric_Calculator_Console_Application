#pragma once
#include<iostream>
#include<string>
class VertexConverter
{
private:
	double effectiveSpherePower;
	double effectiveCylPower;
	double effectiveSecondaryPower;
	double spherePower;
	double cylPower;
	double secondaryPower;
	double distance;
	short axis;
public:
	VertexConverter();
	~VertexConverter();
	void Prompt();
	void Calculate();
	void DisplayInfo();
};

