#include <iostream>
#include <algorithm>
#include "RailBridgesList.h"



RailBridgesList::~RailBridgesList() {
    for (auto bridge : RailBridges) {
        delete bridge;
    }
    std::cout << "\nRailBridgesList and all " << RailBridges.size() << " RailwayBridges destroyed" << std::endl;
}

void RailBridgesList::print() const {
    unsigned index = 1;
    for (auto bridge : RailBridges) {
        std::cout << index++ << ". ";
        (bridge)->print();
        std::cout << std::endl;
    }
}

unsigned RailBridgesList::MaxHeight() const {
    if (RailBridges.empty()) return 0;

    auto maxIt = std::max_element(RailBridges.begin(), RailBridges.end(), [](RailwayBridge* a, RailwayBridge* b) {
            return a->getHeight() < b->getHeight();
        }
    );
    return (*maxIt)->getHeight();
}

void RailBridgesList::operator+=(RailwayBridge& a) {
    RailBridges.push_back(new RailwayBridge(a));
}