/**************************************************************************************************
 * Author: Thomas Baumann <teebaum@ymail.com
 * Date: 17.04.2016
 * License: See LICENSE file.
**************************************************************************************************/

import QtQuick 2.0
import Sailfish.Silica 1.0

Page {
    id: homePage

    SilicaWebView {
        id: webview
        url: settings.homePage
        anchors.fill: parent
    }
}
