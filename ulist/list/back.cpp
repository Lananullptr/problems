
#include "back.h"

list<base> myList;
list<base>::iterator iter;

void wr_f(int n){
    fstream f;
    int i,j;
    f.open("file.dat", ios::out | ios::binary);
    if(f.fail()){
        getchar();
    }
    f.write((char*) &n, sizeof(int));
    for(i = 0, iter = myList.begin(); i<n; i++, iter++){
        j=iter->street.length();
        f.write((char*)&j, sizeof(int));
        f.write(iter->street.c_str(), iter->street.length());
        if(f.fail()){
            getchar();
        }
        f.write((char*) &iter->houses, sizeof(int));
        if(f.fail()){
            getchar();
        }
        f.write((char*) &iter->range, sizeof(int));
        if(f.fail()){
            getchar();
        }
    }
    f.close();

}

void add_st( string street, int houses,  int range)
{
    base p;
    p.houses=houses;
    p.street=street;
    p.range=range;
    myList.push_back(p);

}

int strlength(char* c)
{
	int i;
    for(i=0; c[i]!='\0'; i++);
    return i;
}

void rd_f(){
    fstream f;
    base p;
    char* street=nullptr;
    int houses,range,n,i,j;
    myList.clear();
    f.open("file.dat", ios::in | ios::binary);
    if(f.fail()){
        getchar();
    }
    if(f.is_open()){
        f.read((char*) &n, sizeof(int));
        for(i=0;i<n;i++){
            f.read((char*) &j, sizeof(int));
            //allocation
            street = (char*) malloc(j+1);

            f.read(street,j);
            if(f.fail())
                getchar();
            else
                street[j] = '\0';
            f.read((char*)&houses, sizeof(int));
            if(f.fail()){
                getchar();
            }
            f.read((char*)&range, sizeof(int));
            if(f.fail()){
                getchar();
            }
            string str(street, strlength(street));
            p.houses=houses;
            p.street=str;
            p.range=range;
            myList.push_back(p);
            free(street);
        }
    }
    f.close() ;

}


bool change(int n,string street, int houses,  int range){
    int i=1;
    base p;
    p.street=street;
    p.houses=houses;
    p.range=range;

    if (!myList.empty()){
        for(i,iter=myList.begin();i<n;i++,iter++);
        *iter=p;
        return true;
    }
    return false;
}

bool del(int n){
    int i=1;
    iter=myList.begin();
    if (!myList.empty()){
        for(;i<n;i++,iter++);
        myList.erase(iter);
        return true;
    }
    return false;
}

void clear(){
    myList.clear();
}

void show(){
    for(iter=myList.begin(); iter != myList.end(); iter++){
        cout << "street: "<<iter->street<<'\n' ;
        cout << "houses: "<<iter->houses<<'\n' ;
        cout << "range: "<< iter->range << '\n';
    }
}

bool checknum(string s){
    bool b=true;
    int i=0;
    while((i<s.length())&&(b))
        if ((s[i]>'9')&&(s[i]<'0')) b=false;
        else i++;
    return b;
}
