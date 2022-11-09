/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 14:01:34 by hcremers          #+#    #+#             */
/*   Updated: 2021/07/26 14:01:38 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	*rng;
	int	i;

	len = max - min;
	rng = malloc(sizeof(int) * len);
	if (!rng)
		return (0);
	i = 0;
	if (min >= max)
		return (0);
	while (i < len)
	{
		rng[i] = min;
		min++;
		i++;
	}
	return (rng);
}
/*
#include <stdio.h>

int	main(void)
{
	int	min;
	int	max;
	int	*arr;
	int	i;

	min = 1;
	max = 1;
	arr = ft_range(min, max);
	i = 0;
	while (i < max - min)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
}
*/