#pragma once

#include <iostream>
#include <thread>
#include <chrono>
using namespace std;


class GUI
{
private:
	// Function to print the given string slowly with a specified delay
	void printSlowly(const std::string& str, int delay);
public:
	GUI();
	void start();
	void restult();
   
};