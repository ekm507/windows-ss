//start: 96-06-03

#include "ssserver.h"

int main(void)
{
	while( !clientConnect(/* sth */) ) ;
	while(1)
	{
		if( aksForSS() )
		{
			clientAsk();
			bmp ss = getSS();
			savebmp(ss);
		}
	}
	return 0;
}
