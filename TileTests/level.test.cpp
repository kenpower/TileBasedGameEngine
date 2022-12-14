#include "pch.h"

#include "testhelpers.h"

class Level {
public:
	Level(const char*, int, int) {}
	

};


TEST(Level, CanUpdateAll) {

	//Level lvl(
	//	"A....."
	//	"B....."
	//	".....C", 6, 3);

	//lvl.getByName("A0-0")->vel = Vector{ 0.2, 0.0 };
	//lvl.getByName("B0-1")->vel = Vector{ 0.0, 0.3 };
	//lvl.getByName("C5-2")->vel = Vector{ -0.1, -0.2 };

	//for (int i = 0; i < 100; i++)
	//	lvl.update(100ms);

	//EXPECT_VEQ(lvl.getByName("A0-0")->rect, CollisionRect{ 2, 0, 1, 1 });
	//EXPECT_VEQ(lvl.getByName("B0-1")->rect, CollisionRect{ 0, 4, 1, 1 });
	//EXPECT_VEQ(lvl.getByName("C5-2")->rect, CollisionRect{ 4, 0, 1, 1 });


}

TEST(Level, ResolveCollision) {

	//Level lvl(
	//	"A....."
	//	"B....."
	//	"......", 6, 3);

	//lvl.getByName("A0-0")->vel = Vector{ 0.0, 0.0 };
	//lvl.getByName("B0-1")->vel = Vector{ 0.0, -0.5 };

	//lvl.update(500ms);

	//EXPECT_VEQ(lvl.getByName("A0-0")->rect, CollisionRect{ 0, 0, 1, 1 });
	//EXPECT_VEQ(lvl.getByName("B0-1")->rect, CollisionRect{ 0, 1, 1, 1 });
}

TEST(Level, DontGoThroughCorner) {

	//Entity e(CollisionRect(1, 0.9, 1, 1), &mockSprite);
	//e.vel = { 0,0 };

	//Level lvl(
	//	"..|..."
	//	"..|..."
	//	"--+..."
	//	"......", 6, 4);

	//lvl.addEntity(&e, "player");


	//double speed = 15.0;
	//e.vel.x = speed;

	//e.vel.y = speed;

	//for(int i=0;i<10;i++)
	//	lvl.update(10ms);

	//EXPECT_NEAR(e.rect.x, 1, epsilon);
	//EXPECT_NEAR(e.rect.y, 1, epsilon);



}