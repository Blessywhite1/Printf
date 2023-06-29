#include "main.h"
/**
 * _printf: create and output strings formatted at runtime
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	char *s = "string";
	char *c = "character";
	int  '% = "37";
	{
		printf("%s\n", "string");
        	printf("%c\n", "character");
        	printf("%%\n", "37")
	};

	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
}
