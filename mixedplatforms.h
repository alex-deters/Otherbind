#ifndef MIXEDPLATFORMS_H
#define MIXEDPLATFORMS_H

#include <string>

class mixedPlatforms
{
public:
    std::string getAppID();
    bool isUIRunning();
    void setLayout(std::string layoutArgs);
    int whatPlatform();
    std::string defaultLang();
};

#endif // MIXEDPLATFORMS_H
