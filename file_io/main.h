#ifndef MAIN_H
#define MAIN_H

/* Libraries */
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>

/* Prototypes */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void error_manager(char **argv, int fd, int status);
int o_filefrom(char *filename, char **argv);
int o_fileto(char *filename, char **argv);

#endif
