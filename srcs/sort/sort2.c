/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 13:10:35 by mfaria-p          #+#    #+#             */
/*   Updated: 2024/03/24 13:16:05 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// para passar agora os numeros de b para a,
//por ordem bonita com o menor numero de moves
t_swap	**sort_a(t_swap **stack_a, t_swap **stack_b)
{
	int		i;
	t_swap	*tmp;

	while (*stack_b)
	{
		tmp = *stack_b;
		i = ft_rotate_type_ba(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == ft_case_rarb_a(*stack_a, *stack_b, tmp->value))
				i = rarb(stack_a, stack_b, tmp->value, 'b');
			else if (i == ft_case_rarrb_a(*stack_a, *stack_b, tmp->value))
				i = rarrb(stack_a, stack_b, tmp->value, 'b');
			else if (i == ft_case_rrarrb_a(*stack_a, *stack_b, tmp->value))
				i = rrarrb(stack_a, stack_b, tmp->value, 'b');
			else if (i == ft_case_rrarb_a(*stack_a, *stack_b, tmp->value))
				i = rrarb(stack_a, stack_b, tmp->value, 'b');
			else
				tmp = tmp->next;
		}
	}
	return (stack_a);
}
