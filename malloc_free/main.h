#ifndef MAIN_H
#define MAIN_H

/* libraries */
#include <stdio.h>
#include <stdlib.h>

/* prototypes */
/* Task 0 */ char *create_array(unsigned int size, char c);
/* Task 1 */ char *_strdup(char *str);
/* Task 2 */ char *str_concat(char *s1, char *s2);
/* Task 3 */ int **alloc_grid(int width, int height);
/* Task 4 */ void free_grid(int **grid, int height);
/* Advanced task 5 */ char *argstostr(int ac, char **av);

#endif
