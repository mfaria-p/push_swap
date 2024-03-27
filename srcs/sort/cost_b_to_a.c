/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost_b_to_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 19:59:42 by mfaria-p          #+#    #+#             */
/*   Updated: 2024/03/24 13:06:33 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_find_place_a(t_swap *stack_a, int nbr_push)
{
	int		i;
	t_swap	*tmp;

	i = 1;
	if (nbr_push < stack_a->value && nbr_push > ft_lstlast(stack_a)->value)
		i = 0;
	else if (nbr_push > stack_max(stack_a) || nbr_push < stack_min(stack_a))
		i = ft_find_index(stack_a, stack_min(stack_a));
	else
	{
		tmp = stack_a->next;
		while (stack_a->value > nbr_push || tmp->value < nbr_push)
		{
			stack_a = stack_a->next;
			tmp = stack_a->next;
			i++;
		}
	}
	return (i);
}

int	ft_case_rarb_a(t_swap *a, t_swap *b, int c)
{
	int	i;

	i = ft_find_place_a(a, c);
	if (i < ft_find_index(b, c))
		i = ft_find_index(b, c);
	return (i);
}

int	ft_case_rrarrb_a(t_swap *a, t_swap *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_a(a, c))
		i = ft_lstsize(a) - ft_find_place_a(a, c);
	if ((i < (ft_lstsize(b) - ft_find_index(b, c))) && ft_find_index(b, c))
		i = ft_lstsize(b) - ft_find_index(b, c);
	return (i);
}

int	ft_case_rarrb_a(t_swap *a, t_swap *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_index(b, c))
		i = ft_lstsize(b) - ft_find_index(b, c);
	i = ft_find_place_a(a, c) + i;
	return (i);
}

int	ft_case_rrarb_a(t_swap *a, t_swap *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_a(a, c))
		i = ft_lstsize(a) - ft_find_place_a(a, c);
	i = ft_find_index(b, c) + i;
	return (i);
}
