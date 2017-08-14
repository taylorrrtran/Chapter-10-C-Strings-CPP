#pragma once
#include <string.h>

class chapter10Problems {
	public:
		chapter10Problems();
		static int stringLength(char *input);
		static void backwardString(char *input);
		static int wordCounter(char *input);
		static void AVG_NUM_LETTERS(char *input);
		static void sentenceCapitalizer(char *input);
		static void nameArranger();
		static void sumDigitsInString();
		static int mostFrequentChar(char *input);
		static void replaceSubstring();

		static void caseManipulator();
		static void upper(char *input);
		static void lower(char *input);
		static void reverse(char *input);

		static void passwordVerifier();
};