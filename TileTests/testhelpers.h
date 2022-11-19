#pragma once
#include "../Entity.h"
#include "../vector.h"
#include <chrono>


using namespace std::chrono;


const double epsilon = 0.0001;

void EXPECT_VEQ(Vector a, Vector b);
