// MyItem.qml
import QtQuick 2.0
Item{


     width: 100; height: 100

    Rectangle{
        id:chi
        objectName: "myRect"
        color:"red"
        signal qmlSignal(var anObject)

         width: 100; height: 100
        MouseArea {
            anchors.fill: parent
            onClicked: chi.qmlSignal(chi)
        }
    }
}
