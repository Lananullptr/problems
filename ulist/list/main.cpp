


//---------------------------------------------------------------------------

#include "back.h"
//---------------------------------------------------------------------------

int main()
{
    int c,n,i;
    string street;
    string houses, range,s;
    do{
        cout<<"1-add\\2-change\\3-delete\\4-read file\\5-show\\6-save to file\\7-exit\n";
        cin>>c;
        switch (c) {
        case 1:
                cout<<"count?"<<'\n';
                cin>>n;
                for(i=0;i<n;i++)
                {
                    cout<<"street"<<'\n';
                    cin>>street;
                    cout<<"houses"<<'\n';
                    cin>>houses;
                    cout<<"length"<<'\n';
                    cin>>range;                 

                    if ((checknum(houses))&&(checknum(range)))
                        add_st(street,atoi(houses.c_str()), atoi(range.c_str()));
                    else cout<<"nums!";
                }
                wr_f(n);
                break;
        case 2:

                cin>>i;
                cout<<"new name of street"<<'\n';
                cin>>street;
                cout<<"new number of houses"<<'\n';
                cin>>houses;
                cout<<"new length of street"<<'\n';
                cin>>range;
                if ((checknum(houses))&&(checknum(range)))
                {
                    if (!change(i, street,atoi(houses.c_str()), atoi(range.c_str())))
                        cout<<"wrong!";
                }
                else cout<<"nums!";
                break;
        case 3: cin>>i;
                if(!del(i))
                    cout<<"wrong!";
                else n--;
                break;
        case 4: rd_f(); break;
        case 5: show(); break;
        case 6: wr_f(n); break;
        case 7: clear(); break;
        }
    }while(c!=7);
    return 0;
}
//---------------------------------------------------------------------------
