typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*lst;
	lst = *begin_list;
	
	if(cmp(lst->data, data_ref) == 0)
	{
		*begin_list = lst->next;
		free(lst);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	lst = *begin_list;// so lst == lst->next
	ft_list_remove_if(&lst->next, data_ref, cmp);
}