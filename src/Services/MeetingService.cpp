#include "MeetingService.hpp"

MeetingService::MeetingService(shared_ptr<IResource> ressource, shared_ptr<IConfiguration> configurations)
{
    this->configurations = configurations;
    this->service.publish(ressource->getResource());
}

void MeetingService::start()
{
    this->service.start(this->configurations->getConfigurations());
}