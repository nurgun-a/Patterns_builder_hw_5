#include "house_builder.h"

void Foundation::info()
{
	cout << "Фундамент";
}

void Wall::info()
{
	cout << "Стена";
}

void Door::info()
{
	cout << "Дверь";
}

void Window::info()
{
	cout << "Окно";
}

void Roof::info()
{
	cout << "Крыша";
}

void House::info()
{
	for (int i = 0; i < vf.size(); i++)	vf[i].info();
	cout << endl;
	for (int i = 0; i < vw.size(); i++) { vw[i].info(); cout << "\t"; }
	cout << endl;
	for (int i = 0; i < vd.size(); i++) { vd[i].info(); cout << "\t"; }
	cout << endl;
	for (int i = 0; i < ww.size(); i++) { ww[i].info(); cout << "\t"; }
	cout << endl;
	for (int i = 0; i < vr.size(); i++)	vr[i].info();
	cout << endl;
}

void My_house::creat_house() { h = new House; }

void My_house::build_foundation() { h->vf.push_back(Foundation()); }

void My_house::build_wall() { for (int i = 0; i < 4; i++)	h->vw.push_back(Wall()); }

void My_house::build_door() { for (int i = 0; i < 2; i++)	h->vd.push_back(Door()); }

void My_house::build_window() { for (int i = 0; i < 4; i++)	h->ww.push_back(Window()); }

void My_house::build_roof() { h->vr.push_back(Roof()); }

void Your_house::creat_house() { h = new House; }

void Your_house::build_foundation() { h->vf.push_back(Foundation()); }

void Your_house::build_wall() { for (int i = 0; i < 6; i++)	h->vw.push_back(Wall()); }

void Your_house::build_door() { for (int i = 0; i < 4; i++)	h->vd.push_back(Door()); }

void Your_house::build_window() { for (int i = 0; i < 2; i++)	h->ww.push_back(Window()); }

void Your_house::build_roof() { h->vr.push_back(Roof()); }

