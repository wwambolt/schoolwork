
// Adapter (object) pattern -- Chemical Compounds
// -- revised 
// 
// -- from code found at 
// http://www.dofactory.com/Patterns/PatternAdapter.aspx
//
// Author: William Wambolt 100097716
 
#include <iostream>

#include <string>
#include <cctype>
using namespace std;


// The "Target" class
// (the interface we need)
class Compound
{
	protected:
		string _chemical;
		float _boilingPoint;
		float _meltingPoint;
		double _molecularWeight;
		string _molecularFormula;

	public:
		Compound(string chemical)
		{
			this->_chemical = chemical;
		}

		virtual void Display()
		{
			cout << "\nCompound: " << _chemical << " ------ \n";
		}
};

// assistant function
void toLower(string& s)
{
	for (unsigned int i = 0; i < s.length(); ++i)
        s[i] = tolower(s[i]);
}

// The 'Adaptee' class
// (the old interface we want to adapt)
class ChemicalDatabank
{    
    public:
		float GetCriticalPoint(string compound, string point)
		{
			toLower(compound);
	        // Melting Point
			if (point == "M")
			{
				if (compound == "water") return 0.0f;
				if (compound == "benzene") return 5.5f;
				if (compound == "ethanol") return -114.1f;
				return 0.0f;
			}
	        // Boiling Point
			else
			{
				if (compound == "water") return 100.0f;
				if (compound == "benzene") return 80.1f;
				if (compound == "ethanol") return 78.3f;
				return 0.0f;
			}
		}

		string GetMolecularStructure(string compound)
		{
			toLower(compound);
			if (compound == "water") return "H20";
			if (compound == "benzene") return "C6H6";
			if (compound == "ethanol") return "C2H5OH";
			return "";
		}

		double GetMolecularWeight(string compound)
		{
			toLower(compound);
			if (compound == "water") return 18.015;
			if (compound == "benzene") return 78.1134;
			if (compound == "ethanol") return 46.0688;
			return 0.0;
		}
};

// The 'Adapter' class
// (the implementation of the interface)
// object adapter pattern contained instance of adaptee object
    // object adapter is composition-based
// modified class adapter does not contain instance of adaptee object
    // class adapter is inheritance-based 
class RichCompound : public Compound, private ChemicalDatabank
{
    public:
    	// Constructor
	    RichCompound(string name) : Compound(name)
	    {
			_boilingPoint = GetCriticalPoint(_chemical, "B");
			_meltingPoint = GetCriticalPoint(_chemical, "M");
			_molecularWeight = GetMolecularWeight(_chemical);
			_molecularFormula = GetMolecularStructure(_chemical);
	    }

		virtual void Display()
		{
			Compound::Display();
			cout << " Formula: " << _molecularFormula << endl;
			cout << " Weight : " << _molecularWeight << endl;
			cout << " Melting Pt: " << _meltingPoint << endl;
			cout << " Boiling Pt: " << _boilingPoint << endl;
		}
};

int main()
{
    // Non-adapted chemical compound
	Compound* unknown = new Compound("Unknown");  
	unknown->Display();

    // Adapted chemical compounds 
	Compound* water = new RichCompound("Water");
	water->Display();  
	Compound* benzene = new RichCompound("Benzene");  
	benzene->Display();
	Compound* ethanol = new RichCompound("Ethanol"); 
	ethanol->Display();

    // Wait for user
	cout << "\nPress Enter key to finish...";
	cin.ignore(100, '\n');
}