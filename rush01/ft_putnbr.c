#include<unistd.h>

void	ft_print(char n)
{
	write (1, &n, 1);
}

void	ft_putnbr(int nb)
{
	char	chiffre;

	chiffre = nb;
	if (nb < 0)
	{
		write (1, "-", 1);
		ft_putnbr(nb * -1);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_print(nb % 10 + '0');
	}
	else
	{
		ft_print(chiffre + '0');
	}
}
