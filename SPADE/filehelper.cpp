#include "filehelper.h"

FileHelper::FileHelper()
{

}

void FileHelper::writeSequencesToFile(const string &fileName, const vector<Sequence*>& sequences){
    ofstream f = ofstream(fileName);
    for(Sequence* s:sequences){
        f<<s->printSequence()<<endl;
    }
    f.close();
}

void FileHelper::writeEncodedSequencesToFile(const string& fileName, const vector<Sequence*>& sequences,
                                             const unordered_map<unsigned int, string>& codeToName){
    ofstream f = ofstream(fileName);
    for(Sequence* s:sequences){
        f<<s->printEncodedSequence(codeToName)<<endl;
    }
    f.close();
}

void FileHelper::writeCodeToNameMapToFile(const string& fileName, const unordered_map<unsigned int, string>& codeToName){
    ofstream f = ofstream(fileName);
    for(auto code:codeToName){
        f<<to_string(code.first)<<"\t"<<code.second<<endl;
    }
    f.close();
}

unordered_map<string, unsigned int> FileHelper::readNameToCodeMap(const string& fileName){

}
