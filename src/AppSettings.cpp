/**************************************************************************************************
 * Author: Thomas Baumann <teebaum@ymail.com
 * Date: 17.04.2016
 * License: See LICENSE file.
**************************************************************************************************/

#include "AppSettings.h"

static const QString HomePageValueName("homepage");
static const QUrl HomePageDefaultValue("http://flatastic-app.com/webapp/");

AppSettings::AppSettings(QObject *parent) : QObject(parent)
{
}

QUrl AppSettings::homePage() const
{
    return m_settings.value(HomePageValueName, HomePageDefaultValue).toUrl();
}

void AppSettings::setHomePage(const QUrl &homePage)
{
    if (homePage == this->homePage()) {
        return;
    }

    m_settings.setValue(HomePageValueName, homePage);
    emit homePageChanged();
}

