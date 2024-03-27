/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 02:24:03 by mfaria-p          #+#    #+#             */
/*   Updated: 2024/02/19 02:24:03 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rotate(t_swap *stack)
{
	int	temp;

	if (!stack)
		return ;
	temp = stack->value;
	while (stack->next && stack)
	{
		stack->value = stack->next->value;
		stack = stack->next;
	}
	stack->value = temp;
}

void	ra(t_swap *stack_a)
{
	rotate(stack_a);
	write(1, "ra\n", 3);
}

void	rb(t_swap *stack_b)
{
	rotate(stack_b);
	write(1, "rb\n", 3);
}

void	rr(t_swap *stack_a, t_swap *stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	write(1, "rr\n", 3);
}
