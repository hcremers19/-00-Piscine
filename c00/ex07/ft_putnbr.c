/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 11:30:53 by hcremers          #+#    #+#             */
/*   Updated: 2021/07/13 18:01:31 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_nbrtochar(char a[10])
{
	write(1, &a[0], 1);
	write(1, &a[1], 1);
	write(1, &a[2], 1);
	write(1, &a[3], 1);
	write(1, &a[4], 1);
	write(1, &a[5], 1);
	write(1, &a[6], 1);
	write(1, &a[7], 1);
	write(1, &a[8], 1);
	write(1, &a[9], 1);
}

void	ft_putnbr(int nb)
{
	char	a[10];

	a[0] = ((nb % 10000000000) / 1000000000) + 48;
	a[1] = ((nb % 1000000000) / 100000000) + 48;
	a[2] = ((nb % 100000000) / 10000000) + 48;
	a[3] = ((nb % 10000000) / 1000000) + 48;
	a[4] = ((nb % 1000000) / 100000) + 48;
	a[5] = ((nb % 100000) / 10000) + 48;
	a[6] = ((nb % 10000) / 1000) + 48;
	a[7] = ((nb % 1000) / 100) + 48;
	a[8] = ((nb % 100) / 10) + 48;
	a[9] = ((nb % 10) / 1) + 48;
	ft_nbrtochar(a);
}
/*
int	main(void)
{
	ft_putnbr(147483648);
}
*/
