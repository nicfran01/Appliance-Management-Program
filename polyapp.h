//Name: Nick Francisco
//Class: CS 2020
//This file contains all of the function and constructor definitions for the Appliance,
//TV, and VCR objects.
#include <iostream>
#include <string>

using namespace std;

//=========================Appliance class definition=========================
//-----------------------------------------------------------------------
class Appliance
{
	//Base class data members
	protected:
		string custName;
		string manuFact;
		double estCost;
	//Base class functions and constructor definitions
	public:
		Appliance(string custName = "none", string manuFact = "none");

		string getCustName();
		string getManuFact();
		double getEstCost();

		void setCustName(string custName);
		void setManuFact(string manuFact);
		void setEstCost(double estCost);

		virtual void estimateService();
		virtual void printObject();
};

//-----------------------------------------------------------------------
//=========================TV class definition=========================
//-----------------------------------------------------------------------
class TV : public Appliance
{
	//TV data member
	private:
		int modelAge;
	//TV constructor and function definitions
	public:
		TV(string ccustName, string cmanuFact, int cmodelAge);

		int getModelAge();
		void setModelAge(int modelAge);

		virtual void estimateService();
		virtual void printObject();
};

//-----------------------------------------------------------------------
//=========================VCR class definition=========================
//-----------------------------------------------------------------------
class VCR : public Appliance
{
	//VCR data member
	private:
		int numTapes;
	//VCR constructor and function definitions
	public:
		VCR(string ccustName, string cmanuFact, int cnumTapes);

		int getNumTapes();
		void setNumTapes(int numTapes);

		virtual void estimateService();
		virtual void printObject();
};
//-----------------------------------------------------------------------
