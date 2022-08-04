#include <pch.h>
#include <fontgl/fontgl.h>

void fgl::FontGL::OnProcessAttach()
{
	std::cout << "OnProcessAttach\n";
}

void fgl::FontGL::OnThreadAttach()
{
	std::cout << "OnThreadAttach\n";
}

void fgl::FontGL::OnThreadDetach()
{
	std::cout << "OnThreadDetach\n";
}

void fgl::FontGL::OnProcessDetach()
{
	std::cout << "OnProcessDetach\n";
}

double fgl::sq(double val)
{
	return val* val;
}
