#pragma once
#include <string>
using namespace std;


class Bridge {
protected:
	string name;
	unsigned height;
	unsigned long strength;
public:
	Bridge() : name(""), height(0), strength(0) {}
	Bridge(string nm, unsigned ht, unsigned long st);
	virtual ~Bridge();
	string getName() const { return name; }
	unsigned getHeight() const { return height; }
	unsigned long getStrength() const { return strength; }
	void setName(string nm) { name = nm; }
	void setHeight(unsigned ht) { height = ht; }
	void setStrength(unsigned long st) { strength = st; }
	void setAttributes(string nm, unsigned ht, unsigned long st) {
		name = nm; height = ht; strength = st;
	}
	virtual void print() const;
};