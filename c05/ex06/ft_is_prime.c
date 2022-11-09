/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 17:52:34 by hcremers          #+#    #+#             */
/*   Updated: 2021/07/20 17:52:40 by hcremers         ###   ########.fr       */
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
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(1));
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(3));
	printf("%d\n", ft_is_prime(4));
	printf("%d\n", ft_is_prime(5));
	printf("%d\n", ft_is_prime(6));
	printf("%d\n", ft_is_prime(7));
	printf("%d\n", ft_is_prime(8));
	printf("%d\n", ft_is_prime(11));
	printf("%d\n", ft_is_prime(13));
	printf("%d\n", ft_is_prime(15));
	printf("%d\n", ft_is_prime(19));
	printf("%d\n", ft_is_prime(-1));
}
*/