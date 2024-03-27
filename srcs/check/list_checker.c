/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 02:20:58 by mfaria-p          #+#    #+#             */
/*   Updated: 2024/02/19 02:20:58 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	arraysize(char **str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_num(char *num)
{
	int	i;

	i = 0;
	if (num[i] == '-' || num[i] == '+')
		i++;
	if (!num[i])
		return (0);
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			return (0);
		i++;
	}
	return (1);
}

void	check_repeat(t_swap *stack)
{
	t_swap		*temp;
	t_swap		*check;
	int			i;

	i = 0;
	check = stack;
	while (check)
	{
		temp = check->next;
		while (temp)
		{
			if (check->value == temp->value)
				ft_exit(EXIT_FAILURE, &stack, NULL);
			temp = temp->next;
			i++;
		}
		check = check->next;
	}
}

void	read_list(int ac, t_swap *stack, char **str)
{
	int				i;
	long long int	j;
	t_swap			*temp;

	if (!*str)
		ft_exit(EXIT_FAILURE, &stack, NULL);
	temp = stack;
	i = 0;
	while (i < ac)
	{
		j = ft_atoi(str[i]);
		temp->value = (int)j;
		temp->next = (t_swap *)malloc(sizeof(t_swap));
		if (j < INT_MIN || j > INT_MAX || !check_num(str[i]) || !temp->next)
		{
			free_array(str);
			temp->next->next = NULL;
			ft_exit(EXIT_FAILURE, &stack, NULL);
		}
		temp = temp->next;
		temp->next = NULL;
		i++;
	}
	ft_remove(stack);
	check_repeat(stack);
}

void	read_list_av(int ac, t_swap *stack, char **str)
{
	int				i;
	long long int	j;
	t_swap			*temp;

	if (!*str)
		ft_exit(EXIT_FAILURE, &stack, NULL);
	temp = stack;
	i = 1;
	while (i < ac)
	{
		j = ft_atoi(str[i]);
		if (j < INT_MIN || j > INT_MAX || !check_num(str[i]) || !str[i][0])
			ft_exit(EXIT_FAILURE, &stack, NULL);
		temp->value = j;
		temp->next = (t_swap *)malloc(sizeof(t_swap));
		if (!temp->next)
			ft_exit(EXIT_FAILURE, &stack, NULL);
		temp = temp->next;
		temp->next = NULL;
		i++;
	}
	ft_remove(stack);
	check_repeat(stack);
}
