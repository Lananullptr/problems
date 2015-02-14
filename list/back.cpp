#include "back.h"

struct list *first;

void wr_f(base a){
	ofstream f;
	f.open("file", ios::out | ios::binary);
	f.write((char*) &a.street, sizeof(string));
	f.write((char*) &a.houses, sizeof(int));
	f.write((char*) &a.range, sizeof(int));
	f.close();
}

bool add_st( string street, int houses,  int range)
{
	/*scanf(bd.street);
	scanf(bd.houses);
	scanf(bd.range);
	std::ofstream out_f( "out", std::ios::out | std::ios::binary );

    if (!out_f.is_open()) return false;

    std::streamsize buffsize = sizeof (bd);

    out_f.write((char*) &bd, buffsize );

    out_f.flush();
    out_f.close();
    return true;*/
		list *p;
	p = new(struct list);
	if (p){
		p->basa.street = street;
		p->basa.houses = houses;
		p->basa.range = range;
		p->next = first;
		first = p;
		wr_f(p->basa);
	}
	return p;
}
//чтение файла
bool rd_f(){
	ifstream f;
	list *p;
	f.open("file", ios::in | ios::binary);
	if(f.is_open()){
	while(!f.eof()){
		f.read((char*)&p->basa.street, sizeof(string));
		f.read((char*)&p->basa.houses, sizeof(int));
		f.read((char*)&p->basa.range, sizeof(int));
		p->next = first;
		first = p;
	}
	f.close() ;
	return true;
	}
	return false ;

}
int count()
{
	int c=0;
	if (first){
		for (struct list *p = first; p; p = p->next)
			c++;
	}
	return c;
};
//изменение
bool change(int n){
	list *p;
	if (n<count()){
		for(int i=0; i<n; i++, p=p->next);
		cin>>p->basa.street>>p->basa.houses>>p->basa.range;
		wr_f(p->basa);
		return true;
	}
	return false;
}

bool del(int n){
	bool b;
	struct list *p=first;
	struct list *p2;
	if( n<count() )
	{
		for(int i=0;i<n-1; i++,p=p->next);
		p2=p->next->next;
		delete p->next;
		p->next = p2;
		return true;
	}
	return false;
};

void clear(){
	list *p, *tmp;
	if (first) {
		for (p = first; p->next; p = p->next){
			tmp = p->next;
			delete(p);
			p = tmp;
		}
	}
};

void show(){
	list *p;
	for (p = first; p; p = p->next)
		cout << p->basa.street << ' '<<p->basa.houses<<' '<< p->basa.range<<'\n';
};

bool checknum(string s){
	bool b=true;
	while((i<s.length())&&(b))
		if ((s[i]>'9')||(s[i]<'0')) b=false;
	return b;
}