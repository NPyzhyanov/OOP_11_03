#ifndef LEAVER_H
#define LEAVER_H

#ifndef OOP_11_03_LIBRARY_EXPORTS
#define OOP_11_03_LIBRARY_API __declspec(dllexport)
#else
#define OOP_11_03_LIBRARY_API __declspec(dllimport)
#endif

class Leaver
{
public:
    Leaver();
    OOP_11_03_LIBRARY_API std::string leave(std::string user_name);
    
};

#endif // LEAVER_H
