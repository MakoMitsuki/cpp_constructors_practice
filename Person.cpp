/* HOMEWORK 1 CS 474
Mika Cabudol - 672285210
Person.cpp*/

#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

Person :: Person ()
{}

Person::~Person ()
{}
 
Person :: Person(const string fn, const string ln) 
  : firstName(fn), lastName(ln)
{
  totPop = totPop + 1;
}

Person :: Person(const Person& p)
: firstName(p.firstName), lastName(p.lastName), className(p.className)
{
  totPop = p.totPop + 1;
}

Person :: Person(Person&& p) 
: firstName(p.firstName), lastName(p.lastName), className(p.className){
	totPop = p.totPop + 1;
  //delete p;
}
	 
void Person :: sayName() const
{
     cout << firstName << " " << lastName << "\n";
}

string Person :: getClass() const
{
	return className;
}

void Person :: setName(const string f, const string l)
{
    firstName = f;
    lastName = l;
}

void Person :: setClass(const string c)
{
    className = c;
}

int Person :: totalPopulation() const
{
  return totPop;
}