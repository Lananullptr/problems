//---------------------------------------------------------------------------

#pragma hdrstop
#include "back.h"
#include <tchar.h>
//---------------------------------------------------------------------------

#pragma argsused
int _tmain(int argc, _TCHAR* argv[])
{
	int c,n;
	string street, houses, range;
	do{
		cout<<"\1-add\2-change\3-delete\4-show\5-exit\n";
		cin>>c;
		switch (c) {
		case 1: cin>>street;
						cin>>houses;
						cin>>range;
						if ((checknum(houses))&&(checknum(range)))
							add_st(street, StrToInt(houses), StrToInt(range));
						else cout<<"nums!";
						break;
		case 2: cin>>n; change(n); break;
		case 3: cin>>n; del(n); break;
		case 4: rd_f(); show(); break;
		case 5: clear(); break;
		}
	}while(c!=5);
	return 0;
}
//---------------------------------------------------------------------------
