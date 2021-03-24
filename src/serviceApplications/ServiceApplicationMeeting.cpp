#include <string>

class ServiceApplicationMeeting
{
private:
    /* data */
public:
    ServiceApplicationMeeting(/* args */);
    ~ServiceApplicationMeeting();
    void InMeeting(std::string message);
    void Available(std::string message);
};

ServiceApplicationMeeting::ServiceApplicationMeeting(/* args */)
{
}

ServiceApplicationMeeting::~ServiceApplicationMeeting()
{
}

void ServiceApplicationMeeting::InMeeting(std::string message)
{
}

void ServiceApplicationMeeting::Available(std::string message)
{
}