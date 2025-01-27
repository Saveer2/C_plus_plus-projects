#include <iostream>
#include <fstream>
#include <unordered_map>
#include <string>
using namespace std;

class ChatBot {
private:
    unordered_map<string, string> responses; // Stores query-response pairs
    const string dataFile = "responses.txt"; // File to store learned responses

    // Load responses from the file
    void loadResponses() {
        ifstream file(dataFile);
        if (file.is_open()) {
            string query, response;
            while (getline(file, query) && getline(file, response)) {
                // Add responses to map if both query and response are valid
                if (!query.empty() && !response.empty()) {
                    responses[query] = response;
                }
            }
            file.close();
        }
    }

    // Save a new response to the file
    void saveResponse(const string& query, const string& response) {
        ofstream file(dataFile, ios::app); // Open in append mode
        if (file.is_open()) {
            file << query << endl;
            file << response << endl;
            file.close();
        }
    }

public:
    ChatBot() {
        loadResponses(); // Load existing responses when chatbot starts
    }

    void respond(const string& input) {
        // Check if the input exists in the responses map
        if (responses.find(input) != responses.end()) {
            cout << "ChatBot: " << responses[input] << endl;
        } else {
            // If the query is unknown, ask the user for a response
            cout << "ChatBot: I don't understand that. Can you teach me how to respond?\n";
            cout << "You: ";
            string newResponse;
            getline(cin, newResponse);
            responses[input] = newResponse; // Add to memory
            saveResponse(input, newResponse); // Save to file
            cout << "ChatBot: Got it! I'll remember that.\n";
        }
    }
};

int main() {
    ChatBot bot;
    string input;

    cout << "--- Simple Learning ChatBot ---\n";
    cout << "Type 'bye' to exit.\n";

    while (true) {
        cout << "\nYou: ";
        getline(cin, input);
        if (input == "bye") {
            cout << "ChatBot: Goodbye! Have a great day!\n";
            break;
        }
        bot.respond(input);
    }

    return 0;
}


