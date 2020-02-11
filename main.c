/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 18:34:53 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/11 21:20:41 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#define TEST ("%.10d",10)
#include <limits.h>
#define test1 ("%10.%")
int main()
{
	int i;
	int	k;
	i = ft_printf test1;
	printf("\n--------------------------------------\n");
	k = printf test1;
	printf("\n--------------------------------------\n");
	printf("%d : mine   |||  %d : original", i, k);
//	printf("\n");
//ft_printfs("%.10dali",30);
}