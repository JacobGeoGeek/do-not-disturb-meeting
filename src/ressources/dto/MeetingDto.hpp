#include <string>
#include <string>
#include <nlohmann/json.hpp>

using nlohmann::json;

namespace MeetingDto
{
    struct Meeting
    {
        std::string title;
        std::string startDate;
        std::string endDate;
    };

    std::string to_json(const Meeting &meeting);
    void from_json(const json &j, Meeting &meeting);
}