#include "MeetingResource.hpp"
#include "dto/MeetingDto.hpp"

MeetingResource::MeetingResource()
{
    this->resource = make_shared<Resource>();

    this->resource->set_path("/Meeting");
    this->resource->set_method_handler("POST", updateMeetingStatus);
}

shared_ptr<Resource> MeetingResource::inMeeting() const
{
    return this->resource;
}

void MeetingResource::updateMeetingStatus(const shared_ptr<Session> session)
{
    const auto request = session->get_request();

    int content_length = request->get_header("Content-Length", 0);

    session->fetch(content_length, [](const shared_ptr<Session> session, const Bytes &body) {
        fprintf(stdout, "%.*s\n", (int)body.size(), body.data());

        MeetingDto::Meeting meetingSample;
        meetingSample.title = "Bob the construction";
        meetingSample.startDate = "01-01-2021";
        meetingSample.endDate = "02-01-2021";

        std::string resultJson = MeetingDto::to_json(meetingSample);

        session->close(OK, resultJson, {{"Content-Length", resultJson.size()}});
    });
};
