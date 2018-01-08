#include <stdlib.h>
#include <stdio.h>
#include <curl/curl.h>
#include <string>

int main(int argc, char *argv [])
{

	// parse comand line
  if (argc != 5)
  {
    fprintf(stderr, "Invalid usage: ./a.out <IP> <PORT> <IDX> <TEMP>\n");
    exit(EXIT_FAILURE);
  }

	std::string ip(argv[1]);
	std::string port(argv[2]);
	std::string idx(argv[3]);
	std::string temp(argv[4]);

	CURL *curl;
  CURLcode res;
 
  curl = curl_easy_init();
	if(curl) {
		std::string adresse = ip + ":" + port + "/json.htm";
    curl_easy_setopt(curl, CURLOPT_URL, adresse);
		std::string postthis = "type=command&param=udevice&idx=" + idx + "&nvalue=0&svalue=" + temp;
    curl_easy_setopt(curl, CURLOPT_POSTFIELDS, postthis);
 
    /* Perform the request, res will get the return code */ 
    res = curl_easy_perform(curl);
    /* Check for errors */ 
    if(res != CURLE_OK)
      fprintf(stderr, "curl_easy_perform() failed: %s\n",
              curl_easy_strerror(res));
 
    /* always cleanup */ 
    curl_easy_cleanup(curl);
  }

	exit(EXIT_SUCCESS);
}
