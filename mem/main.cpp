
#include <iostream>
#include <string>
#include <list>

using namespace std;

int main(){
    int n,i,A,sum,tmp;
    sum=0;
    list<int> List;
    list<int>::iterator iter;
    cout<<"count"<<'\n';
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>A;
        List.push_back(A);
    }

    for(iter = List.begin(); iter != List.end(); iter++)
    {
        if((*iter%1000)/100==*iter%10)
            List.erase(iter--);
        else
        {
            if(*iter%2==0)
                sum+=*iter;
            tmp=*iter;
            iter++;
            List.insert(iter,*List.begin()+tmp);
            iter--;
        }
    }

    for(iter = List.begin(); iter != List.end(); iter++)
        cout<<*iter<<' ';
    cout<<'\n'<<sum;
    List.clear();

return 0;
}
