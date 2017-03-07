/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/06 14:23:34 by esterna           #+#    #+#             */
/*   Updated: 2017/03/07 01:31:22 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int		main()
{
	/*
	   char *n1 = "         +24     6";
	   char *n2 = "   		-24+6";
	   char *n3 = "   ";
	   char *n4 = "-9223372036854775808";
	   char *n5 = 	"9223372036854775807";
	   char *n6 = "18446744073709551615";
	   char *n7 = "";

	   printf("\nTESTING FT_ATOI...\n");
	   if (atoi(n1) == ft_atoi(n1))
	   printf("Test:         +24     6-> TRUE\n");
	   else 
	   printf("Test:         +24     6-> FALSE\n");
	   if (atoi(n2) == ft_atoi(n2))
	   printf("Test:   		-24+6-> TRUE\n");
	   else 
	   printf("Test:   		-24+6-> FALSE\n");
	   if (atoi(n3) == ft_atoi(n3))
	   printf("Test:    -> TRUE\n");
	   else 
	   printf("Test:    -> FALSE\n");
	   if (atoi(n4) == ft_atoi(n4))
	   printf("Test: –9223372036854775808 -> TRUE\n");
	   else 
	   printf("Test: -9223372036854775808 -> FALSE\n");
	   if (atoi(n5) == ft_atoi(n5))
	   printf("Test: 9223372036854775807 -> TRUE\n");
	   else 
	   printf("Test: 9223372036854775807 -> FALSE\n");
	   if (atoi(n6) == ft_atoi(n6))
	   printf("Test: 18446744073709551615 -> TRUE\n");
	   else 
	   printf("Test: 18446744073709551615 -> FALSE\n");
	   if (atoi(n7) == ft_atoi(n7))
	   printf("Test: NULL -> TRUE\n");
	   else 
	   printf("Test: NULL -> FALSE\n");

	   printf("\nTESTING FT_ISALPHA...\n");
	   if (isalpha(65) == ft_isalpha(65))
	   printf("Test: A -> TRUE\n");
	   else 
	   printf("Test: A -> FALSE\n");
	   if (isalpha(97) == ft_isalpha(97))
	   printf("Test: a -> TRUE\n");
	   else 
	   printf("Test: a -> FALSE\n");
	   if (isalpha(50) == ft_isalpha(50))
	   printf("Test: 2 -> TRUE\n");
	   else 
	   printf("Test: 2 -> FALSE\n");
	   if (isalpha(0) == ft_isalpha(0))
	   printf("Test: NULL -> TRUE\n");
	   else 
	   printf("Test: NULL -> FALSE\n");



	   char p1[8] = "giraffe";
	   char p2[8] = "giraffe";
	   char *p3 = "dog";
	   char *n = "";

	   printf("\nTESTING FT_STRNCPY...\n");
	   printf("Real: %s\n", strncpy(p1, n, 3));
	   printf("Mine: %s\n", ft_strncpy(p2, n, 3));
	//	printf("Real: %s\n", strncpy(n, p3, 3));    //Segfaults
	//	printf("Mine: %s\n", ft_strncpy(n, p3, 3)); //Segfaults
	printf("Real: %s\n", strncpy(p1, p3, 0));
	printf("Mine: %s\n", ft_strncpy(p2, p3, 0));
	printf("Real: %s\n", strncpy(p1, p3, 3));
	printf("Mine: %s\n", ft_strncpy(p2, p3, 3));
	printf("Real: %s\n", strncpy(p1, p3, 6));
	printf("Mine: %s\n", ft_strncpy(p2, p3, 6));

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

	char b1[] = "giraffe";
	char b2[] = "giraffe";

	printf("\nTESTING FT_BZERO...\n");
	bzero(b1, 0);
	ft_bzero(b2, 0);
	if (memcmp(b1, b2, 8) == 0)
		printf("Test: giraffe 0 -> TRUE\n");
	else 
		printf("Test: giraffe 0 -> FALSE\n");
	bzero(b1, 1);
	ft_bzero(b2, 1);
	if (memcmp(b1, b2, 8) == 0)
		printf("Test: giraffe 1 -> TRUE\n");
	else 
		printf("Test: giraffe 1 -> FALSE\n");
	bzero(b1, 8);
	ft_bzero(b2, 8);
	if (memcmp(b1, b2, 8) == 0)
		printf("Test: giraffe 8 -> TRUE\n");
	else 
		printf("Test: giraffe 8 -> FALSE\n");

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

	char *s1 = "Caterpillar";
	char *s2 = "Cat";
	char *s3 = "Zoo Animals";
	//	char *s4 = "somethingcatsomething";
	char *s5 = "";
	//	char *s6 = "somethingCatsomething";
	//	char *s7 = "something Ca";

	printf("\nTESTING FT_STRSTR...\n");
	printf("Real: %s\n", strstr(s1, s2));
	printf("Mine: %s\n", ft_strstr(s1, s2)); //Caterpillar Cat
	//	printf("Real: %s\n", strstr(s1, s5));    
	//	printf("Mine: %s\n", ft_strstr(s1, s5)); // Caterpillar NULL - Segfaults
	//	printf("Real: %s\n", strstr(s5, s2));
	//	printf("Mine: %s\n", ft_strstr(s5, s2)); // NULL Caterpillar - Segfaults 
	printf("Real: %s\n", strstr(s3, s2));
	printf("Mine: %s\n", ft_strstr(s3, s2)); // Zoo Animals, Cat
	printf("Real: %s\n", strstr(s4, s2));
	printf("Mine: %s\n", ft_strstr(s4, s2)); // somethingcatsomething Cat
	printf("Real: %s\n", strstr(s6, s2));
	printf("Mine: %s\n", ft_strstr(s6, s2)); // somethingCatsomething Cat
	printf("Real: %s\n", strstr(s7, s2));
	printf("Mine: %s\n", ft_strstr(s7, s2)); // something Ca, Cat

	printf("\nTESTING FT_STRNSTR...\n");
	printf("Real: %s\n", strnstr(s1, s2, 0));
	printf("Mine: %s\n", ft_strnstr(s1, s2, 0)); //Caterpillar Cat 0
	printf("Real: %s\n", strnstr(s1, s2, 3));
	printf("Mine: %s\n", ft_strnstr(s1, s2, 3)); //Caterpillar Cat 3
	printf("Real: %s\n", strnstr(s1, s2, 5));
	printf("Mine: %s\n", ft_strnstr(s1, s2, 5)); //Caterpillar Cat 5
	//	printf("Real: %s\n", strnstr(s1, s5, 0));    
	//	printf("Mine: %s\n", ft_strnstr(s1, s5, 0)); // Caterpillar NULL 0 - Segfaults
	//	printf("Real: %s\n", strnstr(s1, s5, 1));    
	//	printf("Mine: %s\n", ft_strnstr(s1, s5, 1)); // Caterpillar NULL 1 - Segfaults 
	//	printf("Real: %s\n", strnstr(s1, s5, 3));    
	//	printf("Mine: %s\n", ft_strnstr(s1, s5, 3)); // Caterpillar NULL 3 - Segfaults 
	printf("Real: %s\n", strnstr(s5, s2, 0));
	printf("Mine: %s\n", ft_strnstr(s5, s2, 0)); // NULL Caterpillar 0
	//	printf("Real: %s\n", strnstr(s5, s2, 1));
	//	printf("Mine: %s\n", ft_strnstr(s5, s2, 1)); // NULL Caterpillar 1 - Segfaults
	//	printf("Real: %s\n", strnstr(s5, s2, 5));
	//	printf("Mine: %s\n", ft_strnstr(s5, s2, 5)); // NULL Caterpillar 5 - Segfaults 
	printf("Real: %s\n", strnstr(s6, s2, 0));
	printf("Mine: %s\n", ft_strnstr(s6, s2, 0)); // somethingCatsomething Cat 0
	printf("Real: %s\n", strnstr(s6, s2, 5));
	printf("Mine: %s\n", ft_strnstr(s6, s2, 5)); // somethingCatsomething Cat 5
	printf("Real: %s\n", strnstr(s6, s2, 11));
	printf("Mine: %s\n", ft_strnstr(s6, s2, 11)); // somethingCatsomething Cat 11
	printf("Real: %s\n", strnstr(s6, s2, 15));
	printf("Mine: %s\n", ft_strnstr(s6, s2, 15)); // somethingCatsomething Cat 15


	printf("\nTESTING FT_STRCMP...\n");
	if (strcmp(s1, s2) == ft_strcmp(s1, s2))
		printf("Test: Caterpillar Cat -> TRUE\n");
	else 
		printf("Test: Caterpillar Cat -> FALSE\n");
	if (strcmp(s1, s5) == ft_strcmp(s1, s5))
		printf("Test: Caterpillar NULL -> TRUE\n");
	else 
		printf("Test: Caterpillar NULL -> FALSE\n");
	if (strcmp(s5, s1) == ft_strcmp(s5, s1))
		printf("Test: NULL Caterpillar -> TRUE\n");
	else 
		printf("Test: NULL Caterpillar -> FALSE\n");
	if (strcmp(s1, s3) == ft_strcmp(s1, s3))
		printf("Test: Caterpillar, Zoo Animals -> TRUE\n");
	else 
		printf("Test: Caterpillar, Zoo Animals -> FALSE\n");


	printf("\nTESTING FT_STRNCMP...\n");
	if (strncmp(s1, s2, 0) == ft_strncmp(s1, s2, 0))
		printf("Test: Caterpillar Cat 0 -> TRUE\n");
	else 
		printf("Test: Caterpillar Cat 0 -> FALSE\n");
	if (strncmp(s1, s2, 3) == ft_strncmp(s1, s2, 3))
		printf("Test: Caterpillar Cat 3 -> TRUE\n");
	else 
		printf("Test: Caterpillar Cat 3 -> FALSE\n");
	if (strncmp(s1, s2, 5) == ft_strncmp(s1, s2, 5))
		printf("Test: Caterpillar Cat 5 -> TRUE\n");
	else 
		printf("Test: Caterpillar Cat 5 -> FALSE\n");
	if (strncmp(s1, s5, 0) == ft_strncmp(s1, s5, 0))
		printf("Test: Caterpillar NULL 0 -> TRUE\n");
	else 
		printf("Test: Caterpillar NULL 0 -> FALSE\n");
	if (strncmp(s1, s5, 1) == ft_strncmp(s1, s5, 1))
		printf("Test: Caterpillar NULL 1 -> TRUE\n");
	else 
		printf("Test: Caterpillar NULL 1 -> FALSE\n");
	if (strncmp(s1, s5, 3) == ft_strncmp(s1, s5, 3))
		printf("Test: Caterpillar NULL 3 -> TRUE\n");
	else 
		printf("Test: Caterpillar NULL 3 -> FALSE\n");
	if (strncmp(s5, s1, 0) == ft_strncmp(s5, s1, 0))
		printf("Test: NULL Caterpillar 0 -> TRUE\n");
	else 
		printf("Test: NULL Caterpillar 0 -> FALSE\n");
	if (strncmp(s5, s1, 1) == ft_strncmp(s5, s1, 1))
		printf("Test: NULL Caterpillar 1 -> TRUE\n");
	else 
		printf("Test: NULL Caterpillar 1 -> FALSE\n");
	if (strncmp(s5, s1, 5) == ft_strncmp(s5, s1, 5))
		printf("Test: NULL Caterpillar 5 -> TRUE\n");
	else 
		printf("Test: NULL Caterpillar 5 -> FALSE\n");

	if (strncmp(s1, s3, 0) == ft_strncmp(s1, s3, 0))
		printf("Test: Caterpillar, Zoo Animals 0 -> TRUE\n");
	else 
		printf("Test: Caterpillar, Zoo Animals 0 -> FALSE\n");
	if (strncmp(s1, s3, 1) == ft_strncmp(s1, s3, 1))
		printf("Test: Caterpillar, Zoo Animals 1 -> TRUE\n");
	else 
		printf("Test: Caterpillar, Zoo Animals 1 -> FALSE\n");
	if (strncmp(s1, s3, 3) == ft_strncmp(s1, s3, 3))
		printf("Test: Caterpillar, Zoo Animals 3 -> TRUE\n");
	else 
		printf("Test: Caterpillar, Zoo Animals 3 -> FALSE\n");
	



		int i = 1;
	char **result;
	char *t1 = "    Cats and Dogs    ";
	char *t2 = "Cats    ";
	char *t3 = "      Dogs";
	char *t4 = "          ";
	char *t5 = "";
	char *t6 = "Cats and Dogs.";
	char *t7 = "jbkjsbihbksbbsssskbihbskbkjsbkbskjbskhbk";

	printf("\nTESTING FT_STRSPLIT...\n");
	result = ft_strsplit(t1, ' ');
	while (*result)
	{
		printf("Word %d : %s\t", i, *result);
		i++;
		result++;
	}
	printf("\n");
	i = 1;
	result = ft_strsplit(t2, ' ');
	while (*result)
	{
		printf("Word %d : %s\t", i, *result);
		i++;
		result++;
	}
	printf("\n");
	i = 1;
	result = ft_strsplit(t3, ' ');
	while (*result)
	{
		printf("Word %d : %s\t", i, *result);
		i++;
		result++;
	}
	printf("\n");
	i = 1;
	result = ft_strsplit(t4, ' ');
	while (*result)
	{
		printf("Word %d : %s\t", i, *result);
		i++;
		result++;
	}
	printf("\n");
	i = 1;
	result = ft_strsplit(t5, ' ');
	while (*result)
	{
		printf("Word %d : %s\t", i, *result);
		i++;
		result++;
	}
	i = 1;
	result = ft_strsplit(t6, ' ');
	while (*result)
	{
		printf("Word %d : %s\t", i, *result);
		i++;
		result++;
	}
	printf("\n");
	i = 1;
	result = ft_strsplit(t7, 's');
	while (*result)
	{
		printf("Word %d : %s\t", i, *result);
		i++;
		result++;
	}
*/

	printf("\nTESTING FT_ITOA...\n");
	printf("Testing 42 : %s\n", ft_itoa(42));
	printf("Testing -5 : %s\n", ft_itoa(-5));
	printf("Testing -2147483648 : %s\n", ft_itoa(-2147483648));
	printf("Testing 2147483647 : %s\n", ft_itoa(2147483647));
	printf("Testing 0 : %s\n", ft_itoa(0));

	return (0);
}
