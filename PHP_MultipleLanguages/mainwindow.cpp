#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTranslator>
#include <QProcess>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
        QTranslator *translator=new QTranslator;
        translator->load("../PHP_MultipleLanguages/simplify.qm");//设定初始语言问Chinese_Simplify
        qApp->installTranslator(translator);

        ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionChinese_Simplify_triggered()
{
    QTranslator *translator=new QTranslator;
    translator->load("../PHP_MultipleLanguages/simplify.qm");
    qApp->installTranslator(translator);
    ui->retranslateUi(this);
}

void MainWindow::on_actionChinese_Traditional_triggered()
{
    QTranslator *translator=new QTranslator;
    translator->load("../PHP_MultipleLanguages/traditional.qm");
    qApp->installTranslator(translator);
    ui->retranslateUi(this);
}

void MainWindow::on_actionEnglish_triggered()
{
    QTranslator *translator=new QTranslator;
    translator->load("../PHP_MultipleLanguages/english.qm");
    qApp->installTranslator(translator);
    ui->retranslateUi(this);
}

void MainWindow::on_actionJapanese_triggered()
{
    QTranslator *translator=new QTranslator;
    translator->load("../PHP_MultipleLanguages/japanese.qm");
    qApp->installTranslator(translator);
    ui->retranslateUi(this);
}

void MainWindow::on_actionFrench_triggered()
{
    QTranslator *translator=new QTranslator;
    translator->load("../PHP_MultipleLanguages/french.qm");
    qApp->installTranslator(translator);
    ui->retranslateUi(this);
}
