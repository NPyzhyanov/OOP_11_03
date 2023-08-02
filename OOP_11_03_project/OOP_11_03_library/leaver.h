#ifndef LEAVER_H
#define LEAVER_H

#if defined OOP_11_03_library_EXPORTS
#define OOP_11_03_LIBRARY_API __declspec(dllexport)
#else
#define OOP_11_03_LIBRARY_API __declspec(dllimport)
#endif

class Leaver
{
public:
    OOP_11_03_LIBRARY_API Leaver();
    OOP_11_03_LIBRARY_API std::string leave(std::string user_name);
    
};

#endif // LEAVER_H
