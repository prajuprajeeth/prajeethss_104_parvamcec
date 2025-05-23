#include <iostream>
#include <string>
#include <vector>
using namespace std;

class InstagramPost {
private:
    string title;
    string caption;
    int likes;
    vector<string> comments;

public:
    InstagramPost(string t) {
        title = t;
        likes = 0;
    }

    void addCaption(string cap) {
        caption = cap;
    }

    void addLike() {
        likes++;
    }

    void addComment(string comment) {
        comments.push_back(comment);
    }

    void displayPost() {
        cout << "\n=== Instagram Post ===" << endl;
        cout << "Title: " << title << endl;
        cout << "Caption: " << caption << endl;
        cout << "Likes: " << likes << endl;
        
        if (!comments.empty()) {
            cout << "\nComments:" << endl;
            for (const string& comment : comments) {
                cout << "- " << comment << endl;
            }
        }
        cout << "===================" << endl;
    }
};

int main() {
    string postTitle;
    cout << "Enter post title: ";
    getline(cin, postTitle);

    InstagramPost post(postTitle);
    
    string caption;
    cout << "Enter caption: ";
    getline(cin, caption);
    post.addCaption(caption);

    int choice;
    do {
        cout << "\n1. Like post" << endl;
        cout << "2. Add comment" << endl;
        cout << "3. Display post" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch(choice) {
            case 1:
                post.addLike();
                cout << "Post liked!" << endl;
                break;
            case 2: {
                string comment;
                cout << "Enter your comment: ";
                getline(cin, comment);
                post.addComment(comment);
                cout << "Comment added!" << endl;
                break;
            }
            case 3:
                post.displayPost();
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 4);

    return 0;
}