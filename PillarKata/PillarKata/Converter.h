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
	int m_nArabicNumber;
	//Functions
	string ConverterArabicToRoman(int _inputNumber);
	int ConverterRomanToArabic(string _inputString);

private:

};

Converter::Converter()
{
}

Converter::~Converter()
{

}

int Converter::ConverterRomanToArabic(string _inputString)
{
	m_nArabicNumber = 0;

	for (int i = 0; i < _inputString.size(); ++i)
	{
		if (_inputString[i] != _inputString.back())
		{


			if (_inputString[i] == (char)'I')
			{
				if (_inputString[i + 1] != 'I')
				{
					m_nArabicNumber -= 1;
				}
				else
				{
					m_nArabicNumber += 1;
				}
			}
			if (_inputString[i] == (char) 'V')
			{
				m_nArabicNumber += 5;
			}
			if (_inputString[i] == (char) 'X')
			{
				if (_inputString[i + 1] == 'I' || _inputString[i + 1] == 'V' || _inputString[i + 1] == 'X')
				{
					m_nArabicNumber += 10;
				}
				else
				{
					m_nArabicNumber -= 10;
				}
			}
			if (_inputString[i] == (char)'L')
			{
				m_nArabicNumber += 50;

			}
			if (_inputString[i] == (char)'C')
			{
				if (_inputString[i + 1] == 'D' || _inputString[i + 1] == 'M')
				{
					m_nArabicNumber -= 100;
				}
				else
				{
					m_nArabicNumber += 100;
				}
			}
			if (_inputString[i] == (char)'D')
			{
				m_nArabicNumber += 500;
			}
			if (_inputString[i] == (char)'M')
			{
				m_nArabicNumber += 1000;
			}
		}
		else
		{
			if (_inputString[i] == (char)'I')
			{
				m_nArabicNumber += 1;
			}
			if (_inputString[i] == (char)'V')
			{
				m_nArabicNumber += 5;
			}
			if (_inputString[i] == (char)'X')
			{
				m_nArabicNumber += 10;
			}
			if (_inputString[i] == (char)'L')
			{
				m_nArabicNumber += 50;
			}
			if (_inputString[i] == (char)'C')
			{
				m_nArabicNumber += 100;
			}
			if (_inputString[i] == (char)'D')
			{
				m_nArabicNumber += 500;
			}
			if (_inputString[i] == (char)'M')
			{
				m_nArabicNumber += 1000;
			}
		}

	}
	return m_nArabicNumber;
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
	while (_inputNumber >= cm)
	{
		m_sRomanNumeral.append("CM");
		_inputNumber -= cm;
	}
	while (_inputNumber >= d)
	{
		m_sRomanNumeral.append("D");
		_inputNumber -= d;
	}
	while (_inputNumber >= cd)
	{
		m_sRomanNumeral.append("CD");
		_inputNumber -= cd;
	}
	while (_inputNumber >= c)
	{
		m_sRomanNumeral.append("C");
		_inputNumber -= c;
	}
	while (_inputNumber >= xc)
	{
		m_sRomanNumeral.append("XC");
		_inputNumber -= xc;
	}
	while (_inputNumber >= l)
	{
		m_sRomanNumeral.append("L");
		_inputNumber -= l;
	}
	while (_inputNumber >= xl)
	{
		m_sRomanNumeral.append("XL");
		_inputNumber -= xl;
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