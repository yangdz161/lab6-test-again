#include <gtest/gtest.h>
#include "../lib/Triangle.h"
using shapes::Triangle;


TEST(TriangleTests, testPerimeter) {
    Triangle *aTriangle = new Triangle(3,3,3);
    EXPECT_EQ (aTriangle->getPerimeter(),9);
}

// 1. 至少创建三个由于错误而不应该通过的测试
TEST(TriangleTests, getPerimeter) {  
  Triangle t(5, 4, 3);  
  EXPECT_EQ(t.getPerimeter(), 12); // 正确的周长应为12，因为3 + 4 + 5 = 12  
}  

TEST(TriangleTests, getArea) {  
  Triangle t(5, 4, 3);  
  EXPECT_DOUBLE_EQ(t.getArea(), 6.0); // 正确的面积是6.0 
}  

TEST(TriangleTests, getKindWithEquilateral) {  
  Triangle t(3, 3, 3); 
  EXPECT_EQ(t.getKind(), Triangle::Kind::EQUILATERAL); // 正确类型应为EQUILATERAL
}
    
// // 2. 使用EXPECT_DEATH创建一个附加测试，要验证如果提供了无效输入，代码将终止
// TEST(TriangleTests, getAreaWithInvalidInput) {  
//   Triangle t(4, 5, 1); 
//   EXPECT_DEATH(t.getArea(), "First side is not the longest"); // 当输入无效时，应触发断言并终止程序。  
// }  

// 3. 至少再创建四个属于TriangleTests的测试，这些测试应该通过（其中一个可以是EXPECT_NOT_THROW, 以验证三个整数不会引发异常）。
TEST(TriangleTests, getKindWithScalene) {  
  Triangle t(5, 4, 3); // 这是一个不等边三角形。  
  EXPECT_EQ(t.getKind(), Triangle::Kind::SCALENE); 
}  

TEST(TriangleTests, getKindWithIsosceles) {  
  Triangle t(5, 5, 4); // 这是一个等腰三角形。  
  EXPECT_EQ(t.getKind(), Triangle::Kind::ISOSCELES); 
}
  
TEST(TriangleTests, isIsoscelesWithIsoceles) {  
  Triangle t(5, 5, 4);  
  EXPECT_TRUE(t.isIsosceles()); 
}

TEST(TriangleTests, isEquilateralWithEquilateral) {  
  Triangle t(6, 6, 6);  
  EXPECT_TRUE(t.isEquilateral()); 
}

TEST(TriangleTests, testPerimeterNoThrow) {
    Triangle t(4, 3, 2);
    EXPECT_NO_THROW (t.getPerimeter());
}