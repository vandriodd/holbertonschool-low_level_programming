#include <unistd.h>

int _putchar(char c);

/* Task 0 - 98 Battery st. */
void reset_to_98(int *n);

/* Task 1 - Don't swap horses in crossing a stream */
void swap_int(int *a, int *b);

/* Task 2 - This report, by its very length, defends itself against the risk of being read */
int _strlen(char *s);

/* Task 3 - I do not fear computers. I fear the lack of them */
void _puts(char *str);

/* Task 4 - I can only go one way. I've not got a reverse gear */
void print_rev(char *s);

/* Task 5 - A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes */
void rev_string(char *s);

/* Task 6 - Half the lies they tell about me aren't true */
void puts2(char *str);

/* Task 7 - Winning is only half of it. Having fun is the other half */
void puts_half(char *str);

/* Task 8 - Arrays are not pointers */
void print_array(int *a, int n);

/* Task 9 - strcpy */
char *_strcpy(char *dest, char *src);

/* Task 10 - Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers */
int _atoi(char *s);

/* >> 2nd Project << */

/* Task 0 - strcat */
char *_strcat(char *dest, char *src);

/* Task 1 - strncat */
char *_strncat(char *dest, char *src, int n);

/* Task 2 - strncpy */
char *_strncpy(char *dest, char *src, int n);

/* Task 3 - strcmp */
int _strcmp(char *s1, char *s2);

/* Task 4 - I am a kind of paranoid in reverse. I suspect people of plotting to make me happy */
void reverse_array(int *a, int n);

/* Task 5 - Always look up */
char *string_toupper(char *s);

/* Task 6 - Expect the best. Prepare for the worst. Capitalize on what comes */
char *cap_string(char *);

/* Task 7 - Mozart composed his music not for the elite, but for everybody */
char *leet(char *c);

/* Task 8 - rot13 */
char *rot13(char *s);

/* >> 3rd Project << */

/* Task 0 - memset */
char *_memset(char *s, char b, unsigned int n);

/* Task 1 - memcpy */
char *_memcpy(char *dest, char *src, unsigned int n);

/* Task 2 - strchr */
char *_strchr(char *s, char c);

/* Task 3 - strspn */
unsigned int _strspn(char *s, char *accept);

/* Task 4 - strpbrk */
char *_strpbrk(char *s, char *accept);

/* Task 5 - strstr */
char *_strstr(char *haystack, char *needle);

/* Task 6 - Chess is mental torture */
void print_chessboard(char (*a)[8]);

/* Task 7 - The line of life is ragged diagonal between duty and desire */
void print_diagsums(int *a, int size);

/* Task 8 - Double pointer, double fun */
void set_string(char **s, char *to);
