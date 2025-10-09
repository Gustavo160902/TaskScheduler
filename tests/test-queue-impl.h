// test-queue-impl.h - Header for Linux queue implementation
// Declares helper functions for queue management in tests

#ifndef TEST_QUEUE_IMPL_H
#define TEST_QUEUE_IMPL_H

#include <cstddef>

// Helper functions for testing
void clearTaskRequestQueue();
size_t getQueueSize();

// Maximum queue size constant
extern const size_t MAX_QUEUE_SIZE;

#endif // TEST_QUEUE_IMPL_H
