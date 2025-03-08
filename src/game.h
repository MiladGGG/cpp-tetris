#pragma once
#include "grid.h"
#include "blocks.cpp"

class Game{

    public:
        Game();
        Block GetRandomBlock();
        Grid grid;
        std::vector<Block> GetAllBlocks();
        void Draw();
        void HandleInput();
        void MoveBlockLeft();
        void MoveBlockRight();
        void MoveBlockUp();  
        void MoveBlockDown();
        bool gameOver;
        void Reset();
        int score;


    private:
        bool IsBlockOutside();
        void RotateBlock();
        void LockBlock();
        bool BlockFits();
        void UpdateScore(int linesCleared, int moveDownPoints);
        std::vector<Block> blocks;
        Block currentBlock;
        Block nextBlock;
};
