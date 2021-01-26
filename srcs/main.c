/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 15:26:51 by vfurmane          #+#    #+#             */
/*   Updated: 2021/01/26 18:10:42 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "netwhat.h"

int	main(int argc, char **argv)
{
	int	ret;
	int	cidr;
	int	host[4];
	
	if (argc != 2)
		return (ft_usage("Wrong number of arguments !\n", basename(argv[0]))); /* ft to do */
	ft_intro(); /* ft to do */
	ret = ft_init(argc, argv, &cidr, host); /* ft to do */
	if (ret < 0)
		return (ft_error(ret)); /* ft to do */
	ft_print_results(cidr, host);
	return (0);
}
