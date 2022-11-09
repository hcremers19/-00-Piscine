/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 20:15:53 by hcremers          #+#    #+#             */
/*   Updated: 2021/07/15 20:15:56 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
//
int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	diff;

	i = 0;
	diff = 0;
	while (s2[i] != 0 && s1[i] != 0 && s1[i] == s2[i])
		i++;
	diff = s1[i] - s2[i];
	return (diff);
}
/*
int	main(void)
{
	char	s1[] = "aaA";
	char	s2[] = "Aaa";
	int		r;

	r = strcmp(s1, s2);
	printf("%d\n", r);
	r = ft_strcmp(s1, s2);
	printf("%d\n", r);
}
*/