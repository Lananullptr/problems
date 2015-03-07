#include "main.h"

int main ()
{
    vector < nav* > shop;
    string s;
    bool f;
    int c;
    do{
		cout<<"1-добавить\n2-вывести всё\n3-вывести товары дешевле 4000\n4-выход\n";
		do{
            cin>>s;
            f = checknum(s,c);
		}
        while(f==false);
		switch (c) {
		case 1: add(shop); break;
		case 2: printAll(shop); break;
		case 3: printCheap(shop); break;
		case 4: clear(shop); break;
		}
	}while(c!=4);

    return 0;
}
