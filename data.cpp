#include "data.h"
#define CURL_STATICLIB
#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <cmath>
#include "curl/curl.h"

using namespace std;

static size_t my_write(void* buffer, size_t size, size_t nmemb, void* param)
{
	std::string& text = *static_cast<std::string*>(param);
	size_t totalsize = size * nmemb;
	text.append(static_cast<char*>(buffer), totalsize);
	return totalsize;
}

string mainF()
{
	std::string result;
	CURL* curl;
	CURLcode res;
	curl_global_init(CURL_GLOBAL_DEFAULT);
	curl = curl_easy_init();
	if (curl) {
		curl_easy_setopt(curl, CURLOPT_URL, "https://coronavirusonline.com.ua/ukr/countries/ukraine");
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, my_write);
		curl_easy_setopt(curl, CURLOPT_WRITEDATA, &result);
		//curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L);
		res = curl_easy_perform(curl);
		curl_easy_cleanup(curl);
		if (CURLE_OK != res) {
			std::cerr << "CURL error: " << res << '\n';
		}
	}
	curl_global_cleanup();
	return result;
}


int casesLive, deathLive, recoverLive, casesPlus, deathPlus, totalUA;
int percentOfLocals;
int cases, death, recover, casesP, deathP;

int OutputIntNumber(std::string result, int counter) {
	std::string data = "       ";
	int i = 0;
	while (result[counter] != '<' && result[counter] != ')' 
		&& result[counter] != '"') {
		//std::cout << result[counter];
		if (result[counter] != '+' && result[counter] != '>' && result[counter] != ' ' && 0 <= result[counter] <= 9) {
			data[i] = result[counter];
			i++;
		}
		counter++;
	}
	int res;
	try {
		res = stoi(data);
	}
	catch(std::invalid_argument& e){
		res = NULL;
	}
	return res;
}
int LastPosition(std::string result, int position) {
	int nextPosition = position;
	while (result[nextPosition] != '<' && result[nextPosition] != ')' 
		&& result[nextPosition] != '"') {
		nextPosition++;
	}
	return nextPosition;
}
int FirstPosition(std::string result, int counter, std::string word) {
	string row;
	int startPosition = counter;
	int i = 0;
	while (i < 400) {
		row.insert(i, 1, result[startPosition]);
		startPosition++;
		i++;
	}
	int index = row.find(word) + word.length();
	return index + counter;
}
void getData(string result, string dataLine);

void setData(string city) {
	string result = mainF();
	string lineWord1 = "class=\"text-red\">(+",
		lineWord2 = "<td data-order=\"",
		lineWord3 = "<th>";
	std::string dataLine;

	string forTotal = "<table id=\"outbreakTable\" class=\"table";
	int caseTotal = result.find(forTotal) + forTotal.length() + 715;
	totalUA = OutputIntNumber(result, caseTotal);

	if (city == "UA") {
		dataLine = "<tfoot>";
		cases = FirstPosition(result, LastPosition(result, result.find(dataLine) + 100), lineWord3);
		casesP = FirstPosition(result, LastPosition(result, cases), lineWord1);
		death = FirstPosition(result, LastPosition(result, casesP) + 60, lineWord3);
		deathP = FirstPosition(result, LastPosition(result, death), lineWord1);
		recover = FirstPosition(result, LastPosition(result, deathP), lineWord3);
		percentOfLocals = 43668708;
	}
	else if (city == "IF") {
		dataLine = "https://coronavirusonline.com.ua/ukr/countries/ukraine/ivano-frankivska-oblast";
		getData(result, dataLine);
		percentOfLocals = 1361109;
	}
	else if (city == "KV") {
		dataLine = "https://coronavirusonline.com.ua/ukr/countries/ukraine/kyivska-oblast";
		getData(result, dataLine);
		percentOfLocals = 1781044;
	}
	else if (city == "LV") {
		dataLine = "https://coronavirusonline.com.ua/ukr/countries/ukraine/lvivska-oblast";
		getData(result, dataLine);
		percentOfLocals = 2497800;
	}
	else if (city == "DP") {
		dataLine = "https://coronavirusonline.com.ua/ukr/countries/ukraine/dnipropetrovska-oblast";
		getData(result, dataLine);
		percentOfLocals = 3142000;
	}
	else if (city == "VL") {
		dataLine = "https://coronavirusonline.com.ua/ukr/countries/ukraine/volynska-oblast";
		getData(result, dataLine);
		percentOfLocals = 1027400;
	}
	else if (city == "VN") {
		dataLine = "https://coronavirusonline.com.ua/ukr/countries/ukraine/vinnytska-oblast";
		getData(result, dataLine);
		percentOfLocals = 1529100;
	}
	else if (city == "DN") {
		dataLine = "https://coronavirusonline.com.ua/ukr/countries/ukraine/donetska-oblast";
		getData(result, dataLine);
		percentOfLocals = 4100300;
	}
	else if (city == "JT") {
		dataLine = "https://coronavirusonline.com.ua/ukr/countries/ukraine/zhytomyrska-oblast";
		getData(result, dataLine);
		percentOfLocals = 1195500;
	}
	else if (city == "ZP") {
		dataLine = "https://coronavirusonline.com.ua/ukr/countries/ukraine/zakarpatska-oblast";
		getData(result, dataLine);
		percentOfLocals = 1250100;
	}
	else if (city == "ZR") {
		dataLine = "https://coronavirusonline.com.ua/ukr/countries/ukraine/zaporizka-oblast";
		getData(result, dataLine);
		percentOfLocals = 1666500;
	}
	else if (city == "KR") {
		dataLine = "https://coronavirusonline.com.ua/ukr/countries/ukraine/kirovogradska-oblast";
		getData(result, dataLine);
		percentOfLocals = 920100;
	}
	else if (city == "LG") {
		dataLine = "https://coronavirusonline.com.ua/ukr/countries/ukraine/luganska-oblast";
		getData(result, dataLine);
		percentOfLocals = 2121300;
	}
	else if (city == "MK") {
		dataLine = "https://coronavirusonline.com.ua/ukr/countries/ukraine/mykolaivska-oblast";
		getData(result, dataLine);
		percentOfLocals = 1108400;
	}
	else if (city == "OD") {
		dataLine = "https://coronavirusonline.com.ua/ukr/countries/ukraine/odeska-oblast";
		getData(result, dataLine);
		percentOfLocals = 2368100;
	}
	else if (city == "PT") {
		dataLine = "https://coronavirusonline.com.ua/ukr/countries/ukraine/poltavska-oblast";
		getData(result, dataLine);
		percentOfLocals = 1371500;
	}
	else if (city == "RN") {
		dataLine = "https://coronavirusonline.com.ua/ukr/countries/ukraine/rivnenska-oblast";
		getData(result, dataLine);
		percentOfLocals = 1148500;
	}
	else if (city == "SM") {
		dataLine = "https://coronavirusonline.com.ua/ukr/countries/ukraine/sumska-oblast";
		getData(result, dataLine);
		percentOfLocals = 1053500;
	}
	else if (city == "TP") {
		dataLine = "https://coronavirusonline.com.ua/ukr/countries/ukraine/ternopilska-oblast";
		getData(result, dataLine);
		percentOfLocals = 1030600;
	}
	else if (city == "HR") {
		dataLine = "https://coronavirusonline.com.ua/ukr/countries/ukraine/kharkivska-oblast";
		getData(result, dataLine);
		percentOfLocals = 2633800;
	}
	else if (city == "HS") {
		dataLine = "https://coronavirusonline.com.ua/ukr/countries/ukraine/khersonska-oblast";
		getData(result, dataLine);
		percentOfLocals = 1016700;
	}
	else if (city == "HM") {
		dataLine = "https://coronavirusonline.com.ua/ukr/countries/ukraine/khmelnytska-oblast";
		getData(result, dataLine);
		percentOfLocals = 1243800;
	}
	else if (city == "CH") {
		dataLine = "https://coronavirusonline.com.ua/ukr/countries/ukraine/cherkaska-oblast";
		getData(result, dataLine);
		percentOfLocals = 1178300;
	}
	else if (city == "CN") {
		dataLine = "https://coronavirusonline.com.ua/ukr/countries/ukraine/chernivetska-oblast";
		getData(result, dataLine);
		percentOfLocals = 896600;
	}
	else if (city == "CG") {
		dataLine = "https://coronavirusonline.com.ua/ukr/countries/ukraine/chernigivska-oblast";
		getData(result, dataLine);
		percentOfLocals = 976700;
	}
	casesLive = OutputIntNumber(result, cases);
	casesPlus = OutputIntNumber(result, casesP);
	deathLive = OutputIntNumber(result, death);
	deathPlus = OutputIntNumber(result, deathP);
	recoverLive = OutputIntNumber(result, recover);
}
void getData(string result, string dataLine) {
	string lineWord1 = "class=\"text-red\">(+",
		lineWord2 = "<td data-order=\"";
	cases = FirstPosition(result, LastPosition(result, result.find(dataLine)), lineWord2);
	casesP = FirstPosition(result, LastPosition(result, cases), lineWord1);
	death = FirstPosition(result, LastPosition(result, casesP), lineWord2);
	deathP = FirstPosition(result, LastPosition(result, death), lineWord1);
	recover = FirstPosition(result, LastPosition(result, deathP), "<td>");
}
int getCasses() {
	return casesLive;
}
int getCassesPlus() {
	return casesPlus;
}
int getDeath() {
	return deathLive;
}
int getDeathPlus() {
	return deathPlus;
}
int getRecover() {
	return recoverLive;
}
float getPercent() {
	float result = ((float)casesLive / (float)totalUA) * 100;
	return result;
}
float getPercentOfLocal() {
	return (float(casesLive) / float(percentOfLocals)) * 100;
}

/*string getRow() {
	string str = "                                                                                                       ";
	int counter = 19082;
	int i = 0;
	while (i < 100) {
		str[i] = result[counter];
		i++;
		counter++;
	}
	return str;
}*/