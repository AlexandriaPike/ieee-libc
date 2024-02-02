#include <inttypes.h>

/*

*/

intmax_t imaxabs(intmax_t num)
{
	if (num < 0) {
		return -num;
	}
	return num;
}
