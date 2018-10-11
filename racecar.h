#ifndef RACECAR_H
#define RACECAR_H

#include <QObject>
#include <QDebug>
#include "car.h"

class racecar : public car
{
    Q_OBJECT
public:
    explicit racecar(QObject *parent = nullptr);

    bool supercharger = true;
    void gofast();

signals:

public slots:
};

#endif // RACECAR_H
