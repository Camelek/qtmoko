/*
 * This file was generated by qfsodbusxml2cpp version 0.7
 * Command line was: qfsodbusxml2cpp -p qfsolocation -c QFsoLocation specs/xml/org.freesmartphone.Location.xml
 *
 * qfsodbusxml2cpp is Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef QFSOLOCATION_H
#define QFSOLOCATION_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>
#include <qfsodbusabstractinterface.h>

#if defined(QFSO_LIBRARY)
    #define QFSO_EXPORT Q_DECL_EXPORT
#else
    #define QFSO_EXPORT Q_DECL_IMPORT
#endif

/*
 * Proxy class for interface org.freesmartphone.Location
 */
class QFSO_EXPORT QFsoLocation: public QFsoDbusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freesmartphone.Location"; }

public:
    QFsoLocation(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~QFsoLocation();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<QVariantMap> GetLocation()
    {
        QList<QVariant> argumentList;
        return fsoAsyncCall(QLatin1String("GetLocation"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void LocationUpdate(const QVariantMap &location);
};

namespace org {
  namespace freesmartphone {
    typedef ::QFsoLocation Location;
  }
}
#endif