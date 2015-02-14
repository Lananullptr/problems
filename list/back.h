#include <string>
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;

struct base{
string street;
int houses;
int range;
};//bd;

struct list{
	struct base  basa;
	struct list *next;
};//*first;

bool add_st(string street, int houses,  int range);
bool change(int n);
bool del(int n);
bool rd_f();
void clear();
void show();
bool checknum(string s);
