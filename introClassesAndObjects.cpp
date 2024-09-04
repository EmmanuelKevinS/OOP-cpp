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
};

int main(){

    YoutubeChannel ytChannel1;
    ytChannel1.Name = "Emmanuel's Channel";
    ytChannel1.OwnerName = "Emmanuel";
    ytChannel1.SubscribersCount = 100000;
    ytChannel1.PublishedVideos.push_back("Video 1");
    ytChannel1.PublishedVideos.push_back("Video 2");
    ytChannel1.PublishedVideos.push_back("Video 3");


    cout << "Channel name: " << ytChannel1.Name << endl;
    cout << "Name of owner: " << ytChannel1.OwnerName << endl;
    cout << "Sub Count: " << ytChannel1.SubscribersCount << endl;
    cout << "Video Titles: ";
    for(int i = 0; i < ytChannel1.PublishedVideos.size(); i++){
        cout << ytChannel1.PublishedVideos[i] << " ";
    }

    return 0;
}