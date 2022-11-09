/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 14:18:20 by hcremers          #+#    #+#             */
/*   Updated: 2021/07/15 14:18:23 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while ('A' <= str[i] && str[i] <= 'Z')
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

	str = "AbCDEFGHIJKLMNOPQSTUVWXYZ";
	printf("%d\n", ft_str_is_uppercase(str));
	return (0);
}
*/