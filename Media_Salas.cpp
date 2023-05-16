#include <iostream>
#include <cmath>
using namespace std;
//Programa Principal
int main() {
    //Variaveis da media e do array
    float media;
    int sala[6];
    //Array das salas
    sala[0] = 35;
    sala[1] = 4;
    sala[2] = 20;
    sala[3] = 22;
    sala[4] = 36;
    sala[5] = 30;
    //Condição para mostrar a quantidade de alunos em cada sala para os usuarios
    for(int i = 0; i < 6; i++) {
        cout << "A sala " << i + 1 << " tem " << sala[i] << " alunos" << endl;
    }
    //Calculo da media e exibição da media para o usuario
    media = (sala[0] + sala[1] + sala[2] + sala[3] + sala[4] + sala[5]) / 6;
    cout << "A media é " << media << endl;
    
    //Condição para ver se cada sala esta acima ou abaixo da media
    if (sala[0] > media){
        cout << "A sala " << 1 << " está acima da media" << endl;
    }
    else {
        cout << "A sala " << 1 << " está abaixo da media" << endl;
    }
    if(sala[1] > media) {
        cout << "A sala " << 2 << " está a cima da media" << endl;
    }
    else {
        cout << "A sala " << 2 << " está abaixo da media" << endl;
    }
    if(sala[2] > media) {
        cout << "A sala " << 3 << " está a cima da media" << endl;
    }
    else {
        cout << "A sala " << 3 << " está abaixo da media" << endl;
    }
    if(sala[3] > media) {
        cout << "A sala " << 4 << " está a cima da media" << endl;
    }
    else {
        cout << "A sala " << 4 << " está abaixo da media" << endl;
    }
    if(sala[4] > media) {
        cout << "A sala " << 5 << " está a cima da media" << endl;
    }
    else {
        cout << "A sala " << 5 << " está abaixo da media" << endl;
    }
    if(sala[5] > media) {
        cout << "A sala " << 6 << " está a cima da media" << endl;
    }
    else {
        cout << "A sala " << 6 << " está abaixo da media" << endl;
    }

return 0;
}

