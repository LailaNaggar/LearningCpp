#pragma once
#include <string>

class ball
{
    private:
    std::string m_color;
    int m_radius;

    public:
        ball();

        ball(std::string color);

        ball(double radius);

        ball(std::string color, double radius);

        void print();
};
