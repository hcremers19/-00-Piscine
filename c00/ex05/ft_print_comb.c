/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 09:07:53 by hcremers          #+#    #+#             */
/*   Updated: 2021/07/13 17:57:12 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, char d, char e)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &e, 1);
	if (c == '7' && d == '8' && e == '9')
	{
	}
	else
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	n;
	char	o;
	char	p;

	n = '0';
	o = '1';
	p = '2';
	while (n <= '7')
	{
		while (o <= '8')
		{
			while (p <= '9')
			{
				ft_putchar(n, o, p);
				p++;
			}
			o++;
			p = o + 1;
		}
		n++;
		o = n + 1;
		p = o + 1;
	}
}
/*
int	main(void)
{
	ft_print_comb();
}
*/
