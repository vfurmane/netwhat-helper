/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   netwhat.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 20:41:16 by vfurmane          #+#    #+#             */
/*   Updated: 2021/01/26 21:07:01 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NETWHAT_H
# define NETWHAT_H

# include <libgen.h>
# include <stdio.h>
# include <stdlib.h>

/*
** --------------------------------[ calcul.c ]---------------------------------
*/

int		ft_calculate_cidr(char *str, int netmask[4]);
int		ft_calculate_netmask(char *str, int netmask[4]);

/*
** ----------------------------------[ put.c ]----------------------------------
*/

int		ft_error(int no);
void	ft_intro(void);
void	ft_print_results(int cidr, int netmask[4]);
int		ft_usage(const char *message, const char *name);

/*
** ----------------------------------[ str.c ]----------------------------------
*/

int		ft_atoi(const char *str);
char	*ft_strchr(const char *str, char chr);

#endif
