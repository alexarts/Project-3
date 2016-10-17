/**
 * ohhi.cpp
 *
 * EECS 183
 * Project 3: 0h h1
 *
 * <Elizabeth Batista, Alexander Arts>
 * <alexarts>
 *
 * <#A description of the project here#>
 */

#include <iostream>
#include <cctype>
#include "utility.h"
#include "ohhi.h"

///////////////////////////////////////
// UTILITY FUNCTIONS //////////////////
///////////////////////////////////////

int count_unknown_squares(const int board[MAX_SIZE][MAX_SIZE], int size) {
    int unknown_count = 0;

    for (int row = 0; row <= size; row++)
    {
        for (int col = 0; col <= size; col++)
        {
            if (board[row][col] != RED || BLUE)
            {
                unknown_count++;
            }
        }
    }
    return unknown_count;
}


///////////////////////////////////////
// VALIDITY CHECKS ////////////////////
///////////////////////////////////////

bool row_has_no_threes_of_color(const int board[MAX_SIZE][MAX_SIZE],
                                int size,
                                int row,
                                int color)
{
    for (int k = 0; (k + 2) < MAX_SIZE; k++)
    {
        if (board[row][k] == board[row][k + 1] && board[row][k + 1] == board[row][k + 2])
        {
            if (board[row][k] == color)
            {
                return false;
            }
            else
            {
                return true;
            }
        }
    }

    return true;
//    return false;
}

bool col_has_no_threes_of_color(const int board[MAX_SIZE][MAX_SIZE],
                                int size,
                                int col,
                                int color)
{
    for (int k = 0; (k + 2) < MAX_SIZE; k++)
    {
        if (board[k][col] == board[k + 1][col] && board[k + 1][col] == board[k + 2][col])
        {
            if (board[k][col] == color)
            {
                return false;
            }
            else
            {
                return true;
            }
        }
    }

    return true;
    //return false;
}

<<<<<<< HEAD
bool board_has_no_threes(const int board[MAX_SIZE][MAX_SIZE], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (row_has_no_threes_of_color(board[MAX_SIZE][MAX_SIZE], size, i, 1) && col_has_no_threes_of_color(board[MAX_SIZE][MAX_SIZE], size, i, 1))
        {
            if (row_has_no_threes_of_color(board[MAX_SIZE][MAX_SIZE], size, i, 2) && col_has_no_threes_of_color(board[MAX_SIZE][MAX_SIZE], size, i, 2))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }

    }
    //return false;
=======
bool board_has_no_threes(const int board[MAX_SIZE][MAX_SIZE], int size) {
    // your code here
    return false;
>>>>>>> (row/column)_has_no_threes_of_color()
}

bool rows_are_different(const int board[MAX_SIZE][MAX_SIZE],
                        int size,
                        int row1,
                        int row2) {
    // your code here
    return false;
}

bool cols_are_different(const int board[MAX_SIZE][MAX_SIZE],
                        int size,
                        int col1,
                        int col2) {
    // your code here
    return false;
}

bool board_has_no_duplicates(const int board[MAX_SIZE][MAX_SIZE], int size) {
    // your code here
    return false;
}


///////////////////////////////////////
// SOLVING FUNCTIONS //////////////////
///////////////////////////////////////

void solve_three_in_a_row(int board[MAX_SIZE][MAX_SIZE],
                          int size,
                          int row,
                          bool announce) {
    // your code here
}

void solve_three_in_a_column(int board[MAX_SIZE][MAX_SIZE],
                             int size,
                             int col,
                             bool announce) {
    // your code here
}


void solve_balance_row(int board[MAX_SIZE][MAX_SIZE],
                       int size,
                       int row,
                       bool announce) {
    // your code here
}

void solve_balance_column(int board[MAX_SIZE][MAX_SIZE],
                          int size,
                          int col,
                          bool announce) {
    // your code here
}


///////////////////////////////////////
// GAMEPLAY FUNCTIONS /////////////////
///////////////////////////////////////

bool board_is_solved(const int board[MAX_SIZE][MAX_SIZE], int size) {
    // your code here
    return false;
}

bool check_valid_input(int size, int row_input, char col_input,
                       char color_char, int &row, int &col) {
    // your code here
    return false;
}

bool check_valid_move(const int original_board[MAX_SIZE][MAX_SIZE],
                      const int current_board[MAX_SIZE][MAX_SIZE],
                      int size, int row, int col, int color) {
    // your code here
    return false;
}


///////////////////////////////////////
// S'MORE FUNCTIONS ///////////////////
///////////////////////////////////////


void solve_lookahead_row(int board[MAX_SIZE][MAX_SIZE],
                         int size,
                         int row,
                         bool announce) {
    // your code here
}

void solve_lookahead_column(int board[MAX_SIZE][MAX_SIZE],
                            int size,
                            int col,
                            bool announce) {
    // your code here
}
