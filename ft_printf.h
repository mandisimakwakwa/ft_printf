/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 15:41:30 by mmakwakw          #+#    #+#             */
/*   Updated: 2017/01/03 15:42:52 by mmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H
# include "libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include <stdbool.h>

int         ft_printf(const char *format, ...);
int         ft_checkMod(char *format);
char        ft_getFlag(char flag);
int         ft_output(char *format, char flag, va_list ap, int i);
int         ft_skip(char *format, int i);
void        ft_specifTypeIni(char *format, char specif, char flag, va_list ap);
void	    ft_c(va_list ap, char *format, char flag);
void    	ft_s(va_list ap, char *format, char flag);
void    	ft_p();
void    	ft_x();
void    	ft_d(va_list ap, char *format, char flag);
void    	ft_i();
void    	ft_o(va_list ap, char *format, char flag);
void    	ft_u(va_list ap, char *format, char flag);
void        ft_mod(char *format);
int         ft_getParam(char *format, char flag);
void        ft_plusFlag(int d, char flag, int param, char *format);
void    	ft_fill(int fillCount, char c);
void        ft_minusFlag(int d, char flag);
void        ft_spaceFlag(int d, char flag, int param);
void        ft_zeroFlag(int d, char flag);
void        ft_o_support(int o, int param, char flag, char f_addon);
void        ft_c_support(char c, int param, char flag, char f_addon);
#endif
