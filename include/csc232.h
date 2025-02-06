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
#define TEST_TASK2 TRUE
#define TEST_TASK3 TRUE
#define TEST_TASK4 TRUE
#define TEST_TASK5 TRUE

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
            return board[start];
        else if (size == 2)
            return board[start] + board[start+1];
        else if (size == 3)
            return board[start] + board[start+2];
        else
        {
            int cost1 = board[start] + jump_it(board, start+1, size-1);
            int cost2 = board[start] + jump_it(board, start+2, size-2);
            return ((cost1 < cost2)? cost1 : cost2);
        }

    }

    inline int optimized_jump_it(const int board[], int size) {

        cachedCosts[size-1] = board[size-1];
        cachedCosts[size-2] = board[size-2];

        for (int i = size-3; i >= 0; i-- ){
            cachedCosts[i] = board[i] + std::min(cachedCosts[i+1], cachedCosts[i+2]);
        }
        return cachedCosts[0];
    }
} // namespace csc232

#endif // MSU_CSC232_H
