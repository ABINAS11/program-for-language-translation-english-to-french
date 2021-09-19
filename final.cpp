#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	{
		ifstream fs{"t8.shakespeare.txt"};							
	ofstream ft{"t8.shakespeare.translated.txt"};
	string line;
	if (fs && ft)
	{	
		while(getline(fs,line))
		{
			ft<<line<<"\n";
		}
		 cout << "Copy Finished \n";
	}
	else 
	{
		cout << "Cannot read File"; 
	}
	
	
	fs.close();
	ft.close();
	}
int i;
string eng,word[1050],fre,line;
	ifstream filein{"t8.shakespeare.txt"};
	ifstream inFile{"find_words.txt"};
	ifstream file3{"french.txt"};
	ofstream fileout{"t8.shakespeare.translated.txt"};
 
	istringstream iss;
		
	while (!inFile.eof())	
	{
	
	getline(inFile,eng);
	
	getline(file3,fre);
	cout<<eng<<" and "<<fre<<endl;
		
		if (filein.good())
			 {
			
			
					while ( !filein.eof())
					{
						getline(filein,line);
					//	fileout<<line<<'\n';
						
					 }		                 
				for(int i=0;i<line.length();i++)
					filein>> word[i];
					cout<<word[i];
}
					 
	}

return 0;
}