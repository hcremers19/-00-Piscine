/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 16:07:06 by hcremers          #+#    #+#             */
/*   Updated: 2021/07/20 16:07:09 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index <= 1)
		return (index);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
int	main(void)
{
	int	index;

	index = -3;
	printf("%d\n", ft_fibonacci(index));
	index = -1;
	printf("%d\n", ft_fibonacci(index));
	index = 0;
	printf("%d\n", ft_fibonacci(index));
	index = 1;
	printf("%d\n", ft_fibonacci(index));
	index = 3;
	printf("%d\n", ft_fibonacci(index));
	index = 5;
	printf("%d\n", ft_fibonacci(index));
}
*/