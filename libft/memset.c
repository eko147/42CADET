/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunjiko <eunjiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:42:32 by eunjiko           #+#    #+#             */
/*   Updated: 2022/07/18 19:04:54 by eunjiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 void   *memset(void *b, int c, size_t len)
 {
     int i;
     unsigned char = cc;

     i = 0;
     bb = (unsigned char *)b;
     cc = (unsigned char)c;
     while(len)
     {
         bb[i++] = cc; 
         len--;
     }
     return (b);
 }
