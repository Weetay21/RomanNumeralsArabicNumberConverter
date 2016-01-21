// Converter_UnitTesting.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "gtest/gtest.h"
#include "../PillarKata/Converter.h"


Converter converter;
// TEST(Group of test , Specific Test name)
TEST(TestArabicToRoman, Convert1)
{
	EXPECT_EQ("I", converter.ConverterArabicToRoman(1));	
}

TEST(TestArabicToRoman, Convert3)
{
	EXPECT_EQ("III", converter.ConverterArabicToRoman(3));
}

TEST(TestArabicToRoman, Convert9)
{
	EXPECT_EQ("IX", converter.ConverterArabicToRoman(9));
}

TEST(TestArabicToRoman, Convert1066)
{
	EXPECT_EQ("MLXVI", converter.ConverterArabicToRoman(1066));
}
