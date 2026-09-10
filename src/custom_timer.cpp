#include "custom_timer.hpp"

Timer::Timer(float duration,
             bool is_repeated,
             bool autostart,
             void (*func)())
{
    this->duration = duration;
    this->is_repeated = is_repeated;
    this->func = func;

    if (autostart) {
        activate();
    }
}

void Timer::activate() {
    is_active = true;
    last_time = GetTime();
}

void Timer::update() {
    if (!is_active) return;

    if (GetTime() - last_time >= duration) {
        if (func) func();
        deactivate();
    }
}

void Timer::deactivate() {
    is_active = false;
    if (is_repeated) {
        activate();
    }
}
