#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QTranslator;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionChinese_Simplify_triggered();

    void on_actionChinese_Traditional_triggered();

    void on_actionEnglish_triggered();

    void on_actionJapanese_triggered();

    void on_actionFrench_triggered();

private:
    Ui::MainWindow *ui;
    QTranslator *translator;
};

#endif // MAINWINDOW_H
