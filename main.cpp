#include <QCoreApplication>
#include <student.h>
#include <teacher.h>
#include <iostream>
#include <QTimer>

void onTime(){
    std::cout<<"Tick..."<<std::endl;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Teacher * teacher = new Teacher();
    Student s1("Carlus");
    Student s2("David");
    Student s3("John");


    QObject::connect(teacher, &Teacher::teacherIncome,&s1, &Student::welcomeTeacher);
    QObject::connect(teacher, &Teacher::teacherIncome,&s2, &Student::welcomeTeacher);
    QObject::connect(teacher, &Teacher::teacherIncome,&s3, &Student::welcomeTeacher);

    QObject::connect(&s1, &Student::riseHand, teacher, &Teacher::noticeStudent);
    QObject::connect(&s2, &Student::riseHand, teacher, &Teacher::noticeStudent);
    QObject::connect(&s3, &Student::riseHand, teacher, &Teacher::noticeStudent);

    teacher->goToTheClass();
    s2.raiseMyHand();

    QTimer time1;
    QObject::connect(&time1, &QTimer::timeout, &onTime);
    time1.start(1000);

    QTimer time2;
    QObject::connect(&time2, &QTimer::timeout,[](){
        std::cout<<"Tack..."<<std::endl;

    });

    time2.start(500);




    return a.exec();
}
