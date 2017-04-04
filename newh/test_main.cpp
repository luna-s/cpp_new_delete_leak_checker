#include <iostream>
#include <cstdio>
#include "newh.h"

void main()
{
	int *a = new int;
	delete a;


	float *b = new float;
	delete b;

	char *c = new char[10];
	delete[] c;


	std::string *d = new std::string;
	delete d;

	std::string *e = new std::string("korea");
	delete e;



	lunas::s_heap_manager.printInfoAll();

	int *aa = new int;
	float *bb = new float;
	char *cc = new char[1000];

	lunas::s_heap_manager.printInfoAll();

	std::string *dd = new std::string();
	std::string *ee = new std::string("korea");

	lunas::s_heap_manager.printInfoAll();

	delete aa;
	delete bb;
	delete[] cc;

	lunas::s_heap_manager.printInfoAll();

	delete dd;
	delete ee;

	lunas::s_heap_manager.printInfoAll();

}