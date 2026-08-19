#include <iostream>
using namespace std;
#include "RailwayBridge.h"

RailwayBridge::~RailwayBridge() {
	cout << endl << "RailwayBridge " << name << " destroyed";
}
void RailwayBridge::print() const {
	Bridge::print();
	cout << ", number of railways " << railcount << endl;
}