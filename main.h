#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define PROMPT "$ "

/* prototypes for the helper functions for path linked list */
char *_getenv(const char *name);
char **copy_env(char **environ_copy, unsigned int environ_length);
list_s *pathlist(char *variable, list_s *head);

/* prototypes for free functions */
void free_all(char **tokens, char *path, char *line, char *fullpath, int flag);
void free_dp(char **array, unsigned int length);

#endif /* MAIN_H */
