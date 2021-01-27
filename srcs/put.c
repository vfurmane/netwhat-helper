/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 12:42:04 by vfurmane          #+#    #+#             */
/*   Updated: 2021/01/27 17:11:38 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "netwhat.h"

int		ft_error(int err_number)
{
	if (err_number == -1)
		printf("Error while parsing the netmask...\n");
	return (1);
}

void	ft_intro(void)
{
	printf("+------------------------------------------------------------------\
------------+\n");
	printf("|%78s|\n", "");
	printf("|%78s|\n", "");
	printf("|%26sNETWHAT HELPER by vfurmane%26s|\n", "", "");
	printf("|%78s|\n", "");
	printf("|%78s|\n", "");
	printf("+------------------------------------------------------------------\
------------+\n\n");
}

void	ft_print_results(int cidr, int netmask[4])
{
	printf("%d\n%d\n%d\n%d\n%d\n", cidr, netmask[0], netmask[1], netmask[2], netmask[3]);
}

int		ft_usage(const char *message, const char *name)
{
	printf("%s\nUsage: ./%s netmask\n", message, name);
	return (1);
}
