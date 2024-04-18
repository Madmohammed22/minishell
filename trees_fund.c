#include "pars_line_using_trees.h"


void ft_print_list(t_list *head)
{
	t_list *temp = head;

	while(temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
}

t_list *ft_join_command_with_list(char *str, char c , int flag)
{

	int i;
	int count;
	t_list *head = NULL;
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == c && (str[i + flag] == c))
		{
			ft_lstadd_back(&head, ft_lstnew(ft_substr(str, i -  count , count)));
			i += 2;
			count = 0;
		}
			count++;
			i++;
	}
			ft_lstadd_back(&head, ft_lstnew(ft_substr(str, i -  count , count)));
	
	return head;
}

int main()
{
	t_list *head;

int size_list;
	char *n1 = ft_strdup("ls | wc | grep ft_...c || cat ft_...c || echo hello && ls && echo "
	" && ls | wc | wc && cat ft_strlen.c || wc ft_substr.c | cat ");
	head = ft_join_command_with_list(n1 , '&' , 1);
	ft_print_list(head);
	size_list = ft_lstsize(head);
	printf("size %d\n", size_list);
	printf("---------------------------------------------\n");		
	head = ft_join_command_with_list((char *)head->content , '|' , 1);
	ft_print_list(head);
	size_list = ft_lstsize(head);
	printf("size %d\n", size_list);

	printf("---------------------------------------------\n");		
	head = ft_join_command_with_list((char *)head->content , '|' , 0);
	ft_print_list(head);
	size_list = ft_lstsize(head);
	printf("size %d\n", size_list);
}