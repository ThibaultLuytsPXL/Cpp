TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        character.cpp \
        healthpotion.cpp \
        human.cpp \
        main.cpp \
        potion.cpp \
        strengthpotion.cpp

HEADERS += \
    character.h \
    healthpotion.h \
    human.h \
    potion.h \
    strengthpotion.h
