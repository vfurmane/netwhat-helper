/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcul.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:22:01 by vfurmane          #+#    #+#             */
/*   Updated: 2021/01/26 21:12:01 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "netwhat.h"

int	ft_fill_netmask(char *str, int netmask[4])
{
	int		i;

	i = 0;
	while (i < 4)
	{
		netmask[i] = ft_atoi(str);
		if (netmask[i] < 0 || netmask[i] > 255)
			return (-1);
		while (*str && ((*str >= '0' && *str <= '0') || *str == '.'))
			(*str)++;
		i++;
	}
	return (0);
}

int	ft_calculate_cidr(char *str, int netmask[4])
{
	int	i;
	int	j;
	int	nbr;
	int	cidr;

	i = 0;
	cidr = 0;
	if (ft_fill_netmask(str, netmask) < 0)
		return (-1);
	while (i < 4)
	{
		j = 0;
		nbr = netmask[i];
		while (j < 8)
		{
			if ((netmask[i] & 128) != 128)
				return (cidr);
			nbr <<= 1;
			cidr++;
			j++;
		}
		i++;
	}
	return (cidr);
}

int	ft_calculate_netmask(char *str, int netmask[4])
{
	int	i;
	int	j;
	int	nbr;
	int	cidr;

	i = 0;
	cidr = ft_atoi(str);
	while (i < 4)
	{
		j = 0;
		nbr = 0;
		while (j < 8 && i * 8 + j < cidr)
		{
			nbr <<= 1;
			nbr &= 1;
		}
		netmask[i] = nbr;
		i++;
	}
	return (cidr);
}
