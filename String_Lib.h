#ifndef STRING_LIB_H
#define STRING_LIB_H

#include <stdio.h>
#include <string.h>

typedef struct String
{
	char* Data;
	size_t Len;
} String;

void String_init(String* str);
void String_charp(String* dest, const char* Source);
void String_alloc_size(String* str, size_t size);
void String_realloc(String* str, size_t size);
void String_append(String* str, const char* source);
void String_destroy(String* str);
void trynow(String* str);

#endif // !STRING_LIB