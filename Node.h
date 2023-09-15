#pragma once
#include <vector>

class Node
{
public:
	Node();
	void setWeights(std::vector<double> weights);
	std::vector<double> getWeights();
	void setBias(double bias);
	double getBias();

private:
	double bias;
	std::vector<double> weights;
};

