/*
 * This file was generated by qofonodbusxml2cpp version 0.7
 * Command line was: qofonodbusxml2cpp -p ofonocellbroadcast ofono.xml org.ofono.CellBroadcast
 *
 * qofonodbusxml2cpp is Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef OFONOCELLBROADCAST_H
#define OFONOCELLBROADCAST_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>
#include <qofonodbusabstractinterface.h>

#if defined(QOFONO_LIBRARY)
    #define QOFONO_EXPORT Q_DECL_EXPORT
#else
    #define QOFONO_EXPORT Q_DECL_IMPORT
#endif

/*
 * Proxy class for interface org.ofono.CellBroadcast
 */
class QOFONO_EXPORT OrgOfonoCellBroadcastInterface: public QOFonoDbusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.ofono.CellBroadcast"; }

public:
    OrgOfonoCellBroadcastInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~OrgOfonoCellBroadcastInterface();

public Q_SLOTS: // METHODS
    inline QOFonoDBusPendingReply<QVariantMap> GetProperties()
    {
        QList<QVariant> argumentList;
        return ofonoAsyncCall(QLatin1String("GetProperties"), argumentList);
    }

    inline QOFonoDBusPendingReply<> SetProperty(const QString &in0, const QDBusVariant &in1)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(in0) << qVariantFromValue(in1);
        return ofonoAsyncCall(QLatin1String("SetProperty"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void EmergencyBroadcast(const QString &in0, const QVariantMap &in1);
    void IncomingBroadcast(const QString &in0, ushort in1);
    void PropertyChanged(const QString &in0, const QDBusVariant &in1);
};

namespace org {
  namespace ofono {
    typedef ::OrgOfonoCellBroadcastInterface CellBroadcast;
  }
}
#endif
