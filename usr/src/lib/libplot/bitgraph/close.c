#ifndef lint
static char sccsid[] = "@(#)close.c	4.1 (Berkeley) 11/10/83";
#endif

#include <signal.h>
#include "bg.h"

closepl()
{
	/* recieve interupts */
	signal(SIGINT, SIG_IGN);

	/* exit graphics mode */
	putchar( ESC );
	printf("[H");
	exit(0);
}
