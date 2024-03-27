/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 19:05:10 by mfaria-p          #+#    #+#             */
/*   Updated: 2024/03/24 15:19:22 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

//temos a certeza que escolhemos as rotations que minimizam o total de moves, 
//pk em cada case vemos o maior numero de rotacoes para meter o numero
//no sitio certo, de assim nesta funcoao escolhemos a melhro opcao
int	ft_rotate_type_ab(t_swap *a, t_swap *b)
{
	int		i;
	t_swap	*tmp;

	tmp = a;
	i = ft_case_rrarrb(a, b, a->value);
	while (tmp)
	{
		if (i > ft_case_rarb(a, b, tmp->value))
			i = ft_case_rarb(a, b, tmp->value);
		if (i > ft_case_rrarrb(a, b, tmp->value))
			i = ft_case_rrarrb(a, b, tmp->value);
		if (i > ft_case_rarrb(a, b, tmp->value))
			i = ft_case_rarrb(a, b, tmp->value);
		if (i > ft_case_rrarb(a, b, tmp->value))
			i = ft_case_rrarb(a, b, tmp->value);
		tmp = tmp->next;
	}
	return (i);
}

int	ft_rotate_type_ba(t_swap *a, t_swap *b)
{
	int		i;
	t_swap	*tmp;

	tmp = b;
	i = ft_case_rrarrb_a(a, b, b->value);
	while (tmp)
	{
		if (i > ft_case_rarb_a(a, b, tmp->value))
			i = ft_case_rarb_a(a, b, tmp->value);
		if (i > ft_case_rrarrb_a(a, b, tmp->value))
			i = ft_case_rrarrb_a(a, b, tmp->value);
		if (i > ft_case_rarrb_a(a, b, tmp->value))
			i = ft_case_rarrb_a(a, b, tmp->value);
		if (i > ft_case_rrarb_a(a, b, tmp->value))
			i = ft_case_rrarb_a(a, b, tmp->value);
		tmp = tmp->next;
	}
	return (i);
}
