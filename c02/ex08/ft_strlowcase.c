/*   Created: 2020/08/22 21:04:34 by Preposterone   */
/*   Updated: 2020/08/22 21:10:42 by Preposterone   */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 & str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
