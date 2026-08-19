#include <iostream>
using namespace std;
#include "Bridge.h"

Bridge::Bridge(string nm, unsigned ht, unsigned long st) {
	name = nm;
	height = ht;
	strength = st;
}

Bridge::~Bridge() {
	cout << endl << "Bridge " << name << " destroyed";
}

void Bridge::print() const {
	cout << "Bridge: " << name << ",  Height: " << height << ",  Strength: " << strength;
}