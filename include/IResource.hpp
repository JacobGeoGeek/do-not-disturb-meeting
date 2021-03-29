#pragma once

#include <memory>
#include <restbed>

using namespace std;
using namespace restbed;

class IResource
{
public:
    virtual shared_ptr<Resource> getResource() const = 0;
};
