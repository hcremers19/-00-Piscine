/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c04ex04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:54:19 by hcremers          #+#    #+#             */
/*   Updated: 2021/11/10 14:54:22 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count])
		count++;
	return (count);
}

int	ft_basecheck(char *base)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (base[j])
	{
		while (base[i])
		{
			if (base[i] == base[j] || base[i] == '+' || base[i] == '-')
				return (0);
			else
				i++;
		}
		j++;
		i = j + 1;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	len = ft_strlen(base);
	if (len <= 1 || !ft_basecheck(base))
		ft_putchar(0);
	else if (0 <= nbr && nbr <= (len - 1))
		ft_putchar(base[nbr]);
	else if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr_base(-nbr, base);
	}
	else
	{
		ft_putnbr_base(nbr / len, base);
		ft_putnbr_base(nbr % len, base);
	}
}
/*
int	main(void)
{
	int		nbr;
	char	*base;

	nbr = 255;
	base = "11";
	ft_putnbr_base(nbr, base);
	write (1, "\n", 1);
	return (0);
}
*/
