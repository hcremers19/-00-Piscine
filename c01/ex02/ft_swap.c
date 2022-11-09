/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 19:33:00 by hcremers          #+#    #+#             */
/*   Updated: 2021/07/13 17:17:36 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	x;
	int	y;	
	int	*a;
	int	*b;

	x = 2;
	y = 4;
	a = &x;
	b = &y;
	ft_swap(a, b);
	printf("x = %d\n", *a);
	printf("y = %d\n", *b);
}
*/
