#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QStringList>

QT_BEGIN_NAMESPACE
class TabWidget;
class MapWidget;
class DeliveryWidget;
class TruckWidget;
class InventoryWidget;
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);

private:
    TabWidget *tabWidget;
    MapWidget *mapWidget;
    DeliveryWidget *deliveryWidget;
    TruckWidget *truckWidget;
    InventoryWidget *inventoryWidget;

protected:
    void resizeEvent(QResizeEvent *);

private slots:
    void enterSelectMode();
    void enterCargoMode();
    void transferData(QVector<long> &points, QVector<long> &path, QStringList &nameList);
    void sendTitles(QStringList &titles);
};

#endif // MAINWINDOW_H
