import QtQuick 2.12
import QtQuick.Window 2.12
import Qt.labs.qmlmodels 1.0
//кароч, тебе подсказда на будущие, если будут проблемы с CMake "такое бывает при добаление новых файлов" то зайди в "CMakeLists.txt"
//и добавь в ручную название файлов, хз но скорее всего коментарии я там не оставлю, по месту разберешься, но у меня отдельное место, у тебя отдельно

//что ещё могу сказать, для вызова каких либо функций я написал для тебя класс "appEngine" там пока что нихуя нету.
//но суть в том что ты можешь обращаться к ниму по имени "logics", чуть позже напишу методов для вызова.
//для понимания можешь глянуть этот видос https://youtu.be/yDbir1zC0wY?t=1058 там в конце то как мы будем взаидействовать.
//в крайнем случае можем завтра созвониться (пишу я это 03.03)
Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    TableView {
        anchors.fill: parent
        columnSpacing: 1
        rowSpacing: 1
        clip: true

        model: TableModel {
            TableModelColumn { display: "name" }
            TableModelColumn { display: "color" }

            rows: [
                {
                    "name": "cat",
                    "color": "black"
                },
                {
                    "name": "dog",
                    "color": "brown"
                },
                {
                    "name": "bird",
                    "color": "white"
                }
            ]
        }

        delegate: Rectangle {
            implicitWidth: 100
            implicitHeight: 50
            border.width: 1

            Text {
                text: display
                anchors.centerIn: parent
            }
        }
    }
}
