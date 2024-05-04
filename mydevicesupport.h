#ifndef MYDEVICESUPPORT_H
#define MYDEVICESUPPORT_H
#include <QtPlugin>

#include "MyDeviceSupport_global.h"
#define IID_FACE "com.tcs.asml.device_1/0"

class MYDEVICESUPPORT_EXPORT MyDeviceSupport
{
public:
    MyDeviceSupport(){};
    ~MyDeviceSupport(){};
    virtual bool open()=0;
    virtual bool readData()=0;
    virtual bool close()=0;

};

Q_DECLARE_INTERFACE(MyDeviceSupport,IID_FACE)
#endif // MYDEVICESUPPORT_H
