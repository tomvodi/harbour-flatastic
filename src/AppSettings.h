/**************************************************************************************************
 * Author: Thomas Baumann <teebaum@ymail.com
 * Date: 17.04.2016
 * License: See LICENSE file.
**************************************************************************************************/

#ifndef APPSETTINGS_H
#define APPSETTINGS_H

#include <QObject>
#include <QUrl>
#include <QSettings>

class AppSettings : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QUrl homePage READ homePage WRITE setHomePage NOTIFY homePageChanged)

public:
    explicit AppSettings(QObject *parent = 0);

    QUrl homePage() const;
    void setHomePage(const QUrl &homePage);

signals:
    void homePageChanged();

private:
    QUrl m_homePage;
    QSettings m_settings;
};

#endif // APPSETTINGS_H
