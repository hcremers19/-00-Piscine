/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 15:57:10 by hcremers          #+#    #+#             */
/*   Updated: 2021/07/15 15:57:13 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if ('A' <= str[i] && str[i] <= 'Z')
		{	
			str[i] = (str[i] + 32);
		}
		i++;
	}
	return (str);
}
/*
int	main()
{
	char	str[] = "HELLO, WORLD!";
	printf("%s\n", ft_strlowcase(str));
	return (0);
}
*/