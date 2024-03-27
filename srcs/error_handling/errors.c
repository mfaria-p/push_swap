/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 02:02:08 by mfaria-p          #+#    #+#             */
/*   Updated: 2024/02/19 02:02:08 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_exit(int j, t_swap **stack_a, t_swap **stack_b)
{
	t_swap	*next;

	if (stack_a)
	{
		while (*stack_a != NULL)
		{
			next = (*stack_a)->next;
			free(*stack_a);
			*stack_a = next;
		}
	}
	if (stack_b)
	{
		while (*stack_b != NULL)
		{
			next = (*stack_b)->next;
			free(*stack_b);
			*stack_b = next;
		}
	}
	if (j == EXIT_SUCCESS)
		exit(EXIT_SUCCESS);
	ft_printf("Error\n");
	exit(EXIT_FAILURE);
}

void	ft_remove(t_swap *stack)
{
	int	i;

	i = -1;
	while (stack->next->next)
		stack = stack->next;
	free(stack->next);
	stack->next = NULL;
}

void	free_array(char **split)
{
	int	i;

	i = -1;
	if (split)
	{
		while (split[++i])
			free(split[i]);
	}
	free(split);
}
