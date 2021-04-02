#include <cstdlib>

#include "MeetingResource.hpp"
#include "ConfigurationsHttp.hpp"
#include "MeetingService.hpp"

int main(const int, const char **)
{

    auto meetingResource = make_shared<MeetingResource>();
    auto configurations = make_shared<ConfigurationsHttp>();

    MeetingService meetingResource = MeetingService(meetingResource, configurations);

    meetingResource.start();

    return EXIT_SUCCESS;
}