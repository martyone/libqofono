/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -c OfonoMessageManager -p ofonomessagemanager -N ofono_message_manager.xml
 *
 * qdbusxml2cpp is Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef OFONOMESSAGEMANAGER_H_1358059980
#define OFONOMESSAGEMANAGER_H_1358059980

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

#include "dbustypes.h"

/*
 * Proxy class for interface org.ofono.MessageManager
 */
class OfonoMessageManager: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.ofono.MessageManager"; }

public:
    OfonoMessageManager(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~OfonoMessageManager();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<ObjectPathPropertiesList> GetMessages()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetMessages"), argumentList);
    }

    inline QDBusPendingReply<QVariantMap> GetProperties()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetProperties"), argumentList);
    }

    inline QDBusPendingReply<QDBusObjectPath> SendMessage(const QString &in0, const QString &in1)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0) << QVariant::fromValue(in1);
        return asyncCallWithArgumentList(QLatin1String("SendMessage"), argumentList);
    }

    inline QDBusPendingReply<> SetProperty(const QString &in0, const QDBusVariant &in1)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0) << QVariant::fromValue(in1);
        return asyncCallWithArgumentList(QLatin1String("SetProperty"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void ImmediateMessage(const QString &in0, const QVariantMap &in1);
    void IncomingMessage(const QString &in0, const QVariantMap &in1);
    void MessageAdded(const QDBusObjectPath &in0, const QVariantMap &in1);
    void MessageRemoved(const QDBusObjectPath &in0);
    void PropertyChanged(const QString &in0, const QDBusVariant &in1);
};

#endif
