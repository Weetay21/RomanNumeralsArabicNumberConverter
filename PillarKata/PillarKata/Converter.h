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

	//Roman Numeral Values in 
	 int x  = 10;
	 int ix = 9;
	 int v  = 5;
	 int iv = 4;
	 int i	= 1;

	 while (_inputNumber >= x)
	 {
		 m_sRomanNumeral.append("X");
		 _inputNumber -= x;
	 }
	 while(_inputNumber >= ix)
	 {
		 m_sRomanNumeral.append("IX");
		 _inputNumber -= ix;
	 }
	 while (_inputNumber >= v)
	 {
		 m_sRomanNumeral.append("V");
		 _inputNumber -= v;
	 }
	 while (_inputNumber >= iv)
	 {
		 m_sRomanNumeral.append("IV");
		 _inputNumber -= iv;
	 }
	 while (_inputNumber >= i)
	 {
		 m_sRomanNumeral.append("I");
		 _inputNumber -= i;
	 }

	 return m_sRomanNumeral;
}

#endif