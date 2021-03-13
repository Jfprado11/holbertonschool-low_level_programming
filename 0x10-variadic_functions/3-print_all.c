#include "variadic_functions.h"

void _char(va_list c);
void _integer(va_list i);
void _float(va_list f);
void _string(va_list s);
/**
 *print_all - prints a float, char, int, and string
 *@format: tells how many arguments need to be counted
 *
 *Return: nothing
 */
void print_all(const char * const format, ...)
{
	var_a vars[] = {
		{"c", _char},
		{"i", _integer},
		{"f", _float},
		{"s", _string},
		{NULL, NULL}
	};
	int a = 0, b;
	va_list ag;
	char *f, *j;

	f = "";
	j = ", ";
	va_start(ag, format);
	while (format[a] != '\0')
	{
		b = 0;
		while (vars[b].ty != NULL)
		{
			if (format[a] == vars[b].ty[0])
			{
				printf("%s", f);
				vars[b].st(ag);
				f = j;
			}
			b++;
		}
		a++;
	}
	printf("\n");
	va_end(ag);
}

/**
 *_char - prints a char
 *@c: char
 *
 *Return: nothing
 */
void _char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 *_integer - prints a int
 *@i: integer
 *
 *Return: nothing
 */
void _integer(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 *_float - prints a float
 *@f: float
 *
 *Return: nothing
 */
void _float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 *_string - prints a string
 *@s: string
 *
 *Return: nothing
 */
void _string(va_list s)
{
	if (s == NULL)
	{
		printf("(nil)");
	}
	printf("%s", va_arg(s, char *));
}
