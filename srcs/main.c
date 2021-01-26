/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 15:26:51 by vfurmane          #+#    #+#             */
/*   Updated: 2021/01/26 20:42:09 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "netwhat.h"

int	ft_init(int argc, char **argv, int netmask[4])
{
	int	cidr;

	if (ft_strchr(argv[argc - 1], '.') != NULL)
		cidr = ft_calculate_cidr(argv[argc - 1], netmask);
	else
		cidr = ft_calculate_netmask(argv[argc - 1], netmask);
	return (cidr);
}

int	main(int argc, char **argv)
{
	int	cidr;
	int	netmask[4];
	
	if (argc != 2)
		return (ft_usage("Wrong number of arguments !\n", basename(argv[0]))); /* ft to do */
	ft_intro(); /* ft to do */
	cidr = ft_init(argc, argv, netmask);
	printf("%d\n", cidr);
	if (cidr < 0)
		return (ft_error(cidr)); /* ft to do */
	ft_print_results(cidr, netmask);
	return (0);
}
