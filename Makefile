

tetris.o : src/main.cpp src/grid.cpp src/colors.cpp src/block.cpp src/blocks.cpp src/position.cpp src/game.cpp 
	clang++ src/main.cpp src/grid.cpp src/colors.cpp src/block.cpp src/blocks.cpp src/position.cpp src/game.cpp -o tetris.o -std=c++11 -lraylib
