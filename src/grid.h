#pragma once
//Include once during compilation, avoids duplicate definitions
#include <vector>
#include <raylib.h>


class Grid{
    public:
        //declare functions
        Grid();
        void Draw();
        void Initialise();
        void Print();
        bool IsCellOutside(int row, int column);
        bool IsCellEmpty(int row, int column);
        int ClearFullRows();

        int grid[20][10];

    private:
        bool IsRowFull(int row);
        void ClearRow(int row);
        void MoveRowDown(int row, int numRows);
        int numRows;
        int numCols;
        int cellSize;
        std::vector<Color> colors;
};
