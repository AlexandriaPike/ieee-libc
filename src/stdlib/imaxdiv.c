#include <inttypes.h>

/*

*/

imaxdiv_t imaxdiv(intmax_t num, intmax_t denom)
{
	imaxdiv_t ret;
	ret.quot = num / denom;
	ret.rem = num % denom;
	return ret;
}
