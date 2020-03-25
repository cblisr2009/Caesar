//
//  caesar.cpp
//  Caesar
//
//  Created by Cortney Bramlett on 3/10/20.
//

#include "caesar.hpp"
#include "tinyxml2.cpp"
#include "tinyxml2.h"
#include <iostream>
#include <string>
#include <vector>

using namespace tinyxml2;
using namespace std;
struct Document
{

std::vector<std::string> speakers;
std::vector<std::string> lines;
};
static std:: string getElementText (XMLElement * _element);
static std::vector<std::string> getTextlist(XMLElement * _element);

int main(int argc, const char * argv[])

{

    XMLDocument *doc = new XMLDocument();
doc->LoadFile("j_caesar.xml");
    
//
//    This runs and prints nothing
//    for(tinyxml2::XMLElement* child = doc->FirstChildElement("PLAY")->FirstChildElement("TITLE");
//        child != 0; child = child->NextSiblingElement())
//    {
//        if(child->Attribute("ACT"))
//            std::cout << "ACT = "   << child->Attribute("ACT")     << std::endl;
//        if(child->ToElement()->Attribute("SCENE"))
//            std::cout << "SCENE = "     << child->ToElement()->Attribute("SCENE")   << std::endl;
//        if(child->ToElement()->Attribute("SPEECH"))
//            std::cout << "SPEECH = "    << child->ToElement()->Attribute("SPEECH")  << std::endl;
//        if(child->ToElement()->Attribute("SPEAKER"))
//            std::cout << "SPEAKER = "   << child->ToElement()->Attribute("SPEAKER")   << std::endl;
//        if(child->ToElement()->Attribute("LINE"))
//            std::cout << "LINE = "  << child->ToElement()->Attribute("LINE")    << std::endl;
//
//    }
if(doc->ErrorID() == 0)
    {
        
    std::cout<<
    doc->FirstChildElement( "PLAY" )->FirstChildElement("TITLE"  )->GetText()<<std::endl;
//successfully prints the title of the play "The Tragedy of Julius Caesar"f
     
        XMLElement * pRoot = doc->FirstChildElement("PLAY");
//        XMLElement * pElement = pRoot->FirstChildElement("ACT")->FirstChildElement("TITLE");
//        const char* act = actElement->GetText();
               
//To print Act of the play
       std::cout<< pRoot->FirstChildElement("ACT")->FirstChildElement("TITLE")->GetText()<<std::endl;
    
    //To print the Scene of the play
        std::cout<<
        pRoot->FirstChildElement("ACT")->FirstChildElement("SCENE")->FirstChildElement("TITLE")->GetText()<<std::endl;
        
       std::cout<<
        pRoot->FirstChildElement("ACT")->FirstChildElement("SCENE")->FirstChildElement("TITLE")->NextSiblingElement("STAGEDIR")->GetText()<<std::endl;
        
        std::cout<< pRoot->FirstChildElement("ACT")->FirstChildElement("SCENE")->FirstChildElement("TITLE")->NextSiblingElement("SPEECH")->FirstChildElement("SPEAKER")->GetText()<<std::endl;
        
         std::cout<< pRoot->FirstChildElement("ACT")->FirstChildElement("SCENE")->FirstChildElement("TITLE")->NextSiblingElement("SPEECH")->FirstChildElement("LINE")->GetText()<<std::endl;
        
//         std::cout<< pRoot->FirstChildElement("ACT")->FirstChildElement("SCENE")->FirstChildElement("TITLE")->NextSiblingElement("SPEECH")->NextSiblingElement("LINE")->GetText()<<std::endl;
//    }
       
//then when trying to reach further, not necessarily always this way but i will always get the Title and then I will get segmentation fault
    
    return 0;
}
}
        
    



