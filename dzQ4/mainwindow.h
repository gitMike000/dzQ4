#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTranslator>
#include <QFileDialog>

QT_BEGIN_NAMESPACE
    namespace Ui { class MainWindow; }
QT_END_NAMESPACE

    class MainWindow : public QMainWindow
{
    Q_OBJECT

      public:
          MainWindow(QWidget *parent = nullptr);
         ~MainWindow();

      private slots:
          void on_saveButton_clicked();
          void on_openButton_clicked();
          void on_helpButton_clicked();
          void on_checkBox_clicked(bool checked);
          void changeEvent(QEvent *event);

          void keyReleaseEvent(QKeyEvent *event) override;

          void on_newButton_clicked();

          void on_quitButton_clicked();

          void on_newEdit_textChanged(const QString &arg1);

          void on_openEdit_textChanged(const QString &arg1);

          void on_saveEdit_textChanged(const QString &arg1);

          void on_quitEdit_textChanged(const QString &arg1);

      private:
          Ui::MainWindow *ui;
          QString Path = "./";
          QTranslator translater, qtranslator;
          QString fileName = "";
};
#endif // MAINWINDOW_H
