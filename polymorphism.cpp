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
        int contentQuality;

    public:
        YoutubeChannel(string name, string ownerName){
            this->Name = name;
            this->OwnerName = ownerName;
            SubscribersCount = 0;
            contentQuality = 0;
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

class SingersYoutubeChannel: public YoutubeChannel{
    public:
        SingersYoutubeChannel(string name, string ownerName): YoutubeChannel (name, ownerName){

        }
        void Practice(){
            contentQuality++;
            cout << endl << OwnerName << " is practicing singing. He is now at level " << contentQuality << endl;
        }
};

int main(){

    CookingYoutubeChannel cookingChannel("Bryan's Kitchen", "Bryan");
    SingersYoutubeChannel singingChannel("John sings", "John");

    //Printing it out
    cookingChannel.GetInfo();
    cookingChannel.Practice();
    cout << endl;
    singingChannel.GetInfo();
    singingChannel.Practice();
    singingChannel.Practice();
    singingChannel.Practice();
    singingChannel.Practice();
    singingChannel.Practice();

    return 0;
}