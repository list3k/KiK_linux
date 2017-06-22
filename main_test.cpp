#include <gtest/gtest.h>
#include "MyGame.h"


TEST(handleClick, clicked_top_left_0_0){

	MyGame g;
	std::vector<std::vector<int>> gameBoard{
                   { { 0,0,0 },
                   {   0,0,0 },
                   {   0,0,0 } }
                                          };

	int x=50;
	int y=130;
	int side =1;

	EXPECT_TRUE(g.handleClick(gameBoard, side, x, y));

}

TEST(handleClick, clicked_middle_1_1){

        MyGame g;
        std::vector<std::vector<int>> gameBoard{
                   { { 0,0,0 },
                   {   0,0,0 },
                   {   0,0,0 } }
                                          };

        int x=300;
        int y=300;
        int side =1;

        EXPECT_TRUE(g.handleClick(gameBoard, side, x, y));

}

TEST(handleClick, not_clicked){

	MyGame g;
	std::vector<std::vector<int>> gameBoard{
                   { { 0,0,0 },
                   {   0,0,0 },
                   {   0,0,0 } }
                                          };

	//[0][0], also x=0 and y=0 is a click! So x and y must be negative.
	//Game board has values from 0 to 600.
	int x=-1;
	int y=-1;
	int side =1;

	EXPECT_GT(0, (x + y));

}

TEST(isWinner, a_WIN){

	MyGame g;
        std::vector<std::vector<int>> gameBoard{
                   { { 1,1,1 },
                   {   2,0,0 },
                   {   2,0,0 } }
                                          };

	int side =1;
	EXPECT_TRUE(g.isWinner(gameBoard, side));

}

TEST(isWinner, not_a_WIN){

        MyGame g;
        std::vector<std::vector<int>> gameBoard{
                   { { 1,1,1 },
                   {   2,0,0 },
                   {   2,0,0 } }
                                          };

        int side =2;
        EXPECT_FALSE(g.isWinner(gameBoard, side));

}

TEST(isWinner, a_TIE){

        MyGame g;
        std::vector<std::vector<int>> gameBoard{
                   { { 1,1,2 },
                   {   2,1,1 },
                   {   1,2,2 } }
                                          };

        int side_a =2;
        EXPECT_FALSE(g.isWinner(gameBoard, side_a));
	int side_b =1;
	EXPECT_FALSE(g.isWinner(gameBoard, side_b));

}



int main(int argc, char **argv) {

	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
