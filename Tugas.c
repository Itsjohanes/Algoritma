    #include <stdio.h>
    #include <string.h>
    /*
    Johannes Alexander Putra
    Johannesap@upi.edu
    mengelola data siswa
    */
    int u;
    int k;
    typedef struct
    {
        int  nim;
        char nama[50];
        char kelas[10];
        char jeniskelamin;
        float uts;
        float uas;
        float tugas;
        float akhir;
        float  mutu;
        char index[2];

}mahasiswa;
    mahasiswa mhs[100];
    int q;
    int i;
    int t;

    int besar(int jml_data){
	int b,k;
	b=mhs[0].akhir;

	for(k=1; k<jml_data;k++){
		if(b < mhs[k].akhir){
			b=mhs[k].akhir;
		}
	}

	return b;
}
  int kecil(int jml_data){
	int b,k;
	b=mhs[0].akhir;

	for(k=1; k<jml_data;k++){
		if(b > mhs[k].akhir){
			b=mhs[k].akhir;
		}
	}

	return b;
}
int rata(int jml_akhir,int jml_data)
{
    int rerata;
    rerata = jml_akhir/jml_data;
    return rerata;


}

    int menu()
    {
        int pili;
        printf("Pilihan Menu \n");
        printf("1. Isi Data \n");
        printf("2. tampillkan \n");
        scanf("%d",&pili);
        return pili;
    }

    void tampilkan()
    {
            float z;
            float x;
            float y;
            int j;
            float r;
            float akhirz;
            for(j=0;j<q;j++)
            {
            printf("*********  Data Mahasiswa Ke - %d *******",j+1);
            printf("\n");
            printf("NIM Mahasiswa %d",mhs[j].nim);
            printf("\n");
            printf("Nama Mahasiswa %s",mhs[j].nama);
            printf("\n");
            printf("Kelas Mahasiswa %s",mhs[j].kelas);
            printf("\n");
            printf("Jenis Kelamin Mahasiswa:%c",mhs[j].jeniskelamin);
            printf("\n");
            printf("Nilai Tugas Mahasiswa :%0.0f",mhs[j].tugas);
            printf("\n");
            printf("Nilai UTS Mahasiswa :%0.0f",mhs[j].uts);
            printf("\n");
            printf("Nilai UAS Mahasiswa :%0.0f",mhs[j].uas);
            printf("\n");
            printf("Nilai AKHIR Mahasiswa :%0.0f",mhs[j].akhir);
            printf("\n");
            printf("Nilai INDEX Mahasiswa : %s",mhs[j].index);
            printf("\n");
            printf("Mutu Mahasiswa : %f",mhs[j].mutu);
            printf("\n");
            }
    }

    void selectionssortdecending(int jumlahdata)
    {
    int c;
    int v;
    int  tempnim;
    char tempnama[50];
    char tempkelas[10];
    char tempkelamin;
    float temptugas;
    float temputs;
    float tempuas;
    int tempakhir;
    float tempmutu;
    char tempindex[2];
    int maxIndex;

    for(c = 0;c<(jumlahdata-1);c++)//0 - jmlh data -1-1
    {

        maxIndex = c;

        for(v = (c+1);v<jumlahdata;v++)//0 - jmlh data-1
        {
            if(mhs[maxIndex].akhir<mhs[v].akhir)
            {
                maxIndex = v;
            }
        }
       tempnim = mhs[c].nim;
       strcpy(tempnama,mhs[c].nama);
       strcpy(tempkelas,mhs[c].kelas);
       tempkelamin = mhs[c].jeniskelamin;
       temptugas = mhs[c].tugas;
       temputs = mhs[c].uts;
       tempuas = mhs[c].uas;
       tempakhir = mhs[c].akhir;
       tempmutu = mhs[c].mutu;
       strcpy(tempindex,mhs[c].index);

       mhs[c].nim = mhs[maxIndex].nim;
       strcpy(mhs[c].nama,mhs[maxIndex].nama);
       strcpy(mhs[c].kelas,mhs[maxIndex].kelas);
       mhs[c].jeniskelamin = mhs[maxIndex].jeniskelamin;
       mhs[c].tugas = mhs[maxIndex].tugas;
       mhs[c].uts = mhs[maxIndex].uts;
        mhs[c].uas = mhs[maxIndex].uas;
        mhs[c].akhir = mhs[maxIndex].akhir;
       mhs[c].mutu = mhs[maxIndex].mutu;
       strcpy(mhs[c].index,mhs[maxIndex].index);

       mhs[maxIndex].nim = tempnim;
       strcpy(mhs[maxIndex].nama,tempnama);
       strcpy(mhs[maxIndex].kelas,tempkelas);
       mhs[maxIndex].jeniskelamin = tempkelamin;
       mhs[maxIndex].tugas = temptugas;
       mhs[maxIndex].uts = temputs;
       mhs[maxIndex].uas = tempuas;
       mhs[maxIndex].akhir = tempakhir;
       mhs[maxIndex].mutu = tempmutu;
       strcpy(mhs[maxIndex].index,tempindex);
    }
    for(c = 0;c<jumlahdata;c++)
    {
        printf("URUTAN DATA KE- %d \n",c+1);
        printf("%d\n",mhs[c].nim);
        printf("%s\n",mhs[c].nama);
        printf("%s\n",mhs[c].kelas);
        printf("%c\n",mhs[c].jeniskelamin);
        printf("%f\n",mhs[c].tugas);
        printf("%f\n",mhs[c].uts);
        printf("%f\n",mhs[c].uas);
        printf("%f\n",mhs[c].akhir);
        printf("%f \n",mhs[c].mutu);
        printf("%s \n",mhs[c].index);
    }

    }
void selectionssortacending(int jumlahdata)
    {


    int c;//PENGULANGAN
    int v;
    int  tempnim;
    char tempnama[50];
    char tempkelas[10];
    char tempkelamin;
    float temptugas;
    float temputs;
    float tempuas;
    int tempakhir;
    float tempmutu;
    char tempindex[2];
    int minIndex;

    for(c = 0;c<(jumlahdata-1);c++)//dari index ke 0 sampai ke jumlah-1-1
    {

        minIndex = c;

        for(v = (c+1);v<jumlahdata;v++)//index 1 sampai jmlh data -1
        {
            if(mhs[minIndex].akhir>mhs[v].akhir)
            {
                minIndex = v;
            }
        }
       tempnim = mhs[c].nim;
       strcpy(tempnama,mhs[c].nama);
       strcpy(tempkelas,mhs[c].kelas);
       tempkelamin = mhs[c].jeniskelamin;
       temptugas = mhs[c].tugas;
       temputs = mhs[c].uts;
       tempuas = mhs[c].uas;
       tempakhir = mhs[c].akhir;
       tempmutu = mhs[c].mutu;
       strcpy(tempindex,mhs[c].index);

       mhs[c].nim = mhs[minIndex].nim;
       strcpy(mhs[c].nama,mhs[minIndex].nama);
       strcpy(mhs[c].kelas,mhs[minIndex].kelas);
       mhs[c].jeniskelamin = mhs[minIndex].jeniskelamin;
       mhs[c].tugas = mhs[minIndex].tugas;
       mhs[c].uts = mhs[minIndex].uts;
        mhs[c].uas = mhs[minIndex].uas;
        mhs[c].akhir = mhs[minIndex].akhir;
       mhs[c].mutu = mhs[minIndex].mutu;
       strcpy(mhs[c].index,mhs[minIndex].index);

       mhs[minIndex].nim = tempnim;
       strcpy(mhs[minIndex].nama,tempnama);
       strcpy(mhs[minIndex].kelas,tempkelas);
       mhs[minIndex].jeniskelamin = tempkelamin;
       mhs[minIndex].tugas = temptugas;
       mhs[minIndex].uts = temputs;
       mhs[minIndex].uas = tempuas;
       mhs[minIndex].akhir = tempakhir;
       mhs[minIndex].mutu = tempmutu;
       strcpy(mhs[minIndex].index,tempindex);
    }
    for(c = 0;c<jumlahdata;c++)
    {
        printf("URUTAN DATA KE- %d \n",c+1);
        printf("%d\n",mhs[c].nim);
        printf("%s\n",mhs[c].nama);
        printf("%s\n",mhs[c].kelas);
        printf("%c\n",mhs[c].jeniskelamin);
        printf("%f\n",mhs[c].tugas);
        printf("%f\n",mhs[c].uts);
        printf("%f\n",mhs[c].uas);
        printf("%f\n",mhs[c].akhir);
        printf("%f \n",mhs[c].mutu);
        printf("%s \n",mhs[c].index);
    }

}
void bublesortascending(int jumlahdata)
{
     int c;
    int  tempnim;
    char tempnama[50];
    char tempkelas[10];
    char tempkelamin;
    float temptugas;
    float temputs;
    float tempuas;
    int tempakhir;
    float tempmutu;
    char tempindex[2];
    int tukar;
    do
    {
        tukar = 0;
        for(c = 0;c<(jumlahdata-1);c++)
        {
            if(mhs[c].akhir > mhs[c+1].akhir)
            {
            tempnim = mhs[c].nim;
            strcpy(tempnama,mhs[c].nama);
            strcpy(tempkelas,mhs[c].kelas);
            tempkelamin = mhs[c].jeniskelamin;
            temptugas = mhs[c].tugas;
            temputs = mhs[c].uts;
            tempuas = mhs[c].uas;
            tempakhir = mhs[c].akhir;
            tempmutu = mhs[c].mutu;
            strcpy(tempindex,mhs[c].index);

            mhs[c].nim = mhs[c+1].nim;
           strcpy(mhs[c].nama,mhs[c+1].nama);
           strcpy(mhs[c].kelas,mhs[c+1].kelas);
           mhs[c].jeniskelamin = mhs[c+1].jeniskelamin;
           mhs[c].tugas = mhs[c+1].tugas;
           mhs[c].uts = mhs[c+1].uts;
           mhs[c].uas = mhs[c+1].uas;
           mhs[c].akhir = mhs[c+1].akhir;
          mhs[c].mutu = mhs[c+1].mutu;
          strcpy(mhs[c].index,mhs[c+1].index);

          mhs[c+1].nim = tempnim;
       strcpy(mhs[c+1].nama,tempnama);
       strcpy(mhs[c+1].kelas,tempkelas);
       mhs[c+1].jeniskelamin = tempkelamin;
       mhs[c+1].tugas = temptugas;
       mhs[c+1].uts = temputs;
       mhs[c+1].uas = tempuas;
       mhs[c+1].akhir = tempakhir;
       mhs[c+1].mutu = tempmutu;
       strcpy(mhs[c+1].index,tempindex);
       tukar = 1;

            }

        }


    }while(tukar == 1);
    for(c = 0;c<jumlahdata;c++)
    {
         printf("URUTAN DATA KE- %d \n",c+1);
        printf("%d\n",mhs[c].nim);
        printf("%s\n",mhs[c].nama);
        printf("%s\n",mhs[c].kelas);
        printf("%c\n",mhs[c].jeniskelamin);
        printf("%f\n",mhs[c].tugas);
        printf("%f\n",mhs[c].uts);
        printf("%f\n",mhs[c].uas);
        printf("%f\n",mhs[c].akhir);
        printf("%f \n",mhs[c].mutu);
        printf("%s \n",mhs[c].index);
    }

}
void bublesortdesending(int jumlahdata)
{
     int c;
    int  tempnim;
    char tempnama[50];
    char tempkelas[10];
    char tempkelamin;
    float temptugas;
    float temputs;
    float tempuas;
    int tempakhir;
    float tempmutu;
    char tempindex[2];
    int tukar;
    do
    {
        tukar = 0;
        for(c = 0;c<(jumlahdata-1);c++)
        {
            if(mhs[c].akhir < mhs[c+1].akhir)
            {
            tempnim = mhs[c].nim;
            strcpy(tempnama,mhs[c].nama);
            strcpy(tempkelas,mhs[c].kelas);
            tempkelamin = mhs[c].jeniskelamin;
            temptugas = mhs[c].tugas;
            temputs = mhs[c].uts;
            tempuas = mhs[c].uas;
            tempakhir = mhs[c].akhir;
            tempmutu = mhs[c].mutu;
            strcpy(tempindex,mhs[c].index);

            mhs[c].nim = mhs[c+1].nim;
           strcpy(mhs[c].nama,mhs[c+1].nama);
           strcpy(mhs[c].kelas,mhs[c+1].kelas);
           mhs[c].jeniskelamin = mhs[c+1].jeniskelamin;
           mhs[c].tugas = mhs[c+1].tugas;
           mhs[c].uts = mhs[c+1].uts;
           mhs[c].uas = mhs[c+1].uas;
           mhs[c].akhir = mhs[c+1].akhir;
          mhs[c].mutu = mhs[c+1].mutu;
          strcpy(mhs[c].index,mhs[c+1].index);

          mhs[c+1].nim = tempnim;
       strcpy(mhs[c+1].nama,tempnama);
       strcpy(mhs[c+1].kelas,tempkelas);
       mhs[c+1].jeniskelamin = tempkelamin;
       mhs[c+1].tugas = temptugas;
       mhs[c+1].uts = temputs;
       mhs[c+1].uas = tempuas;
       mhs[c+1].akhir = tempakhir;
       mhs[c+1].mutu = tempmutu;
       strcpy(mhs[c+1].index,tempindex);
       tukar = 1;

            }

        }


    }while(tukar == 1);
    for(c = 0;c<jumlahdata;c++)
    {
         printf("URUTAN DATA KE- %d \n",c+1);
        printf("%d\n",mhs[c].nim);
        printf("%s\n",mhs[c].nama);
        printf("%s\n",mhs[c].kelas);
        printf("%c\n",mhs[c].jeniskelamin);
        printf("%f\n",mhs[c].tugas);
        printf("%f\n",mhs[c].uts);
        printf("%f\n",mhs[c].uas);
        printf("%f\n",mhs[c].akhir);
        printf("%f \n",mhs[c].mutu);
        printf("%s \n",mhs[c].index);
    }

}


void insertionsortdecending(int jumlahdata)
{
    int i;
    int sisinim;
    char sisinama[50];
    char sisikelas[10];
    char sisikelamin;
    float sisitugas;
    float sisiuts;
    float sisiuas;
    float sisiakhir;
    float sisimutu;
    char sisiindex[2];
    int j;
    for(i = 1;i<jumlahdata;i++)//DATA SISIP
    {
        sisinim  = mhs[i].nim;//1
        strcpy(sisinama,mhs[i].nama);
        strcpy(sisikelas,mhs[i].kelas);
        sisikelamin = mhs[i].jeniskelamin;
        sisitugas = mhs[i].tugas;
        sisiuts = mhs[i].uts;
        sisiuas = mhs[i].uas;
        sisiakhir = mhs[i].akhir;
        sisimutu = mhs[i].mutu;
        strcpy(sisiindex,mhs[i].index);
        j = i-1;//data sebelumnya//0
        while((sisiakhir  > mhs[j].akhir) && (j>=0)) // misal data ke 0 dibangikan dgn data ke 1
    {
        mhs[j+1].nim = mhs[j].nim;//1
        strcpy(mhs[j+1].nama,mhs[j].nama);
        strcpy(mhs[j+1].kelas,mhs[j].kelas);
        mhs[j+1].jeniskelamin = mhs[j].jeniskelamin;
        mhs[j+1].tugas = mhs[j].tugas;
        mhs[j+1].uts = mhs[j].uts;
        mhs[j+1].uas = mhs[j].uas;
        mhs[j+1].akhir = mhs[j].akhir;
        mhs[j+1].mutu = mhs[j].mutu;
        strcpy(mhs[j+1].index,mhs[j].index);
        j = j-1;//0-1 = -1
    }
        mhs[j+1].nim = sisinim;//-1+1 = 0
        strcpy(mhs[j+1].nama,sisinama);
        strcpy(mhs[j+1].kelas,sisikelas);
        mhs[j+1].jeniskelamin = sisikelamin;
        mhs[j+1].tugas = sisitugas;
        mhs[j+1].uts = sisiuts;
        mhs[j+1].uas = sisiuas;
        mhs[j+1].akhir = sisiakhir;
        mhs[j+1].mutu = sisimutu;
        strcpy(mhs[j+1].index,sisiindex);
        //data ke 1 akan diisi data ke 0
        //data ke 0  diisii data sisip(datake1)


    }
    for(i=0;i<jumlahdata;i++)
    {
        printf("URUTAN DATA KE- %d \n",i+1);
        printf("%d\n",mhs[i].nim);
        printf("%s\n",mhs[i].nama);
        printf("%s\n",mhs[i].kelas);
        printf("%c\n",mhs[i].jeniskelamin);
        printf("%f\n",mhs[i].tugas);
        printf("%f\n",mhs[i].uts);
        printf("%f\n",mhs[i].uas);
        printf("%f\n",mhs[i].akhir);
        printf("%f \n",mhs[i].mutu);
        printf("%s \n",mhs[i].index);

    }

}
void insertionsortaccending(int jumlahdata)
{
    int i;
    int sisinim;
    char sisinama[50];
    char sisikelas[10];
    char sisikelamin;
    float sisitugas;
    float sisiuts;
    float sisiuas;
    float sisiakhir;
    float sisimutu;
    char sisiindex[2];
    int j;
    for(i = 1;i<jumlahdata;i++)
    {
        sisinim  = mhs[i].nim;
        strcpy(sisinama,mhs[i].nama);
        strcpy(sisikelas,mhs[i].kelas);
        sisikelamin = mhs[i].jeniskelamin;
        sisitugas = mhs[i].tugas;
        sisiuts = mhs[i].uts;
        sisiuas = mhs[i].uas;
        sisiakhir = mhs[i].akhir;
        sisimutu = mhs[i].mutu;
        strcpy(sisiindex,mhs[i].index);
        j = i-1;
        while((sisiakhir  < mhs[j].akhir) && (j>=0)) // misal data ke 0 dibangikan dgn data ke 1
    {
        mhs[j+1].nim = mhs[j].nim;
        strcpy(mhs[j+1].nama,mhs[j].nama);
        strcpy(mhs[j+1].kelas,mhs[j].kelas);
        mhs[j+1].jeniskelamin = mhs[j].jeniskelamin;
        mhs[j+1].tugas = mhs[j].tugas;
        mhs[j+1].uts = mhs[j].uts;
        mhs[j+1].uas = mhs[j].uas;
        mhs[j+1].akhir = mhs[j].akhir;
        mhs[j+1].mutu = mhs[j].mutu;
        strcpy(mhs[j+1].index,mhs[j].index);
        j = j-1;
    }
        mhs[j+1].nim = sisinim;
        strcpy(mhs[j+1].nama,sisinama);
        strcpy(mhs[j+1].kelas,sisikelas);
        mhs[j+1].jeniskelamin = sisikelamin;
        mhs[j+1].tugas = sisitugas;
        mhs[j+1].uts = sisiuts;
        mhs[j+1].uas = sisiuas;
        mhs[j+1].akhir = sisiakhir;
        mhs[j+1].mutu = sisimutu;
        strcpy(mhs[j+1].index,sisiindex);


    }
    for(i=0;i<jumlahdata;i++)
    {
        printf("URUTAN DATA KE- %d \n",i+1);
        printf("%d\n",mhs[i].nim);
        printf("%s\n",mhs[i].nama);
        printf("%s\n",mhs[i].kelas);
        printf("%c\n",mhs[i].jeniskelamin);
        printf("%f\n",mhs[i].tugas);
        printf("%f\n",mhs[i].uts);
        printf("%f\n",mhs[i].uas);
        printf("%f\n",mhs[i].akhir);
        printf("%f \n",mhs[i].mutu);
        printf("%s \n",mhs[i].index);

    }

}
void quicksortaccendingpivotpinggir(int l,int r)
{
    int c,v;
    c = l;
    v = r;
   int z;
    int  tempnim;
    char tempnama[50];
    char tempkelas[10];
    char tempkelamin;
    float temptugas;
    float temputs;
    float tempuas;
    int tempakhir;
    float tempmutu;
    char tempindex[2];

    do
    {
        while((mhs[c].akhir < mhs[r].akhir) && (c<=v))
        {
            c = c+1;
        }
        while((mhs[v].akhir > mhs[l].akhir) && (c<=v))
        {
            v = v-1;
        }
        if(c<v)
        {
            tempnim = mhs[c].nim;
            strcpy(tempnama,mhs[c].nama);
            strcpy(tempkelas,mhs[c].kelas);
            tempkelamin = mhs[c].jeniskelamin;
            temptugas = mhs[c].tugas;
            temputs = mhs[c].uts;
            tempuas = mhs[c].uas;
            tempakhir = mhs[c].akhir;
            tempmutu = mhs[c].mutu;
            strcpy(tempindex,mhs[c].index);

            mhs[c].nim = mhs[v].nim;
           strcpy(mhs[c].nama,mhs[v].nama);
           strcpy(mhs[c].kelas,mhs[v].kelas);
           mhs[c].jeniskelamin = mhs[v].jeniskelamin;
           mhs[c].tugas = mhs[v].tugas;
           mhs[c].uts = mhs[v].uts;
           mhs[c].uas = mhs[v].uas;
           mhs[c].akhir = mhs[v].akhir;
          mhs[c].mutu = mhs[v].mutu;
          strcpy(mhs[c].index,mhs[v].index);

          mhs[v].nim = tempnim;
       strcpy(mhs[v].nama,tempnama);
       strcpy(mhs[v].kelas,tempkelas);
       mhs[v].jeniskelamin = tempkelamin;
       mhs[v].tugas = temptugas;
       mhs[v].uts = temputs;
       mhs[v].uas = tempuas;
       mhs[v].akhir = tempakhir;
       mhs[v].mutu = tempmutu;
       strcpy(mhs[v].index,tempindex);
       c = c+1;
       v = v-1;
        }
    }while(c<=v);
    if(l<v)
    {
        quicksortaccendingpivotpinggir(l,v);

    }
    if(c<r)
    {
        quicksortaccendingpivotpinggir(c,r);
    }
}
void quicksortdecendingpivotpinggir(int l,int r)
{
    int c,v;
    c = l;
    v = r;
   int z;
    int  tempnim;
    char tempnama[50];
    char tempkelas[10];
    char tempkelamin;
    float temptugas;
    float temputs;
    float tempuas;
    int tempakhir;
    float tempmutu;
    char tempindex[2];

    do
    {
        while((mhs[c].akhir > mhs[r].akhir) && (c<=v))
        {
            c = c+1;
        }
        while((mhs[v].akhir < mhs[l].akhir) && (c<=v))
        {
            v = v-1;
        }
        if(c<v)
        {
            tempnim = mhs[c].nim;
            strcpy(tempnama,mhs[c].nama);
            strcpy(tempkelas,mhs[c].kelas);
            tempkelamin = mhs[c].jeniskelamin;
            temptugas = mhs[c].tugas;
            temputs = mhs[c].uts;
            tempuas = mhs[c].uas;
            tempakhir = mhs[c].akhir;
            tempmutu = mhs[c].mutu;
            strcpy(tempindex,mhs[c].index);

            mhs[c].nim = mhs[v].nim;
           strcpy(mhs[c].nama,mhs[v].nama);
           strcpy(mhs[c].kelas,mhs[v].kelas);
           mhs[c].jeniskelamin = mhs[v].jeniskelamin;
           mhs[c].tugas = mhs[v].tugas;
           mhs[c].uts = mhs[v].uts;
           mhs[c].uas = mhs[v].uas;
           mhs[c].akhir = mhs[v].akhir;
          mhs[c].mutu = mhs[v].mutu;
          strcpy(mhs[c].index,mhs[v].index);

          mhs[v].nim = tempnim;
       strcpy(mhs[v].nama,tempnama);
       strcpy(mhs[v].kelas,tempkelas);
       mhs[v].jeniskelamin = tempkelamin;
       mhs[v].tugas = temptugas;
       mhs[v].uts = temputs;
       mhs[v].uas = tempuas;
       mhs[v].akhir = tempakhir;
       mhs[v].mutu = tempmutu;
       strcpy(mhs[v].index,tempindex);
       c = c+1;
       v = v-1;
        }
    }while(c<=v);
    if(l<v)
    {
        quicksortdecendingpivotpinggir(l,v);

    }
    if(c<r)
    {
        quicksortdecendingpivotpinggir(c,r);
    }
}
void printbantu()
{
    for(i = 0;i<q;i++)
    {
         printf("URUTAN DATA KE- %d \n",i+1);
        printf("%d\n",mhs[i].nim);
        printf("%s\n",mhs[i].nama);
        printf("%s\n",mhs[i].kelas);
        printf("%c\n",mhs[i].jeniskelamin);
        printf("%f\n",mhs[i].tugas);
        printf("%f\n",mhs[i].uts);
        printf("%f\n",mhs[i].uas);
        printf("%f\n",mhs[i].akhir);
        printf("%f \n",mhs[i].mutu);
        printf("%s \n",mhs[i].index);
    }




}
void quicksortaccendingpivottengah(int l,int r)
{
    int c,v;
    c = l;
    v = r;
    int pt;
    pt = mhs[(l+r)/2].akhir;

    int  tempnim;
    char tempnama[50];
    char tempkelas[10];
    char tempkelamin;
    float temptugas;
    float temputs;
    float tempuas;
    int tempakhir;
    float tempmutu;
    char tempindex[2];


    do
    {
        while((mhs[c].akhir < pt) && (c<=v))
        {
            c = c+1;
        }
        while((mhs[v].akhir > pt) && (c<=v))
        {
            v = v-1;
        }
        if(c<v)
        {
            tempnim = mhs[c].nim;
            strcpy(tempnama,mhs[c].nama);
            strcpy(tempkelas,mhs[c].kelas);
            tempkelamin = mhs[c].jeniskelamin;
            temptugas = mhs[c].tugas;
            temputs = mhs[c].uts;
            tempuas = mhs[c].uas;
            tempakhir = mhs[c].akhir;
            tempmutu = mhs[c].mutu;
            strcpy(tempindex,mhs[c].index);

            mhs[c].nim = mhs[v].nim;
           strcpy(mhs[c].nama,mhs[v].nama);
           strcpy(mhs[c].kelas,mhs[v].kelas);
           mhs[c].jeniskelamin = mhs[v].jeniskelamin;
           mhs[c].tugas = mhs[v].tugas;
           mhs[c].uts = mhs[v].uts;
           mhs[c].uas = mhs[v].uas;
           mhs[c].akhir = mhs[v].akhir;
          mhs[c].mutu = mhs[v].mutu;
          strcpy(mhs[c].index,mhs[v].index);

          mhs[v].nim = tempnim;
       strcpy(mhs[v].nama,tempnama);
       strcpy(mhs[v].kelas,tempkelas);
       mhs[v].jeniskelamin = tempkelamin;
       mhs[v].tugas = temptugas;
       mhs[v].uts = temputs;
       mhs[v].uas = tempuas;
       mhs[v].akhir = tempakhir;
       mhs[v].mutu = tempmutu;
       strcpy(mhs[v].index,tempindex);
       c = c+1;
       v = v-1;
        }
    }while(c<v);
    if((l<v)&&(v<r)&&(i != v))
    {
        quicksortaccendingpivottengah(l,v);

    }
    if((c<r) && (c>l))
    {
        quicksortaccendingpivottengah(c,r);
    }
}
void quicksortdecendingpivottengah(int l,int r)
{
    int c,v;
    c = l;
    v = r;
    int pt;
    pt = mhs[(l+r)/2].akhir;

    int  tempnim;
    char tempnama[50];
    char tempkelas[10];
    char tempkelamin;
    float temptugas;
    float temputs;
    float tempuas;
    int tempakhir;
    float tempmutu;
    char tempindex[2];


    do
    {
        while((mhs[c].akhir > pt) && (c<=v))
        {
            c = c+1;
        }
        while((mhs[v].akhir < pt) && (c<=v))
        {
            v = v-1;
        }
        if(c<v)
        {
            tempnim = mhs[c].nim;
            strcpy(tempnama,mhs[c].nama);
            strcpy(tempkelas,mhs[c].kelas);
            tempkelamin = mhs[c].jeniskelamin;
            temptugas = mhs[c].tugas;
            temputs = mhs[c].uts;
            tempuas = mhs[c].uas;
            tempakhir = mhs[c].akhir;
            tempmutu = mhs[c].mutu;
            strcpy(tempindex,mhs[c].index);

            mhs[c].nim = mhs[v].nim;
           strcpy(mhs[c].nama,mhs[v].nama);
           strcpy(mhs[c].kelas,mhs[v].kelas);
           mhs[c].jeniskelamin = mhs[v].jeniskelamin;
           mhs[c].tugas = mhs[v].tugas;
           mhs[c].uts = mhs[v].uts;
           mhs[c].uas = mhs[v].uas;
           mhs[c].akhir = mhs[v].akhir;
          mhs[c].mutu = mhs[v].mutu;
          strcpy(mhs[c].index,mhs[v].index);

          mhs[v].nim = tempnim;
       strcpy(mhs[v].nama,tempnama);
       strcpy(mhs[v].kelas,tempkelas);
       mhs[v].jeniskelamin = tempkelamin;
       mhs[v].tugas = temptugas;
       mhs[v].uts = temputs;
       mhs[v].uas = tempuas;
       mhs[v].akhir = tempakhir;
       mhs[v].mutu = tempmutu;
       strcpy(mhs[v].index,tempindex);
       c = c+1;
       v = v-1;
        }
    }while(c<v);
    if((l<v)&&(v<r)&&(i != v))
    {
        quicksortdecendingpivottengah(l,v);

    }
    if((c<r) && (c>l))
    {
        quicksortdecendingpivottengah(c,r);
    }
}
int  sequentialsearch(int nimcari,int q)
{

    int ketemu = 0;
    u = 0;
    while(ketemu == 0 && u < q)
    {
        if(mhs[u].nim == nimcari)
        {
            ketemu = 1;


        }else
        {

            u++;
        }

    }
    return ketemu;
}
void selectionssortacendinguntuknim(int jumlahdata)
{
    int c;//PENGULANGAN
    int v;
    int  tempnim;
    char tempnama[50];
    char tempkelas[10];
    char tempkelamin;
    float temptugas;
    float temputs;
    float tempuas;
    int tempakhir;
    float tempmutu;
    char tempindex[2];
    int minIndex;

    for(c = 0;c<(jumlahdata-1);c++)//dari index ke 0 sampai ke jumlah-1-1
    {

        minIndex = c;

        for(v = (c+1);v<jumlahdata;v++)//index 1 sampai jmlh data -1
        {
            if(mhs[minIndex].nim>mhs[v].nim)
            {
                minIndex = v;
            }
        }
       tempnim = mhs[c].nim;
       strcpy(tempnama,mhs[c].nama);
       strcpy(tempkelas,mhs[c].kelas);
       tempkelamin = mhs[c].jeniskelamin;
       temptugas = mhs[c].tugas;
       temputs = mhs[c].uts;
       tempuas = mhs[c].uas;
       tempakhir = mhs[c].akhir;
       tempmutu = mhs[c].mutu;
       strcpy(tempindex,mhs[c].index);

       mhs[c].nim = mhs[minIndex].nim;
       strcpy(mhs[c].nama,mhs[minIndex].nama);
       strcpy(mhs[c].kelas,mhs[minIndex].kelas);
       mhs[c].jeniskelamin = mhs[minIndex].jeniskelamin;
       mhs[c].tugas = mhs[minIndex].tugas;
       mhs[c].uts = mhs[minIndex].uts;
        mhs[c].uas = mhs[minIndex].uas;
        mhs[c].akhir = mhs[minIndex].akhir;
       mhs[c].mutu = mhs[minIndex].mutu;
       strcpy(mhs[c].index,mhs[minIndex].index);

       mhs[minIndex].nim = tempnim;
       strcpy(mhs[minIndex].nama,tempnama);
       strcpy(mhs[minIndex].kelas,tempkelas);
       mhs[minIndex].jeniskelamin = tempkelamin;
       mhs[minIndex].tugas = temptugas;
       mhs[minIndex].uts = temputs;
       mhs[minIndex].uas = tempuas;
       mhs[minIndex].akhir = tempakhir;
       mhs[minIndex].mutu = tempmutu;
       strcpy(mhs[minIndex].index,tempindex);
    }


}
int  binarysearch(int cari, int jumlahdata)
{
   int f = 0;//BATAS KIRI
   int l = (jumlahdata-1);//BATAS KANAN
   k = (int) (f+l)/2;//tengah index tengah
   int ketemu = 0;//boolean ketemy
    while(ketemu == 0 && f<=l)
    {
        if(mhs[k].nim == cari)
        {

            ketemu = 1;
        }else
        {

            if(mhs[k].nim < cari)
            {
                f = k+1;//batas kiri
            }else
            {
                l = k-1;//batas kanan
            }
        }
    }
    return ketemu;

}
int main()
{



        char jawaban;
        int terkecil;
        int terbesar;

        int total;


        printf("************************************************");
        printf("\n");
        printf("********** Program Nilai Akhir Siswa ***********");
        printf("\n");
        printf("Johannes Alexander Putra, 2002895, Johannesap@upi.edu");
        printf("\n");
        int jml_akhir = 0;


        if(menu() == 1)
        {
            q = 0;
            do
        {


            printf("********* Masukan Data Mahasiswa Ke - %d *******",q+1);
            printf("\n");
            printf("Masukan NIM Mahasiswa :");scanf("%d",&mhs[q].nim);
            getchar() != 0;
            printf("Masukan Nama Mahasiswa :");scanf("%[^\n]%*c",mhs[q].nama);

            printf("Masukan kelas Mahasiswa :");scanf("%[^\n]%*c",mhs[q].kelas);
            printf("Masukan Jenis Kelamin Mahasiswa isi (L/P):");scanf("%c",&mhs[q].jeniskelamin);
            getchar() != 0;
            printf("Masukan nilai tugas mahasiswa: ");scanf("%f",&mhs[q].tugas);
            printf("Masukan nilai UTS mahasiswa: ");scanf("%f",&mhs[q].uts);
            printf("Masukan nilai UAS mahasiswa: ");scanf("%f",&mhs[q].uas);
            printf("\n");
            mhs[q].akhir=(mhs[q].tugas*30/100)+(mhs[q].uts*30/100)+(mhs[q].uas*40/100);
            if((mhs[q].akhir<=100) && (mhs[q].akhir>=92)){
						strcpy(mhs[q].index, "A");
						mhs[q].mutu=4.0;
					}else if((mhs[q].akhir<=91) && (mhs[q].akhir>=86)){
						strcpy(mhs[q].index, "A-");
						mhs[q].mutu=3.7;
					}else if((mhs[q].akhir<=85) && (mhs[q].akhir>=81)){
						strcpy(mhs[q].index, "B+");
						mhs[q].mutu=3.4;
					}else if((mhs[q].akhir<=80) && (mhs[q].akhir>=76)){
						strcpy(mhs[q].index, "B");
						mhs[q].mutu=3.0;
					}else if((mhs[q].akhir<=75) && (mhs[q].akhir>=71)){
						strcpy(mhs[q].index, "B-");
						mhs[i].mutu=2.7;
					}else if((mhs[q].akhir<=70) && (mhs[q].akhir>=66)){
						strcpy(mhs[q].index, "C+");
						mhs[q].mutu=2.4;
					}else if((mhs[q].akhir<=65) && (mhs[q].akhir>=60)){
						strcpy(mhs[q].index, "C");
						mhs[q].mutu=2.0;
					}else if((mhs[q].akhir<=59) && (mhs[q].akhir>=55)){
						strcpy(mhs[q].index, "D");
						mhs[q].mutu=1.0;
					}else if(mhs[q].akhir<55){
						strcpy(mhs[q].index, "E");
						mhs[q].mutu=0.99;
					}

            printf("Ingin menambah data lagi? Tekan (Y/N) dan enter \n");
            getchar() != 0;
            scanf("%c",&jawaban);
            jml_akhir += mhs[q].akhir;

            q++;



        }while(jawaban == 'Y');


        tampilkan();
        printf("\n");


        printf("***************************Nilai Terbesar*************************** \n ");
       terbesar = besar(q);
       printf("%d",terbesar);
       printf("\n");
       printf("***************************Nilai Terkecil*************************** \n");
       terkecil = kecil(q);
       printf("%d",terkecil);
       printf("\n");
       printf("***************************Nilai Rata-rata*************************** \n");
       total = rata(jml_akhir,q);
       printf("%d",total);
       printf("\n");






 int pilihansort;


           printf("Masukan menu pilihan sort : \n");
           printf("1. Sorting Accending dan Decending pakai selection \n");
           printf("2. sorting accending dan Decending  pakai insertion \n");
           printf("3. sorting accending dan Decending  pakai bubble sort \n");
           printf("4. sorting accending dan Decending  pakai Quick Sort \n");
           printf("5. sorting accending dan decending pakai quick sort (tengah) \n");
           printf("Masukan pilihan cari : \n");
           printf("6. Cari dengan Sequential Search \n");
           printf("7. cari dengan Binary search \n");
           printf("8.exit \n");


           scanf("%d",&pilihansort);
           switch(pilihansort)
           {


           case 1:
           printf("***************************Sorting nilai akhir secara Accending mengunakan selection sort*************************** \n");
           selectionssortacending(q);
           printf("\n");
           printf("***************************Sorting nilai akhir secara Decending mengunakan selection sort*************************** \n");
           selectionssortdecending(q);
           printf("\n");
           break;
           case 2:
           printf("***************************Sorting nilai akhir secara Ascending mengunakan insertion sort sort*************************** \n");
           insertionsortaccending(q);
           printf("\n");
           printf("***************************Sorting nilai akhir secara Decending mengunakan insertion sort*************************** \n");
           insertionsortdecending(q);
           printf("\n");
           break;
           case 3:
            printf("***************************Sorting nilai akhir secara ascending mengunakan insertion buble sort*************************** \n");
            bublesortascending(q);
           printf("\n");
           printf("***************************Sorting nilai akhir secara descending mengunakan insertion buble sort*************************** \n");
           bublesortdesending(q);
           printf("\n");
           break;
           case 4:
           printf("***************************Sorting nilai akhir secara ascending mengunakan pivot pingir - quick sort*************************** \n");
           quicksortaccendingpivotpinggir(0,q-1);
           printbantu();
           printf("\n");
           printf("***************************Sorting nilai akhir secara decending  mengunakan pivot pingir - quick sort*************************** \n");
           quicksortdecendingpivotpinggir(0,q-1);
           printbantu();
           printf("\n");
           break;
           case 5:
            printf("***************************Sorting nilai akhir secara ascending mengunakan pivot tengah - quick sort*************************** \n");
           quicksortaccendingpivottengah(0,q-1);
           printbantu();
           printf("\n");
           printf("***************************Sorting nilai akhir secara decending mengunakan pivot tengah - quick sort*************************** \n");
           quicksortdecendingpivottengah(0,q-1);
           printbantu();
           printf("\n");
           break;
           case 6:
            printf("***************************Cari dengan sequential *************************** \n");
            int cari;
            printf("masukan NIM MHS yang hendak dicari  : \n");
            scanf("%d",&cari);
            if(sequentialsearch(cari,q) == 1)
            {
                printf(" Data ada pada index ke -%d \n",u+1);
                printf("NIM : %d \n",mhs[u].nim);
                printf("Nama : %s \n",mhs[u].nama);
                printf("Kelas : %s \n",mhs[u].kelas);
                printf("Nilai Tugas : %f\n",mhs[u].tugas);
                printf("Nilai UTS : %f\n",mhs[u].uts);
                printf("Nilai UAS : %f\n",mhs[u].uas);
                printf("Nilai Nilai akhir : %f\n",mhs[u].akhir);
                printf("Nilai mutu : %f\n",mhs[u].mutu);
                printf("Nilai Index : %s\n",mhs[u].index);

            }else
            {

                printf("Mohon Maaf data tidak ditemukan dalam index silahkan dicari lagi \n");
            }
              break;
           case 7:
            printf("***************************Cari dengan Binary *************************** \n");
            int cari1;
            printf("masukan NIM MHS yang hendak dicari  : \n");
            scanf("%d",&cari1);
            selectionssortacendinguntuknim(q);
            if(binarysearch(cari1,q) == 1)
            {
                printf(" Data ada pada index ke -%d \n",k+1);
                printf("NIM : %d \n",mhs[k].nim);
                printf("Nama : %s \n",mhs[k].nama);
                printf("Kelas : %s \n",mhs[k].kelas);
                printf("Nilai Tugas : %f\n",mhs[k].tugas);
                printf("Nilai UTS : %f\n",mhs[k].uts);
                printf("Nilai UAS : %f\n",mhs[k].uas);
                printf("Nilai Nilai akhir : %f\n",mhs[k].akhir);
                printf("Nilai mutu : %f\n",mhs[k].mutu);
                printf("Nilai Index : %s\n",mhs[k].index);


            }else
            {

               printf("Mohon Maaf data tidak ditemukan dalam index silahkan dicari lagi \n");
            }



           }


       printf("***************** Copyright @ 2021 **************");



return 0;







    }
    }
