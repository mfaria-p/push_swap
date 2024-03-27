/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 02:23:55 by mfaria-p          #+#    #+#             */
/*   Updated: 2024/02/19 02:23:55 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	push(t_swap **stack_src, t_swap **stack_dest)
{
	t_swap	*temp;

	if (!*stack_src)
		return ;
	temp = *stack_dest;
	(*stack_dest) = (*stack_src);
	(*stack_src) = (*stack_src)->next;
	(*stack_dest)->next = temp;
}

void	pa(t_swap **stack_a, t_swap **stack_b)
{
	push(stack_b, stack_a);
	write(1, "pa\n", 3);
}

void	pb(t_swap **stack_a, t_swap **stack_b)
{
	push(stack_a, stack_b);
	write(1, "pb\n", 3);
}
