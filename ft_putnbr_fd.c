#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	sign;

	sign = 1;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		sign = -1;
	}
	if (n >= 10 || n <= -10)
	{
		ft_putnbr_fd((n / 10) * sign, fd);
		ft_putchar_fd(((n % 10) * sign) + '0', fd);
	}
	else
		ft_putchar_fd(n * sign + '0', fd);
}
/*
#include <limits.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	n;

	n = 0;
	if (argc == 2)
		n = atoi(argv[1]);
	ft_putnbr_fd(n, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(INT_MIN, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(INT_MAX, 1);
	return (0);
}
*/