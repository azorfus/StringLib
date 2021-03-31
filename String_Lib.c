#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "String_Lib.h"

void String_init(String* str)
{
	str->Data = NULL;
	str->Len = 0;
}

void String_charp(String* dest, const char* Source)
{
	dest->Len = strlen(Source);
	dest->Data = malloc(dest->Len + 1);
	strcpy(dest->Data, Source);
}

void String_alloc_size(String* str, size_t size)
{
	str->Data = malloc(size);
	str->Len = size-1;
}

void String_realloc(String* str, size_t size)
{
	str->Data = realloc(str->Data, str->Len + size);
}

void String_append(String* str, const char* source)
{
	size_t source_len = strlen(source);
	str->Data = realloc(str->Data, str->Len + source_len + 1);
	str->Len += source_len;
	strcpy(str->Data, source);
}

void String_resize(String* str, size_t resize, char fill_char)
{
	str->Data = realloc(str->Data, str->Len + resize + 1);
	str->Data = 
}

void String_destroy(String* str)
{
	free(str->Data);
	str->Data = NULL;
	str->Len = 0;
}
