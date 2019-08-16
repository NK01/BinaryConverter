TEMPLATE = app
CONFIG += console c++17
CONFIG += strict_c++
CONFIG -= app_bundle
CONFIG -= qt

QMAKE_CXXFLAGS += -pedantic-errors
QMAKE_CXXFLAGS += -Wall -Weffc++ -Wextra -Wsign-conversion -Werror

SOURCES += \
        main.cpp
