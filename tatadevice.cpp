#include "TATADevice.h"
#include <QDebug>

TATADevice::TATADevice() {
    qDebug()<<Q_FUNC_INFO<<"enjoy madi";

}

bool TATADevice::open()
{
    qDebug()<<Q_FUNC_INFO<<"open the tata device";
    return true;
}

bool TATADevice::readData()
{
    qDebug()<<Q_FUNC_INFO<<"read the tata device";

    return true;
}

bool TATADevice::close()
{
    qDebug()<<Q_FUNC_INFO<<"close the tata device";

    return true;
}
