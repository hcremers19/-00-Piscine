/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 13:35:06 by hcremers          #+#    #+#             */
/*   Updated: 2021/07/13 17:59:03 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char m, char n, char o, char p)
{
	write(1, &m, 1);
	write(1, &n, 1);
	write(1, " ", 1);
	write(1, &o, 1);
	write(1, &p, 1);
	if (m == 57 && n == 56 && o == 57 && p == 57)
	{
	}
	else
	{
		write(1, ", ", 2);
	}
}

void	ft_inttochar(int a, int b)
{
	char	m;
	char	n;
	char	o;
	char	p;

	m = (a / 10) + 48;
	n = (a % 10) + 48;
	o = (b / 10) + 48;
	p = (b % 10) + 48;
	ft_putchar(m, n, o, p);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		while (b <= 99)
		{
			if (a == b)
			{
			}
			else
			{
				ft_inttochar(a, b);
			}
			b++;
		}
		b = a + 1;
		a++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
}
*/
