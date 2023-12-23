cmake_minimum_required(VERSION 3.26)
project(Snoopy_Revenge C)

set(CMAKE_C_STANDARD 11)

add_executable(Snoopy_Revenge main.c
        utile.h
        life.c
        Deplacement_Snoop.c
        Mot2passe.c
        Mouvement_balle.c
        lvl.c
        pause.c
        sauvegardes.c
        temps.c
        interface.c)
