#include <gtest/gtest.h>
#include "MyGame.h"


TEST(handleClick, clicked_0_0){

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

TEST(handleClick, clicked_1_1){

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

TEST(isWinner, its_a_WIN){

	MyGame g;
        std::vector<std::vector<int>> gameBoard{
                   { { 1,1,1 },
                   {   2,0,0 },
                   {   2,0,0 } }
                                          };

	int side =1;
	EXPECT_TRUE(g.isWinner(gameBoard, side));

}

TEST(isWinner, its_not_a_WIN){

        MyGame g;
        std::vector<std::vector<int>> gameBoard{
                   { { 1,1,1 },
                   {   2,0,0 },
                   {   2,0,0 } }
                                          };

        int side =2;
        EXPECT_FALSE(g.isWinner(gameBoard, side));

}




int main(int argc, char **argv) {

	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
