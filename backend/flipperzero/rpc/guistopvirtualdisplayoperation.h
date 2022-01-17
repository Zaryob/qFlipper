#pragma once

#include "abstractprotobufoperation.h"

namespace Flipper {
namespace Zero {

class GuiStopVirtualDisplayOperation : public AbstractProtobufOperation
{
    Q_OBJECT

public:
    GuiStopVirtualDisplayOperation(QSerialPort *serialPort, QObject *parent = nullptr);
    const QString description() const override;

private slots:
    void onSerialPortReadyRead() override;

private:
    bool begin() override;
};

}
}

