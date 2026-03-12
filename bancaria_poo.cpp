#include <iostream>
#include <string>

using namespace std;

class CuentaBancaria{
	
private:
	int id;
	string nroCuenta;
	double saldo;
	
public:
	string propietario;
	
	CuentaBancaria(int i, string nro, string prop){
		id = i;
		nroCuenta = nro;
		propietario = prop;
		saldo = 0.0;
	}
		void depositar(double monto){
			if(monto > 0){
				saldo = saldo + monto;
			}else{
				cout << "Error: monto no valido" << endl;
			}
		}
			bool retirar(double monto){
				if(monto <= 0){
					cout << "Error: monto invalido" << endl;
					return false;
				}
				if(monto > saldo){
					cout << "Fondos insufisientes" << endl;
					return false;
				}
				saldo = saldo - monto;
				return true;
			}
				void transferir(CuentaBancaria &destino, double monto){
					if(retirar(monto)){
						cout << "Retiro de cuenta " << propietario << ": CONFIRMADO" << endl;
						destino.depositar(monto);
						cout << "Deposito en cuenta " << destino.propietario << ": CONFIRMADO" << endl;
						cout << "Resultado: Operacion completada con exito." << endl;
					}else{
						cout << "Operacion cancelada" << endl;
					}
				}
					void verEstado(){
						cout << "Cuenta " << nroCuenta << " | Titular: " << propietario << " | Saldo Actual: $" << saldo << endl;
					}
						double verSaldo(){
							return saldo;
						}
};

int main(int argc, char *argv[]){
	
	CuentaBancaria cuentaA(1,"001","Juan Perez");
	CuentaBancaria cuentaB(2,"002","Maria Lopez");
	cuentaA.depositar(1000);
	cout << "ESTADO INICIAL:" << endl;
	cout << "Titular: Juan Perez | Saldo: $" << cuentaA.verSaldo() << endl;
	cout << "Titular: Maria Lopez | Saldo: $" << cuentaB.verSaldo() << endl;
	cout << endl;
	cout << "EJECUTANDO TRANSFERENCIA... Monto solicitado: $450.00" << endl;
	cout << endl;
	cout << "NOTIFICACION DEL SISTEMA:" << endl;
	cout << endl;
	cuentaA.transferir(cuentaB,450);
	cout << endl;
	cout << "ESTADO FINAL:" << endl;
	cout << endl;
	cuentaA.verEstado();
	cuentaB.verEstado();
	return 0;
}
	

