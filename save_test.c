

//void ft_swap(t_list *a, t_list *b)
//{
//	int temp = a->data;
//	a->data = b->data;
//	b->data = temp;
//}
//
//int ascending(int a, int b)
//{
//	return (a <= b);
//}
//	
//t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
//{
//	int swaped = 1;
//	t_list *temp = lst;
//
//	while(swaped == 1)
//	{
//		swaped = 0;
//		while(temp && temp->next)
//		{
//			if (cmp(temp->data, temp->next->data) == 0)
//			{
//				ft_swap(temp, temp->next);
//				swaped = 1;
//			}
//			temp = temp->next;
//		}
//		temp = lst;
//	}
//	return (lst);
//}

//void ft_add_plus_one(void *num)
//{
//	int *num1 = (int *)num;
//	*num1 = *num1 + 10;
//}
//
//void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
//{
//	t_list *temp = begin_list;
//
//	while(temp)
//	{
//		f(temp);
//		temp = temp->next;
//	}
//	temp = begin_list;
//}
//

// t_list *ft_add_new(t_list *node, void* value)
// {
// 	t_list *new_node = (t_list *)malloc(sizeof(t_list));
// 	// new_node->data = (t_list *)malloc(sizeof(void *));
// 	if (!new_node)
// 		return (NULL);
// 	new_node->data = (void *)value;
// 	new_node->next = NULL;
// 	return (new_node);
// }
