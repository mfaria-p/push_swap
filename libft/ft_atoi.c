/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <mfaria-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 10:45:40 by mfaria-p          #+#    #+#             */
/*   Updated: 2024/03/27 21:20:37 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long int	ft_atoi(const char *nptr)
{
	int				i;
	int				s;
	long long int	num;

	i = 0;
	s = 1;
	num = 0;
	while (nptr[i] && ((nptr[i] >= 9 && nptr[i] <= 13) || (nptr[i] == 32)))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			s = s * (-1);
		i++;
	}
	while (nptr[i] && (nptr[i] <= '9' && nptr[i] >= '0'))
	{
		num = num * 10 + (nptr[i] - '0');
		i++;
	}
	return (num * s);
}

/*#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	const char nptr[] = "-1000043";
	printf("Number = %s\n", nptr);
	printf("ft_atoi = %d\n", ft_atoi(nptr));
	printf("atoi = %d\n", atoi(nptr));
}*/
