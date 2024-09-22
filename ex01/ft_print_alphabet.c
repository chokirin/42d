#include <unistd.h>
void print_alphabet(void)
{
	int i;
	i=97;
	while (i < 123)
	{
		write(1, &i, 1);
		i++;
	}
}
/* int main() {
	print_alphabet();
	return 0;
} */
