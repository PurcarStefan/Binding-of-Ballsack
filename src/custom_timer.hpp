#pragma once
#include <raylib.h>

struct Timer{
    float duration = 0.0f;

    double last_time = 0.0;

    bool is_repeated = false;
    bool is_active = false;

    void (*func)() = nullptr;

    Timer(float duration = 0.0f, bool is_repeated = false, bool autostart = false, void (*func)() = nullptr);

    void activate();

    void update();

    void deactivate();
};