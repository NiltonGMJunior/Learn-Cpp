#include <iostream>

struct Ads
{
	int adsShownCount = 0;
	float adsClickPercent = 0.0f;
	float averageRevenueAd = 0.0f;
};

Ads getAds()
{
	using namespace std;
	Ads temp;
	
	cout << "What is the ammount of ads shown? ";
	cin >> temp.adsShownCount;
	
	cout << "What is the click percentage for the ads shown? ";
	cin >> temp.adsClickPercent;

	cout << "What is the average revenue per ad? ";
	cin >> temp.averageRevenueAd;

	return temp;
}


void printAdInfo(Ads ads)
{
	using namespace std;
	cout << "Count of ads shown to readers: " << ads.adsShownCount << '\n';
	cout << "Percentage of ads clicked on by users: " << ads.adsClickPercent << '\n';
	cout << "Average revenue per ad: " << ads.averageRevenueAd << '\n';

	float dailyRevenue = ads.adsShownCount * ads.adsClickPercent * ads.averageRevenueAd;
	cout << "Daily revenue from ads: " << dailyRevenue;
}

int main()
{
	Ads myAds = getAds();
	printAdInfo(myAds);
	return 0;
}
