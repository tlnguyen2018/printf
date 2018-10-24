/**
 *_pr_uint - entry point
 *@uint: unsigned interger
 *Description: print unsigned interger with putchar
 */
void _pr_uint(va_list list)
{
	
if (uint / 10 != 0)
		_pr_uint(uint / 10);
	_putchar((uint % 10) + '0');
}

/**
 *pr_int - entry point
 *@in: regular interger
 *Description: print interger with putchar
 */
void pr_int(int in)
{
	if (in < 0)
	{
		_putchar('-');
		in = -in;
	}
	_pr_uint((unsigned int) in);

}
