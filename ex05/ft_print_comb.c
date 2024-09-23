/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 22:54:07 by xinzhang          #+#    #+#             */
/*   Updated: 2024/09/23 15:43:51 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#	include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	e;
	char	f;
	char	g;

	e = '0';
	while (e <= '7')
	{
		f = e + 1;
		while (f <= '8')
		{
			g = f + 1;
			while (g <= '9')
			{
				ft_putchar(e);
				ft_putchar(f);
				ft_putchar(g);
				if (e != '7')
					write(1, ", ", 2);
				g++;
			}
			f++;
		}
		e++;
	}
}

/*int	main(void)
{
	ft_print_comb();
}*/
