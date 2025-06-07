QT += sql
LIBS += -L"C:\Program Files\MySQL\MySQL Server 9.0\lib" -llibmysql
QMAKE_POST_LINK

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Login.cpp \
    Telaprincipal1.cpp \
    cadastro.cpp \
    cadastro1.cpp \
    main.cpp \
    telaPrincipal.cpp

HEADERS += \
    Login.h \
    Strings.h \
    Telaprincipal1.h \
    cadastro.h \
    cadastro1.h \
    telaPrincipal.h

FORMS += \
    Login.ui \
    Telaprincipal1.ui \
    cadastro.ui \
    cadastro1.ui \
    telaPrincipal.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Design.qrc

DISTFILES += \
    Documentação/termos_de_uso \
    Documentação/termos_de_uso.txt \
    Documentação/termos_de_uso.txt \
    Imagens/branco de fundo.png



