/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 15:15:14 by hcremers          #+#    #+#             */
/*   Updated: 2021/07/20 15:15:17 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		return (nb * ft_recursive_power(nb, (power - 1)));
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_recursive_power(2, 5));
	printf("%d\n", ft_recursive_power(10, 3));
	printf("%d\n", ft_recursive_power(5, 3));
	printf("%d\n", ft_recursive_power(-5, -3));
	printf("%d\n", ft_recursive_power(5, -3));
	printf("%d\n", ft_recursive_power(-5, 3));
	printf("%d\n", ft_recursive_power(-5, 2));
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(1, 0));
	printf("%d\n", ft_recursive_power(-1, 0));
}
*/