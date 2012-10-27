/*
 * ReadIndex.h
 *
 *  Created on: Oct 26, 2012
 *      Author: Jonas Schreiber
 */

#ifndef READINDEX_H_
#define READINDEX_H_

/*
 * This function reads the index file produced by our indexer into memory.
 * The method must be fail-safed against any unwanted index files
 *  (we must verify the existence of such a file in the main function

 * Once the entire index file has been read into memory,
 * the function passes a pointer to the head of the LL back to main.
 *
 */
struct Words * readIndex(FILE * file);


/*
 * This function is used once the pointer to the head of the last has
 * been passed back to main, and the index is reconstructed in memory.
 * This function serves as an input/output medium through which a user
 * can issue searches for certain terms and be provided with output.
 * Once the user enters q the function returns.
 */
void interactiveMode(struct Words * word);


/**
 * This function searches our index with the search terms entered by the user in interactive mode
 * Once THAT search has been completed, interactive mode takes over again, and the user either enters
 * another search query or "q" to quit.
 */
void searchOperations(int searchType, char **searchTerms);

/*
 * Main receives the name of the index file to be parsed and searched. It first
 * verifies the index file's existence and then hands the user off to interactive mode.
 */
int main(int argc, char **argv);

#endif /* READINDEX_H_ */
