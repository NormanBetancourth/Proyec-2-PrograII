//
// Created by norma on 23/5/2021.
//
#include "lib/nlohmann/json.hpp"
#include"Patient.h"
#include"CSVReader.h"
#include"CSVWriter.h"
#include "ICSVTransformer.h"
using nlohmann::json;

//Se crea el archivo pero no carga la info jeje
//Falta el reader que en eso estoy tambien

int main() {
    IWriter<Patient*>* writer= new CSVWriter<Patient*>("pruebaowo.csv", new PatientCSVTransformer() );
    auto *pa1 = new Patient("Rebe", "123", "ABC");
    auto *pa2 = new Patient("Norman", "456", "DEF");


    writer->write(pa1);
    writer->write(pa2);

    delete pa1;
    delete pa2;
    delete writer;

    //IReader<Patient>* reader = new CSVReader<Patient>("CadenaADN-Pacientes.csv");


    /**
    Patient* pat1 = new Patient("May Mueller","1", "TCGGCGTATAGCTAACTTGCAGGGACGGCTGGGCCCACGTTGCAACTCCTAGATGGCTGGCATCCTCTGAGGTTTGCACTCTAACGTGTCACCGTACTCGATAATCACGTCCTACACCCCCGCTTAGAAGGATAATCTCTAACGGACAAACAGGTGTCACATCATAAAATGTTCGGAAAGACAACTGTGCGATGTAGATGATTGGAACGTCGTTCCGAGCAAGGTTTTTACTAATACCCACCGTTACCCATCGCGAAGCTAGCGTTTGACATGATGTTGTCACTACCTAACCACATGCTGATGTTATCAGTCCAAGTCTGCTGGGCCAGCTCTCCAACAATAAGGCTTTAGATTTACTTCCCTCGCCCCAGTAAGGCTTCGCGGGGGAGCGACGTAGTCC",
                                nullptr);
    Patient* pat2 = new Patient("Declan Obrien","2", "GACGTGAGAACGACCGCTTCGCGGAATTACCGGCATTGTGAGCTCGGCAGCCCGGACATCCCTCGTACGTCACAGGTGAGTACCATACCCTGTCACCCGGGGGTCTTGAATGTCAAGTAAGGGTGTTGGACTATGCCTGCAACCTGCCTGTCGTCTTAACTAGAGTCATGCCCGCTGTCACTTAGTCCGACGTTCTAACCTTGGCCGGCTTCGATTTCAATTTCACCGGTCGGTAGCATGCTTCCGCTACCGCAAAGCTCACCGAATGTTATTTCGCGGATATGACTTCACGGTACAGCTGGTTTCCGGCGATGCTTAGTTCCCTGGAAAACTACAAAGTTATATAAGTGCACTTCGGCCAGAATACGTAGCTTATAGAAACCTATTTGGTTCTAAGTGA",
                                nullptr);
    Patient* pat3 = new Patient("Shaine Irwin","2", "AAACCGCAGGTCCCCACATTGTCTGAACTAGTCTAGGCGGAATGATCACGTGTTTGGCAAGTACTTCATGAGTCCGCTTTCAGAAGAATCGAGCACCGAGCGCTCAGGTCAAAAAGGCACCGGACATAGCCCGCACACTGCCAACGACTTAGCGGATGGCCTAGTCGCGTGACCGGTGTGGGTGGCATACTCCCACTGCTGCGGTTCGGATCTACCCTCCCGCATTAACACACGAGAGTAACGTGTGTAGTGGTAAATCACCCCAGATAGGAAGTCCGGTCTGCTGGCAGTTCACTACCTTTCCTCCAATGTTTGATTCTCGGGGCTCTATCCAGAACGACCCATCACCTGTGTGTTACAGAGAGTTCTAGCAGAAACGACGGGGTGGCACGACTTTGGG",
                                nullptr);
    Patient* pat4 = new Patient("Zena Powers","3", "TATGAATCTCTCCTGAGACTTATAGATACCAGCTATATCATAACTCCTTGGAACGACCTTGCCTTCCCGGAGAGGAGAACGAGACCTCTAAAAAGGATGCACTCGACGAGCTACTGTCCGACCCTCGCCCAGGTTTACTATTCGTAAACCGGGTCAAAATCTCATCTAGAAGAGGTAACGAGGGTGGGGAACCCGATCGGTCTGGTACGCATGGGGTAGCGATAAAACCGTTGAGCGTATTATTCATTTTAGTACTGTGCGGTGCGTACTGAGAGACTACGGCTGTATCGGTAACGATGCCGGAGACCTGTTGTATGCGACCTATCTCCCCCACCGGCCTCTCCAACCTGAAAAAAGTGCACCAAGGTGTACCGAGTACGGGAAACAACAACACCAAGTT",
                                nullptr);
    Patient* pat5 = new Patient("Ila Waters","4", "CTCGTTTGGCTGGGTAACTCTAGTTAGATCCTGATAAGGCTCGCCGAATTGACTCCATGCATCCCCGACAGTCACAGAAGTTGGGCACGCGCCCCTGTGACCACCGCCTTTCTATTTACTCCGCGGGCATAGCCCCAGAATCTAGATCACAGAGTGCGATGTGGACCGTGCGACGGATCTCTTAGAGCGAGACACTGTGTTCAACACGCATCCTACTCTGTACTCATTCACGGCTCCCCCAACCTGGCTCTTAAAGACCGACACGGTTGACAGGTTGACCATGAAAACCGCATCCCGTATTTCAAAGGCATGGAAAACACATAACGTAGCCAAGATTTGTGTTTTAGCCAGTTTTAACTGTCAAGTATACCTACAAAGGGGGAACCTGACTGGGGCTACT",
                                nullptr);
    Patient* pat6 = new Patient("Abel Compton","5", "CGTTTTGTACAGTTATCAGGAGCCGGCGTTAAGGGGAAAAACTTCTCATTTTTTCTGGCATCTCGTGTAAAGGTGTATAGTGCTTACAGCCCTTTAAGACCGGAGTGAGCGCGTGATATGCGCTGTAACAAGACTCGTGGCACCCTATGTAGATGTTACCGCGAGTGGTATCAAGAGTCGCGACCGGACATCGTCCTTGCAATGCGAGCGCGGCCGATACTTCGATACCTGGATCTCCGTCCATAGATAAGTGCTGCCATTTTTATAAAAAGGGACAGAAGCACGATTACCGAACATGTACCTTCCTTACCTCGCATATAGCACTACGAGGACTGGATTACTACAATCAAAGCCGATCCTAGAATAGCAGATAATCTATAGTGCTGAGAGTTATACATCT",
                                nullptr);
    Patient* pat7 = new Patient("Elliott Henson","6", "AAATAGTATACAGAATACCAACAAGTTTGCGGTCTGGTAGCTACGTGTGTAACAATAAGGGAGATCAGGTAGAGGCATATCCATACCTCATGCCTAAAGTCGTTTACACTTAAAGTCTTGGCCACCTCAACTGAGTGCCGGAAAAATGTAACGGGTGAAAGATAGGTTGGATGAGCAGTGTGCACTATCACTGCCCGTTGACTTTCATATAGTGGCACAATGAGCATATTCAGTTGGTCTCGCCATTGGTTCATTAGTCGGTTATAAACTCCGCCACTGTTAATTTCATAGAGTCTTTCGTCGACGTTCGGCCGTATGGATGACGTGTCCTCCGATCAATTGAACTTCAGTTGGTGTAAGCAAACAGAGAGCTCTAGCAATAAGCGAGCACTACGGAGGA",
                                nullptr);
    Patient* pat8 = new Patient("Eugenia Phelps","7", "GTGGACAATGTATAATCAATATTGTTCCAATCGGGGCTCGTAACGTCACGGATATCGAAGTAACGTGCCGTCTGACCACCAGAATGGGTTCTGCCTATGCGGAGCGTATGTTTAATTCCAGATTGTCCCATCGATATCCCCAGGGATGGATATACAATAAGGTTAGGCCCGACCTGTCAGGACGAGCGCTACAGCACTCCGGAATCAGCTTGGGTTGTTGTTGACTTATATCATTACTGGACGTAATATGCTTTGCAGACAGACGATCCATTACTCGGTACAAGTATCTCCGGGGGCGGAGTGACCCTAAAATGCAAGTTATTGATAATTCGAGTTTAAGCCTGTTATCTCAGTAGATGGTAGCCAGTGGGCAGTAGCTTCCGCAACCTGGCCTAAACTA",
                                nullptr);

    Disease *dis1= new Disease("Cancer","CGTTTA");
    Disease *dis2= new Disease("Daltonismo","GAGCATCT");
    Disease *dis3= new Disease("Dermatitis","TCTATG");
    Disease *dis4= new Disease("Diabetes","TCATG");
    Disease *dis5= new Disease("Escoliosis","TATTGC");
    Disease *dis6= new Disease("Fiebre Amarilla","AGTCTT");
    Disease *dis7= new Disease("Galactorrea","CGTTTA");
    Disease *dis8= new Disease("Gastritis","ATTACG");
    Disease *dis9= new Disease("Hantavirus","GTACATCG");
    Disease *dis10= new Disease("Ictus Insomnio","CGATTAGC");
    Disease *dis11= new Disease("Insuficiencia Renal","ATCAG");
    Disease *dis12= new Disease("Leucemia","ATCATGG");
    Disease *dis13= new Disease("Lupus","GGAAC");
    Disease *dis14= new Disease("Melanoma","CACGT");
    Disease *dis15= new Disease("Meningitis","TTGCAT");
    Disease *dis16= new Disease("Microcefalia","CTGTA");
    Disease *dis17= new Disease("Neurofibromatosis","GTACT");
    Disease *dis18= new Disease("Oncocercosis","GTACATG");

    ArrayTemplate<Patient>* PatientColection = new ArrayTemplate<Patient>(1);
    ArrayTemplate<Disease>* DiseaseColection = new ArrayTemplate<Disease>(-1);

    PatientColection->addObject(pat1);
    PatientColection->addObject(pat2);
    PatientColection->addObject(pat3);
    PatientColection->addObject(pat4);
    PatientColection->addObject(pat5);
    PatientColection->addObject(pat6);
    PatientColection->addObject(pat7);
    PatientColection->addObject(pat8);

    DiseaseColection->addObject(dis1);
    DiseaseColection->addObject(dis2);
    DiseaseColection->addObject(dis3);
    DiseaseColection->addObject(dis4);
    DiseaseColection->addObject(dis5);
    DiseaseColection->addObject(dis6);
    DiseaseColection->addObject(dis7);
    DiseaseColection->addObject(dis8);
    DiseaseColection->addObject(dis9);
    DiseaseColection->addObject(dis10);
    DiseaseColection->addObject(dis11);
    DiseaseColection->addObject(dis12);
    DiseaseColection->addObject(dis13);
    DiseaseColection->addObject(dis14);
    DiseaseColection->addObject(dis15);
    DiseaseColection->addObject(dis16);
    DiseaseColection->addObject(dis17);
    DiseaseColection->addObject(dis18);

    cout<< PatientColection->toStringVector();
    cout<< DiseaseColection->toStringVector();
     **/
    /*
    auto* p1 = new Patient{"Rebe", "123", "ABC"};
    auto* p2 = new Patient{"Norman", "456", "DEF"};



    delete p1;
    delete p2;
     */

    /**
    ArrayTemplate<Patient>*P= new ArrayTemplate<Patient>(100);
    P=Saver_Loader::PatientLoader();
    cout<<P->toStringVector();

    string *dis = nullptr;
    dis = new string[5];

    for(int i=0;i<5;i++){
        dis[i] = "";
    }

    dis[0]= "Cancer";
    dis[1] = "Diabetes";

    ArrayTemplate<Patient> miA(0);
    cout << "\nSize: " << miA.getSize();

    Patient* pat1 = new Patient("Rebe","123", "ABC");
    Patient* pat2 = new Patient("Norman","456", "DEF");

    pat1->setDiseaseArray(dis);

    cout << pat1->toStringDeseases();
    miA.addObject(pat1);
    miA.addObject(pat2);

    cout <<miA.toStringVector();

     */

    return 0;
}

