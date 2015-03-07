
#include "incl.h"

bool checknum(string s, int &c){
    char str[20];
    bool f;
    char* endl;
    strncpy(str, s.c_str(),19);
    c = strtol(str, &endl, 10);
    f = (( *endl=='\0')? true : false);
    f = f && s.length()<=7;
    if (c<0) f=false;
    return f;
}

void gps_a(bool &au, bool &im)
{
    int b,d;
    bool ch=false;
    do{
        cout << "\nВыберите тип GPS ( 1-ручной, 2-автомобильный): ";
        cin >> b;
        if (b==2) au=true;
        if (b==1) au=false;
        cout << "\nВозможна ли загрузка карт (1 - да, 2 - нет): ";
        cin >> d;
        if (d==1) im=true;
        if (d==2) im=false;
        if( (1 == b || 2 == b)&&(1 == d || 2 == d ) )
            ch = true;

    }while( ch == false );
}

int map_a()
{
    int b=0;
    string s;
    bool f;
    do
    {
        cout << "\nВведите размер карты (mb): ";
        cin >> s;
        f = checknum(s,b);

    }while(f==false);
    return b;
}

void add(vector<nav*> &shop)
{
    int type;
    int price=0;
    string name ="";
    string s="";
    int sz;
    bool im;
    bool au;
    bool f;
    bool ch=false;
    do{
        cout << "\nВыберите тип товара (1 - GPS, 2 - карты ): ";
        cin>>type;
        if (type==1 || type==2)
            ch=true;
    }while(ch==false);
    if (type == 1)  gps_a(au, im);
    if (type == 2)  sz = map_a();

    cout << "\nВведите название товара: ";
    cin >> name;
    do
    {
        cout << "\nВведите цену: ";
        cin >> s;
        f = checknum(s,price);
    }while(f == false);

    nav *tmp;
    if (type == 1) tmp = new gps (im, au, price, name);
    if (type == 2) tmp = new map (sz, price, name);

    shop.push_back(tmp);

}

void printAll( vector< nav* > &shop ){
    if( !shop.empty() ){
        cout << "\nСписок товаров: ";
        for(  int i = 0; i != shop.size(); i++ ){
            cout << "\nТовар #" << i ;
            shop[ i ]->getInfo();
        };
    }else{
        cout << "\nСписок пуст.";
    }
}

void printCheap( vector< nav* > &shop ){
    if( !shop.empty() ){
        cout << "\nСписок товаров дешевле 4000: ";
        for( int i = 0; i != shop.size(); i++ ){
            if( shop[ i ]->getPrice() <= 4000 ){
                    cout << "\nТовар #" << i << ". ";
                    shop[ i ]->getInfo();
            };
        };
    }else
        std::cout << "\nСписок пуст.";

}

void clear(vector< nav* > &shop )
{
    for( int i = 0; i != shop.size(); i++ )
        delete shop[ i ];
    shop.clear();
}
