#ifndef MAIN_H
#define MAIN_H

char *_memset(char *s, char b, unsigned int n);
int _putchar(char c);
char *_memcpy(char *d, char *s, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *acc);
char *_strpbrk(char *s, char *acc);
char *_strstr(char *h, char *n);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);

#endif
