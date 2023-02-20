#include "house_builder.h"

void main()
{
    srand(time(NULL));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Director dir;
    My_house home1;
    Your_house home2;
    House* ho1 = dir.creat_house(home1);
    House* ho2 = dir.creat_house(home2);

    cout << "My house" << endl;
    cout << "--------------------------------------" << endl;
    ho1->info();
    cout << "--------------------------------------" << endl;
    cout << "Your house" << endl;
    cout << "--------------------------------------" << endl;
    ho2->info();
}