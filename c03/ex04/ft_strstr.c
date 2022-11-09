/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 18:18:33 by hcremers          #+#    #+#             */
/*   Updated: 2021/07/17 18:18:35 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
//
char	*ft_strstr(char *str, char *to_find)
{
	int		is;
	int		itf;

	is = 0;
	itf = 0;
	while (str[is] != 0)
	{
		while (str[is + itf] == to_find[itf])
		{
			itf++;
			if (to_find[itf] == 0)
				return (&str[is]);
		}
		is++;
		itf = 0;
	}
	return (0);
}
/*
int	main(void)
{
	char	*string1 = "mamaman";
	char	*string2 = "maman";
	char	*result;

	result = strstr(string1, string2);
	printf("%s\n", result);

	char	*str = "mamaman";
	char	*to_find = "maman";
	char	*r;

	r = ft_strstr(str, to_find);
	printf("%s\n", r);
}
*/