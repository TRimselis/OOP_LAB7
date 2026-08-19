#pragma once
#include "Bridge.h"

class RailwayBridge : public Bridge {
private:
	unsigned railcount;
public:
	RailwayBridge() : Bridge(), railcount(0) {}
	RailwayBridge(string nm, unsigned ht, unsigned long st, unsigned rc) : Bridge(nm, ht, st), railcount(rc) {}
	~RailwayBridge();
	void print() const;
	unsigned getRailCount() const { return railcount; }
	void setRailCount(unsigned rc) { railcount = rc; }
};