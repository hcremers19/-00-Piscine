/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 14:31:27 by hcremers          #+#    #+#             */
/*   Updated: 2021/07/15 14:31:29 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] > 31)
		i++;
	if (str[i] == 0)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	char	*str;

	str = "liasdfh";
	printf("%d\n", ft_str_is_printable(str));
	str = "lakdjsfh54+65+";
	printf("%d\n", ft_str_is_printable(str));
	str = "';.,/[][''.;//   /];";
	printf("%d\n", ft_str_is_printable(str));
	str = "ljkashd35729023\n";
	printf("%d\n", ft_str_is_printable(str));
	str = "";
	printf("%d\n", ft_str_is_printable(str));
	return (0);
}
*/