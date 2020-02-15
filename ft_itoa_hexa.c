/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_hexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 10:19:25 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/14 22:47:08 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

unsigned int	ft_intlen_hexa(unsigned int n)
{
	int		i;
	long	nbr;

	nbr = n;
	i = 0;
	while (nbr > 0)
	{
		nbr = nbr / 16;
		i++;
	}
	return (i);
}

void			put_tab_hexa(char *ptr, unsigned int n, t_flagcheck flags)
{
	int		j;
	long	nbr;

	nbr = n;
	j = 0;
	while (nbr > 0)
	{
		if (nbr % 16 < 10)
			ptr[j] = nbr % 16 + 48;
		else if (flags.conversion == 'X')
			ptr[j] = nbr % 16 + 55;
		else
			ptr[j] = nbr % 16 + 87;
		nbr = nbr / 16;
		j++;
	}
}

void			inverser_tab(char *ptr, unsigned int n)
{
	int		j;
	int		i;
	char	c;
	long	nbr;

	nbr = n;
	i = ft_intlen_hexa(nbr);
	j = 0;
	while (j < i / 2)
	{
		c = ptr[i - j - 1];
		ptr[i - j - 1] = ptr[j];
		ptr[j] = c;
		j++;
	}
}

char			*ft_itoa_hexa(unsigned int p, t_flagcheck flags)
{
	char	*ptr;
	int		i;
	int		j;
	long	nbr;

	nbr = p;
	j = 0;
	i = ft_intlen_hexa(nbr);
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
		put_tab_hexa(ptr, nbr, flags);
		inverser_tab(ptr, nbr);
		ptr[i] = '\0';
	}
	if (flags.conversion == 'p')
		ptr = ft_strjoin("0x", ptr);
	return (ptr);
}
