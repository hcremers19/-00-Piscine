/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 14:49:37 by hcremers          #+#    #+#             */
/*   Updated: 2021/07/15 14:49:39 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{	
			str[i] = (str[i] - 32);
		}
		i++;
	}
	return (str);
}
/*
int	main()
{
	char	str[] = "hello, world!";
	printf("%s\n", ft_strupcase(str));
	return (0);
}
*/