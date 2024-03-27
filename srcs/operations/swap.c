/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 02:24:07 by mfaria-p          #+#    #+#             */
/*   Updated: 2024/02/19 02:24:07 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	swap(t_swap *stack)
{
	int	temp;

	if (!stack)
		return ;
	temp = stack->next->value;
	stack->next->value = stack->value;
	stack->value = temp;
}

void	sa(t_swap *stack)
{
	swap(stack);
	write(1, "sa\n", 3);
}

void	sb(t_swap *stack)
{
	swap(stack);
	write(1, "sa\n", 3);
}

void	ss(t_swap *stack_a, t_swap *stack_b)
{
	sa(stack_a);
	sb(stack_b);
	write(1, "ss\n", 3);
}
