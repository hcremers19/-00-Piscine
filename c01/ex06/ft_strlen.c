/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 19:59:39 by hcremers          #+#    #+#             */
/*   Updated: 2021/07/13 17:24:04 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != 0)
	{
		count++;
		str++;
	}
	return (count);
}
/*
int main(void)
{
	char	*str;

	str = "Dans cette chaine, on trouve 42 caracteres";
	ft_strlen(str);
	printf("%d\n", ft_strlen (str));
	str = "Et dans celle-ci 19";
	ft_strlen(str);
	printf("%d\n", ft_strlen (str));
	str = "z";
	ft_strlen(str);
	printf("%d\n", ft_strlen (str));
	str = "ab";
	ft_strlen(str);
	printf("%d\n", ft_strlen (str));
	str = "";
	ft_strlen(str);
	printf("%d\n", ft_strlen (str));
}
*/