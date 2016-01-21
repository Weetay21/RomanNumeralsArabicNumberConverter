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

	//Roman Numeral Values in Arabic
	int m  = 1000; 
	int cm = 900;
	int d  = 500;
	int cd = 400;
	int c  = 100;
	int xc = 90;
	int l  = 50;
	int xl = 40;
	int x  = 10;
	int ix = 9;
	int v  = 5;
	int iv = 4;
	int i  = 1;

	while (_inputNumber >= m)
	{
		m_sRomanNumeral.append("M");
		_inputNumber -= m;
	}
	while (_inputNumber >= d)
	{
		m_sRomanNumeral.append("D");
		_inputNumber -= d;
	}
	while (_inputNumber >= c)
	{
		m_sRomanNumeral.append("C");
		_inputNumber -= c;
	}
	while (_inputNumber >= l)
	{
		m_sRomanNumeral.append("L");
		_inputNumber -= l;
	}
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
		_inputNumber -= m;
	}
	while (_inputNumber >= i)
	{
		m_sRomanNumeral.append("I");
		_inputNumber -= i;
	}

	return m_sRomanNumeral;
}

#endif