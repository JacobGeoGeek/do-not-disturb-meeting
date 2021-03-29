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
