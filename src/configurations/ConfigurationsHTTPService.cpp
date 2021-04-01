#include "ConfigurationsHTTPService.hpp"

ConfigurationsHTTPService::ConfigurationsHTTPService()
{
    this->configurations = make_shared<Settings>();

    this->configurations->set_port(8080);
    this->configurations->set_default_header("Connection", "close");
    this->configurations->set_default_header("Access-Control-Allow-Origin", "*");
};

shared_ptr<Settings> ConfigurationsHTTPService::getConfigurations() const
{
    return this->configurations;
}