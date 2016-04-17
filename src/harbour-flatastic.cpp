/**************************************************************************************************
 * Author: Thomas Baumann <teebaum@ymail.com
 * Date: 17.04.2016
 * License: See LICENSE file.
**************************************************************************************************/

#ifdef QT_QML_DEBUG
#include <QtQuick>
#endif

#include <QQmlContext>
#include <QQuickView>
#include <QGuiApplication>

#include <sailfishapp.h>
#include <src/AppSettings.h>

int main(int argc, char *argv[])
{
    QGuiApplication *app = SailfishApp::application(argc, argv);
    QQuickView *quickView = SailfishApp::createView();
    QQmlContext *rootContext = quickView->rootContext();

    AppSettings settings;
    rootContext->setContextProperty("settings", &settings);

    quickView->setSource(SailfishApp::pathTo("qml/harbour-flatastic.qml"));
    quickView->showFullScreen();
    return app->exec();
}
