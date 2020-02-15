/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 22:45:18 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/14 01:40:53 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_intlen_p(unsigned int n)
{
	int				i;
	unsigned int	nbr;

	nbr = n;
	i = 0;
	while (nbr > 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

void		put_tab_p(char *ptr, int n)
{
	int				j;
	unsigned int	nbr;

	nbr = n;
	j = 0;
	while (nbr > 0)
	{
		ptr[j] = (nbr % 10) + 48;
		nbr = nbr / 10;
		j++;
	}
}

void		inverser_tab_pos_p(char *ptr, unsigned int n)
{
	int				j;
	int				i;
	char			c;
	unsigned int	nbr;

	nbr = n;
	i = ft_intlen_p(nbr);
	if (nbr > 0)
	{
		j = 0;
		while (j < i / 2)
		{
			c = ptr[i - j - 1];
			ptr[i - j - 1] = ptr[j];
			ptr[j] = c;
			j++;
		}
	}
}

char		*ft_itoa_p(unsigned int n)
{
	char			*ptr;
	int				i;
	int				j;
	unsigned int	nbr;

	nbr = n;
	j = 0;
	i = ft_intlen_p(nbr);
	ptr = (char *)malloc((i + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	if (nbr == 0)
	{
		ptr[0] = '0';
		ptr[1] = '\0';
	}
	else
	{
		put_tab_p(ptr, nbr);
		inverser_tab_pos_p(ptr, nbr);
		ptr[i] = '\0';
	}
	return (ptr);
}
