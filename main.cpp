#include "Person.h"
#include "SocialNetwork.h"

int main() {
  


    Person* alice = new Person("Alice");
    Person* bob = new Person("Bob");
    Person* carol = new Person("Carol");
    Person* dave = new Person("Dave");

   
    alice->friends.push_back(bob);
    alice->friends.push_back(carol);
    bob->friends.push_back(alice);
    bob->friends.push_back(carol);
    carol->friends.push_back(alice);
    carol->friends.push_back(bob);
    carol->friends.push_back(dave);
    dave->friends.push_back(carol);

   
    findPairsWithThreeHandshakes(alice);
    findPairsWithThreeHandshakes(bob);
    findPairsWithThreeHandshakes(carol);
    findPairsWithThreeHandshakes(dave);

    
    delete alice;
    delete bob;
    delete carol;
    delete dave;

    return 0;
}
