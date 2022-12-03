#ifndef ADDMENU_H
#define ADDMENU_H

#include <QDialog>
#include <QTime>
#include <QLabel>

namespace Ui {
class AddMenu;
}

class AddMenu : public QDialog
{
    Q_OBJECT

public:
    explicit AddMenu(QWidget *parent = nullptr);
    ~AddMenu();

    // Гетери
    QTime getEndTime();
    QLabel* getTimerName();
    QString getProgramPath();
    QString getDocumentPath();
    bool isAlarm();

private slots:
    // Додавання таймера
    void addTimer();

    //Додавання будильника
    void addAlarm();

    // Показати ти сховати поля введення
    void showHideExecuteProgramPath(int check);
    void showHideOpenDocumentPath(int check);

private:
    // Інтерфейс
    Ui::AddMenu *ui;

    // Час завершення таймера
    QTime endTime;

    // Назва таймера
    QLabel* timerName;

    // Чи це будильник
    bool alarm;
};

#endif // ADDMENU_H
