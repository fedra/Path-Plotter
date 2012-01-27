/*
 * filereader.h
 *
 *  Created on: 20.01.2012
 *      Author: s43433
 */

#ifndef FILEREADER_H_
#define FILEREADER_H_

#include "string.h"

using namespace std;

class filereader {

public:
	filereader(string filename);

	virtual ~filereader();

private:
	string filename;



};

#endif /* FILEREADER_H_ */
