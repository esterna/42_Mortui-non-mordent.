/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_mem.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 22:36:20 by esterna           #+#    #+#             */
/*   Updated: 2017/03/08 22:38:53 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main()
{
	char g[] = "giraffe";

	printf("\nTESTING FT_MEMSET...\n");
	if (strcmp(memset(g, 'b', 1), ft_memset(g, 'b', 1)) == 0)
	printf("Test: giraffe b 1 -> TRUE\n");
	else 
	printf("Test: giraffe b 1 -> FALSE\n");
	if (strcmp(memset(g, 'b', 0), ft_memset(g, 'b', 0)) == 0)
	printf("Test: giraffe b 0 -> TRUE\n");
	else 
	printf("Test: giraffe b 0 -> FALSE\n");
	if (strcmp(memset(g, 'b', 8), ft_memset(g, 'b', 8)) == 0)
	printf("Test: giraffe b 8 -> TRUE\n");
	else 
	printf("Test: giraffe b 8 -> FALSE\n");

	char p4[] = "Cats and Dogs.";
	char p5[] = "Cats and Dogs.";
	char p6[] = "Kids";

	printf("\nTESTING FT_MEMCPY...\n");
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

	printf("\nTESTING FT_MEMCCPY...\n");
	printf("Real: %s\t\t%s\n", (char *)memccpy(p7, p9, 'd', 0), p7);
	printf("Mine: %s\t\t%s\n", ft_memccpy(p8, p9, 'd', 0), p8);
	printf("Real: %s\t%s\n", (char *)memccpy(p7, p9, 'd', 5), p7);
	printf("Mine: %s\t%s\n", ft_memccpy(p8, p9, 'd', 5), p8);
	printf("Real: %s\t\t%s\n", (char *)memccpy(p7, p9, '\0', 14), p7);
	printf("Mine: %s\t\t%s\n", ft_memccpy(p8, p9, '\0', 14), p8);

	char m1[10] = "Kids";
	char m2[10] = "Kids";
	char m3[10] = "Children";
	char m4[] = "Kids";
	char m5[] = "Children";
	char m6[] = "Kids";
	char m7[] = "Children";

	printf("\nTESTING FT_MEMMOVE...\n");
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
	if (memcmp(m1, m2, 9) == 0)
		printf("Test: Kids, Children, 9 -> TRUE\n");
	else 
		printf("Test: Kids, Children, 9 -> FALSE\n");
	printf("Real: %s\n", memmove(m4, m5, 5));
	printf("Mine: %s\n", ft_memmove(m6, m7, 5));


	char *m4 = 0;
	char *m5 = "Cats and Dogs.";
	char *m6 = "Cats and Kittens.";

	printf("\nTESTING FT_MEMCMP...\n");
	printf("Real: %d\n", memcmp(m5, m6, 0));
	printf("Mine: %d\n", ft_memcmp(m5, m6, 0));
	printf("Real: %d\n", memcmp(m4, m6, 0)); 
	printf("Mine: %d\n", ft_memcmp(m4, m6, 0)); 
	//	printf("Real: %d\n", memcmp(m4, m6, 4)); //Segfaults
	//	printf("Mine: %d\n", ft_memcmp(m4, m6, 4)); //Segfaults
	printf("Real: %d\n", memcmp(m5, m6, 4));
	printf("Mine: %d\n", ft_memcmp(m5, m6, 4));
	printf("Real: %d\n", memcmp(m5, m6, 12));
	printf("Mine: %d\n", ft_memcmp(m5, m6, 12));
	printf("Real: %d\n", memcmp(m5, m6, 18));
	printf("Mine: %d\n", ft_memcmp(m5, m6, 18));


	return (0);
}
