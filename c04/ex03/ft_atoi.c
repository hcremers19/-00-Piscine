/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 12:09:42 by hcremers          #+#    #+#             */
/*   Updated: 2021/07/19 12:09:49 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
//
int	ft_atoi_while(char *str, int i, int s, int n)
{
	while ((str[i] > 8 && str[i] < 14) || (str[i] > 47 && str[i] < 58)
		|| str[i] == 32 || str[i] == 43 || str[i] == 45)
	{
		while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
			i++;
		while (str[i] == 45 || str[i] == 43)
		{
			if (str[i] == 45 && str[i])
			{
				s = s * -1;
				i++;
			}
			else
				i++;
		}
		while (str[i] > 47 && str[i] < 58)
		{
			n = (n * 10) + (str[i] - 48);
			i++;
		}
		return (n * s);
	}
	return (n * s);
}

int	ft_atoi(char *str)
{
	int	i;
	int	s;
	int	n;
	int	final;

	i = 0;
	s = 1;
	n = 0;
	final = ft_atoi_while(str, i, s, n);
	return (final);
}
/*
int	main(void)
{
	char str[] = "";

	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
}
*/