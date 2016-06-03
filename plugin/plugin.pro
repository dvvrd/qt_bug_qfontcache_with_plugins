TEMPLATE = lib
CONFIG += plugin c++11

DESTDIR = $$PWD/..

INCLUDEPATH += \
	$$PWD/../ \

QT += widgets

HEADERS = \
	$$PWD/plugin.h \
	$$PWD/widget.h \

SOURCES = \
	$$PWD/plugin.cpp \
	$$PWD/widget.cpp \

FORMS += \
	$$PWD/widget.ui \
