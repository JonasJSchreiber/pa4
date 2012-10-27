/*
 * ReadIndex.c
 *
 *  Created on: Oct 26, 2012
 *      Author: Jonas Schreiber
 */

#ifndef READINDEX_C_
#define READINDEX_C_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Files.h"
#include "Words.h"
#include "Search.h"

struct Words * readIndex(FILE * file) {
	struct Words word = malloc(sizeof(struct Words));
	return *word;
}

void interactiveMode(struct Words * word) {
	char * input = "blank";
	printf("enter q to quit at any time");
	printf("search> ");
	scanf("%s", &input);
	while (strcmp(input, "q") != 0)
	{
		//to protect against program terminating upon someone mistakenly pressing enter
		while (strcmp(input, NULL) == 0)
		{
			printf("search> ");
			scanf("%s", &input);
		}

		/*
		 * Steps from here:
		 * 1. determine if first two chars are so or sa, if not print help and do not proceed to next step
		 * 2. break search terms into tokens omitting first word, (which is either so or sa)
		 * 3. send to search Operations with params
		 * (1, **searchTerms) for an "so" search
		 *       OR
		 * (2, **searchTerms) for an sa search
		 */



		printf("search> ");
		scanf("%s", &input);
	}

	return;
}


/**
 * searchTypes
 * 1. so (search with OR operations, as in which of the files contains any of these terms)
 * 2. sa (search with AND operations, as in which of the files contains all of these terms)
 */

void searchOperations(int searchType, char **searchTerms)
{

}

int main(int argc, char **argv) {

	if (argc != 2 || (argc == 2 && strcmp(argv[1], "-h") == 0))
	{
		printf("USAGE:\tsearch <inverted-index file name>");
		printf("HELP: \tsearch -h ");
	}

	else
	{
		FILE *file = fopen(argv[1], "r");
		if (file == NULL) { /* could not open file */
			fprintf(stderr, "Could not open %s\n", argv[1]);
			return 0;
		}
		else
		{
			struct Words word = readIndex(file);
			interactiveMode(word);
		}
	}

	return 0;
}

#endif /* READINDEX_C_ */
