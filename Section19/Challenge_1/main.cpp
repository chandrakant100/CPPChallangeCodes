// Section 19
// Challenge 1
// Formatting output
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;
struct City {
    std::string name;
    long population;
    double cost;
};

// Assume each country has at least 1 city
struct Country {
    std::string name;
    std::vector<City> cities;
};

struct Tours {
    std::string title;
    std::vector<Country> countries;
};

int main()
{
    Tours tours
        { "Tour Ticket Prices from Miami",
            {
                {
                    "Colombia", { 
                        { "Bogota", 8778000, 400.98 },
                        { "Cali", 2401000, 424.12 },
                        { "Medellin", 2464000, 350.98 },
                        { "Cartagena", 972000, 345.34 } 
                    },
                },
                {
                    "Brazil", { 
                        { "Rio De Janiero", 13500000, 567.45 },
                        { "Sao Paulo", 11310000, 975.45 },
                        { "Salvador", 18234000, 855.99 }
                    },
                },
                {
                    "Chile", { 
                        { "Valdivia", 260000, 569.12 }, 
                        { "Santiago", 7040000, 520.00 }
                },
            },
                { "Argentina", { 
                    { "Buenos Aires", 3010000, 723.77 } 
                } 
            },
        }
    };
    int total_width{80};
    string var1{"Country"};
    string var2{"City"};
    string var3{"population"};
    string var4{"Price"};
    // Unformatted display so you can see how to access the vector elements
    std::cout <<setw(30)<<""<<tours.title<<std::endl;
    cout<<setw(total_width)
        <<setfill('-')
        <<""
        <<endl;
    cout<<setfill(' ');
    cout<<setw(20)<<left<<var1
        <<setw(20)<<left<<var2
        <<setw(20)<<left<<var3
        <<setw(20)<<left<<var4<<endl;
    cout<<setw(total_width)
    <<setfill('-')
    <<""
    <<endl;
    cout<<setfill(' ');
    for(auto country : tours.countries) {   // loop through the countries
        std::cout << country.name << std::endl;
        for(auto city : country.cities) {       // loop through the cities for each country
            std::cout<<setw((20 - var1.length()) + var1.length())<<left<<""<<city.name
                    <<setw((20 - var2.length()) + var2.length())<<""<<city.population 
                    <<setw((20 - var3.length()) + var3.length())<<""<<city.cost 
                    <<std::endl;
        }
    }

    std::cout << std::endl << std::endl;
    return 0;
}