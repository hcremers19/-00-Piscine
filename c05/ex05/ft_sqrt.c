/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 17:10:36 by hcremers          #+#    #+#             */
/*   Updated: 2021/07/20 17:10:39 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	c;

	i = 1;
	c = 1;
	while (c * c < nb && c < 46340)
		c++;
	if (nb == 1)
		return (1);
	else if (c * c == nb)
		return (c);
	else
		return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(2));
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(25));
	printf("%d\n", ft_sqrt(361));
	printf("%d\n", ft_sqrt(1764));
	printf("%d\n", ft_sqrt(9801));
	printf("%d\n", ft_sqrt(443556));
	printf("%d\n", ft_sqrt(3771364));
	printf("%d\n", ft_sqrt(17799961));
	printf("%d\n", ft_sqrt(1000));
	printf("%d\n", ft_sqrt(2147395600));
	printf("%d\n", ft_sqrt(2147483647));
}
*/