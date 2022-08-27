#include "main.h"

/**
 *entry_point - displays welcome message and prompt
 *
 *return: nothing
 */
void entry_point()
{
	put_string("****Welcome to Simple_shell****");
	char *size = (char*)malloc(1024 * sizeof(char));

	/* gets host name*/
	char* host= gethostname(size, sizeof(size));

	/* gets the environment*/
	char* getenv(const char *environment);

	/* gets current directory name*/
	char* getcwd(dir, sizeof(size));

	put_string("<%s@%s%s>$",environment,host,dir);

}
