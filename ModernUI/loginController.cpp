#include <string>
#include <set>
using namespace std;
struct Personas {
	string nombre;
	string pass;
};
int vLogin(string nombre , string pass,set<Personas>p) {
	Personas encontrar{ nombre,pass };
	auto it=p.find(encontrar);
	return ;
}