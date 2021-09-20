/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpark <chpark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 21:48:37 by chpark            #+#    #+#             */
/*   Updated: 2021/09/20 21:49:49 by chpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	int	i;

	char str[] = "Bonjour les amiseeeeeee\neeeeeeeedwadwadawdadwadwegfrsdhgrtdhtrdharewfwafwafeawfwFAWFAGAWGRESHSERHEStrgesgresgrtdhtyjreeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee";
	i = 150;
	ft_print_memory(str, i);
}
