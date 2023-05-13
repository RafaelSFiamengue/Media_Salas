#include <iostream>
#include <cmath>
using namespace std;
//Programa Principal
int main() {
    //Variaveis
    float media;
    int sala[6];
    //Pergunta quantos alunos tem em cada sala
    cout << "Quantos alunos tem na sala 1? ";
    cin >> sala[0];
     cout << "Quantos alunos tem na sala 2? ";
    cin >> sala[1];
     cout << "Quantos alunos tem na sala 3? ";
    cin >> sala[2];
     cout << "Quantos alunos tem na sala 4? ";
    cin >> sala[3];
     cout << "Quantos alunos tem na sala 5? ";
    cin >> sala[4];
     cout << "Quantos alunos tem na sala 6? ";
    cin >> sala[5];
    //Condição para mostrar as salas para os usuarios
    for(int i = 0; i < 6; i++) {
        cout << "A sala " << i + 1 << " tem " << sala[i] << " alunos" << endl;
    }
    //Calculo da media e exibição da media para o usuario
    media = (sala[0] + sala[1] + sala[2] + sala[3] + sala[4] + sala[5]) / 6;
    cout << "A media é " << media << endl;
    //Condição para ver se a sala esta acima ou abaixo da media
    if (sala[0] > media){
        cout << "A sala " << 1 << " está acima da media" << endl;
    }
    else {
        cout << "A sala " << 1 << " está abaixo da media" << endl;
    }
    if(sala[1] > media) {
        cout << "A sala " << 2 << " está acima da media" << endl;
    }
    else {
        cout << "A sala " << 2 << " está abaixo da media" << endl;
    }
    if(sala[2] > media) {
        cout << "A sala " << 3 << " está acima da media" << endl;
    }
    else {
        cout << "A sala " << 3 << " está abaixo da media" << endl;
    }
    if(sala[3] > media) {
        cout << "A sala " << 4 << " está acima da media" << endl;
    }
    else {
        cout << "A sala " << 4 << " está abaixo da media" << endl;
    }
    if(sala[4] > media) {
        cout << "A sala " << 5 << " está acima da media" << endl;
    }
    else {
        cout << "A sala " << 5 << " está abaixo da media" << endl;
    }
    if(sala[5] > media) {
        cout << "A sala " << 6 << " está acima da media" << endl;
    }
    else {
        cout << "A sala " << 6 << " está abaixo da media" << endl;
    }

return 0;
}
