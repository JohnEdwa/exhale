#pragma once

#define PERSIST_WAKEUP 43

void wakeup_force_next_schedule(int hours, int wakeup_id, int startHours);
void wakeup_schedule_next_wakeup(int hours, int wakeup_id, int startHours);
void wakeup_handler();