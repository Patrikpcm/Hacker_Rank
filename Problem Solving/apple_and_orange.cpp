/*
s = começo da área da casa
t = fim da área da casa
maça = esquerda da casa
laranja = direita da casa
a = posição maciera
b = posição laranjeira
d = unidades de distância no eixo X (chão)
NEGATIVO = fruta rolou pra esquerda
POSITIVO = fruta rolou pra direita
m = número de maças que caíram
n = número de laranjas que caíram
*/
#include <iostream>
#include <vector>
using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    vector<int>::iterator it;
    int ap=0;
    int ora=0;

    for(it = apples.begin(); it<apples.end(); it++ ){
        int sum = (a + (*it));
        if (sum >= s && sum <= t)
            ap++;
    }

    for(it = oranges.begin(); it<oranges.end(); it++ ){
        int sum = (b + (*it));
        if (sum >= s && sum <= t)
            ora++;
    }
    cout << ap << endl;
    cout << ora << endl;
}

int main(){
    vector<int> apples={2,3,-4}, oranges={3,-2,-4};
    int s=7, t=10, a=4, b=12;
    countApplesAndOranges(s,t,a,b,apples,oranges);
return 0;
}