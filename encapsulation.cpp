#include<iostream>
#include<string>
#include<vector>
using namespace std;

class YoutubeChannel{
    private:
        string Name;
        string OwnerName;
        int SubscribersCount;
        vector<string> PublishedVideos;

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

int main(){

    YoutubeChannel ytChannel1("Emmanuel's Channel", "Emmanuel");
    ytChannel1.Subscribe();
    ytChannel1.Subscribe();
    ytChannel1.Subscribe();
    ytChannel1.Unsubscribe();
    ytChannel1.PublishVideo("Gerrard");
    ytChannel1.PublishVideo("Messi");
    ytChannel1.PublishVideo("Suarez");

    //Printing it out
    ytChannel1.GetInfo();

    return 0;
}