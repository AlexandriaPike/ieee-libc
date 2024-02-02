#include <stdlib.h>
/*

*/
lldiv_t lldiv(long long numerator, long long denominator)
{
	lldiv_t ret;
	ret.quot = numerator/denominator;
	ret.rem = numerator%denominator;
	return ret;
}
