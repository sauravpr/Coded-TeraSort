#include <stdio.h>
#include <fstream>
#include <iostream>
using namespace std;

void addWorkerIP(char * IPFileName, char * hostFileName){
	ifstream ipFile;
	ifstream host;
	host.open(hostFileName);
	ipFile.open(IPFileName);
	ifstream host;
	host.open(hostFileName);
	string myLine;
	getline(host, myLine);
<<<<<<< Updated upstream
	cout << myLine << endl;
=======
	std::cout<<myLine<<endl;
>>>>>>> Stashed changes
	host.close();
	std::ofstream hostFile(hostFileName, ios::app);
	hostFile << endl;
	int numWorkers = 1;
	while (!ipFile.eof()){
		if (getline(ipFile, myLine)){
			hostFile << myLine << " n" << numWorkers << endl;
			numWorkers ++;
		}
	}
}

int main(int argc, char *argv[]){
	addWorkerIP(argv[1], argv[2]);
<<<<<<< Updated upstream
	printf("Worker IPs added\n");
}
=======
	printf("Worker IPs added");
}
>>>>>>> Stashed changes
