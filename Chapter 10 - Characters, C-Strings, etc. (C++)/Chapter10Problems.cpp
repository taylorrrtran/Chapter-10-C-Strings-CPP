#include <string.h>
#include <string>
#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>
#include "Chapter10Problems.h"

int main() {
	chapter10Problems *p1 = new chapter10Problems;
	p1->sumDigitsInString();
	system("pause");
	return 0;
}

int chapter10Problems::stringLength(char *input)
{
	//This program will return the number of characters in a string

	/*
	
	Enter this part of the code into the main() function when running this function:
	
	//Create an array to store the user's string
	const int size = 100;
	char name[size];

	//Get user's string input
	std::cout << "Enter a word or sentence: ";
	std::cin.getline(name, size);

	//Output the number of characters in the user's input
	std::cout << "The following input has these many characters including spaces: " << p1->stringLength(name) << std::endl;

	*/

	int NUM_LETTERS = strlen(input);
	return NUM_LETTERS;
}

void chapter10Problems::backwardString(char *input)
{
	//This program will accept a C-String input and display it backwards

	/*

	Enter this part of the code into the main() function when running this function:

	//Create an array to store the user's string
	const int size = 10000;
	char string_Input[size];

	//Get user's string input
	std::cout << "Enter a word or sentence of no more than " << (size - 1) << " characters: ";
	std::cin.getline(string_Input, size);

	//Output the C-String input backwards
	p1->backwardString(string_Input);

	*/
	
	//Create a pointer to call class functions
	chapter10Problems *p2 = new chapter10Problems;
	
	//Gather the length of the input to use as a counter
	int length = p2->stringLength(input);

	//Display the input in reverse
	std::cout << "The input in the reverse order:";
	while ((length) > -1)
	{
		std::cout << *(input + length);
		length--;
	}
	std::cout << std::endl;
}

int chapter10Problems::wordCounter(char *input)
{
	//This program will return the number of words in an input

	/*
	
	Enter this part of the code in the main() function when running this function:

	//Create an array to store the user's string
	const int size = 10000;
	char string_Input[size];

	//Get user's string input
	std::cout << "Enter a word or sentence of no more than " << (size - 1) << " characters: ";
	std::cin.getline(string_Input, size);

	//Display the number of words in a C-String input
	std::cout << "The total number of words in the input is ";
	std::cout << p1->wordCounter(string_Input) << "." << std::endl;
	
	*/

	//Create a variable to hold a running total for the number of words in the input
	int NUM_WORDS = 1;

	//Create a pointer to call class functions
	chapter10Problems *p3 = new chapter10Problems;

	//Gather the length of the input to use as a counter
	int length = p3->stringLength(input);

	//Count the amount of words in the input
	for (int count = 0; count < length; count++)
	{
		if ((*(input + count) == ' ') || (*(input + count) == '\0'))
			NUM_WORDS += 1;
	}

	//Return the number of words in the input
	return NUM_WORDS;
}

void chapter10Problems::AVG_NUM_LETTERS(char *input)
{
	//This program will display both the number of words in a C-String input and average number of letters in each word

	/*
	
	Enter this part of the code in the main() function when running this function:

	//Create an array to store the user's string
	const int size = 10000;
	char string_Input[size];

	//Get user's string input
	std::cout << "Enter a word or sentence of no more than " << (size - 1) << " characters: ";
	std::cin.getline(string_Input, size);

	//Display the number of words in a C-String input and average letter per word
	p1->AVG_NUM_LETTERS(string_Input);
	
	*/

	//Create a pointer to call class functions
	chapter10Problems *p3 = new chapter10Problems;
	chapter10Problems *p4 = new chapter10Problems;

	//Use the word counter function to get the number amount of words in the C-String input
	int NUM_WORD = p4->wordCounter(input);

	//Gather the length of the input to use as a counter
	int length = p3->stringLength(input);

	//Create a variable to hold a running total of letters for each word in the C-String input
	double NUM_LETTERS = 0;

	//Count each letter as long it is not a space or null terminator
	for (int count = 0; count < length; count++)
	{
		if (isalpha(*(input + count)))
			NUM_LETTERS += 1;
	}

	//Calculate average of letters per word and display that value along with the number amount of words
	double AVG_LETTER = NUM_LETTERS / NUM_WORD;
	std::cout << "The number of words in the C-String input: " << NUM_WORD << std::endl;
	std::cout << "The average number of letters per word in that input: " << AVG_LETTER << std::endl;
}

void chapter10Problems::sentenceCapitalizer(char *input)
{
	//This program will capitalize the first word in a C-String input sentence

	/*

	Enter this part of the code in the main() function when running this function:

	//Create an array to store the user's string
	const int size = 10000;
	char string_Input[size];

	//Get user's string input
	std::cout << "Enter a word or sentence of no more than " << (size - 1) << " characters: ";
	std::cin.getline(string_Input, size);

	//Display the capitalized sentence
	p1->sentenceCapitalizer(string_Input);

	*/

	//Create a pointer to call class functions
	chapter10Problems *p5 = new chapter10Problems;

	//Gather the length of the input to use as a counter
	int length = p5->stringLength(input);

	//Test if the first character is part of the alphabet and capitalize it if it is
	std::cout << "The revised C-String input with the first character of every word being capitalized: ";
	if (isalpha(*(input)))
		std::cout << char(toupper(*(input)));

	//Capitalize the first word of every sentence in the C-String input
	for (int count = 1; count < length; count++)
	{
		//Only capitalize the current character if it is part of the alphabet, and if the previous characters were a space and a period
		if (((*(input + (count - 1))) == ' ') && ((*(input + (count - 2))) == '.'))
			std::cout << char(toupper(*(input + count)));
		else
			std::cout << *(input + count);
	}

	std::cout << std::endl;
}

int chapter10Problems::mostFrequentChar(char *input) 
{
	//This program will return the character that appears most frequently in the C-string

	/*
	
	Enter this part of the code into the main() function:

	//Create an array to store the user's string
	const int size = 10000;
	char string_Input[size];

	//Get user's string input
	std::cout << "Enter a word or sentence of no more than " << (size - 1) << " characters: ";
	std::cin.getline(string_Input, size);

	//Display the character that appears frequently in a C-String input
	p1->mostFrequentChar(string_Input);

	*/

	//Create a pointer to call class functions
	chapter10Problems *p9 = new chapter10Problems;

	//Gather the length of the input to use as a counter
	int length = p9->stringLength(input);

	//Create a duplicate array of the input to compare for multiple characters
	char *duplicateInput = nullptr;
	duplicateInput = new char[length];

	for (int count = 0; count < length; count++)
	{
		*(duplicateInput + count) = *(input + count);
	}

	//Create another parallel array to determine which element is the mode
	char *mode = nullptr;
	mode = new char[length];

	//Find how many times each element has repeated in the array and store that value in the mode array
	for (int i = 0; i < length; i++)
	{
		*(mode + i) = 0;
		for (int j = 0; j < length; j++)
		{
			if (*(input + i) == *(duplicateInput + j))
				*(mode + i) += 1;
		}
	}

	//Determine which element is the character that appears the most and display it
	int largest = *(mode);
	for (int count = 0; count < length; count++)
	{
		if (largest <= *(mode + count))
			largest = *(mode + count);
	}
	for (int count = 0; count < length; count++)
	{
		//If largest == 1, then there is no repeating character in the array
		if (largest == 1)
		{
			std::cout << "There is no character that appears more than one in the C-string input. " << std::endl;

			//Delete dyanamically allocated memory
			delete[] duplicateInput;
			duplicateInput = nullptr;
			return 0;
		}
		//Otherwise, there is one character that appears the most
		else if (*(mode + count) == largest)
		{
			std::cout << "The most frequent character in the C-string input: ";
				if (*(input + count) == ' ')
					std::cout << "Space" << std::endl;
				else
					std::cout << *(input + count) << std::endl;

			//Delete dyanamically allocated memory
			delete[] duplicateInput;
			duplicateInput = nullptr;
			return 0;
		}
	}
}

void chapter10Problems::nameArranger()
{
	//This program will ask the user for a first, middle, and last name. Then it will be rearranged and displayed as: <last name>, <first name> <middle name>

	//Create 3 array to store the user's first, middle, and last name
	const int size = 10000;
	char firstName[size];
	char middleName[size];
	char lastName[size];

	//Create a variable to store the space and comma character to be used in formatting the output
	char SPACE_AND_COMMA[] = ", ";
	char SPACE[] = " ";

	//Get user's first, middle, and last name. Include input validation to only accept characters of the alphabet
	std::cout << "Enter your first name: ";
	std::cin.getline(firstName, size);

	std::cout << "Enter your middle name: ";
	std::cin.getline(middleName, size);

	std::cout << "Enter your last name: ";
	std::cin.getline(lastName, size);

	//Concatenate the names into correct format before they will copied to a fourth char array
	strcat(lastName, SPACE_AND_COMMA);
	strcat(firstName, SPACE);
	strcat(lastName, firstName);
	strcat(lastName, middleName);

	//Create a fourth array to store the names together in the format: <last name>, <first name> <middle name> and display it
	char ARRANGED_NAME[size];
	strcpy(ARRANGED_NAME, lastName);
	std::cout << "The following name in the format <last name>, <first name> <middle name> is: " << lastName << std::endl;;
}

void chapter10Problems::sumDigitsInString()
{
	//This program will display the sum of all the single-digit numbers of an input C-string along with the highest and lowest digits

	//Create a char array to hold the C-string inp1ut
	const int size = 10000;
	char input[size];

	//Gather string input from user
	std::cout << "Enter a numeric value: ";
	std::cin.getline(input, size);

	//Input validation: The input must only contain numbers
	int length = strlen(input), count = 0;
	while (count < length)
	{
		if (!(isdigit(input[count])))
		{
			std::cout << "The input must only contain numbers. Try again: ";
			std::cin.getline(input, size);
			count = -1;
		}
		count++;
	}

	//Keep a running total and collect the sum of each individual number in string
	int total = 0;
	for (int i = 0; i < length; i++)
		total += input[i] - '0';

	//Display the sum of individual numbers in the string
	std::cout << "The sum of each individual number is: " << total << std::endl;

	//Display the highest and lowest number of the string

}

chapter10Problems::chapter10Problems()
{
}