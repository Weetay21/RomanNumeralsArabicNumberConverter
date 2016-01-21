#ifndef CONVERTER_H_
#define CONVERTER_H_

#include <iostream>
#include <string>
using namespace std;


class Converter{



public:

	Converter();
	~Converter();

	//Data Members
	string m_sRomanNumeral;
	//Functions
	string ConverterArabicToRoman(int _inputNumber);
	
private:

};

Converter::Converter()
{
}

Converter::~Converter()
{
	
}

string Converter::ConverterArabicToRoman(int _inputNumber)
{
	m_sRomanNumeral.clear();

	while((_inputNumber -= 1) >=0)
	{
		m_sRomanNumeral.append("I");
	}
	return m_sRomanNumeral;
}

#endif