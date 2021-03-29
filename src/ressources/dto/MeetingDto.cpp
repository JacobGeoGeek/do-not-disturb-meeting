#include "MeetingDto.hpp"

namespace MeetingDto
{
    std::string to_json(const Meeting &meeting)
    {
        json result = json{
            {"title", meeting.title},
            {"start", meeting.startDate},
            {"end", meeting.endDate}};

        return result.dump();
    }

    void from_json(const json &j, Meeting &meeting)
    {
        j.at("title").get_to(meeting.title);
        j.at("start").get_to(meeting.startDate);
        j.at("end").get_to(meeting.endDate);
    }
}