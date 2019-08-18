int main(){
	try{
		string nombre_archivo;
		cout << "Introduce el nombre del archivo a analizar: ";
		cin >> nombre_achivo;
		Anaylizer myAnalyzer{nombre_archivo};
		myAnalyzer.showAnalysis();
		
		cout << "Introduce el nombre del archivo donde guardar los resultados: ";
		cin >> nombre_archivo;
		myAnalyzer.saveAnalysis(nombre_archivo);
		cout << "Finalizado" << endl;
	}catch(string e){
		cout << e << endl;
		return 1;
	}
	return 0;
}
