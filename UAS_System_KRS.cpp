#include <iostream>
#include <iomanip>

using namespace std;

struct bobot_SKS{
	int algoritma 					= 3;
	int aljabar_linier_dan_matriks 	= 3;
	int dasar_sistem_informasi 		= 3;
	int matematika_diskrit 			= 3;
	int organisasi_dan_manajemen 	= 3;
	int bahasa_indonesia 			= 2;
	int toefl_1 					= 2;
}bbtSKS;

struct karturencanastudi{	
	int sks;
	string matkul;
};

karturencanastudi jadwal[20];

// DEKLARASI FUNCTION
void header();
void tampil_matkul();
void simpan_matkul();
int perhitungan_nilai_akhir_algo(int, int, int, float);
int perhitungan_nilai_akhir_alin(int, int, int, float);
int perhitungan_nilai_akhir_dsi(int, int, int, float);
int perhitungan_nilai_akhir_md(int, int, int, float);
int perhitungan_nilai_akhir_ornamen(int, int, int, float);
int perhitungan_nilai_akhir_bi(int, int, int, float);
int perhitungan_nilai_final_toefl1(int, int);
int search_bobot_nilai(float, float, float, float, float, float, float);


// Deklarasi Variable Bobot Nilai (GLOBAL VARIABLE)
int bbtNilai_algo, bbtNilai_alin, bbtNilai_dsi, bbtNilai_md, bbtNilai_ornamen, bbtNilai_bi, bbtNilai_toefl_1;
// End of Deklarasi Variable Bobot Nilai

int main(){
	// Deklarasi Variable Input Nilai
	int nilai_tugas_algo, nilai_UTS_algo, nilai_UAS_algo, nilai_akhir_algo;
	int nilai_tugas_alin, nilai_UTS_alin, nilai_UAS_alin, nilai_akhir_alin;
	int nilai_tugas_dsi, nilai_UTS_dsi, nilai_UAS_dsi, nilai_akhir_dsi;
	int nilai_tugas_md, nilai_UTS_md, nilai_UAS_md, nilai_akhir_md;
	int nilai_tugas_ornamen, nilai_UTS_ornamen, nilai_UAS_ornamen, nilai_akhir_ornamen;
	int nilai_tugas_bi, nilai_UTS_bi, nilai_UAS_bi, nilai_akhir_bi;
	int nilai_UTS_toefl_1, nilai_UAS_toefl_1;
	// End of Deklarasi Variable Input Nilai
	
	// Deklarasi Variable Nilai Akhir
	float n_akhir_algo, n_akhir_alin, n_akhir_dsi, n_akhir_md, n_akhir_ornamen, n_akhir_bi, n_akhir_toefl_1;
	// End of Deklarasi Variable Nilai Akhir
	
	// Deklarasi Variable IPS
	float Nilai_x_Sks_ALG, Nilai_x_Sks_ALIN, Nilai_x_Sks_DSI, Nilai_x_Sks_MD, Nilai_x_Sks_ODM, Nilai_x_Sks_BI, Nilai_x_Sks_T1;
	float total_Nilai_x_Sks;
	float nilai_IPS;
	// End of Deklarasi Variable IPS
	
	int pilihMatkul, sisa_SKS, batas_SKS, total_SKS=0, pilihKRS[20], i=0;
	string opsi;
	
	header();
	
	// INPUTAN NILAI ALGORITMA
	cout << " Masukan Nilai Tugas Algoritma : ";
	cin >> nilai_tugas_algo;
	cout << " Masukan Nilai UTS Algoritma : ";
	cin >> nilai_UTS_algo;
	cout << " Masukan Nilai UAS Algoritma : ";
	cin >> nilai_UAS_algo;
	
	system("clear");
	header();
	
	// INPUTAN NILAI ALJABAR DAN LINIER
	cout << " Masukan Nilai Tugas Aljabar dan Linier : ";
	cin >> nilai_tugas_alin;
	cout << " Masukan Nilai UTS Aljabar dan Linier : ";
	cin >> nilai_UTS_alin;
	cout << " Masukan Nilai UAS Aljabar dan Linier : ";
	cin >> nilai_UAS_alin;
	
	system("clear");
	header();
	
	// INPUTAN NILAI DASAR SISTEM INFORMASI
	cout << " Masukan Nilai Tugas Dasar Sistem Informasi : ";
	cin >> nilai_tugas_dsi;
	cout << " Masukan Nilai UTS Dasar Sistem Informasi : ";
	cin >> nilai_UTS_dsi;
	cout << " Masukan Nilai UAS Dasar Sistem Informasi : ";
	cin >> nilai_UAS_dsi;

	system("clear");
	header();
	
	// INPUTAN NILAI MATEMATIKA DISKRIT
	cout << " Masukan Nilai Tugas Matematika Diskrit : ";
	cin >> nilai_tugas_md;
	cout << " Masukan Nilai UTS Matematika Diskrit : ";
	cin >> nilai_UTS_md;
	cout << " Masukan Nilai UAS Matematika Diskrit : ";
	cin >> nilai_UAS_md;
	
	system("clear");
	header();

	// INPUTAN NILAI ORGANISASI DAN MANAJEMEN
	cout << " Masukan Nilai Tugas Organisasi dan Manajemen : ";
	cin >> nilai_tugas_ornamen;
	cout << " Masukan Nilai UTS Organisasi dan Manajemen : ";
	cin >> nilai_UTS_ornamen;
	cout << " Masukan Nilai UAS Organisasi dan Manajemen : ";
	cin >> nilai_UAS_ornamen;
	
	system("celar");
	header();
	
	// INPUT NILAI BAHASA INDONESIA
	cout << " Masukan Nilai Tugas Bahasa Indonesia : ";
	cin >> nilai_tugas_bi;
	cout << " Masukan Nilai UTS Bahasa Indonesia : ";
	cin >> nilai_UTS_bi;
	cout << " Masukan Nilai UAS Bahasa Indonesia : ";
	cin >> nilai_UAS_bi;
	
        system("clear");
	header();
	
	// INPUT NILAI TOEFL 1
	cout << " Masukan Nilai UTS TOEFL 1 : ";
	cin >> nilai_UTS_toefl_1;
	cout << " Masukan Nilai UAS Dasar TOEFL 1 : ";
	cin >> nilai_UAS_toefl_1;
	
	cout << endl;
	
	/* Mencari Nilai Akhir Matakuliah */
	n_akhir_algo = perhitungan_nilai_akhir_algo(nilai_tugas_algo, nilai_UTS_algo, nilai_UAS_algo, nilai_akhir_algo);
	n_akhir_alin = perhitungan_nilai_akhir_alin(nilai_tugas_alin, nilai_UTS_alin, nilai_UAS_alin, nilai_akhir_alin);
	n_akhir_dsi = perhitungan_nilai_akhir_dsi(nilai_tugas_dsi, nilai_UTS_dsi, nilai_UAS_dsi, nilai_akhir_dsi);
	n_akhir_md = perhitungan_nilai_akhir_md(nilai_tugas_md, nilai_UTS_md, nilai_UAS_md, nilai_akhir_md);
	n_akhir_ornamen = perhitungan_nilai_akhir_ornamen(nilai_tugas_ornamen, nilai_UTS_ornamen, nilai_UAS_ornamen, nilai_akhir_ornamen);
	n_akhir_bi = perhitungan_nilai_akhir_bi(nilai_tugas_bi, nilai_UTS_bi, nilai_UAS_bi, nilai_akhir_bi);
	n_akhir_toefl_1 = perhitungan_nilai_final_toefl1(nilai_UTS_toefl_1, nilai_UAS_toefl_1);

	/* Mencari Nilai Bobot Matakuliah */
	search_bobot_nilai(n_akhir_algo, n_akhir_alin, n_akhir_dsi, n_akhir_md, n_akhir_ornamen, n_akhir_bi, n_akhir_toefl_1);
	
	/* Mencari IPS */
	if(bbtNilai_algo != 0 || bbtNilai_alin != 0 || bbtNilai_dsi != 0 || bbtNilai_md != 0 || bbtNilai_ornamen != 0 || bbtNilai_bi != 0){
		Nilai_x_Sks_ALG = bbtNilai_algo * bbtSKS.algoritma;
		Nilai_x_Sks_ALIN = bbtNilai_alin * bbtSKS.aljabar_linier_dan_matriks;
		Nilai_x_Sks_DSI = bbtNilai_dsi * bbtSKS.dasar_sistem_informasi;
		Nilai_x_Sks_MD = bbtNilai_md * bbtSKS.matematika_diskrit;
		Nilai_x_Sks_ODM = bbtNilai_ornamen * bbtSKS.organisasi_dan_manajemen;
		Nilai_x_Sks_BI = bbtNilai_bi * bbtSKS.bahasa_indonesia;
		Nilai_x_Sks_T1 = bbtNilai_toefl_1 * bbtSKS.toefl_1;
		
		total_Nilai_x_Sks = Nilai_x_Sks_ALG + Nilai_x_Sks_ALIN + Nilai_x_Sks_DSI + Nilai_x_Sks_MD + Nilai_x_Sks_ODM + Nilai_x_Sks_BI + Nilai_x_Sks_T1;
		
		nilai_IPS = total_Nilai_x_Sks/19;
	}else{
		cout << "Wajib Ulang";
	}
	
	simpan_matkul();	
	
	if(nilai_IPS <= 4.00 && nilai_IPS >= 3.50){
		batas_SKS = 24;
	}else if(nilai_IPS <= 3.49 && nilai_IPS >= 3.01){
		batas_SKS = 22;
	}else if(nilai_IPS <= 3.00 && nilai_IPS >= 2.51){
		batas_SKS = 20;
	}else if(nilai_IPS <= 2.50 && nilai_IPS >= 2.01){
		batas_SKS = 18;
	}else if(nilai_IPS <= 2.00 && nilai_IPS >= 1.01){
		batas_SKS = 16;
	}else if(nilai_IPS <= 1.00 && nilai_IPS >= 0.00){
		batas_SKS = 14;
	}
	
	pilihanMatkul:
	system("clear");
	header();
	cout << endl;
	if(i>0){
		cout << " Mata kuliah yang telah dipilih :" << endl;
		for(int smntr=0; smntr<i; smntr++){
			cout << " " << jadwal[pilihKRS[smntr]-1].matkul;
			if(smntr<i-1){
				cout << endl;
			}
		}
		cout<<endl<<endl;
	}
	
	sisa_SKS = batas_SKS - total_SKS;
	cout << " IPS : " << setprecision(2) << nilai_IPS << endl;
	cout << " Batas SKS : " << batas_SKS << endl;
	cout << " Sisa SKS : " << sisa_SKS << endl << endl;
	
	tampil_matkul();
	
	cout << endl << " Pilihan Mata kuliah untuk KRS : ";
	cin >> pilihMatkul;
	
	if(cin.fail()){
		cout<<" Maaf, pilihan tidak tersedia!" << endl;
		do{
			cin.clear();
			cin.ignore(256,'\n');
		}while(cin.fail());
		system("pause");
		goto pilihanMatkul;
	}
	
	if(pilihMatkul<1 || pilihMatkul>10){
		cout << " Maaf, pilihan tidak tersedia!" << endl;
		system("pause");
		goto pilihanMatkul;
	}
	
	for(int smntr=0; smntr<i; smntr++){
		if(pilihMatkul==pilihKRS[smntr]){
			cout << " Mata kuliah sama, ulangi pilihan!" << endl << endl;
			selection1:
			cout << " Ingin menambah mata kuliah lagi (Y/T)? ";
			cin.ignore();
			cin >> opsi;
			if(opsi=="Y" || opsi=="y"){
				goto pilihanMatkul;
			}else if (opsi=="T" || opsi=="t"){
				goto selesai;
			}else{
				cout << " Salah input, ulangi!" << endl;
				system("pause");
				system("clear");
				goto selection1;
			}
		}
	}
	
	total_SKS+=jadwal[pilihMatkul-1].sks;
	if(total_SKS<=batas_SKS){
		pilihKRS[i]=pilihMatkul;
		i++;
		cout << " Mata Kuliah Berhasil Ditambahkan! " << endl;
		for(int smntr=0; smntr<i; smntr++){
			for(int x=smntr+1; x<i; x++){
				if(pilihKRS[smntr]>pilihKRS[x]){
					swap(pilihKRS[smntr],pilihKRS[x]);
				}
			}
		}
		selection2:
		cout << " Ingin menambah mata kuliah lagi (Y/T)? ";
		cin.ignore();
		cin >> opsi;
		if(opsi=="Y" || opsi=="y"){
			goto pilihanMatkul;
		}else if (opsi=="T" || opsi=="t"){
			goto selesai;
		}else{
			cout<<" Salah input, ulangi!" << endl << endl;
			system("pause");
			system("clear");
			goto selection2;
		}
	}else{
		total_SKS-=jadwal[pilihMatkul-1].sks;
		cout << " Gagal!!! karena melebihi batas SKS!" << endl;
		selection3:
		cout << " Ingin menambah mata kuliah lagi (Y/T)? ";
		cin.ignore();
		cin >> opsi;
		if(opsi=="Y" || opsi=="y"){
			goto pilihanMatkul;
		}else if (opsi=="T" || opsi=="t"){
			goto selesai;
		}else{
			cout<<" Salah input, ulangi!" << endl << endl;
			system("pause");
			system("clear");
			goto selection3;
		}
	}
	selesai:
	system("clear");
	
	header();
	cout<<" Penyusunan KRS berhasil!" << endl << endl;
	for(int smntr=0;smntr<i;smntr++){
		pilihKRS[smntr]=pilihKRS[smntr]-1;
		cout << " " << smntr+1 << " " << jadwal[pilihKRS[smntr]].matkul << " ("<<jadwal[pilihKRS[smntr]].sks<<" SKS)" << endl;
	}
	cout << endl;
	cout<<"Total SKS : " << total_SKS << endl << endl;
	system("pause");
	
}

void tampil_matkul(){
	cout << " Pilih Kartu Rencana Studi anda !\n\n";
	cout << " 1. " << jadwal[0].matkul<<" - " << jadwal[0].sks << "SKS" << endl;
	cout << " 2. " << jadwal[1].matkul<<" - " << jadwal[1].sks << "SKS" << endl;
	cout << " 3. " << jadwal[2].matkul<<" - " << jadwal[2].sks << "SKS" << endl;
	cout << " 4. " << jadwal[3].matkul<<" - " << jadwal[3].sks << "SKS" << endl;
	cout << " 5. " << jadwal[4].matkul<<" - " << jadwal[4].sks << "SKS" << endl;
	cout << " 6. " << jadwal[5].matkul<<" - " << jadwal[5].sks << "SKS" << endl;
	cout << " 7. " << jadwal[6].matkul<<" - " << jadwal[6].sks << "SKS" << endl;
	cout << " 8. " << jadwal[7].matkul<<" - " << jadwal[7].sks << "SKS" << endl;
	cout << " 9. " << jadwal[8].matkul<<" - " << jadwal[8].sks << "SKS" << endl;
	cout << " 10. " << jadwal[9].matkul<<" - " << jadwal[9].sks << "SKS" << endl;
}

void simpan_matkul(){
	jadwal[0].matkul = "Agama";
	jadwal[0].sks = 2;
	jadwal[1].matkul = "Bahasa Pemograman";
	jadwal[1].sks = 3;
	jadwal[2].matkul = "Design dan Analisis Algoritma";
	jadwal[2].sks = 3;
	jadwal[3].matkul = "Kalkulus";
	jadwal[3].sks = 3;
	jadwal[4].matkul = "Organisasi dan Arsitektur Komputer";
	jadwal[4].sks = 3;
	jadwal[5].matkul = "Pemograman Berbasis Objek";
	jadwal[5].sks = 3;
	jadwal[6].matkul = "Pemograman Berbasis Website";
	jadwal[6].sks = 3;
	jadwal[7].matkul = "Pendidikan Kewarganegaraan";
	jadwal[7].sks = 2;
	jadwal[8].matkul = "Struktur Data";
	jadwal[8].sks = 4;
	jadwal[9].matkul = "Toefl";
	jadwal[9].sks = 2;
}

void header(){
	cout << "|=============================================================================|" 	<< endl;
	cout << "| 				 TUGAS KELOMPOK DAA			      |" 					<< endl;
	cout << "|-----------------------------------------------------------------------------|" 	<< endl;
	cout << "| NAMA : 								      |" 						<< endl;
	cout << "| 1. Nabilla 				  			  20180801107 |" 			<< endl;
	cout << "| 2. Martinus Richard Ticoalu 	  			          20180801055 |" 	<< endl;
	cout << "| 3. Narendra Panji Perbawa 	    				    201581117 |" 	<< endl;
	cout << "|=============================================================================|" 	<< endl;
}

/* ======================================================================================================================================================== */
/* 																  PERHITUNGAN NILAI AKHIR				     	 											*/
/* ======================================================================================================================================================== */
int perhitungan_nilai_akhir_algo(int nilai_tugas_algo, int nilai_UTS_algo, int nilai_UAS_algo, float nilai_akhir_algo){
	float n_tugas_algo, n_UTS_algo, n_UAS_algo;
	n_tugas_algo 		= nilai_tugas_algo*0.3;
	n_UTS_algo			= nilai_UTS_algo*0.35;
	n_UAS_algo			= nilai_UAS_algo*0.35;
	nilai_akhir_algo 	= n_tugas_algo + n_UTS_algo + n_UAS_algo;
	return nilai_akhir_algo;
}

int perhitungan_nilai_akhir_alin(int nilai_tugas_alin, int nilai_UTS_alin, int nilai_UAS_alin, float nilai_akhir_alin){
	float n_tugas_alin, n_UTS_alin, n_UAS_alin;
	n_tugas_alin 		= nilai_tugas_alin*0.3;
	n_UTS_alin			= nilai_UTS_alin*0.35;
	n_UAS_alin			= nilai_UAS_alin*0.35;
	nilai_akhir_alin 	= n_tugas_alin + n_UTS_alin + n_UAS_alin;
	return nilai_akhir_alin;
}

int perhitungan_nilai_akhir_dsi(int nilai_tugas_dsi, int nilai_UTS_dsi, int nilai_UAS_dsi, float nilai_akhir_dsi){
	float n_tugas_dsi, n_UTS_dsi, n_UAS_dsi;
	n_tugas_dsi 		= nilai_tugas_dsi*0.3;
	n_UTS_dsi			= nilai_UTS_dsi*0.35;
	n_UAS_dsi			= nilai_UAS_dsi*0.35;
	nilai_akhir_dsi 	= n_tugas_dsi + n_UTS_dsi + n_UAS_dsi;
	return nilai_akhir_dsi;
}

int perhitungan_nilai_akhir_md(int nilai_tugas_md, int nilai_UTS_md, int nilai_UAS_md, float nilai_akhir_md){
	float n_tugas_md, n_UTS_md, n_UAS_md;
	n_tugas_md 		= nilai_tugas_md*0.3;
	n_UTS_md		= nilai_UTS_md*0.35;
	n_UAS_md		= nilai_UAS_md*0.35;
	nilai_akhir_md 	= n_tugas_md + n_UTS_md + n_UAS_md;
	return nilai_akhir_md;
}

int perhitungan_nilai_akhir_ornamen(int nilai_tugas_ornamen, int nilai_UTS_ornamen, int nilai_UAS_ornamen, float nilai_akhir_ornamen){
	float n_tugas_ornamen, n_UTS_ornamen, n_UAS_ornamen;
	n_tugas_ornamen 		= nilai_tugas_ornamen*0.3;
 	n_UTS_ornamen			= nilai_UTS_ornamen*0.35;
	n_UAS_ornamen			= nilai_UAS_ornamen*0.35;
	nilai_akhir_ornamen 	= n_tugas_ornamen + n_UTS_ornamen + n_UAS_ornamen;
	return nilai_akhir_ornamen;
}

int perhitungan_nilai_akhir_bi(int nilai_tugas_bi, int nilai_UTS_bi, int nilai_UAS_bi, float nilai_akhir_bi){
	float n_tugas_bi, n_UTS_bi, n_UAS_bi;
	n_tugas_bi 		= nilai_tugas_bi*0.3;
	n_UTS_bi		= nilai_UTS_bi*0.35;
	n_UAS_bi		= nilai_UAS_bi*0.35;
	nilai_akhir_bi 	= n_tugas_bi + n_UTS_bi + n_UAS_bi;
	return nilai_akhir_bi;
}

int perhitungan_nilai_final_toefl1(int nilai_UTS_toefl_1, int nilai_UAS_toefl_1){
	if(nilai_UTS_toefl_1 > nilai_UAS_toefl_1){
		return nilai_UTS_toefl_1;
	}else if(nilai_UTS_toefl_1 < nilai_UAS_toefl_1){
		return nilai_UAS_toefl_1;
	}
}
/* ======================================================================================================================================================== */
/* 															   END OF PERHITUNGAN NILAI AKHIR			     	 											*/
/* ======================================================================================================================================================== */



/* ======================================================================================================================================================== */
/* 																	PNCARIAN BOBOT NILAI				     	 											*/
/* ======================================================================================================================================================== */
int search_bobot_nilai(float n_akhir_algo, float n_akhir_alin, float n_akhir_dsi, float n_akhir_md, float n_akhir_ornamen, float n_akhir_bi, float n_akhir_toefl_1){
	// Bobot Nilai Algo
	if(n_akhir_algo >= 80){
		bbtNilai_algo = 4;
	}else if(n_akhir_algo >= 70){
    	bbtNilai_algo = 3;
    }else if(n_akhir_algo >= 50){
	    bbtNilai_algo = 2;
    }else if(n_akhir_algo >= 30){
    	bbtNilai_algo = 1;
	}else{
		bbtNilai_algo = 0;
	}
	
	// Bobot Nilai Alin
	if(n_akhir_alin >= 80){
		bbtNilai_alin = 4;
	}else if(n_akhir_alin >= 70){
    	bbtNilai_alin = 3;
    }else if(n_akhir_alin >= 50){
	    bbtNilai_alin = 2;
    }else if(n_akhir_alin >= 30){
    	bbtNilai_alin = 1;
	}else{
		bbtNilai_alin = 0;
	}
	
	// Bobot Nilai DSI
	if(n_akhir_dsi >= 80){
		bbtNilai_dsi = 4;
	}else if(n_akhir_dsi >= 70){
    	bbtNilai_dsi = 3;
    }else if(n_akhir_dsi >= 50){
	    bbtNilai_dsi = 2;
    }else if(n_akhir_dsi >= 30){
    	bbtNilai_dsi = 1;
	}else{
		bbtNilai_dsi = 0;
	}
	
	// Bobot Nilai Matematika Diskrit
	if(n_akhir_md >= 80){
		bbtNilai_md = 4;
	}else if(n_akhir_md >= 70){
    	bbtNilai_md = 3;
    }else if(n_akhir_md >= 50){
	    bbtNilai_md = 2;
    }else if(n_akhir_md >= 30){
    	bbtNilai_md = 1;
	}else{
		bbtNilai_md = 0;
	}
	
	// Bobot Nilai Ornamen
	if(n_akhir_ornamen >= 80){
		bbtNilai_ornamen = 4;
	}else if(n_akhir_ornamen >= 70){
    	bbtNilai_ornamen = 3;
    }else if(n_akhir_ornamen >= 50){
	    bbtNilai_ornamen = 2;
    }else if(n_akhir_ornamen >= 30){
    	bbtNilai_ornamen = 1;
	}else{
		bbtNilai_ornamen = 0;
	}
	
	// Bobot Nilai Bahasa Indonesia
	if(n_akhir_bi >= 80){
		bbtNilai_bi = 4;
	}else if(n_akhir_bi >= 70){
    	bbtNilai_bi = 3;
    }else if(n_akhir_bi >= 50){
	    bbtNilai_bi = 2;
    }else if(n_akhir_bi >= 30){
    	bbtNilai_bi = 1;
	}else{
		bbtNilai_bi = 0;
	}
	
	// Bobot Nilai toefl 1
	if(n_akhir_toefl_1 >= 441){
		bbtNilai_toefl_1 = 4;
	}else if(n_akhir_toefl_1 >= 426){
    	bbtNilai_toefl_1 = 3;
    }else if(n_akhir_toefl_1 >= 401){
	    bbtNilai_toefl_1 = 2;
    }else if(n_akhir_toefl_1 >= 381){
    	bbtNilai_toefl_1 = 1;
	}else{
		bbtNilai_toefl_1 = 0;
	}
}
/* ======================================================================================================================================================== */
/* 															    END OF PENCARIAN BOBOT NILAI			     	 											*/
/* ======================================================================================================================================================== */


