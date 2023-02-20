#include <iomanip>
#include <Windows.h>
#include <iostream>
#include <vector>

using namespace std;

class Foundation
{
public:
	void info();
};
class Wall
{
public:
	void info();
};
class Door
{
public:
	void info();
};
class Window
{
public:
	void info();
};
class Roof
{
public:
	void info();
};
class House
{
public:
	vector <Foundation> vf;
	vector <Wall> vw;
	vector <Door> vd;
	vector <Window> ww;
	vector <Roof> vr;
	void info();
};
class house_builder
{
protected:
	House* h;
public:
	house_builder():h(0){}
	virtual ~house_builder(){}
	virtual void creat_house(){}
	virtual void build_foundation(){}
	virtual void build_wall(){}
	virtual void build_door(){}
	virtual void build_window(){}
	virtual void build_roof(){}
	virtual House* getHouse() { return h; }
};

class My_house : public house_builder
{
public:
	void creat_house();
	void build_foundation();
	void build_wall();
	void build_door();
	void build_window();
	void build_roof();
};

class Your_house : public house_builder
{
public:
	void creat_house();
	void build_foundation();
	void build_wall();
	void build_door();
	void build_window();
	void build_roof();
};

class Director
{
public:
	House* creat_house(house_builder& builder)
	{
		builder.creat_house();
		builder.build_foundation();
		builder.build_wall();
		builder.build_door();
		builder.build_window();
		builder.build_roof();
		return (builder.getHouse());
	}
};