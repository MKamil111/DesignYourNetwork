#pragma once
#ifndef SUBNETSCALCULATORV4_H
#define SUBNETSCALCULATORV4_H

#include <vector>
#include <memory>

#include "IPstructs.h"

namespace core {
    class SubnetsCalculatorV4
    {
    public:
        int calcSubnets(const NetworkBase& mainNet, const std::vector<std::shared_ptr<Subnet>>& subNets);
    private:
        IPmaskBase _chooseSubnetMask(const long long& desiredHostsNumber);
        IPaddressBase _chooseSubnetIP(const IPaddressBase& mainNetIP, const IPmaskBase& pretentMask, const std::vector<std::shared_ptr<Subnet>>& alreadyAssignedIPs);
    };
}

#endif // SUBNETSCALCULATORV4_H
