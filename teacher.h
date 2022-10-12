#ifndef TEACHER_H
#define TEACHER_H

#include <QObject>
#include <QString>

class Teacher : public QObject
{
    Q_OBJECT

public:
    explicit Teacher(QObject *parent = nullptr);

    void goToTheClass();


public slots:

    void noticeStudent(QString name);

signals:

    void teacherIncome();



};


#endif // TEACHER_H
