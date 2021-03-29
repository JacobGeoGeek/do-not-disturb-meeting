#pragma once

#include <memory>
#include <restbed>

using namespace std;
using namespace restbed;

class ISetting
{
public:
    virtual shared_ptr<Settings> getSettings() const = 0;
};