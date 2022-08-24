#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct s_list t_list;
struct s_list
{
	int arg;
	t_list *next;
};
void print(t_list *list)
{
	printf("list:\n");
	while (list)
	{
		printf("arg:%i\n", list -> arg);
		list = list -> next;
	}
}
int add(t_list **ref, int arg)
{
	t_list *temp;
	temp = NULL;
	if (!(temp = (t_list *)malloc(sizeof(ref))))
		return (0);
	temp -> arg = arg;
	temp -> next = *ref;
	*ref = temp;
	return (1);
}

int main()
{
	t_list *list;
	list = NULL;
	add(&list, 0);
	add(&list, 1);
	add(&list, 2);
	print(list);
	return (0);
}