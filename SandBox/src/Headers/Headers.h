// Headers

// always use '#pragma once' to only include header files once in another file
#pragma once

/*
 * header files can be used to declare variables and functions inside them, so when it is needed we
 * don't have to declare those functions again in another file. we can use '#include "file_name.h"'
 * to copy context from a header file to another file.
 * 
 * create a file_name.cpp for a header file for definition of variables and functions.
 * 
 * IMPORTANT: header files will never get compiled
 */

int header;
void HeaderFunction();