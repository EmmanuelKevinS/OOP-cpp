#include<iostream>
#include<string>
#include<vector>
using namespace std;

class YoutubeChannel{
    public:
        string Name;
        string OwnerName;
        int SubscribersCount;
        vector<string> PublishedVideos;

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
        cout << "-" << PublishedVideos[i] << endl;
    }
    }
};

int main(){

    YoutubeChannel ytChannel1("Emmanuel's Channel", "Emmanuel");
    ytChannel1.PublishedVideos.push_back("Video 1");
    ytChannel1.PublishedVideos.push_back("Video 2");
    ytChannel1.PublishedVideos.push_back("Video 3");

    YoutubeChannel ytChannel2("Froggen's Channel", "Froggen");
    ytChannel2.PublishedVideos.push_back("Anivia Highlights");
    ytChannel2.PublishedVideos.push_back("Froggen > Bjergsen");
    ytChannel2.PublishedVideos.push_back("Froggen beats Faker 1v1");


    //Printing it out
    ytChannel1.GetInfo();
    cout << endl;
    ytChannel2.GetInfo();

    return 0;
}