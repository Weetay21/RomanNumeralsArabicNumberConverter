// Converter_UnitTesting.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "gtest/gtest.h"
#include "../PillarKata/Converter.h"



TEST(test1, testi)
{
	Converter converter;

	EXPECT_EQ("I", converter.ConverterArabicToRoman(1));
}
