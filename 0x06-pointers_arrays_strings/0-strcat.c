


/*Find the end of the dest string
 * Append src to the end of the dest
 */

char *_strcat(char *dest, char *src)


{
	char *dest_end = dest;
	while (*dest_end != '\0')
	{
	dest_end++;
	}
	while (*src != '\0')
	{
	*dest_end = *src;
	dest_end++;
	s
