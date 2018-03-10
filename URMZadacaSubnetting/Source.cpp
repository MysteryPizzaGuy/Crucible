#include <iostream>
#include <string>
#include <vector>
#include <bitset>
using namespace std;

struct Zad3IP
{
	string DNetworkIP;
	bitset<32> BNetworkIP;
	string DFirstAddress;
	bitset<32> BFirstAddress;
	string DLastAddress;
	bitset<32> BLastAddress;
	string DBroadcastAddress;
	bitset<32> BBroadcastAddress;
};

bitset <32> ShortSMtoBinary(int SM) {
	bitset<32> BinarySM;
	for (int i = 32 - 1; i > 31-SM; i--)
	{
		BinarySM.set(i);
	}
	return BinarySM;


}
void SplitBinaryIPToArrayOfInts(bitset<32> BinaryIP, int* ArrayOfIP) {
	bitset <8> ArrayofBinary[4];
	int temp;
	for (size_t i = 0; i <4; i++)
	{
		temp = 0;
		for (size_t j = i*8; j < i*8+8; j++)
		{
			if (BinaryIP.test(j))
			{
				ArrayofBinary[i].set(temp);
			}
			temp++;

		}
	}
	for (size_t i = 0; i < 4; i++)
	{
		ArrayOfIP[i] = ArrayofBinary[i].to_ulong();
	}
}

bitset<32> IntArraytoBinaryIP(int* ArrayofIP) {
	bitset<32> BinaryIP;
	vector<bitset<8>> Binary8s;
	for (size_t i = 0; i < 4; i++)
	{
		bitset<8> temp(ArrayofIP[i]);
		Binary8s.push_back(temp);
	}

	for (size_t i = 0; i < 4; i++)
	{
		int temp = 0;
		for (size_t j = i * 8; j < i * 8 + 8; j++)
		{
			if (Binary8s[i].test(temp))
			{
				BinaryIP.set(j);
			}
			temp++;

		}
	}
	return BinaryIP;
}

string IntArrayToIPString(int* ArrayofIP) {
	string IP;
	for (int i = 3; i >= 0; i--)
	{
		IP += to_string(ArrayofIP[i]);
		if (i !=0)
		{
			IP += '.';
		}
	}
	return IP;
}

string BinaryIPtoDec(bitset<32> BinaryIP) {
	int ArrayOfIP[4];
	SplitBinaryIPToArrayOfInts(BinaryIP, ArrayOfIP);
	return IntArrayToIPString(ArrayOfIP);
}

void zad2(int& NumNetwork, int& NumAdrs, char Class, int subnetshort) {
	switch (Class)
	{
	case 'A':
	case 'a':
		NumNetwork = pow(2, (subnetshort - 8));
		NumAdrs = pow(2, (32 - subnetshort));
		break;
	case 'B':
	case 'b':
		NumNetwork = pow(2, (subnetshort - 12));
		NumAdrs = pow(2, (32 - subnetshort));
		break;
	case 'C':
	case 'c':
		NumNetwork = pow(2, (subnetshort - 16));
		NumAdrs = pow(2, (32 - subnetshort));
		break;
	default:
		break;
	}
}


bitset <32> NetworkIP(bitset<32> IP, int SM) {
	bitset<32> BSM = ShortSMtoBinary(SM);
	IP &= BSM;
	return IP;
}
bitset <32> FirstIP(bitset <32>NetworkIP, int loc) {//to begin set loc at 0
	int ArrayOfInt[4];
	SplitBinaryIPToArrayOfInts(NetworkIP, ArrayOfInt);
	for (size_t i = 0; i < 4; i++)
	{
		if (ArrayOfInt[i]!=255)
		{
			ArrayOfInt[i] += 1;
			break;
		}
	}
	return IntArraytoBinaryIP(ArrayOfInt);
}
bitset <32> BroadcastIP(bitset<32> NetworkIP, int SM) {
	bitset<32> BroadcastIP = NetworkIP;
	int temp = 32 - SM;
	for (size_t i = 0; i < temp; i++)
	{
		BroadcastIP.set(i);
	}
	return BroadcastIP;
}
bitset<32> LastIP(bitset<32> BroadcastIP) {
	bitset<32> LastIP =BroadcastIP.reset(0);
	return LastIP;
}

void Add1(bitset<32>& TobeIncremented, int whichone) {
	if (TobeIncremented[whichone] == 0)
	{
		TobeIncremented.set(whichone);
	}
	else
		Add1(TobeIncremented, whichone + 1);
}

string Summarization(bitset<32> NetworkIP1, int SM1,bitset<32> NetworkIP2, int SM2, int& SumSM) {
	int firstdifferent=0;
	bitset<32> SummaryIP;
	int BiggerSM = SM2;
	if (SM1<SM2)
	{
		BiggerSM = SM1;
	}
	for (int i = 32 - 1; i >= 32-BiggerSM; i--)
	{
		if (NetworkIP1.test(i) == NetworkIP2.test(i))
		{
			if (NetworkIP1.test(i))
			{
				SummaryIP.set(i);
			}else
				SummaryIP.reset(i);
		}
		else {
			firstdifferent = i+1;
			break;
		}
		if (i == 32 - BiggerSM) {
			firstdifferent = i;
			break;
		}
	}
	string SummaryIPDec = BinaryIPtoDec(SummaryIP);
	SumSM= 32 - firstdifferent;
	return SummaryIPDec;
}

void DecIPtoIntArray(string DecIP, int* DecIPArray) {
	string Iptemp = DecIP;
	int pos = 0;
	int rpos = 0;
	for (size_t i = 0; i < 4; i++)
			{
				Iptemp = DecIP;
				if (i != 3) {
					pos = Iptemp.find('.', pos);
					Iptemp.erase(pos, string::npos);
		
				}
				else
					pos = 15;
				if (i != 0)
				{
					rpos = Iptemp.rfind('.', string::npos);
					Iptemp.erase(0, rpos+1);
				}
				pos++;
		
				DecIPArray[3-i] = stoi(Iptemp);
			}
}

void zadatak1() {
	int SM;
	cout << "Unesite Subnet Masku(bez /): ";
	cin >> SM;
	cin.ignore();
	cout <<"Binary IP: "<< ShortSMtoBinary(SM) << endl <<"Decimal IP:"<<  BinaryIPtoDec(ShortSMtoBinary(SM));
}
void zadatak2() {
	int NumNetwork;
	int NumAdrs;
	char Class;
	int subnetshort;
	cout << "Unesite Klasu IP adrese: ";
	cin >> Class;
	cin.ignore();
	zad2(NumNetwork, NumAdrs, Class, subnetshort);
	cout << "Broj Mreza: " << NumNetwork << endl << "Broj Racunala: " << NumAdrs - 2;
}


void zadatak3() {
	string DecIP;
	cout << "Unesite IP adresu: ";
	getline(cin, DecIP);
	cout << "Unesite SM: ";
	int SM;
	cin >> SM;
	cin.ignore();
	int ArrayOfIP[4];
	DecIPtoIntArray(DecIP, ArrayOfIP);
	bitset<32> BinaryIP =IntArraytoBinaryIP(ArrayOfIP);
	Zad3IP Current;
	Current.BNetworkIP = NetworkIP(BinaryIP, SM);
	Current.DNetworkIP = BinaryIPtoDec(Current.BNetworkIP);
	Current.BFirstAddress = FirstIP(Current.BNetworkIP, 0);
	Current.DFirstAddress = BinaryIPtoDec(Current.BFirstAddress);
	Current.BBroadcastAddress = BroadcastIP(Current.BNetworkIP, SM);
	Current.DBroadcastAddress = BinaryIPtoDec(Current.BBroadcastAddress);
	Current.BLastAddress = LastIP(Current.BBroadcastAddress);
	Current.DLastAddress = BinaryIPtoDec(Current.BLastAddress);

	cout << endl << "IP Mreze: " << Current.DNetworkIP << endl << "IP Prva korisna adresa: " << Current.DFirstAddress << endl << "Broadcast Adresa: " << Current.DBroadcastAddress << endl << "Zadnja Korisna Adresa: " << Current.DLastAddress << endl;
}
struct Zad4IPandSM
{
	string IP;
	int SM;
};

void zadatak4() {
	string FirstIP;
	vector <Zad4IPandSM> IP;
	string SecondIP;
	char goon;
	do
	{
		Zad4IPandSM temp;
		cout << "Unesite IP adresu: ";
		getline(cin, temp.IP);
		cout << "Unesite SM: ";
		cin >> temp.SM;
		IP.push_back(temp);
		cout << "Zelite li dodati jos adresa?(y/n): ";
		cin >> goon;
		cin.ignore();
	} while (goon == 'y');
	/*cout << "Unesite IP adresu: ";
	getline(cin, FirstIP);
	cout << "Unesite SM: ";
	cin >> SM1;
	cin.ignore();
	cout << "Unesite drugu IP adresu: ";
	getline(cin, SecondIP);
	cout << "Unesite drugu SM: ";
	cin >> SM2;
	cin.ignore();*/
	string SumIP = IP[0].IP;
	int SumSM = IP[0].SM;
	for (size_t i = 0; i < IP.size()-1; i++)
	{
		int ArrayOfIP[4];
		DecIPtoIntArray(SumIP, ArrayOfIP);
		bitset<32> BinaryIP = IntArraytoBinaryIP(ArrayOfIP);
		DecIPtoIntArray(IP[i + 1].IP, ArrayOfIP);
		bitset<32> BinaryIP2 = IntArraytoBinaryIP(ArrayOfIP);
		SumIP=Summarization(NetworkIP(BinaryIP, SumSM), SumSM, NetworkIP(BinaryIP2, IP[i + 1].SM), IP[i + 1].SM, SumSM);
	}
	
	cout << endl << "Sumarizirana adresa: " << SumIP << "/" << SumSM;
}

int main() {
	char goon = 'n';
	int whichone;
	do
	{
		cout << "Odaberite zadatak/funkciju(Unesite broj zadatka): " << endl << endl;
		cout << "Zadatak 1: Subnet  Maska" << endl;
		cout << "Zadatak 2: Podmreze i Uredaji" << endl;
		cout << "Zadatak 3: Odredivanje mreze" << endl;
		cout << "Zadatak 4: Summarizacija" << endl;
		cin >> whichone;
		cin.ignore();
		switch (whichone)
		{
		case 1:
			system("cls");
			zadatak1();
			break;
		case 2:
			system("cls");
			zadatak2();
			break;
		case 3:
			system("cls");
			zadatak3();
			break;
		case 4:
			system("cls");
			zadatak4();
			break;
		default:
			system("cls");
			break;
		}
		cout << endl << endl;
		cout << "Zelite li se vratiti u main menu(y/n):";
		cin >> goon;
		cin.ignore();
		system("cls");
	} while (goon=='y');

	cout << endl;
	return 0;
}