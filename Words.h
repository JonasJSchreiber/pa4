/*
 * Word.h
 *
 *  Created on: Oct 26, 2012
 *      Author: Jonas Schreiber
 */

#ifndef WORD_H_
#define WORD_H_

struct Words
{
	char * word;
	struct Files * files;
	struct Words * nextWord;

};
typedef struct _Words * Words;

#endif /* WORD_H_ */
