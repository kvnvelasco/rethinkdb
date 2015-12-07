#ifdef _WIN32

// ATN TODO

#include "arch/runtime/system_event/windows_event.hpp"
#include "arch/runtime/event_queue/windows.hpp"
#include "arch/runtime/thread_pool.hpp"

void windows_event_t::wakey_wakey() {
    if (event_queue != nullptr) {
        rassert(callback != nullptr);
        event_queue->post_event(callback);
    }
}

#endif /* defined(_WIN32) */