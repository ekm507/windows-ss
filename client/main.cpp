//start: 96-06-03

#include "ssserver.h"

int main(void)
{
	serverConnect(/* sth */);
	while(1)
	{
		if( serverAsk() )
		{
			ss = takeSS();
			serverSend( ss );
		}
	}
	return 0;
}

