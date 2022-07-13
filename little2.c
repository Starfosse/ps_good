/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   little2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouleau <abouleau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 17:30:08 by abouleau          #+#    #+#             */
/*   Updated: 2022/07/09 17:30:23 by abouleau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_smallest(t_list **list_a, long int nbr)
{
	t_list	*liste1;

	liste1 = *list_a;
	while (liste1)
	{
		if (nbr > (long int) liste1->content)
			return (1);
		liste1 = liste1->next;
	}
	return (0);
}

void	ft_smallest_little2(t_list **list_a, int count)
{
	while (count < 0)
	{
		count++;
		ft_reverse_rotate(list_a, "rra\n");
	}
	while (count > 0)
	{
		count--;
		ft_rotate(list_a, "ra\n");
	}
}

void	ft_smallest_little(t_list **list_a)
{
	long int	smallest;
	t_list		*liste1;
	int			i;
	int			count;

	count = 0;
	liste1 = *list_a;
	smallest = ft_find_smaller(list_a);
	while ((long int) liste1->content != smallest)
	{
		liste1 = liste1->next;
		count++;
	}
	i = ft_lstsize(*list_a);
	if (count > i / 2)
		count = count - i;
	ft_smallest_little2(list_a, count);
}
