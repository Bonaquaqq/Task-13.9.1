#include <iostream>
#include <unordered_set>
#include <queue>
#include "SocialNetwork.h"

void findPairsWithThreeHandshakes(Person* startPerson) {
    if (!startPerson) return;

    std::unordered_set<Person*> visited; 
    std::queue<std::pair<Person*, int>> q; 

    q.push({ startPerson, 0 }); 
    visited.insert(startPerson);

    while (!q.empty()) {
        auto [currentPerson, handshake] = q.front();
        q.pop();

        if (handshake == 3) {
            
            std::cout << startPerson->name << " - " << currentPerson->name << std::endl;
        }

        if (handshake < 3) {
            for (Person* friendPerson : currentPerson->friends) {
                if (visited.find(friendPerson) == visited.end()) {
                    q.push({ friendPerson, handshake + 1 });
                    visited.insert(friendPerson);
                }
            }
        }
    }
}
