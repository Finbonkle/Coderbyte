#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Citations
// https://www.mkyong.com/c/how-to-handle-unknow-size-user-input-in-c/


void FirstReverse(char pStr[]) {

	// code goes here
	int howLong = strlen(pStr);
	char* newString;
	newString = malloc(howLong * sizeof(char));
	//newString = pStr;


	int i;
	for (i = 0; i < howLong; i++)
		newString[i] = pStr[howLong - 1 - i];

	newString[i] = '\0';

	printf("string backwards: %s", newString);

}


int main(void) {

	unsigned int len_max = 128;
	unsigned int current_size = 0;

	char* pStr = malloc(len_max);
	current_size = len_max;

	printf("\nEnter a String value: ");

	if (pStr != NULL)
	{
		int c = EOF;
		unsigned int i = 0;
		//accept user input until hit enter or end of file
		while ((c = getchar()) != '\n' && c != EOF)
		{
			pStr[i++] = (char)c;

			//if i reached maximize size then realloc size
			if (i == current_size)
			{
				current_size = i + len_max;
				pStr = realloc(pStr, current_size);
			}
		}
		pStr[i] = '\0';
	}


	// keep this function call here
	FirstReverse(pStr);
	//free it 
	free(pStr);
	pStr = NULL;
	
	return 0;

}
