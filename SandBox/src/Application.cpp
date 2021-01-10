// Preprocessors

/*
 * #pragma once
 * this Macro will only include files once if it is included twice in a file
 */
#pragma once


/* 
 * Everything that begins with '#' is a preprocessor:
 * 
 * #include:
 * 
 * copies and pastes all of the context from file_name to current line
 * example:
 * #include <iostream>, #include "myFile.h"
 * 
 * it is common to use <> for external libraries and use "" for internal (your own project files) libraries
 */
#include <iostream>
#include "Preprocessors\Example.cpp"


 /*
  * #define, #undef:
  * you can use '#define' to replace something with something else (make code more readable)
  * you can use '#undef' to undefine a Macro which is already defined
  */
#define M
#undef M
#define LOG(x) std::cout << x << std::endl;


/* 
 * #if:
 * 
 * if the condition is true, then compiler will compile that block
 * 
 * different kind of #if:
 * #if, #ifdef, #ifndef
 * 
 * this preprocessor must end with '#endif'
 */
#if 0
int main()
{
	LOG("this block won't compile")
}
#else // can be replaced with elif (if you want to check more than 1 condition)
// Default C++ entrypoint is main (returns 1 by default)
int main()
{
	LOG("this block will compile")
}
#endif


/*
 * ## Operator:
 * it is use to concat anything to anything
 */


/*
 * Predefined C++ Macros:
 *
 * __LINE__ : returns number of line
 * __FILE__ : returns name of the file
 * __DATE__ : returns date of the system
 * __TIME__ : returns time of the system
 */