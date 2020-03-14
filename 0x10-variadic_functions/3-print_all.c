#include "variadic_functions.h"

void (*decision(const char))(va_list);
void charf(va_list);
void integerf(va_list);
void floatf(va_list);
void stringf(va_list);
void ex(va_list);

/**
 * prints anything - prints anything
 * @format: list of types of arguments passed 
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list unknow_list;

	if (format == NULL)
		return;

	va_start(unknow_list, format);

	while(format[i] != '\0')
	{
		decision(format[i])(unknow_list);	 
		printf(", ");
		i++;
	}
	printf("\n");
	va_end(unknow_list);
}

void (*decision(char d))(va_list)
{
	int i = 0;

	types_t type1[] = 
	{
		{'c', charf}, 
		{'i', integerf},
		{'f', floatf},
		{'s', stringf},
		{'\0', NULL}
	};

	while (type1[i].type != '\0')
	{
		if (type1[i].type == d)
		{	
			return(type1[i].f);
		}
		i++;
	}
	return (ex);
}

void ex(va_list char_type)
{
}

void charf(va_list char_type)
{
	printf("%c", va_arg(char_type, int));
}

void integerf(va_list char_type)
{
	printf("%d", va_arg(char_type, int));
}

void floatf(va_list char_type)
{
	printf("%f", va_arg(char_type, double));
}

void stringf(va_list char_type)
{
	if (char_type == NULL)
		printf("(nil)");
	else
	printf("%s", va_arg(char_type, char *));
}
