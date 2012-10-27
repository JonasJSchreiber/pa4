/*
 * File.h
 *
 *  Created on: Oct 26, 2012
 *      Author: Jonas Schreiber
 */

#ifndef FILE_H_
#define FILE_H_

struct  Files {
	FILE * file;
	int count;
	struct Files * nextFile;

};
typedef struct _Files * Files;

#endif /* FILE_H_ */
