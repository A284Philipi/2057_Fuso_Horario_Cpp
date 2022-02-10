#include <iostream>

using namespace std;

int main()
{
    int hora, tempo, fuso;
    cin >> hora;
    cin >> tempo;
    cin >> fuso;
    hora = hora + tempo + fuso;
    if (hora >= 24){
        hora = hora - 24;
    }else{
        if (hora < 0){
            hora = 24 + hora;
        }
    }
    cout << hora <<endl;
    return 0;
}
