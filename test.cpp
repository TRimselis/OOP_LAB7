#include <iostream>
using namespace std;

#include "RailBridgesList.h"

int main() {
	// Two local RailwayBridge objects
	RailwayBridge RB1("RB1", 12, 1000, 2);
	RailwayBridge RB2;
	RB2.setName("RB2");
	cout << "******Two local RailwayBridge objects:" << endl;
	RB1.print();
	RB2.print();

	RailBridgesList RL;

	try {
		RL += RB1;
		RL += RB2;
		RailwayBridge* pb = new RailwayBridge("RB3", 15, 2000, 3);
		RL += *pb;
		RL.print();
		delete pb;


		RL += *(new RailwayBridge("RB4", 284, 200, 3));
		cout << endl << "******Items of the list:" << endl;
		RL.print();

		RL += *(new RailwayBridge("RB5", 167, 34, 2));
		cout << endl << "******Items of the list:" << endl;
		RL.print();
		cout << "The tallest bridge has a height of " << RL.MaxHeight() << endl;
	}
	catch (...) {
		cout << endl << "====== ERROR: Unknown exception! ======" << endl;
	}

}