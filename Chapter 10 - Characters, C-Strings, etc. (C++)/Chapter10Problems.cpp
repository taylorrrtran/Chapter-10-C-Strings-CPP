#include <string.h>
#include <string>
#include <iostream>
#include <cstring>
#include "Chapter10Problems.h"

int main() {
	chapter10Problems *p1 = new chapter10Problems;
	
	//Create an array to store the user's string
	const int size = 10000;
	char string_Input[size];

	//Get user's string input
	std::cout << "Enter a word or sentence of no more than " << (size - 1) << " characters: ";
	std::cin.getline(string_Input, size);

	//Display the number of words in a C-String input and average letter per word
	p1->AVG_NUM_LETTERS(string_Input);
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
	//This program will capitalize the first character of each sentence in a C-String input

}

chapter10Problems::chapter10Problems()
{
}