#include <iostream>
#include <conio.h>

using namespace std;

int main() {
  int op1, op2;
  bool a[2] = {true, false};
  bool b[2] = {true, false};
  bool c[2] = {true, false};

  cout << "Por favor, ingrese el primer operador logico (0: AND, 1: OR, 2: NEGACIÓN, 3: CONDICIONAL, 4: DOBLE CONDICIONAL): ";
  cin >> op1;
  cout << "Por favor, ingrese el segundo operador logico (0: AND, 1: OR, 2: NEGACIÓN, 3: CONDICIONAL, 4: DOBLE CONDICIONAL): ";
  cin >> op2;

  cout << "\nTabla\n";
  cout << "(A ";

  switch (op1) {
    case 0:
      cout << "AND";
      break;
    case 1:
      cout << "OR";
      break;
    case 2:
      cout << "NEGACIÓN";
      break;
    case 3:
      cout << "CONDICIONAL";
      break;
    case 4:
      cout << "DOBLE CONDICIONAL";
      break;
    default:
      cout << "ERROR";
      getch();
      return 0;
  }

  cout << " B) ";

  switch (op2) {
    case 0:
      cout << "AND";
      break;
    case 1:
      cout << "OR";
      break;
    case 2:
      cout << "NEGACIÓN";
      break;
    case 3:
      cout << "CONDICIONAL";
      break;
    case 4:
      cout << "DOBLE CONDICIONAL";
      break;
    default:
      cout << "ERROR";
      getch();
      return 0;
  }

  cout << " C\n";

  for (int x = 0; x < 2; x++) {
    for (int y = 0; y < 2; y++) {
      for (int z = 0; z < 2; z++) {
        cout << "En " << a[x] << " ";

        switch (op1) {
          case 0:
            cout << "AND";
            break;
          case 1:
            cout << "OR";
            break;
          case 2:
            cout << "NOT";
            break;
          case 3:
            cout << "IF";
            break;
          case 4:
            cout << "IFF";
            break;
        }

        cout << " " << b[y] << ", ";

        switch (op2) {
          case 0:
            cout << "AND";
            break;
          case 1:
            cout << "OR";
            break;
          case 2:
            cout << "NOT";
            break;
          case 3:
            cout << "IF";
            break;
          case 4:
            cout << "IFF";
            break;
        }

        cout << " C = ";

        bool result;
        switch (op1) {
          case 0:
            result = a[x] && b[y];
            break;
          case 1:
            result = a[x] || b[y];
            break;
          case 2:
            result = !a[x];
            break;
          case 3:
            result = !a[x] || b[y];
            break;
          case 4:
            result = (a[x] && b[y]) || (!a[x] && !b[y]);
            break;
        }

        switch (op2) {
          case 0:
            result = result && c[z];
            break;
          case 1:
            result = result || c[z];
            break;
          case 2:
            result = !result;
            break;
          case 3:
            result = !result || c[z];
            break;
          case 4:
            result = (result && c[z]) || (!result && !c[z]);
            break;
        }

        cout << result << endl;
      }
    }
  }

  getch();
  return 0;
}
