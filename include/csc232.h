/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2025
 *
 * @file    csc232.h
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Macros, libraries and definitions for use in csc232 assignments.
 * @version 1.0.0
 * @date    01/01/2025
 *
 * @copyright Copyright (c) 2025 James R. Daehn
 */

#ifndef MSU_CSC232_H
#define MSU_CSC232_H

#define FALSE 0
#define TRUE 1

#define EXECUTE_PREAMBLE TRUE

#define TEST_TASK1 TRUE
#define TEST_TASK2 FALSE
#define TEST_TASK3 FALSE
#define TEST_TASK4 FALSE
#define TEST_TASK5 FALSE

#include <algorithm>
#include <cassert>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <list>
#include <memory>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <stdexcept>
#include <string>
#include <utility>
#include <vector>

/** Common iostream objects */
using std::cerr;
using std::cin;
using std::cout;
using std::endl;

/** Common iomanip objects */
using std::left;
using std::right;
using std::setprecision;
using std::setw;

/**
 * @brief Common namespace for CSC232 identifiers.
 */
namespace csc232 {
    // Add any user-defined functions prescribed in your assignment below
    inline int cachedCosts[] = {0, 0, 0, 0, 0, 0};

    // Add any user-defined functions prescribed in your assignment below

    inline int jump_it(const int board[], const int start, const int size) {
        if (size == 1) 
            return board[0];

        return 0;
    }

    inline int optimized_jump_it(const int board[], int size) {
        return 0;
    }
} // namespace csc232

#endif // MSU_CSC232_H
