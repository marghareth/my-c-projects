#include <stdio.h>

// 1
int logBase10(int n) {
	int count = 0;

	while (n >= 10) {
		n /= 10;
		count++;
	}
	return count;

}
// 2.

int FloorFunction(double n) {

	if( n < 0 ) {
		return n -1;

	} else {
		int intEquivalent = (int)n;
		return intEquivalent;
	}

}

// 3.

int CeilingFunction(double n) {
	int intEquivalent = (int)n;

	if (n > intEquivalent) {
		return intEquivalent + 1;
	}
	return intEquivalent;
}

//4.
int AlphaNumericOrNot(char input) {

	if (input >= 'A' && input <= 'Z' || input >= 'a' && input <= 'z' || input >= '0' && input <= '9') {
		return 1;
	} else {
		return 0;
	}

}

//5.
int englishLetterOrNot(char input) {


	if (input >= 'A' && input <= 'Z' || input >= 'a' && input <= 'z') {
		return 1;
	} else {
		return 0;
	}

}

//6.

int UpperCaseOrNot (char input) {

	if (input >= 'A' && input <= 'Z') {
		return 1;
	} else {
		return 0;
	}

}

//7.

int LowerCaseOrNot (char input) {

	if (input >= 'a' && input <= 'z') {
		return 1;
	} else {
		return 0;
	}

}


// 8.
char TurnIntoUpperCase (char input) {
	if(input >= 'a' && input <= 'z') {
		input = input - 32;
	}
	return input;
}

// 9.

char TurnIntoLowerCase (char input) {
	if(input >= 'A' && input <= 'Z') {
		input = input + 32;
	}
	return input;
}


// 10
int PunctuationMarkOrNot (char input) {

	if(input == '.' || input == '?' || input == '!' || input == ',' || input == ';' || input == ':') {
		return 1;

	} else {
		return 0;
	}

}

// 11.

int stringToInteger(char str[]) {
	int result = 0, i = 0;

	while(str[i] != '\0') {
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return result;
}



// 12.

double stringToDouble(char str[]) {
	double result = 0.0, divisor = 1.0;
	int isDecimal = 0, i = 0;

	while (str[i] != '\0') {
		if (str[i] == '.') {
			isDecimal = 1;
		} else {
			result = result * 10 + (str[i] - '0');
			if (isDecimal) divisor *= 10.0;
		}
		i++;
	}
	return result / divisor;
}



// 13.

int ValidFloatOrNot(char str[]) {
    int DotCounter = 0;
    int i = 0;

   
    if (str[i] == '-') {
        i++; 
    }

 
    int hasDigit = 0;

    while (str[i] != '\0') {
        if (str[i] == '.') {
            DotCounter++;
            if (DotCounter > 1) { 
                return 0;
            }
        } else if (str[i] >= '0' && str[i] <= '9') {
            hasDigit = 1; 
        } else {
            return 0; 
        }
        i++;
    }

    if (hasDigit == 0) {
        return 0;
    }

    return 1; 
}





// 14.



int absoluteValue(int n) {
	if (n < 0) {
		return -n;
	}
	return n;
}


// 15

void copyString(char source[], char destination[]) {
	int i = 0;
	for(i = 0; source[i] != '\0';  i++) {
		destination[i] = source[i];
	}
	destination[i] = '\0';
}


//16.

int isSubstringOrNot(char s1[], char s2[]) {

	int j  = 0;
	for (int i = 0; s2[i] != '\0'; i++) {

		for (j = 0; s1[j] != '\0' && s2[i + j] == s1[j]; j++);

		if (s1[j] == '\0') {
			return 1;
		}
	}
}




// 17.

int compareStrings(char s1[], char s2[]) {
	int i, j = 0;

	while (s1[i] != '\0' && s2[i] != '\0') {
		if (s1[i] < s2[i]) {
			return 1;
		} else if (s1[i] > s2[i]) {
			return -1;
		}
		i++;
	}

	if (s1[i] == '\0' && s2[i] == '\0') {
		return 0;
	} else if (s1[i] == '\0') {
		return 1;
	} else {
		return -1;
	}
}




// 18.

void cAmElCaSe(char str[], char result[]) {
    int len, i;

    for (len = 0; str[len] != '\0'; len++) {}

    for (i = 0; i < len; i++) {
        if (i % 2 == 0) {  
            if (str[i] >= 'A' && str[i] <= 'Z') {
                result[i] = str[i] + 32;  
            } else {
                result[i] = str[i];  
            }
        } else {  
            if (str[i] >= 'a' && str[i] <= 'z') {
                result[i] = str[i] - 32; 
            } else {
                result[i] = str[i];  
            }
        }
    }

    result[len] = '\0';  
}


// 19.


void reverseString(char str[], char reversed[]) {
    int len, i, k;

    for (len = 0; str[len] != '\0'; len++) {}

    for (i = len - 1, k = 0; i >= 0; i--, k++) {
        reversed[k] = str[i];  
    }

    reversed[k] = '\0';  
}


// 20.

int reverseInteger(int n) {
	int reversed = 0;

	while (n != 0) {
		reversed = reversed * 10 + (n % 10);
		n /= 10;
	}

	return reversed;
}



int main()
{
	int testcase;
    scanf("%i", &testcase);

    while(testcase--) {
    int item;
    scanf("%i ", &item);
	
		if( item == 1 ) {
			int num;

			scanf("%d", &num);
			int result = logBase10(num);
			printf("%d\n", result);


		} else if (item == 2) {

			double num;
			scanf("%lf", &num);
			printf("%d\n", FloorFunction(num));

		} else if (item == 3) {

// 3.
			double num;
			scanf("%lf", &num);
			printf("%d\n", CeilingFunction(num));



		} else if (item == 4 ) {

// 4.
			char input;

			scanf(" %c", &input);


			int result = AlphaNumericOrNot(input);
			if(result == 1)	{

				printf("YES\n");
			} else {

				printf("NO\n");
			}


		} else if (item == 5 ) {

			// 5.
			char input;
			scanf(" %c", &input);

			int result = englishLetterOrNot(input);
			if( result == 1)	{

				printf("YES\n");
			} else {

				printf("NO\n");
			}
		} else if ( item == 6) {

			// 6.
			char input;
			scanf(" %c", &input);


			int result = UpperCaseOrNot(input);

			if( result == 1)	{

				printf("YES\n");
			} else {

				printf("NO\n");
			}

		} else if(item == 7) {
// 7.
			char input;
			scanf(" %c", &input);


			int result = LowerCaseOrNot(input);
			if( result == 1)	{

				printf("YES\n");
			} else {

				printf("NO\n");
			}

		} else if (item == 8) {
// 8.
			char input;
			scanf(" %c", &input);
			char result = TurnIntoUpperCase(input);
			printf("%c\n", result );

		} else if(item == 9) {
// 9.
			char input;
			scanf(" %c", &input);
			char result = TurnIntoLowerCase(input);
			printf("%c\n", result );

		} else if (item == 10) {
// 10
			char input;
			scanf(" %c", &input);

			if(PunctuationMarkOrNot(input) == 1)	{
				printf("YES\n");
			} else {
				printf("NO\n");
			}

		} else if(item == 11 ) {
//11

			char str[70];

			scanf("%69s", str);

			printf("%d\n", stringToInteger(str));

		} else if(item == 12) {
//12.
			char str[50];

			scanf("%49s", str);

			printf("%.4f\n", stringToDouble(str));

		} else if(item == 13) {
// 13.
			char input[50];
			scanf(" %c", input);

			if(ValidFloatOrNot(input) == 1)	{
				printf("YES");
			} else {
				printf("NO");
			}

		} else if( item == 14) {

// 14.
			int num;

			scanf("%d", &num);
			printf("%d", absoluteValue(num));


		} else if( item == 15) {
// 15.

			char source[100], destination[100];
			scanf("%s", source);
			copyString(source, destination);
			printf("%s", destination);

		} else if( item == 16) {
// 16.

			char str1[50];
			scanf("%s", str1);
			char str2[50];
			scanf("%s", str2);


			if(isSubstringOrNot(str1, str2) == 1)	{
				printf("YES\n");
			} else {
				printf("NO\n");
			}

		} else if( item == 17) {

			char s1[50], s2[50];


			scanf("%s", s1);
			scanf("%s", s2);


			int result = compareStrings(s1, s2);
			if (result == 0) {
				printf("YES\n");
			} else if (result == 1) {
				printf("BEFORE\n");
			} else {
				printf("AFTER\n");
			}

		} else if( item == 18) {
// 18.

		 char str1[50];
		 char result[50];

        scanf("%s", str1);  
        cAmElCaSe(str1, result);
        printf("%s\n", result);  

    } else if (item == 19) {
        
        char str[50];
        char reversed[50];


        scanf("%s", str);  
        reverseString(str, reversed);

        printf("%s\n", reversed);

		} else {

// 20.
			int num;
			scanf("%d", &num);
			int  reversed = reverseInteger(num);
			printf("%d\n", reversed);

		}
	}


	return 0;
}










