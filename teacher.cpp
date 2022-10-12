#include "teacher.h"
#include <iostream>


Teacher :: Teacher(QObject *parent)
    : QObject{parent}
{

}


void Teacher::goToTheClass()
{
    emit teacherIncome();
}

void Teacher::noticeStudent(QString name)
{
    std::cout<<"Teacher noticed a student with name: "<<name.toStdString() << std::endl;
}
