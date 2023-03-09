import QtQuick 2.12
import QtQuick.Window 2.12
import Qt.labs.qmlmodels 1.0
import QtQuick.Controls
//кароч, тебе подсказда на будущие, если будут проблемы с CMake "такое бывает при добаление новых файлов" то зайди в "CMakeLists.txt"
//и добавь в ручную название файлов, хз но скорее всего коментарии я там не оставлю, по месту разберешься, но у меня отдельное место, у тебя отдельно

//что ещё могу сказать, для вызова каких либо функций я написал для тебя класс "appEngine" там пока что нихуя нету.
//но суть в том что ты можешь обращаться к ниму по имени "logics", чуть позже напишу методов для вызова.
//для понимания можешь глянуть этот видос https://youtu.be/yDbir1zC0wY?t=1058 там в конце то как мы будем взаидействовать.
//в крайнем случае можем завтра созвониться (пишу я это 03.03)
Window{
    width: 500
    height: 500
    visible: true
    color: "aqua"
  Column
 {

  Button
  {
      text: qsTr("підключитися до гри")
       onClicked:{ logics.bIsJoinGame();
     debug_network.text = "підключення до гри"}
  }
  Button
  {
     text: qsTr("створити сервер")
     onClicked:{ logics.bIsCreateGame();
   debug_network.text = "створюємо гру"}
  }
  Text {
      id: debug_network
      text: qsTr("text")
  }
 }

    Column
    {
        anchors.centerIn: parent
        Text
        {
           anchors.horizontalCenter: parent.horizontalCenter
            id: name
            font.bold: true
            text: qsTr("Bridge")
            color: red
        }
        Button
        {
            anchors.horizontalCenter: parent.horizontalCenter
            text: "Грати"
            onClicked: debug.text = "створення гри ще не доступно"
            onDoubleClicked: debug.text= "потерпиш трохи, соси хуй!"
        }

        Button
        {
           anchors.horizontalCenter: parent.horizontalCenter
            text: "Налаштування"
            onClicked: debug.text = "налаштування гри ще не готові"
        }
        Text {
            anchors.horizontalCenter: parent.horizontalCenter
            id: debug
            text: qsTr("Debug_text")
        }
        }
    }

