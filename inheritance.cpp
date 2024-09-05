#include<iostream>
#include<string>
#include<vector>
using namespace std;

class YoutubeChannel{
    private:
        string Name;
        int SubscribersCount;
        vector<string> PublishedVideos;

    protected:
        string OwnerName;

    public:
        YoutubeChannel(string name, string ownerName){
            this->Name = name;
            this->OwnerName = ownerName;
            SubscribersCount = 0;
        }

        void GetInfo(){
            cout << "Channel name: " << Name << endl;
            cout << "Name of owner: " << OwnerName << endl;
            cout << "Sub Count: " << SubscribersCount << endl;
            cout << "Video Titles: " << endl;
            for(int i = 0; i < PublishedVideos.size(); i++){
                cout << i+1 << ") " << PublishedVideos[i] << endl;
            }
        }

        void Subscribe(){
            SubscribersCount++;
        }

        void Unsubscribe(){
            if (SubscribersCount <= 0) return;
            SubscribersCount--;
        }

        void PublishVideo(string title){
            PublishedVideos.push_back(title);
        }   
};

class CookingYoutubeChannel: public YoutubeChannel{
    public:
        CookingYoutubeChannel(string name, string ownerName): YoutubeChannel (name, ownerName){

        }
        void Practice(){
            cout << endl << OwnerName << " is practicing cooking, learning new recipes, experimenting with spices" << endl;
        }
};

int main(){

    CookingYoutubeChannel cookingChannel("Bryan's Kitchen", "Bryan");
    cookingChannel.Subscribe();
    cookingChannel.Subscribe();
    cookingChannel.PublishVideo("Apple pie");
    cookingChannel.PublishVideo("Chocolate cake");
    cookingChannel.PublishVideo("Burger");

    //Printing it out
    cookingChannel.GetInfo();
    cookingChannel.Practice();
    cout << endl;
    cout << endl;

    YoutubeChannel anotherChannel("Random channel", "Random dude");
    anotherChannel.Subscribe();
    anotherChannel.Subscribe();
    anotherChannel.PublishVideo("Phone");
    anotherChannel.PublishVideo("Laptop");
    anotherChannel.PublishVideo("Table");

    //Printing it out
    anotherChannel.GetInfo();
    //This will not be able to print due. It's the base class. 
    // anotherChannel.Practice();


    return 0;
}