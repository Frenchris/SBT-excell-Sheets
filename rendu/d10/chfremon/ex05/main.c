/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chfremon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 14:42:59 by chfremon          #+#    #+#             */
/*   Updated: 2018/09/19 23:40:14 by chfremon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int		ft_count_if(char **tab, int (*f)(char*));
void	ft_foreach(int *tab, int length, void (*f)(int));
int		*ft_map(int *tab, int length, int (*f)(int));
int		ft_any(char **tab, int (*f)(char*));
int		ft_is_sort(int *tab, int length, int (*f)(int, int));

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_exception(void)
{
	ft_putchar('-');
	ft_putchar('2');
	ft_putchar('1');
	ft_putchar('4');
	ft_putchar('7');
	ft_putchar('4');
	ft_putchar('8');
	ft_putchar('3');
	ft_putchar('6');
	ft_putchar('4');
	ft_putchar('8');
}

void	ft_putnbr(int nb)
{
	if (nb < 0 && nb != -2147483648)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb == -2147483648)
	{
		ft_print_exception();
	}
	if (nb >= 0 && nb <= 9)
	{
		ft_putchar(nb + '0');
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int		ft_add_hundred(int nb)
{
	nb = nb + 100;
	return (nb);
}

int		ft_contains_a(char *str)
{
	int i;
	i = 0;
	while(str[i])
	{
		if (str[i] == 'a')
			return (1);
		i++;
	}
	return (0);
}	

int		ft_sort(int a, int b)
{
	if (a < b)
		return (-1);
	if (a == b)
		return (0);
	else
		return (1);
}


int		main(int argc, char *argv[])
{
	int i;
	int tab[100];

	printf("1\n");
	if (argc > 1)
	{
		i = 0;
		while (i < argc - 1)
		{
			tab[i] = atoi(argv[i + 1]);
			printf("tab[%d]:%d\n", i, tab[i]);
			i++;
		}
		i = ft_is_sort(tab, i, &ft_sort);
		if ( i == 1)
		{
			printf("result:%d\n", i);
			printf("le tableau est trier\n");
		}
		else
		{
			printf("result:%d\n", i);
			printf("le tableau n'est pas trier\n");
		}
		/*tab2 = ft_map(tab, i, &ft_add_hundred);
		ft_foreach(tab2, i, &ft_putnbr);*/
	}
	else
		return (0);
}
