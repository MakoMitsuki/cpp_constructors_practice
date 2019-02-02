/* HOMEWORK 1 CS 474
Mika Cabudol - 672285210
Person.h*/

#pragma once

#include <iostream>
#include <string>

using namespace std;

class Person
{
     private :
          string firstName = "";
    	    string lastName = "";
     public :
          string className = "Person";
          int totPop = -1; // originally zero but made not to count the first instance
          Person();
          ~Person();
          Person (const Person& p);
          Person(const string fn = "", const string ln = "");
          // move constructor + assignment
          Person (Person&& p);
          Person& operator = (Person&& p);
          // Functions
          void sayName() const;
          string getClass() const;
          void setName(const string f, const string l);
          void setClass(const string c);
          int totalPopulation() const;
};