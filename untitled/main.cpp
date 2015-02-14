#include <QCoreApplication>

//---------------------------------------------------------------------------

#include "back.h"
//---------------------------------------------------------------------------

int main()
{
    int c,n,i;
    string street;
    string houses, range,s;
    do{
        cout<<"1-add\\2-change\\3-delete\\4-read file\\5-show\\6-exit\n";
        cin>>c;
        switch (c) {
        case 1:
                cout<<"count?"<<'\n';
                cin>>n;
                for(i=0;i<n;i++)
                {
                    cin>>street;
                    cin>>houses;
                    cin>>range;
                    /*street='1';
                    houses=1;
                    range=1;*/

                    if ((checknum(houses))&&(checknum(range)))
                        add_st(street,atoi(houses.c_str()), atoi(range.c_str()));
                    else cout<<"nums!";
                }
                wr_f(n);
                break;
        case 2: cin>>n;
                cin>>street;
                cin>>houses;
                cin>>range;
                if ((checknum(houses))&&(checknum(range)))
                {
                    if (!change(n, street,atoi(houses.c_str()), atoi(range.c_str())))
                        cout<<"oups!";
                }
                else cout<<"nums!";
                break;
        case 3: cin>>n;
                if(!del(n))
                    cout<<"oups!";
                break;
        case 4: rd_f(); break;
        case 5: show(); break;
        case 6: clear(); break;
        }
    }while(c!=6);
    return 0;
}
//---------------------------------------------------------------------------
