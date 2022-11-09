/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 21:40:42 by hcremers          #+#    #+#             */
/*   Updated: 2021/07/19 21:40:44 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	c;
	int	nb1;

	nb1 = nb;
	c = 0;
	while (c < (power - 1))
	{
		nb = nb * nb1;
		c++;
	}
	if (power == 0)
		nb = 1;
	else if (power < 0)
		nb = 0;
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_iterative_power(2, 5));
	printf("%d\n", ft_iterative_power(10, 3));
	printf("%d\n", ft_iterative_power(5, 3));
	printf("%d\n", ft_iterative_power(-5, -3));
	printf("%d\n", ft_iterative_power(5, -3));
	printf("%d\n", ft_iterative_power(-5, 3));
	printf("%d\n", ft_iterative_power(-5, 2));
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(1, 0));
	printf("%d\n", ft_iterative_power(-1, 0));
}
*/