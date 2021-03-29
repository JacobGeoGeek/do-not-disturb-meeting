#pragma once

#include "ISetting.hpp"

class Setting : public ISetting
{

private:
    shared_ptr<Settings> setting;

public:
    Setting();
    shared_ptr<Settings> getSettings() const final;
};