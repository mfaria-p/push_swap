/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:42:48 by mfaria-p          #+#    #+#             */
/*   Updated: 2024/03/24 14:45:15 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_main(t_swap *stack_a)
{
	int	size;

	if (lst_sorted(stack_a))
		ft_exit(EXIT_SUCCESS, &stack_a, NULL);
	size = ft_lstsize(stack_a);
	if (size == 2)
		sa(stack_a);
	else if (size == 3)
		sort_3(&stack_a);
	else
		sort_more_than_3(&stack_a);
}

void	sort_3(t_swap **stack)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (!(i < j && j < k))
	{
		i = (*stack)->value;
		j = (*stack)->next->value;
		k = (*stack)->next->next->value;
		if ((k < i && i < j) || (i > j && j > k))
			rra(*stack);
		else if ((j < k && k < i))
			ra(*stack);
		else if ((j < i && i < k) || (k < i && i < j) || (i < k && k < j))
			sa(*stack);
	}
}

void	sort_more_than_3(t_swap **stack_a)
{
	t_swap	*stack_b;
	int		i;

	stack_b = NULL;
	stack_b = sort_b(stack_a);
	stack_a = sort_a(stack_a, &stack_b);
	i = ft_find_index(*stack_a, stack_min(*stack_a));
	if (i < ft_lstsize(*stack_a) - i)
	{
		while ((*stack_a)->value != stack_min(*stack_a))
			ra(*stack_a);
	}
	else
	{
		while ((*stack_a)->value != stack_min(*stack_a))
			rra(*stack_a);
	}
}

// passae os numeros para o b, numa ordem bonitinha
t_swap	*sort_b(t_swap **stack_a)
{
	t_swap	*stack_b;

	stack_b = NULL;
	if (ft_lstsize(*stack_a) > 3 && !lst_sorted(*stack_a))
		pb(stack_a, &stack_b);
	if (ft_lstsize(*stack_a) > 3 && !lst_sorted(*stack_a))
		pb(stack_a, &stack_b);
	if (ft_lstsize(*stack_a) > 3 && !lst_sorted(*stack_a))
		sort_until_3_in_a(stack_a, &stack_b);
	if (!lst_sorted(*stack_a))
		sort_3(stack_a);
	return (stack_b);
}

void	sort_until_3_in_a(t_swap **stack_a, t_swap **stack_b)
{
	int		i;
	t_swap	*tmp;

	while (ft_lstsize(*stack_a) > 3 && !lst_sorted(*stack_a))
	{
		tmp = *stack_a;
		i = ft_rotate_type_ab(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == ft_case_rarb(*stack_a, *stack_b, tmp->value))
				i = rarb(stack_a, stack_b, tmp->value, 'a');
			else if (i == ft_case_rrarrb(*stack_a, *stack_b, tmp->value))
				i = rrarrb(stack_a, stack_b, tmp->value, 'a');
			else if (i == ft_case_rarrb(*stack_a, *stack_b, tmp->value))
				i = rarrb(stack_a, stack_b, tmp->value, 'a');
			else if (i == ft_case_rrarb(*stack_a, *stack_b, tmp->value))
				i = rrarb(stack_a, stack_b, tmp->value, 'a');
			else
				tmp = tmp->next;
		}
	}
}
