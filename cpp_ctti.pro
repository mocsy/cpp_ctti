TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG -= exceptions
CONFIG -= rtti

SOURCES += main.cpp

HEADERS += \
    AutoReference.h \
    FundamentalTypes.h \
    StlTypes.h

QMAKE_CXXFLAGS += -fno-exceptions
