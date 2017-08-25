//start: 96-06-03

#include "ssserver.h"

#include <takess.h> /* hoom?! */


int main(void)
{
	serverConnect(/* sth */);
	while(1)
	{
		if( serverAsk() )
		{
			ss = takeSS();
			ScreenCapture(int x, int y, int width, int height, char *filename)
			serverSendFile( filename );
		}
	}
	return 0;
}

