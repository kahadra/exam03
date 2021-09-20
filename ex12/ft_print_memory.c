/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpark <chpark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:41:06 by chpark            #+#    #+#             */
/*   Updated: 2021/09/20 21:50:24 by chpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *c)
{
	write (1, &c, 1);
}

void	ft_print_hexa(unsigned long long n)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	ft_putchar(hexa[n / 16];
	ft_putchar(hexa[n % 16];
}

void	ft_print_data(unsigned char *c, int size)
{
	int	i;

	i = 0;
	while (i++ < 16)
	{
		if (i % 2 == 0)
			ft_putchar(' ');
		if (i < size)
			ft_print_hexa(c[i], 1);
	}
	ft_putchar(' ');
	i =0;
	while (i++ < size -1)
	{
		if (str[i] < 32 || str[i] == 127)
			ft_putchar('.');
		else
			ft_putchar(str[i]);
	}
	while (i++ < 16)
	{
		ft_putchar(' ');
	}
}

void	ft_print_addr(unsigned long long addr)
{
	unsigned long long	tmp;
	int	i;

	tmp = addr;
	i = 1;
	while (i++ < 15)
	{
		if (tmp < 16)
			ft_putchar('0', 1);
		tmp /= 16;
	}
	ft_print_hexa(addr);
}

void	ft_print_memory(void *addr, unsigned int size);
{
	unsigned int	i;
	unsigned char	*c;
	unsigned int	send;

	i = 0;
	c = addr;
	while (i * 16 < size)
	{
		if (i < size / 16)
			send = 16;
		else
			send = size % 16;
		ft_print_addr(c[i * 16]);
		ft_putchar(':', 1);
		ft_print_data(c[i * 16], send);
		ft_putchar('\n', 1);
		i++;
	}
	return (addr);
}
