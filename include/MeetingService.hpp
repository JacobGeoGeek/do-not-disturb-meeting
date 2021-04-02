#pragma once

#include "IService.hpp"

#include "IResource.hpp"
#include "IConfiguration.hpp"

class MeetingService : public IService
{
private:
    Service service;
    shared_ptr<IConfiguration> configurations;

public:
    MeetingService(shared_ptr<IResource> ressource, shared_ptr<IConfiguration> configurations);
    void start() final;
};
