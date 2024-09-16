//Name: Nick Francisco
//Class: CS 2020
//This file contains all of the member function declarations and constructors for the
//Appliance, TV, and VCR objects
#include <iostream>
#include <string>
#include "polyapp.h"

using namespace std;

//=====================Aplliance class member functions======================
//-----------------------Appliance Constructor-----------------------------
Appliance::Appliance(string custName, string manuFact)
{
	this->custName = custName;
	this->manuFact = manuFact;
	estCost = 0.0;
}

//-----------------------Appliance EstimateService-----------------------------
void Appliance::estimateService()
{
	estCost = 0.0;
}

//-----------------------Appliance printObject-----------------------------
//Prints the data members of the Appliance base class
void Appliance::printObject()
{
	cout << "Customer Name   : " << custName << endl;
	cout << "Manufacture     : " << manuFact << endl;
	cout << "Estimated Cost  : " << estCost << endl;
}

//Returns the customer name
string Appliance::getCustName()
{
	return custName;
}

//Returns the manufacture
string Appliance::getManuFact()
{
	return manuFact;
}

//Returns the estimated cost
double Appliance::getEstCost()
{
	return estCost;
}

//Sets the customer name
void Appliance::setCustName(string custName)
{
	this->custName = custName;
}

//Sets the manufacture
void Appliance::setManuFact(string manuFact)
{
	this->manuFact = manuFact;
}

//Sets the estimated cost
void Appliance::setEstCost(double estCost)
{
	this->estCost = estCost;
}

//=========================TV class member functions=========================
//-----------------------TV Constructor-----------------------------
//Sets the base class data members with the base class constructor, then sets the TV class data member
TV::TV(string ccustName, string cmanuFact, int cmodelAge) : Appliance(ccustName, cmanuFact)
{
	this->modelAge = cmodelAge;
}

//-----------------------TV EstimateService-----------------------------
//Estimates service charge based on the age of the TV
void TV::estimateService()
{
	if (modelAge >= 6)
	{
		estCost = 150.0;
	}
	else
	{
		estCost = 50.0;
	}
}

//-----------------------TV printObject-----------------------------
//Prints a TV banner, prints the base class information by calling its function, the prints the age of the TV
void TV::printObject()
{
	cout << "-----TV-------" << endl;
	Appliance::printObject();
	cout << "Model Age       : " << modelAge << endl;
}

//Returns model age
int TV::getModelAge()
{
	return modelAge;
}

//Sets model age
void TV::setModelAge(int modelAge)
{
	this->modelAge = modelAge;
}

//====================VCR class member functions=========================
//-----------------------VCR Constructor-----------------------------
//Sets the base class data members by calling its constructor, then sets the VCR data member
VCR::VCR(string ccustName, string cmanuFact, int cnumTapes) : Appliance(ccustName, cmanuFact)
{
	this->numTapes = cnumTapes;
}

//-----------------------VCR EstimateService-----------------------------
//Estimates the service charge based on the number of tapes
void VCR::estimateService()
{
	if (numTapes > 1)
	{
		estCost = 100.0;
	}
	else
	{
		estCost = 40.0;
	}
}

//-----------------------VCR printObject-----------------------------
//Prints a VCR banner, calls the base class print function to print the base class data members, prints the number of tapes
void VCR::printObject()
{
	cout << "-----VCR-------" << endl;
	Appliance::printObject();
	cout << "Number of Tape Drives: " << numTapes << endl;
}

//Returns the number of tapes
int VCR::getNumTapes()
{
	return numTapes;
}

//Sets the number of tapes
void VCR::setNumTapes(int numTapes)
{
	this->numTapes = numTapes;
}













