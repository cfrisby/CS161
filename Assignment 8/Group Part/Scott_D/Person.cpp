/***********
**Author: Scott Dick
**Date: 7/30/2017
**Description: This class creates name and age data members with 
getName and getAge that are used for with the function stdDev.cpp
to practice passing arrays to functions used to calculate standard
deviation.
************/
#include "Person.hpp"
#include<iostream>
#include<string>
using namespace std;

//constructor
Person::Person(string n, double a) {
	name = n;
	age = a;
}

//getters for name and age
string Person::getName() {
	return name;
}
double Person::getAge() {
	return age;
}