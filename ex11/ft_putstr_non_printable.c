/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpark <chpark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:05:05 by chpark            #+#    #+#             */
/*   Updated: 2021/09/20 16:39:42 by chpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_puchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_hexa(int n)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	ft_putchar(hexa[n / 16]);
	ft_putchar(hexa[n % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar('\\');
			ft_print_hexa(str[i]);
		}
		else
			ft_putchar(str[i]);
	}
}
