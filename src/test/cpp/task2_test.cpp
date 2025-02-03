/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2025
 *
 * @file    task2_test.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Task 2 test fixture.
 * @version 1.0.0
 * @date    01/01/2025
 *
 * @copyright Copyright (c) 2025 James R. Daehn
 */

#include <gtest/gtest.h>
#include "csc232_test_utils.h"

namespace csc232 {
    class Task2TestFixture : public CSC232BaseTestFixture {
    public:
        Task2TestFixture() = default;

        ~Task2TestFixture() override = default;

    protected:
        // Reusable objects for each unit test in this test fixture
    };

#if !TEST_TASK2
    TEST_F(Task2TestFixture, Bootstrap) {
        std::cerr << "Task 2 is not ready for evaluation; please toggle the TEST_TASK2 macro to TRUE\n";
        SUCCEED(); // Just to keep spirits up out of the box ;-)
    }

#else
    TEST_F(Task2TestFixture, ItComputesProperlyWithTwoElementBoard) {
        int board[] = {0, 1};
        constexpr int expected{1};
        const int actual{jump_it(board, 0, 2)};
        EXPECT_EQ(expected, actual);
    }
#endif
} // end namespace csc232
