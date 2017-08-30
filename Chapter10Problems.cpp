#include <iostream>
#include <string.h>
#include <cctype>
#include <cstring>
#include <string>
#include <fstream>
#include <iomanip>
#include "Chapter10Problems.h"

int main() {

	chapter10Problems *p1 = new chapter10Problems;
	p1->characterAnalysis();
	system("pause");
	return 0;
}

void chapter10Problems::vowelsAndConsonants()
{
	const int size = 50;
	char *word = new char[size];

	//Gather string input
	std::cout << "Enter a word or phrase: ";
	std::cin.getline(word, size);

	//Menu
	std::cout << "A) Count the number of vowels in the string\n";
	std::cout << "B) Count the number of consonants in the string\n";
	std::cout << "C) Count both the vowels and consonants in the string\n";
	std::cout << "D) Enter another string\n";
	std::cout << "E) Exit the program\n";

	//Gather menu selection
	char selection;
	std::cout << "Enter your selection: ";
	std::cin >> selection;

	//Evaluate selections
	double totalVowel = 0;
	double totalConsanants = 0;
	while (selection != 'E')
	{
		switch (selection)
		{
		//Calculate number of vowels
		case 'A':
		{
			totalVowel = 0;
			for (int i = 0; i < strlen(word); i++)
			{
				//Make sure each character is a letter
				if (isalpha(word[i]))
				{
					if (word[i] == 'a' || word[i] == 'A' || word[i] == 'e' || word[i] == 'E' || word[i] == 'i' || word[i] == 'I' || word[i] == 'o' || word[i] == 'O' || word[i] == 'u' || word[i] == 'U')
						totalVowel += 1;
				}
			}

			//Display total number of vowels
			std::cout << "Total number of vowels: " << totalVowel << std::endl;
			std::cout << std::endl;

			break;
		}
			
		//Calculate number of consanants
		case 'B':
		{
			totalConsanants = 0;
			for (int i = 0; i < strlen(word); i++)
			{
				//Make sure each character is a letter
				if (isalpha(word[i]))
				{
					if (!(word[i] == 'a' || word[i] == 'A' || word[i] == 'e' || word[i] == 'E' || word[i] == 'i' || word[i] == 'I' || word[i] == 'o' || word[i] == 'O' || word[i] == 'u' || word[i] == 'U'))
						totalConsanants += 1;
				}
			}

			//Display total number of consanants
			std::cout << "Total number of consanants: " << totalConsanants << std::endl;
			std::cout << std::endl;

			break;
		}

		//Calculate both number of vowels and consanants
		case 'C':
		{
			totalVowel = 0;
			totalConsanants = 0;
			for (int i = 0; i < strlen(word); i++)
			{
				//Make sure each character is a letter
				if (isalpha(word[i]))
				{
					if (word[i] == 'a' || word[i] == 'A' || word[i] == 'e' || word[i] == 'E' || word[i] == 'i' || word[i] == 'I' || word[i] == 'o' || word[i] == 'O' || word[i] == 'u' || word[i] == 'U')
						totalVowel += 1;
					else
						totalConsanants += 1;
				}
			}

			//Display total number of vowels and consanants
			std::cout << "Total vowels in this string:     " << totalVowel << std::endl;
			std::cout << "Total consanants in this string: " << totalConsanants << std::endl;
			std::cout << std::endl;

			break;
		}

		//Enter a different string	
		case 'D':
		{
			std::cin.ignore();
			std::cout << "Enter a word or phrase: ";
			std::cin.getline(word, size);
			std::cout << std::endl;
			break;
		}

		//Exit program
		case 'E':
		{
			exit(0);
			break;
		}

		default: 
			std::cout << "You have not made a selection. Try again.\n";
		}

		//Menu and selection
		std::cout << "A) Count the number of vowels in the string\n";
		std::cout << "B) Count the number of consonants in the string\n";
		std::cout << "C) Count both the vowels and consonants in the string\n";
		std::cout << "D) Enter another string\n";
		std::cout << "E) Exit the program\n";
		std::cout << "Enter your selection: ";
		std::cin >> selection;
	}
}

void chapter10Problems::nameArranger() 
{
	const int size = 50;
	char firstName[size];
	char middleName[size];
	char lastName[size];

	//Create a string variable to hold the space and comma character to concatenate

	std::cout << "Enter the first name: ";
	std::cin.getline(firstName, size);

	std::cout << "Enter the middle name: ";
	std::cin.getline(middleName, size);

	std::cout << "Enter the last name: ";
	std::cin.getline(lastName, size);

	//Create the fourth array to display in the format: lastName, firstName middleName
	const int fullName = 50;
	char *display = new char[fullName]();
	strcat_s(display, size, lastName);
	strcat_s(display, size, ", ");
	strcat_s(display, size, firstName);
	strcat_s(display, size, " ");
	strcat_s(display, size, middleName);
	
	//Display the new formatted array
	std::cout << "The name in the order <last name>, <first name> <middle name> is: ";
	std::cout << display << std::endl;
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

void chapter10Problems::replaceSubstring()
{
	//This program will do 
}

void chapter10Problems::passwordVerifier()
{
	//This program will prompt a user to create a password with requirements

	const int size = 19;
	char password[size];

	std::cout << "Password Verifier\n\n";
	std::cout << "Password should be at least six characters long. Max characters is 19.\n";
	std::cout << "Password should contain at least one uppercase and at least one lowercase letter.\n";
	std::cout << "Password should have at least one digit.\n";

	//Check for requirements
	int totalUppercase = 0, totalLowercase = 0, totalDigit = 0;
	while (totalUppercase < 1 || totalLowercase < 1 || totalDigit < 1)
	{
		//Gather password
		std::cout << "\nEnter a password: ";
		std::cin.getline(password, size);

		//Input validation: Length of password cannot be less than 6 or greater than 19
		int length = strlen(password);
		while (length < 6 || length > 19)
		{
			std::cout << "\nPassword cannot be less than 6 characters or be greater than 19 characters. Try again: ";
			std::cin.getline(password, size);
			length = strlen(password);
		}

		totalUppercase = 0, totalLowercase = 0, totalDigit = 0;
		for (int i = 0; i < length; i++)
		{
			//Running total for digits
			if (isdigit(password[i]))
				totalDigit += 1;

			//Running total for uppercase
			if (isupper(password[i]))
				totalUppercase += 1;

			//Running total for lowercase
			if (islower(password[i]))
				totalLowercase += 1;
		}

		//Give error messages based on which requirements were not met
		std::cout << std::endl;
		if (totalDigit < 1)
			std::cout << "Password must have at least 1 digit.\n";

		if (totalUppercase < 1)
			std::cout << "Password must have at least 1 uppercase.\n";

		if (totalLowercase < 1)
			std::cout << "Password must have at least 1 lowercase.\n";
	}

	//Congratulate user on getting a valid password
	std::cout << "Congratulations! You have entered a valid password!\n";
}

void chapter10Problems::caseManipulator()
{
	//This program will use three functions: upper, lower, and reverse

	const int size = 50;
	char input[size];
	std::cout << "Enter a word or phrase no less than 0 characters or longer than 50 characters: ";

	//Gather input
	std::cin.getline(input, size);

	//Input validation: Input must be no less than 0 or longer than 50 characters
	int length = strlen(input);
	while (length < 0 || length > 50)
	{
		std::cout << "Word/phrase must be no less than 0 characters or longer than 50 characters. Try again: ";
		std::cin.getline(input, size);
		length = strlen(input);
	}

	//Call the upper, lower, and reverse functions
	std::cout << std::endl;
	upper(input);
	lower(input);
	reverse(input);
}

void chapter10Problems::upper(char *input)
{
	//This function will make an entire string in uppercase

	//Get length of input
	int length = strlen(input);

	//Loop and make every character upper if possible. Print each character
	std::cout << "Fully uppercase: ";
	for (int i = 0; i <= length; i++)
		std::cout << char(toupper(input[i]));

	std::cout << std::endl << std::endl;
}

void chapter10Problems::lower(char *input)
{
	//This function will make an entire string in lowercase

	//Get length of input
	int length = strlen(input);

	//Loop and make every character lower if possible. Print each character
	std::cout << "Fully lowercase: ";
	for (int i = 0; i <= length; i++)
		std::cout << char(tolower(input[i]));

	std::cout << std::endl << std::endl;
}

void chapter10Problems::reverse(char *input)
{
	//This function will convert a character to the opposite "case"

	//Get length of input
	int length = strlen(input);

	//Loop and make every character reversed if possible. Print each character
	std::cout << "Fully reversed: ";
	for (int i = 0; i <= length; i++)
	{
		if (isupper(input[i]))
			std::cout << char(tolower(input[i]));
		else if (islower(input[i]))
			std::cout << char(toupper(input[i]));
		else
			std::cout << char(input[i]);
	}

	std::cout << std::endl << std::endl;
}

void chapter10Problems::datePrinter()
{
	//This program will print a date out in its full form

	const int size = 11;
	char date[size];

	//Gather date in the form mm/dd/yyyy
	std::cout << "Enter a date in the form of mm/dd/yyyy: ";
	std::cin.getline(date, size);

	/* //Input validation: Input must be 10 characters and also in the form of mm/dd/yyyy
	while (strlen(date) != 10)
	{
		std::cout << "Date must be in the form of mm/dd/yyyy. Try again: ";
		std::cin.getline(date, size);
	}

	*/

	//Determine the month and display it in the form: <month> <day>, <year>
	for (int i = 0; i <= 9; i++)
	{
		//From months 1-9
		if (date[i] == '0')
		{
			if (date[i + 1] == '1')
				std::cout << "January ";
			else if (date[i + 1] == '2')
				std::cout << "February ";
			else if (date[i + 1] == '3')
				std::cout << "March ";
			else if (date[i + 1] == '4')
				std::cout << "April ";
			else if (date[i + 1] == '5')
				std::cout << "May ";
			else if (date[i + 1] == '6')
				std::cout << "June ";
			else if (date[i + 1] == '7')
				std::cout << "July ";
			else if (date[i + 1] == '8')
				std::cout << "August ";
			else if (date[i + 1] == '9')
				std::cout << "September ";
		}

		//From months 10-12
		else if (date[i] == '1')
		{
			if (date[i + 1] == '0')
				std::cout << "October ";
			else if (date[i + 1] == '1')
				std::cout << "November ";
			else if (date[i + 1] == '2')
				std::cout << "December ";
		}

		//Print day and year. Avoids the '\' character when typing in the date
		if (i >= 3)
		{
			if (i == 4)
			{
				std::cout << date[i];
				std::cout << ", ";
			}
			else
			{
				if (i > 6)
					std::cout << date[i];
				else if (i != 5)
					std::cout << date[i];
			}
		}
	}

	std::cout << std::endl;
}

void chapter10Problems::characterAnalysis()
{
	//This program will read from a file and return the number of uppercase, lowercase letters, and number of digits

	int totalDigits = 0, totalUppercase = 0, totalLowercase = 0;
	char character;

	//Read data from file into an dynamically allocated array 
	std::ifstream inputFile;
	std::string fileName;

	//Get filename
	std::cout << "Character Analysis\n\n";
	std::cout << "Enter the filename to read data from including its file extension: ";
	std::getline(std::cin, fileName);

	//Open file
	inputFile.open(fileName);

	//Input validation: Make sure file can be opened
	while (!inputFile)
	{
		std::cout << "File could not be open or does not exist. Try again: ";
		std::getline(std::cin, fileName);
		inputFile.open(fileName);
	}

	//Read data into char array
	while (!inputFile.eof())
	{
		inputFile.get(character);

		//Count for uppercase if the character is one
		if (isupper(character))
			totalUppercase += 1;

		//Count for lowercase if the character is one
		else if (islower(character))
			totalLowercase += 1;

		//Count for total digits if the character is one
		else if (isdigit(character))
			totalDigits += 1;
	}

	//Display statistics
	std::cout << "Total of uppercase letters in the file: " << totalUppercase << std::endl;
	std::cout << "Total of lowercase letters in the file: " << totalLowercase << std::endl;
	std::cout << "Total of digits in the file           : " << totalDigits << std::endl;

	//Close file
	inputFile.close();
}

void chapter10Problems::morseCodeConverter()
{
	//This program will convert characters of the alphabet, numbers, and some special characters to morse code

	const int size = 1000;
	char input[size];

	//Gather input
	std::cout << "Morse Code Converter\n\n";
	std::cout << "Enter a word or phrase: ";
	std::cin.getline(input, size);

	//Convert each letter to morse code
	std::cout << "\nThere are only morse code for numbers 0-9, uppercase letters A-Z, commas, periods, and question marks.\n\n";
	std::cout << "Morse code equivalent: ";
	for (int i = 0; i <= strlen(input); i++)
	{
		//Convert numbers to morse code
		if (isdigit((input[i])))
		{
			//ASCII Code for Numbers 0-9
			for (int j = 48; j <= 57; j++)
			{
				if (input[i] == j)
				{
					if (j == 48)
						std::cout << "----- ";
					else if (j == 49)
						std::cout << ".---- ";
					else if (j == 50)
						std::cout << "..--- ";
					else if (j == 51)
						std::cout << "...-- ";
					else if (j == 52)
						std::cout << "....- ";
					else if (j == 53)
						std::cout << "..... ";
					else if (j == 54)
						std::cout << "-.... ";
					else if (j == 55)
						std::cout << "--... ";
					else if (j == 56)
						std::cout << "---.. ";
					else
						std::cout << "----. ";
				}
			}
		}

		//Convert uppercase alphabet to morse code 
		else if (isalpha(input[i]) && isupper(input[i]))
		{
			//ASCII Code for uppercase letters from A-Z
			for (int j = 65; j <= 90; j++)
			{
				if (input[i] == j)
				{
					if (j == 65)
						std::cout << ".- ";
					else if (j == 66)
						std::cout << "-... ";
					else if (j == 67)
						std::cout << "-.-. ";
					else if (j == 68)
						std::cout << "-.. ";
					else if (j == 69)
						std::cout << ". ";
					else if (j == 70)
						std::cout << "..-. ";
					else if (j == 71)
						std::cout << "--. ";
					else if (j == 72)
						std::cout << "....";
					else if (j == 73)
						std::cout << ".. ";
					else if (j == 74)
						std::cout << ".--- ";
					else if (j == 75)
						std::cout << "-.- ";
					else if (j == 76)
						std::cout << ".-.. ";
					else if (j == 77)
						std::cout << "-- ";
					else if (j == 78)
						std::cout << "-. ";
					else if (j == 79)
						std::cout << "--- ";
					else if (j == 80)
						std::cout << ".--. ";
					else if (j == 81)
						std::cout << "--.- ";
					else if (j == 82)
						std::cout << ".-. ";
					else if (j == 83)
						std::cout << "... ";
					else if (j == 84)
						std::cout << "- ";
					else if (j == 85)
						std::cout << "..- ";
					else if (j == 86)
						std::cout << "...- ";
					else if (j == 87)
						std::cout << ".-- ";
					else if (j == 88)
						std::cout << "-..- ";
					else if (j == 89)
						std::cout << "-.-- ";
					else
						std::cout << "--.. ";
				}
			}
		}

		//Convert comma, period, question mark to morse code
		else if (input[i] == 44)
			std::cout << "--..-- ";
		else if (input[i] == 46)
			std::cout << ".-.-.- ";
		else if (input[i] == 63)
			std::cout << "..--.. ";
		else if (isspace(input[i]))
			std::cout << input[i];

		//Print out character if it is not part of the morse table equivalent above
		else
			std::cout << input[i];
	}
	std::cout << std::endl;
}

void chapter10Problems::phoneNumberList()
{
	//This program will search for the name or partial name entered in a array
	const int numberOfPhone = 11;
	const int size = 50;

	//Array size of 11 string objects
	char phoneList[numberOfPhone][size] = { "Alejandra Cruz, 555-1223", "Joe Looney, 555-0097", "Geri Palmer, 555-8787",
										   "Li Chen, 555-1212", "Holly Gaddis, 555-8878", "Sam Wiggins, 555-0998", "Bob Kain, 555-8717",
										   "Tim Haynes, 555-7676", "Warren Gaddis, 555-9037", "Jean James, 555-4939", "Ron Palmer, 555-2783" };
	std::cout << "Phone Number List\n\n";

	//Prompt user to search for a name
	char search[size];
	char *strPtr = nullptr;

	std::cout << "Enter a name or phone number to search for in the phonebook (case-sensitive for names): ";
	std::cin.getline(search, size);

	//Search for name in the list
	std::cout << std::endl;
	int index;
	bool foundAtLeast1 = false;
	for (index = 0; index < 11; index++)
	{

		//If a matching name was found, display the name and phone number
		strPtr = strstr(phoneList[index], search);
		if (strPtr != nullptr)
		{
			std::cout << phoneList[index] << std::endl;
			foundAtLeast1 = true;
		}
	}

	//If no one was found, display error message
	if (!foundAtLeast1)
		std::cout << "There was no matching record(s) in the phonebook.\n";
}

void chapter10Problems::checkWriter()
{
	//This program will displayed a simulated paycheck

	const int size = 50;
	char check[size];
	std::string date, name;

	//Gather input
	std::cout << "Check Writer\n\n";

	std::cout << "Enter the date of the paycheck: ";
	std::getline(std::cin, date);

	std::cout << "Enter the name that the paycheck is made out to: ";
	std::getline(std::cin, name);

	std::cout << "Enter the amount of the paycheck (no symbols): ";
	std::cin.getline(check, size);

	//Convert check string object to float. Input validation: The amount cannot be negative or over $10,000
	double amount;
	amount = atof(check);

	while (amount < 0 || amount > 10000)
	{
		std::cout << "Amount of the paycheck cannot be negative or greater than $10,000. Try again (no symbols): ";
		std::cin.getline(check, size);
		amount = atof(check);
	}

	//Display simulated paycheck
	std::cout << std::endl;
	std::cout << "								Date: " << date << std::endl;
	std::cout << std::endl << std::endl;
	std::cout << std::setprecision(2) << std::fixed << std::showpoint;
	std::cout << "Pay to the Order of: " << name << "				$" << amount << std::endl;
	
	//Display paycheck amount in words
	for (int i = 0; i < strlen(check); i++)
	{
	}
	
	double division = 10000 % 1920;
	std::cout << division;
}

chapter10Problems::chapter10Problems()
{
}