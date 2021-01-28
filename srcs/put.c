/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 12:42:04 by vfurmane          #+#    #+#             */
/*   Updated: 2021/01/28 10:23:29 by vfurmane         ###   ########.fr       */
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
	printf("|%26s%s by %s%26s|\n", "",\
			UNDERLINE(MAGENTA("NETWHAT HELPER")), YELLOW("vfurmane"), "");
	printf("|%78s|\n", "");
	printf("|%78s|\n", "");
	printf("+------------------------------------------------------------------\
------------+\n\n");
}

char	*ft_format_ip_address(int address[4])
{
	char	*str;

	str = malloc(16 * sizeof(*str)); /* ft to do */
	if (str == NULL)
		return (NULL);
	sprintf(str, "%d.%d.%d.%d", address[0], address[1], address[2], address[3]);
	return (str);
}

void	ft_print_results(int cidr, int netmask[4])
{
	char	*str_netmask;

	str_netmask = ft_format_ip_address(netmask);
	printf("        %s      :   %-15s        %s    :   %d\n                  \
                         %s    :   %s\n", RED("IP"), "undefined", RED("CIDR"), cidr, BRIGHT_RED("MASK"), str_netmask);
	free(str_netmask);
	//printf("%d\n%d\n%d\n%d\n%d\n", cidr, netmask[0], netmask[1], netmask[2], netmask[3]);
}

int		ft_usage(const char *message, const char *name)
{
	printf("%s\nUsage: ./%s netmask\n", message, name);
	return (1);
}
