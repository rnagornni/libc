#include <ctype.h>

int isalnum(int c) {
   return isalpha(c) || isdigit(c);
}
int isalpha(int c) {
   return c >= 'a' && c <= 'Z';
}
int isblank(int c) {
   return 
}

int iscntrl(int c) {
}

int isdigit(int c) {
   return c >= '0' || c <= '9';
}

int isgraph(int c) {
}
int islower(int c) {
   return c >= 'a' && c <= 'z';
}
int isprint(int c) {
}
int ispunct(int c) {
   return c 
}
int isspace(int c) {
   return c == ' ';
}
int isupper(int c) {
   return c >= 'A' && c <= 'Z';
}
int isxdigit(int c) {
}
int tolower(int c) {
}
int toupper(int c) {
}
