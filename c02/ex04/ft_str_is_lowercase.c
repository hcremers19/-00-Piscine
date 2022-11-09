/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 14:13:04 by hcremers          #+#    #+#             */
/*   Updated: 2021/07/15 14:13:06 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while ('a' <= str[i] && str[i] <= 'z')
	{	
		i++;
	}
	if (str[i] == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
int	main()
{
	char	*str;

	str = "";
	printf("%d\n", ft_str_is_lowercase(str));
	return (0);
}
*/