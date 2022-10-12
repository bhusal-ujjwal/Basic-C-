#ifndef STUDENT_H
#define STUDENT_H

#include <QObject>
#include <QString>

class Student : public QObject
{
    Q_OBJECT

public:
    explicit Student(const QString &name, QObject *parent = nullptr);

    void raiseMyHand();


signals:

    void riseHand(QString name);

public slots:

    void welcomeTeacher();


protected:
    QString m_name;



};
//you need to have semicolon when defining a class in header but we dont need it in main cpp functions


#endif // STUDENT_H
