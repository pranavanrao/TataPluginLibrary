#ifndef TATADEVICE_H
#define TATADEVICE_H

#include <QObject>
#include <mydevicesupport.h>

class TATADevice:public QObject,public MyDeviceSupport
{
    Q_OBJECT
    Q_INTERFACES(MyDeviceSupport)
    Q_PLUGIN_METADATA(IID IID_FACE)
public:
    explicit TATADevice();
    bool open()override;
    bool readData()override;
    bool close() override;

};

#endif // TATADEVICE_H
