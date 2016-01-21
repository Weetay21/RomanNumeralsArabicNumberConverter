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

TEST(TestArabicToRoman, Convert1989)
{
	EXPECT_EQ("MCMLXXXIX", converter.ConverterArabicToRoman(1989));
}

TEST(TestRomanToArabic, ConvertI)
{
	EXPECT_EQ(1, converter.ConverterRomanToArabic("I"));
}

TEST(TestRomanToArabic, ConvertIII)
{
	EXPECT_EQ(3, converter.ConverterRomanToArabic("III"));
}

TEST(TestRomanToArabic, ConvertIX)
{
	EXPECT_EQ(9, converter.ConverterRomanToArabic("IX"));
}

