#pragma once
#include "RailwayBridge.h"
#include <list>

class RailBridgesList {
private:
    std::list<RailwayBridge*> RailBridges;

public:
    RailBridgesList() {}
    ~RailBridgesList();
    void print() const;
    unsigned MaxHeight() const;
    void operator+=(RailwayBridge& a);
};
