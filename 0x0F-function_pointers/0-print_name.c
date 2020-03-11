
/**
 * print_name - prints a name
 * @name: Name to print
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
