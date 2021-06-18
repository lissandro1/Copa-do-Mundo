#include <bits/stdc++.h>
using namespace std;

#define nmax 25

int main(){

queue< char > fila;
int g1, g2;
char t1, t2;

for(char t = 'A'; t <= 'P'; t++){

    fila.push(t);
}

for(int i=0; i<15; i++){

    t1 = fila.front(); fila.pop();
    t2 = fila.front(); fila.pop();

     cin >> g1 >> g2;

     if(g1 > g2) fila.push(t1);
     else fila.push(t2);

}
char tcamp;
tcamp = fila.front(); fila.pop();
cout << tcamp << endl;


return 0;
}
