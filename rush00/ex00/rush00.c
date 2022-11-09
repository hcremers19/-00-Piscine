/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoloube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 10:51:25 by agoloube          #+#    #+#             */
/*   Updated: 2021/07/11 13:26:56 by agoloube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i++ < y)
	{
		j = 0;
		while (j++ < x)
		{
			if ((i == 1 && j == 1) || (i == y && j == 1)
				|| (i == 1 && j == x) || (i == y && j == x))
				ft_putchar('o');
			else if (i == 1 || i == y)
				ft_putchar('-');
			else if (j == 1 || j == x)
				ft_putchar('|');
			else
				 ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
