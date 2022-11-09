/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 18:27:50 by hcremers          #+#    #+#             */
/*   Updated: 2021/07/20 18:27:53 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	r;

	i = 2;
	if (nb < 2)
		return (0);
	while (i < 46340 && i < nb)
	{
		r = nb % i;
		if (r == 0)
			return (0);
		else
			i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
		nb++;
	if (ft_is_prime(nb) == 1)
		return (nb);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_find_next_prime(2147395600));
}
*/