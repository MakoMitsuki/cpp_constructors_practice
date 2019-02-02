/* HOMEWORK 1 CS 474
Mika Cabudol - 672285210
main.cpp*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include "Person.h"

int main() {
	Person p0("", "");
  vector<Person> personvector;

    //Output the number of Person objects according to the Person class.
	cout << p0.totalPopulation() << endl;

	// Output the class variable className from the Person class.
	cout << p0.getClass() << endl;

	// Create a Person object with first name Ada, last name Lovelace, inserting that person object into to the vector of Person objects.
	Person p1(p0);
  p1.setName("Ada", "Lovelace");
	personvector.push_back(p1);

	// Call the sayName function of all objects in the vector of Person objects.
  for(Person& p: personvector) {
		p.sayName();
	}

	// Output the number of Person objects according to the Person class.
	//cout << personvector.size() << endl;
  cout << p1.totalPopulation() << endl;

	// Change the className of the Person class to “Homo Sapiens"
	p1.setClass("Homo Sapiens");

	// Create a Person object with first name Alan, last name Turing, inserting that person object into to the vector of Person objects.
  Person p2(p1);
  p2.setName("Alan", "Turing");
	personvector.push_back(p2);

	// Call the sayName function of all objects in the vector of Person objects.
	for(Person& p: personvector) {
		p.sayName();
	}

	// Output the number of Person objects according to the Person class.
	//cout << personvector.size() << endl;
  cout << p2.totalPopulation() << endl;

	// Output className from the Person class.
	cout << p2.getClass() << endl;
	
	// Dynamically allocate a Person object with first name Lynn, last name Conway. Do not add this Person to the vector.
  Person * p3;
  p3 = new Person(p2);
  p3->setName("Lynn", "Conway");

	// Call the sayName function of the Person object dynamically added in step 11.
	p3->sayName();

	// Output the number of Person objects according to the Person class.
	cout << p3->totalPopulation() << endl;
	
	// Deallocate the Person object with first name Lynn, last name Conway.
	delete p3;

	// Output the number of Person objects according to the Person class.
	cout << p2.totalPopulation() << endl;

  return 0;
}