#include "student.h"
#include <iostream>

Student::Student(const QString &name, QObject *parent)
    :QObject{parent},m_name(name)
{

}

void Student::raiseMyHand()
{
    emit riseHand(m_name);
}

void Student::welcomeTeacher()
{
    std::cout<<" Hello Mr/Ms. Teacher " << std::endl;
}
