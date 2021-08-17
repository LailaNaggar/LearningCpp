#include <iostream>

class ball
{
    private:
    std::string m_color;
    int m_radius;

    public:
        ball()
        {
            m_color="black";
            m_radius=10;
        }

        ball(std::string color)
        {
            m_color=color;
            m_radius=10;
        }

        ball(int radius)
        {
            m_color="black";
            m_radius=radius;
        }

        ball(std::string color, int radius)
        {
            m_color=color;
            m_radius=radius;
        }

        void print()
        {
            std::cout<<"color of the ball: "<<m_color<<" the radius is: "<<m_radius<<std::endl;
        }

};
 
 int main()
{
	ball def{};
	def.print();
 
	ball blue{ "blue" };
	blue.print();
	
	ball twenty{ 20};
	twenty.print();
	
	ball blueTwenty{ "blue", 20};
	blueTwenty.print();
 
	return 0;
}
