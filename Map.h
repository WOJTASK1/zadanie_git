#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Wzorzec klasy Map
template <typename KeyType, typename ObjectType>
class Map {
private:
    vector<KeyType> keys;
    vector<ObjectType> objects;

public:
   // Wzorzec klasy Map
template <typename KeyType, typename ObjectType>
class Map {
private:
    vector<KeyType> keys;
    vector<ObjectType> objects;

public:
    void add(const KeyType& key, const ObjectType& object) {
        keys.push_back(key);
        objects.push_back(object);
    }
	ObjectType * find(KeyType id){
		for (unsigned int i = 0; i < keys.size(); i++)
		{
			if(keys[i]==id){
				return &objects[i];
			}
		}
		return nullptr;
	}
    
    friend ostream &operator<<(ostream &s, const Map &map) {
        for (unsigned int index = 0; index < map.keys.size(); ++index) {
			s << "{" << map.keys[index] << " : " << map.objects[index] << "}" << endl;
        }
        return s;
    }
    Map  operator =(Map m){
		if(this!=&m){
			Map temp;
			for (unsigned int i = 0; i < m.getSize(); i++)
			{
				temp.keys.push_back(m.keys[i]);
				temp.objects.push_back(m.objects[i]);
			}
			return temp;
		}
		return (*this);
	}
	unsigned int getSize()const{
		return keys.size();
	}
};
};
