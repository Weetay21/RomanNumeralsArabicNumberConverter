// Converter_UnitTesting.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "gtest/gtest.h"
#include "../PillarKata/Converter.h"


Converter converter;

TEST(TestArabic1ToRomanI, Convert1)
{
	

	EXPECT_EQ("I", converter.ConverterArabicToRoman(1));
	
}

TEST(TestArabic3ToRomanIII, Convert3)
{
	

	EXPECT_EQ("III", converter.ConverterArabicToRoman(3));
}
