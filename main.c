/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 14:38:44 by esterna           #+#    #+#             */
/*   Updated: 2017/03/02 16:51:26 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int		main()
{

	//	char p2[8] = "giraffe";
	//	char *p3 = "dog";
	//	int i = 32;

	//printf("Real: %s\n", strncpy(p1, p3, i));
	//printf("Mine: %s\n", ft_strncpy(p2, p3, i));

	/*
	   char p1[] = "giraffe";

	   printf("Testing ft_memset...\n");
	   if (strcmp(memset(p1, 'b', 1), ft_memset(p1, 'b', 1)) == 0)
	   printf("Test: giraffe b 1 -> TRUE\n");
	   else 
	   printf("Test: giraffe b 1 -> FALSE\n");
	   if (strcmp(memset(p1, 'b', 0), ft_memset(p1, 'b', 0)) == 0)
	   printf("Test: giraffe b 0 -> TRUE\n");
	   else 
	   printf("Test: giraffe b 0 -> FALSE\n");
	   if (strcmp(memset(p1, 'b', 8), ft_memset(p1, 'b', 8)) == 0)
	   printf("Test: giraffe b 8 -> TRUE\n");
	   else 
	   printf("Test: giraffe b 8 -> FALSE\n");


	   char p2[] = "giraffe";
	   char p3[] = "giraffe";

	   printf("Testing ft_bzero...\n");
	   bzero(p2, 0);
	   ft_bzero(p3, 0);
	   if (memcmp(p2, p3, 8) == 0)
	   printf("Test: giraffe 0 -> TRUE\n");
	   else 
	   printf("Test: giraffe 0 -> FALSE\n");
	   bzero(p2, 1);
	   ft_bzero(p3, 1);
	   if (memcmp(p2, p3, 8) == 0)
	   printf("Test: giraffe 1 -> TRUE\n");
	   else 
	   printf("Test: giraffe 1 -> FALSE\n");
	   bzero(p2, 8);
	   ft_bzero(p3, 8);
	   if (memcmp(p2, p3, 8) == 0)
	   printf("Test: giraffe 8 -> TRUE\n");
	   else 
	   printf("Test: giraffe 8 -> FALSE\n");


	   char p4[] = "Cats and Dogs.";
	   char p5[] = "Cats and Dogs.";
	   char p6[] = "Kids";

	   printf("Testing ft_memcpy...\n");
	   memcpy(p4, p6, 0);
	   ft_memcpy(p5, p6, 0);
	   if (memcmp(p4, p5, 14) == 0)
	   printf("Test: Cats and Dogs, Kids, 0 -> TRUE\n");
	   else 
	   printf("Test: Cats and Dogs, Kids, 0 -> FALSE\n");
	   memcpy(p4, p6, 4);
	   ft_memcpy(p5, p6, 4);
	   if (memcmp(p4, p5, 14) == 0)
	   printf("Test: Cats and Dogs, Kids, 4 -> TRUE\n");
	   else 
	   printf("Test: Cats and Dogs, Kids, 4 -> FALSE\n");
	   memcpy(p4, p6, 14);
	   ft_memcpy(p5, p6, 14);
	   if (memcmp(p4, p5, 14) == 0)
	   printf("Test: Cats and Dogs, Kids, 14 -> TRUE\n");
	   else 
	   printf("Test: Cats and Dogs, Kids, 14 -> FALSE\n");


	   char p7[] = "Cats and Dogs.";
	   char p8[] = "Cats and Dogs.";
	   char p9[] = "Kids";

	printf("TESTING FT_MEMCCPY\n");
	printf("Real: %s\t\t%s\n", (char *)memccpy(p7, p9, 'd', 0), p7);
	printf("Mine: %s\t\t%s\n", ft_memccpy(p8, p9, 'd', 0), p8);

	printf("Real: %s\t%s\n", (char *)memccpy(p7, p9, 'd', 5), p7);
	printf("Mine: %s\t%s\n", ft_memccpy(p8, p9, 'd', 5), p8);

	printf("Real: %s\t\t%s\n", (char *)memccpy(p7, p9, '\0', 14), p7);
	printf("Mine: %s\t\t%s\n", ft_memccpy(p8, p9, '\0', 14), p8);


	char m1[10] = "Kids";
	char m2[10] = "Kids";
	char m3[10] = "Children";

	printf("Testing ft_memmove...\n");
	memmove(m1, m3, 0);
	ft_memmove(m2, m3, 0);
	if (memcmp(m1, m2, 5) == 0)
		printf("Test: Kids, Children, 0 -> TRUE\n");
	else 
		printf("Test: Kids, Children, 0 -> FALSE\n");
	memmove(m1, m3, 4);
	ft_memmove(m2, m3, 4);
	if (memcmp(m1, m2, 5) == 0)
		printf("Test: Kids, Children, 4 -> TRUE\n");
	else 
		printf("Test: Kids, Children, 4 -> FALSE\n");
	memmove(m1, m3, 9);
	ft_memmove(m2, m3, 9);
	if (memcmp(m1, m2, 5) == 0)
		printf("Test: Kids, Children, 9 -> TRUE\n");
	else 
		printf("Test: Kids, Children, 9 -> FALSE\n");
	
	char *p6 = 0;
	char *p7 = "Cats and Dogs.";
	char *p8 = "Cats and Kittens.";

	printf("TESTING FT_MEMCMP\n");
	printf("Real: %d\n", memcmp(p7, p8, 0));
	printf("Mine: %d\n", ft_memcmp(p7, p8, 0));

	printf("Real: %d\n", memcmp(p6, p8, 0));
	printf("Mine: %d\n", ft_memcmp(p6, p8, 0));

	printf("Real: %d\n", memcmp(p7, p8, 4));
	printf("Mine: %d\n", ft_memcmp(p7, p8, 4));

	printf("Real: %d\n", memcmp(p7, p8, 12));
	printf("Mine: %d\n", ft_memcmp(p7, p8, 12));

	printf("Real: %d\n", memcmp(p7, p8, 18));
	printf("Mine: %d\n", ft_memcmp(p7, p8, 18));
*/
	

	return (0);
}
