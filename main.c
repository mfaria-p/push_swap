/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 02:24:51 by mfaria-p          #+#    #+#             */
/*   Updated: 2024/02/19 02:24:51 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

//3 linhas ainda de sobra

int	main(int ac, char **av)
{
	t_swap	*stack_a;
	char	**split;

	stack_a = (t_swap *)malloc(sizeof(t_swap));
	if (!stack_a)
		return (0);
	stack_a->next = NULL;
	if (ac == 1)
		return (0);
	if (ac == 2)
	{
		split = ft_split(av[1], ' ');
		read_list(arraysize(split), stack_a, split);
		if (arraysize(split) == 1)
		{
			free_array(split);
			ft_exit(EXIT_SUCCESS, &stack_a, NULL);
		}
		free_array(split);
	}
	else
		read_list_av(ac, stack_a, av);
	sort_main(stack_a);
	ft_exit(EXIT_SUCCESS, &stack_a, NULL);
}
