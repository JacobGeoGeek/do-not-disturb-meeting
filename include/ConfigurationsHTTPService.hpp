#pragma once

#include "IConfiguration.hpp"

class ConfigurationsHTTPService : public IConfiguration
{

private:
    shared_ptr<Settings> configurations;

public:
    ConfigurationsHTTPService();
    shared_ptr<Settings> getConfigurations() const final;
};