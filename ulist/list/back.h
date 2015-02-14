#ifndef BACK_H
#define BACK_H
#include <list>
#include <string>
#include <fstream>
#include <iostream>
#include <cstdlib>

using namespace std;

struct base{
    string street;
    int houses;
    int range;
};

void add_st(string street, int houses,  int range);
bool change(int n, string street, int houses,  int range);
bool del(int n);
void rd_f();
void wr_f(int n);
void show();
void clear();
bool checknum(string s);

#endif // BACK_H
