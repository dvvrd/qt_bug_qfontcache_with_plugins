QT += core gui widgets

CONFIG += c++11

DESTDIR = $$PWD/..

TARGET = unloadingIssues
TEMPLATE = app

SOURCES += \
	main.cpp\
	mainWindow.cpp \

HEADERS += \
	mainWindow.h \
	pluginInterface.h \

FORMS += \
	mainWindow.ui \
