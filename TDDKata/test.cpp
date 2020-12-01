#include "pch.h"
#include "Calculator.h"

TEST(TDDKata, Empty)
{
	//Arrange
	Calculator calc;
	char* nums = "";
	int expected = 0;

	//Act
	int actual = calc.Add(nums);

	//Assert
	ASSERT_EQ(expected, actual);
}

TEST(TDDKata, Zerro_One)
{
	//Arrange
	Calculator calc;
	char* nums = "0";
	int expected = 0;

	//Act
	int actual = calc.Add(nums);

	//Assert
	ASSERT_EQ(expected, actual);
}

TEST(TDDKata, Zerros_Two)
{
	//Arrange
	Calculator calc;
	char* nums = "0 0";
	int expected = 0;

	//Act
	int actual = calc.Add(nums);

	//Assert
	ASSERT_EQ(expected, actual);
}

TEST(TDDKata, Zerros_Three)
{
	//Arrange
	Calculator calc;
	char* nums = "0 0 0";
	int expected = 0;

	//Act
	int actual = calc.Add(nums);

	//Assert
	ASSERT_EQ(expected, actual);
}

TEST(TDDKata, Positive_One)
{
	//Arrange
	Calculator calc;
	char* nums = "1";
	int expected = 1;

	//Act
	int actual = calc.Add(nums);

	//Assert
	ASSERT_EQ(expected, actual);
}

TEST(TDDKata, Positives_Two)
{
	//Arrange
	Calculator calc;
	char* nums = "1 2";
	int expected = 3;

	//Act
	int actual = calc.Add(nums);

	//Assert
	ASSERT_EQ(expected, actual);
}

TEST(TDDKata, Positive_Three)
{
	//Arrange
	Calculator calc;
	char* nums = "1 2 3";
	int expected = 6;

	//Act
	int actual = calc.Add(nums);

	//Assert
	ASSERT_EQ(expected, actual);
}


TEST(TDDKata, NotNumber)
{
	//Arrange
	Calculator calc;
	char* nums = "a";
	int expected = -1;

	//Act
	int actual = calc.Add(nums);

	//Assert
	ASSERT_EQ(expected, actual);
}

TEST(TDDKata, NotNumber1)
{
	//Arrange
	Calculator calc;
	char* nums = "1 2 a";
	int expected = -1;

	//Act
	int actual = calc.Add(nums);

	//Assert
	ASSERT_EQ(expected, actual);
}

TEST(TDDKata, Wrong_Separator)
{
	//Arrange
	Calculator calc;
	char* nums = "1,2";
	int expected = -2;

	//Act
	int actual = calc.Add(nums);

	//Assert
	ASSERT_EQ(expected, actual);
}


TEST(TDDKata, Too_Much_Operands) {
	//Arrange
	Calculator calc;
	char* nums = "1 2 3 4";
	int expected = -3;

	//Act
	int actual = calc.Add(nums);

	//Assert
	ASSERT_EQ(expected, actual);
}

