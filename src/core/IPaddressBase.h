#pragma once
#ifndef IPADDRESSBASE_H
#define IPADDRESSBASE_H

#include <boost/dynamic_bitset.hpp>
#include <iostream>
#include <QString>

#include "IIPaddress.h"

namespace core {
    class IPaddressBase: public IIPaddress
    {
    public:
        IPaddressBase(const boost::dynamic_bitset<>& ipaddress): _IpAddress{ipaddress} {};

        QString asStringDec() const final;
        QString asStringBin() const final;

        IPaddressBase operator& (const IPaddressBase& var) const;
        IPaddressBase operator| (const IPaddressBase& var) const;
        bool operator==(const IPaddressBase&) const;
        bool operator!=(const IPaddressBase&) const;

        friend std::istream& operator>>(std::istream&, IPaddressBase&);
    protected:
        boost::dynamic_bitset<> _IpAddress;
    };


}

#endif // IPADDRESSBASE_H
