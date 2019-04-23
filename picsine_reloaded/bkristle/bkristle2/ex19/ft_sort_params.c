/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 17:32:21 by bkristle          #+#    #+#             */
/*   Updated: 2019/04/05 17:45:38 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int s;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		s = s1[i] - s2[i];
		if (s == 0)
			i++;
		else
			return (s);
	}
	return (0);
}

void	ft_swap(char **s1, char **s2)
{
	char *s;

	s = *s1;
	*s1 = *s2;
	*s2 = s;
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc - 1)
	{
		if ((ft_strcmp(argv[i], argv[i + 1])) > 0)
		{
			ft_swap(&argv[i], &argv[i + 1]);
			i = 1;
		}
		else
			i++;
	}
	i = 1;
	while (i <= argc - 1)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i++;
	}
	return (0);
}
