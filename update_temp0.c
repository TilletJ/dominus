#include <stdlib.h>
#include <stdio.h>
#include <curl/curl.h>

int main(int argc, char *argv [])
{

	// parse comand line
  if (argc != 5)
  {
    fprintf(stderr, "Invalid usage: ./a.out <IP> <PORT> <IDX> <TEMP>\n");
    exit(EXIT_FAILURE);
  }

	char *ip = argv[1];
	char *port = argv[2];
	char *idx = argv[3];
	char *temp = argv[4];

	char http_address[250]; // buffer for the http request

	CURL *curl;
  CURLcode res;
 
  curl = curl_easy_init();
	if(curl) {
		sprintf(http_address, "http://%s:%s/json.htm?type=command&param=udevice&idx=%s&nvalue=0&svalue=%s", ip, port, idx, temp);
    curl_easy_setopt(curl, CURLOPT_URL, http_address);
 
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
