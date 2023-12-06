#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main(int argc, char** argv) {

        while(true){
                std::ifstream ifs("signal");
                std::stringstream datas;
                datas << ifs.rdbuf();
                ifs.close();


                std::string data = datas.str();

                std::cout << datas.str();
                std::cout.flush();
        }

}

