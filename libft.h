#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define buff 1024
#define LLONG_MAX 12345678953
#define INT_MAX -23456789

#define UTF_4BYTE 32456
typedef struct t_list
{
	char store[buff + 1];
	int value;
	struct t_list *next;
}n_list;
char *ft_strstr(char *str, char *cutoff);
void ft_printalpha(void);
void ft_printrev(void);
char *ft_strcapitalize(char *str);
void ft_printcomb(void);
void ft_read(int fd);
long ft_printnbr(long nbr);
int ft_power(int nbr, int power);
int ft_ft(int *nbr);
int ft_ultimate(int *********nbr);
void ft_swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void ft_div_mod(int a, int b, int *div, int *mod);
void ft_ultimate_div_mod(int *a, int *b);
void ft_rev_int_tab(int *tab, int size);
void ft_putstr(char *str);
int ft_strcmp(char *s1, char *s2);
void ft_sort_int_tab(int *tab, int size);
char *ft_strcat(char *dest, char *src);
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
char *ft_strncat(char *dest, char *src, unsigned int nb);
int ft_strncmp(char *s1, char *s2, size_t n);
void ft_putnbr(int nb);
int ft_atoi(char *str);
int ft_iterative_factorial(int nb);
int ft_recursive_factorial(int nb);
int ft_iterative_power(int nb, int power);
int ft_recursive_power(int nb, int power);
void ft_print(int nbr);
void	ft_putnbr_base(int nbr, char *base);
void ft_putchar(char c)
{
	write (1, &c, 1);
}
int ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
int main()
{
	
	// printf("%d\n", ft_iterative_power(4, 2));
	// printf("%d\n", ft_iterative_factorial(6));
	// ft_putnbr_base(4, "01");
	// atoi wouldn't work if the giving sign is double
	// and if a character is present it wouldn't work
	// printf("%d\n", ft_atoi("  ---+--+1234"));
	// ft_putnbr(42);
	// char src[] = "kaigama";
	// char dest[8];
	// printf("%d\n", ft_strlen(str));
	// char s1[] = "kaigama";
	// char s2[] = "gama";
	// printf("%d\n", ft_strncmp(s1, s2, 7));
	// int size;
	// int tab[] = {5, 3, 4, 2, 1};
	// ft_sort_int_tab(tab, 5);
	// for (int i = 0; i < 5; i++)
	// {
	// 	printf("tab[%d] = tab[%d]\n", i, tab[i]);
	// }
	// int size;
	// size = 5;
	// int tab[] = {1, 2, 3, 4, 5};
	// ft_rev_int_tab(tab, 5);
	// for (int i = 0; i < size; i++)
	// {
	// 	printf("tab[%d] = tab[%d]\n", i, tab[i]);
	// }
	// char str[] = "kaigama";
	// ft_putstr(str);
	// int a;
	// int b;
	// int div;
	// int mod;
	// a = 20;
	// b = 4;
	// printf("before printout:\n a = 20\n b = 4\n");
	// ft_ultimate_div_mod(&a, &b);
	// printf("after printout:\n a = %d\n b = %d\n", a, b);
	// int a;
	// int b;
	// int div;
	// int mod;
	// a = 4;
	// b = 2;
	// printf("before printout:\n a = 4\n b = 2\n");
	// // the ampersand is used for accessing a pointer variable
	// or pointers identifiers with no address
	// ft_div_mod(a, b, &div, &mod);
	// printf("after printout:\n a = %d\n b = %d\n", div, mod);
	// int a;
	// int b;
	// a = 2;
	// b = 4;
	// printf("Before printout:\n a = 2 b = 4\n");
	// ft_swap(&a, &b);
	// printf("After printout:\n a = %d b = %d\n", a, b);
	// ft_read(1);
	// printf("%ld\n", ft_printnbr(12345678910));
	// ft_printcomb();
	// ft_printalpha();
	// ft_printrev();
	// printf("%d\n", ft_power(2, 5));
	// int a;
	// a = 2;
	// printf("before printout: a = 2\n");
	// printf("after printout: a = %d", ft_ft(&a));
// 	int a;
// 	int *a1;
// 	int **a2;
// 	int ***a3;
// 	int ****a4;
// 	int *****a5;
// 	int ******a6;
// 	int *******a7;
// 	int ********a8;
// 	int *********a9;

// printf("Before printout: a = 3\n");
// 	a = 3;
// // here: we are taking a pointer to a pointer
// 	a1 = &a;
// 	a2 = &a1;
// 	a3 = &a2;
// 	a4 = &a3;
// 	a5 = &a4;
// 	a6 = &a5;
// 	a7 = &a6;
// 	a8 = &a7;
// 	a9 = &a8;
// 	printf("after printout: a = %d", ft_ultimate(a9));
// char str[] = "go to";
// printf("%s\n", ft_strcapitalize(str));
// char str[] = "kaigama";
// char cutoff[] = "gama";
// printf("%s\n", ft_strstr(str, cutoff));
	return (0);
}
