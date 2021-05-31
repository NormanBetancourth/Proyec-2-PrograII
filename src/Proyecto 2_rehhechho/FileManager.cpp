//
// Created by rebec on 29/5/2021.
//

#include "FileManager.h"
#include<string>
#include <fstream>

/*
 TODO:probar este formato para to_json en lugar del for
 for(const char& di : *patient->getDiseaseArray()) {
                jDisease["DiseaseName"] = aux[dis];
            }

  formato alternativo de la ultima parte ... no lo termine de probar
   j = json{
            { "Name",         patient->getName() },
            { "Id",           patient->getId() },
            { "ADNsequence", patient->getADNsequence() },
    };


 */

//se sobreescribe
void to_json(json& j, const Patient* patient){
    string * aux = patient->getDiseaseArray();
    json jDisease = json::object();
    auto jDiseaseArray = json::array();

    // this method is necessary to serialize tha information from the vector
        for(int dis =0; dis < aux->length(); dis++) {
            jDisease["DiseaseName"] = aux[dis];
            //jDisease["ADNsequence"] = aux[dis];
            jDiseaseArray.push_back(jDisease);
        }

    j["Name"] = patient->getName();
    j["Id"] = patient->getId();
    j["ADNsequence"] = patient->getADNsequence();
}

void from_json(const json &j, Patient* patient){
    char dis ='\0';
    auto* aux = new string[SIZE2];
    json diseaseData = j["SusceptibleDiseases"]; //TODO probar si permite espacios en el nombre de la llave owo

    // this method is necessary to deserialize tha information from the vector
    for(auto& data: diseaseData){
        dis;
        aux->push_back(dis);
    }

    patient->setName(j.at("Name").get<string>());
    patient->setId(j.at("Id").get<string>());
    patient->setADNsequence(j.at("ADNsequence").get<string>());
    patient->setDiseaseArray(aux);
}

string FileManager::serialize(const ArrayTemplate<Patient>& patientArray) {
    //no sé porque da error aca hmmm
   //json jsonData = (patientArray);

   json jsonData; //esta linea no va pero pa que no salga error
   string jsonArray = jsonData.dump();
   return jsonArray;
   return "";
}

ArrayTemplate<Patient> FileManager::deserialize(const string &data) {
    json jsonData = json::parse(data);

    //tambien da error aca
    //ArrayTemplate<Patient> patientArray = jsonData;
   // return patientArray;

    //return ArrayTemplate<Patient>(0);
}

void FileManager::save(const string& jsonData, const string &filename) {
    ofstream file (filename, ofstream::out);
    file << jsonData;
    file.close();
}

string FileManager::read(const string &filename) {
    string txtContent;

    try {
        std::ifstream file (filename);
        file.exceptions ( ifstream::failbit | ifstream::badbit );

        stringstream buffer;
        buffer << file.rdbuf();
        std::string fileContent(buffer.str());
        txtContent = fileContent;
    }
    catch (ifstream::failure e) {
        throw std::runtime_error("Exception opening/reading/closing file");
    }
    return txtContent;
}


