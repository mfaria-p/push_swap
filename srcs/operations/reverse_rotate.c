/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 02:23:59 by mfaria-p          #+#    #+#             */
/*   Updated: 2024/02/19 02:23:59 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	reverse_rotate(t_swap *stack)
{
	int		temp1;
	int		temp2;
	t_swap	*temp_ptr;

	if (!stack)
		return ;
	temp_ptr = stack;
	temp1 = stack->value;
	while (stack && stack->next)
	{
		temp2 = stack->next->value;
		stack->next->value = temp1;
		stack = stack->next;
		temp1 = temp2;
	}
	temp_ptr->value = temp1;
}

void	rra(t_swap *stack_a)
{
	reverse_rotate(stack_a);
	write(1, "rra\n", 4);
}

void	rrb(t_swap *stack_b)
{
	reverse_rotate(stack_b);
	write(1, "rrb\n", 4);
}

void	rrr(t_swap *stack_a, t_swap *stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	write(1, "rrr\n", 4);
}
