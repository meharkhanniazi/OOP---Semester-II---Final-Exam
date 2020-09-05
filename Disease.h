#ifndef included_DISEASE_H
#define included_DISEASE_H

using namespace std;
class Disease
{
private:
    string name;
    string level;
    string category;

public:
    Disease();
    Disease(string,string,string);

    void setName(string);
    string getName();

    void setLevel(string);
    string getLevel();

    void setCategory(string);
    string getCategory();

    void displayData();
};

#endif // included_DISEASE_H

