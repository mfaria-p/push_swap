/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_and_push.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:51:19 by mfaria-p          #+#    #+#             */
/*   Updated: 2024/03/24 13:00:19 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	rarb(t_swap **a, t_swap **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->value != c && ft_find_place_b(*b, c) > 0)
			rr(*a, *b);
		while ((*a)->value != c)
			ra(*a);
		while (ft_find_place_b(*b, c) > 0)
			rb(*b);
		pb(a, b);
	}
	else
	{
		while ((*b)->value != c && ft_find_place_a(*a, c) > 0)
			rr(*a, *b);
		while ((*b)->value != c)
			rb(*b);
		while (ft_find_place_a(*a, c) > 0)
			ra(*a);
		pa(a, b);
	}
	return (-1);
}

int	rrarrb(t_swap **a, t_swap **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->value != c && ft_find_place_b(*b, c) > 0)
			rrr(*a, *b);
		while ((*a)->value != c)
			rra(*a);
		while (ft_find_place_b(*b, c) > 0)
			rrb(*b);
		pb(a, b);
	}
	else
	{
		while ((*b)->value != c && ft_find_place_a(*a, c) > 0)
			rrr(*a, *b);
		while ((*b)->value != c)
			rrb(*b);
		while (ft_find_place_a(*a, c) > 0)
			rra(*a);
		pa(a, b);
	}
	return (-1);
}

int	rrarb(t_swap **a, t_swap **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->value != c)
			rra(*a);
		while (ft_find_place_b(*b, c) > 0)
			rb(*b);
		pb(a, b);
	}
	else
	{
		while (ft_find_place_a(*a, c) > 0)
			rra(*a);
		while ((*b)->value != c)
			rb(*b);
		pa(a, b);
	}
	return (-1);
}

int	rarrb(t_swap **a, t_swap **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->value != c)
			ra(*a);
		while (ft_find_place_b(*b, c) > 0)
			rrb(*b);
		pb(a, b);
	}
	else
	{
		while (ft_find_place_a(*a, c) > 0)
			ra(*a);
		while ((*b)->value != c)
			rrb(*b);
		pa(a, b);
	}
	return (-1);
}
