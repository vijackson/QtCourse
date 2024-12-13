#ifndef MASTERVIEW_H
#define MASTERVIEW_H

#include <QWidget>
#include "loginview.h"
#include "doctorview.h"
#include "departmentview.h"
#include "patienteditview.h"
#include "patientview.h"
#include "welcomeview.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MasterView;
}
QT_END_NAMESPACE

class MasterView : public QWidget
{
    Q_OBJECT

public:
    MasterView(QWidget *parent = nullptr);
    ~MasterView();

public slots:
    void goLoginView();
    void goWelcomeView();
    void goDepartmentView();
    void goPatientEditView(int rowNo);
    void goPatientView();
    void goPreviousView();
    void goDoctorView();

private slots:
    void on_btBack_clicked();

    void on_stackedWidget_currentChanged(int arg1);

    void on_btLogout_clicked();

private:
    void pushWidgetToStackView(QWidget *widget);

    Ui::MasterView *ui;

    LoginView *loginView;
    DoctorView *doctorView;
    DepartmentView *departmentView;
    PatientEditView *patientEditView;
    PatientView *patientView;
    WelcomeView *welcomeView;

};
#endif // MASTERVIEW_H
