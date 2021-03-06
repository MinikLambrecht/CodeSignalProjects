QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Challenges/ExploringTheWaters/addborder.cpp \
    Challenges/ExploringTheWaters/alternatingsums.cpp \
    Challenges/ExploringTheWaters/aresimilar.cpp \
    Challenges/ExploringTheWaters/arraychange.cpp \
    Challenges/ExploringTheWaters/palindromerearranging.cpp \
    Challenges/IslandOfKnowledge/areequallystrong.cpp \
    Challenges/IslandOfKnowledge/arraymaximaladjacentdifference.cpp \
    Challenges/IslandOfKnowledge/avoidobstacles.cpp \
    Challenges/IslandOfKnowledge/boxblur.cpp \
    Challenges/IslandOfKnowledge/isipv4address.cpp \
    Challenges/IslandOfKnowledge/minesweeper.cpp \
    Challenges/SmoothSailing/reverseinparentheses.cpp \
    Challenges/SmoothSailing/sortbyheight.cpp \
        main.cpp \
    Challenges/EdgeOfTheOcean/adjacentelementsproduct.cpp \
    Challenges/EdgeOfTheOcean/almostincreasingsequence.cpp \
    Challenges/EdgeOfTheOcean/makearrayconsecutive2.cpp \
    Challenges/EdgeOfTheOcean/matrixelementssum.cpp \
    Challenges/EdgeOfTheOcean/shapearea.cpp \
    Challenges/TheJourneyBegins/add.cpp \
    Challenges/TheJourneyBegins/centuryfromyear.cpp \
    Challenges/TheJourneyBegins/checkpalindrome.cpp \
    Challenges/allchallenges.cpp \
    Challenges/SmoothSailing/alllongeststrings.cpp \
    Challenges/SmoothSailing/commoncharactercount.cpp \
    tests.cpp \
    Challenges/SmoothSailing/islucky.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS +=
