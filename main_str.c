/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 22:41:10 by esterna           #+#    #+#             */
/*   Updated: 2017/03/08 22:43:16 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main()
{
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

	return (0);
}
