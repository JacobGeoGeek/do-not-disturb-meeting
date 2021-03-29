#pragma once

#include "IResource.hpp"

class MeetingResource : public IResource
{
private:
    shared_ptr<Resource> resource;
    void updateMeetingStatus(const shared_ptr<Session> session);

public:
    shared_ptr<Resource> inMeeting() const final;
    MeetingResource(); //Here we will add the serviceApplication classes
    ~MeetingResource();
};
