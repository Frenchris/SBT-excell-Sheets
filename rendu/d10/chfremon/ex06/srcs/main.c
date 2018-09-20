/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chfremon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 23:52:07 by chfremon          #+#    #+#             */
/*   Updated: 2018/09/20 14:35:53 by chfremon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_do_op(int a, char c, int b)
{
	int		i;
	int		(*ft_ops[5])(int a, int b);
	char	*comp;
	int		result;

	ft_ops[0] = ft_add;
	ft_ops[1] = ft_sub;
	ft_ops[2] = ft_mul;
	ft_ops[3] = ft_div;
	ft_ops[4] = ft_mod;
	comp = "+-*/%";
	i = 0;
	while (comp[i])
	{
		if (comp[i] == c)
			result = ft_ops[i](a, b);
		i++;
	}
	ft_putnbr(result);
	ft_putchar('\n');
}

int		main(int argc, char *argv[])
{
	int		a;
	int		b;
	char	c;

	if (argc == 4)
	{
		a = ft_atoi(argv[1]);
		b = ft_atoi(argv[3]);
		if ((!(OP(argv[2][0]))) || (argv[2][1] != '\0'))
		{
			write(1, "0\n", 2);
			return (0);
		}
		c = argv[2][0];
		if (c == '/' && b == 0)
			write(1, "Stop : division by zero\n", 24);
		else if (c == '%' && b == 0)
			write(1, "Stop : modulo by zero\n", 22);
		else
			ft_do_op(a, c, b);
	}
	else
		return (0);
}
