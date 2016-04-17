/**************************************************************************************************
 * Author: Thomas Baumann <teebaum@ymail.com
 * Date: 17.04.2016
 * License: See LICENSE file.
**************************************************************************************************/

import QtQuick 2.0
import Sailfish.Silica 1.0

CoverBackground {
    Image {
        id: flatasticImage
        source: "qrc:///images/icon-flatastic.png"
        anchors.centerIn: parent
        width: parent.width - (2 * Theme.paddingLarge)
        fillMode: Image.PreserveAspectFit
    }
}
