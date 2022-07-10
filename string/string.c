#include <string.h>

void* memcpy(void* restrict s1, const void* restrict s2, size_t n) {
   for (size_t size = 0; s1 && s2 && (size < n); size++, s1++, s2++) {
      s1 = s2;
   }
   return s1;
}
void *memmove(void *s1, const void *s2, size_t n) {
   for (size_t size = 0; s1 && s2 && (size < n); size++) {
      s1 = s2;
   }
   return s1;
}
char *strcpy(char * restrict s1,
		const char * restrict s2) {
}
char *strncpy(char * restrict s1,
		const char * restrict s2,
		size_t n) {
}
char *strcat(char * restrict s1,
		const char * restrict s2) {
}
char *strncat(char * restrict s1,
		const char * restrict s2,
		size_t n) {
}
int memcmp(const void *s1, const void *s2, size_t n) {
}
int strcmp(const char *s1, const char *s2) {
}
int strcoll(const char *s1, const char *s2) {
}
int strncmp(const char *s1, const char *s2, size_t n) {
}
size_t strxfrm(char * restrict s1,
		const char * restrict s2,
		size_t n) {
}
void *memchr(const void *s, int c, size_t n) {
}
char *strchr(const char *s, int c) {
}
size_t strcspn(const char *s1, const char *s2) {
}
char *strpbrk(const char *s1, const char *s2) {
}
char *strrchr(const char *s, int c) {
}
size_t strspn(const char *s1, const char *s2) {
}
char *strstr(const char *s1, const char *s2) {
}
char *strtok(char * restrict s1,
		const char * restrict s2) {
}
void *memset(void *s, int c, size_t n){
}
char *strerror(int errnum) {
}
size_t strlen(const char *s){
   size_t size = 0;
   for (; s; s++, size++) ;
   return size;
}
