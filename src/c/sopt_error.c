/*! \file sopt_error.c
 *  Error functions used in SOPT package.
 */

#include <stdio.h>
#include <stdlib.h>

/*!
 * Display error message and halt program execution.
 * 
 * \param[in] comment Additional comment to display. 
 *
 * \authors <a href="http://www.jasonmcewen.org">Jason McEwen</a>
 */
inline void SOPT_ERROR_GENERIC(char *comment) {
  printf("ERROR: %s.\n", comment);					
  printf("ERROR: %s <%s> %s %s %s %d.\n",				
	 "Occurred in function",					
	   __PRETTY_FUNCTION__,						
	   "of file", __FILE__,						
	   "on line", __LINE__);					
  exit(1);
}


/*!
 * Test whether memory allocation was successful (i.e. check allocated
 * pointer not NULL) and throw a generic error if allocation failed.
 * 
 * \param[in] pointer Pointer that should point to allocated memory is
 * memory allocation was successful.
 *
 * \authors <a href="http://www.jasonmcewen.org">Jason McEwen</a>
 */
inline void SOPT_ERROR_MEM_ALLOC_CHECK(void *pointer) {				
  if(pointer == NULL)
    SOPT_ERROR_GENERIC("Memory allocation failed");
}

