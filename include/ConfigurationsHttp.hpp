#pragma once

#include "IConfiguration.hpp"
#include "IResource.hpp"

class ConfigurationsHttp : public IConfiguration
{

private:
    shared_ptr<Settings> configurations;

public:
    ConfigurationsHttp();
    shared_ptr<Settings> getConfigurations() const final;
    
};