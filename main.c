#include "libft.h"

int main()
{
	t_list *a;
	t_list *b;
	t_list *c;

	a = ft_lstnew(NULL);
	b = ft_lstnew(NULL);
	c = ft_lstnew(NULL);
	a->next = b;
	b->next = c;

	ft_putnbr(ft_lstsize(a), 10, "0123456789");
}
