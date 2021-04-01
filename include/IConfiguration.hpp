#pragma once

#include <memory>
#include <restbed>

using namespace std;
using namespace restbed;

class IConfiguration
{
public:
    virtual shared_ptr<Settings> getConfigurations() const = 0;
};