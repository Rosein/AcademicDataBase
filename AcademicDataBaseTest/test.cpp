#include "pch.h"
#include "../AcademicDataBase/Person.h"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(PeselTest, isValidTest)
{
	EXPECT_TRUE(Pesel("44051401359").isValid());
	EXPECT_FALSE(Pesel("44051401358").isValid());
}