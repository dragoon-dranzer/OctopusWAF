#include "opt_extract.h"

void 
init_banner_octopus (void)
{
	puts(
		GREEN
		"\n\t\tCoded by CoolerVoid - coolerlair[at]gmail[dot]com\n\n"
		LAST
   		CYAN

"\t                                             ████████████▓▓████ \n"                          
"\t                                            ████░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓ \n"                        
"\t                                          ██░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░▒▒▒▒▒▒██ \n"                     
"\t                                        ██░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██  \n"                  
"\t                                      ██░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██     \n"               
"\t                                    ██░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██  0    1\n"               
"\t                ████████████        ██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓  1   0\n"               
"\t              ██▒▒▒▒▒▒▒▒▒▒▒▒██      ██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██  0  01\n"               
"\t            ▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██  ██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██   011\n"               
"\t          ██▒▒▒▒▓▓██████▓▓▒▒▒▒██  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░▒▒██  110 \n"               
"\t          ██▒▒▓▓██      ██▒▒▒▒▓▓  ██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██  10 0\n"               
"\t          ██▒▒██      ██▓▓▒▒▒▒██  ██░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░▒▒▒▒▒▒██  01  0 \n"            
"\t          ▓▓▓▓██      ██░░▒▒██    ██▒▒▒▒▒▒▒▒██▒▒▒▒██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓██    ████████ \n"    
"\t            ██      ██▓▓▓▓▒▒██    ██▒▒▒▒▒▒▒▒██▒▒▒▒██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓██    ██▒▒▒▒▒▒▒▒██  \n" 
"\t           HTTP     ██░░▓▓▓▓██    ██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓██    ██▒▒▒▒▓▓████▒▒██ \n"
"\t                   ████████████    ▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓██      ▓▒▒▒▓▓██    ██  \n"
"\t                    ████▒▒▒▒▒▒▒▒██  ██▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓         ▓▓▒▒▒▒██     PARSER     \n"
"\t                    ▓▓▒▒▒▒▒▒▒▒▒▒▒▒██▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▓▓██████▓▓██      ██▒▒▒▒▒▒▓▓          \n"
"\t                  ██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██▓▓██████▒▒▒▒▒▒▒▒▓▓▒▒▒▒░░██▓▓▓▓    ██▒▒▒▒▓▓▓▓          \n"
"\t        ████      ██▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▒██░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░████▓▓██▒▒▒▒▒▒██            \n"
"\t      ██▒▒▒▒██    ██▒▒▒▒██▓▓██▓▓▒▒▓▓██▒▒▒▒▒▒▒▒▒▒▒▒██▓▓▒▒▒▒▒▒▒▒▒▒▒▒██▓▓▒▒▒▒▒▒▓▓██            \n"
"\t    ██▒▒▒▒▒▒▒▒████▒▒▒▒▓▓██▓▓▓▓██▓▓▓▓██▒▒▒▒▒▒▒▒▒▒██▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒██▓▓▓▓▓▓▓▓▓▓████▓▓        \n"
"\t  ██▒▒████▓▓▒▒▒▒▒▒▒▒▒▒██  ████▓▓██▓▓██▒▒▒▒▒▒▒▒▒▒▒▒████▓▓██▓▓▒▒▒▒▒▒██▓▓▓▓██▒▒▒▒▒▒▒▒▒▒██      \n"
"\t    ██    ██░░▓▓▓▓▓▓██            ██▓▓▓▓██▒▒▒▒▒▒▒▒▒▒▓▓██  ▓▓▒▒▒▒▒▒██▓▓██░░▒▒▒▒▒▒▒▒▒▒▒▒██    \n"
"\t            ▓▓▓▓░░▓▓      ██████▓▓██      ██▓▓▒▒▒▒▒▒▓▓    ▓▓▒▒▒▒▒▒▒▒██▒▒▒▒▒▒░░▓▓████▓▓▒▒██  \n"
"\t              ██▓▓      ██▒▒▒▒▒▒▒▒▒▒██▓▓▓▓██▒▒▒▒▒▒▓▓██    ██▓▓▒▒▒▒▒▒▒▒▒▒▒▒▓▓██      ████    \n"
"\t                    ████▒▒▒▒░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓██        ██▓▓▓▓▒▒▒▒▒▒░░██      REQUEST       \n"
"\t                  ██▒▒▒▒▓▓████▓▓▓▓░░▓▓▓▓░░▓▓▓▓░░██            ██▓▓░░▓▓▓▓██         1 01        \n"
"\t                    ██████    ████▓▓████████████                ████▓▓██            10100101010       \n"
   		YELLOW
   		"\n\t OCTOPUS Web application firewall v0.4\n"
   		LAST
  	);
}

void 
option_banner_octopus (void)
{
	puts(
		"\tOptions argv:\n"
		"\t--host or -h : host to protect \n"
		"\t--redirect or -r : port to redirect HTTP or https \n"
		"\t--log: Save logs in file\n"
		"\t--debug : Write log in console \n"
		"\t--libinjection-sqli : Load libinjection to detect SQL injection in requests\n"
		"\t--pcre : Load PCRE module to find rules by regex\n"
		"\t--match or -m : match algorithm you can choice (dfa, horspool or karp-rabin), example --match horspool \n\n\tNotes:\n"
		"\tConfig Blocklist in config/blocklist_ip.txt\n"	
		"\tConfig list rule of matchs at config/match_list.txt\n"
		"\tConfig list rules of regex matchs using PCRE at config/regex_rules.txt\n"
		"\tExamples: \n"
		YELLOW
		"\t$ bin/OctopusWAF -h 127.0.0.1:8090 -r 127.0.0.1:80 -m horspool --debug\n"
		"\t$ bin/OctopusWAF -h 127.0.0.1:8090 -r 127.0.0.1:80 -m horspool --libinjection-sqli --debug --log attacks_web.txt\n"

		LAST

 	);
}

void 
parser_opts (int argc, char **argv)
{

 	char c;

	short options_match = 0;


	if (argc < 6)
	{
		init_banner_octopus();
		option_banner_octopus();
		die("Need more argvs");
	}



	struct option long_options[] =
	{
		{"host", required_argument, NULL, 'h'},
		{"redirect", required_argument, NULL, 'r'},
 		{"debug", no_argument, NULL, 'd'}, 
 		{"match", required_argument, NULL, 'm'}, 
		{"libinjection-sqli", no_argument, NULL, 's'},
		{"pcre", no_argument, NULL, 'p'},	
		{"log", required_argument, NULL, 'l'},
		{NULL, 0, NULL, 0}
	};


	opterr = 0;


 	while ((c = getopt_long(argc, argv, "h:r:d:m:s:p:l:",long_options,NULL)) != -1)
  		switch (c) 
  		{
// host
			case 'h':
				if ( strnlen(optarg,127) > 6 )
				{
					burn_mem(param.hostarg,0,127); // preserve 1 byte to canary
					strlcpy(param.hostarg,optarg,128);	
				} else {
					die("Error at param host");
				}
			break;

			case 'r':
				if ( strnlen(optarg,127) > 6  )
				{
					burn_mem(param.redirectarg,0,127); // stack cookie preserve
					strlcpy(param.redirectarg,optarg,128);	
				} else {
					die("Error at param host");
				}
			break;


			case 'l':
				if (strnlen(optarg,127) > 1)
				{
					burn_mem(param.logfile,0,127); // stack cookie preserve
					strlcpy(param.logfile,optarg,128);	
				} else {
					die("Error at param host");
				}
			break;


			case 'd':
					param.debug = true;
					printf("%s DEBUG mode ON! %s\n",YELLOW,LAST);
			break;

			case 'm':
				if ( strnlen(optarg,12) <= 11 )
				{
					char algorithm[12];

					burn_mem(algorithm,0,11);	
					strlcpy(algorithm,optarg,11);

					if (strnstr(algorithm,"dfa",3))
						options_match = 1;

					if (strnstr(algorithm,"horspool",8))
						options_match = 2;

					if (strnstr(algorithm,"karp-rabin",10))
						options_match = 3;

					if (options_match == 0)
						die("need match argv example --match dfa");

					param.option_algorithm = options_match;					
				} else {
					die("Error at param Log");
				}
			break;


			case 's':
					param.libinjection_sqli = true;
					printf("%s libinjection enable ! %s\n",GREEN,LAST);
			break;

			case 'p':
					param.pcre = true;
					printf("%s PCRE search using regex enable ! %s\n",GREEN,LAST);
			break;

			case '?':
    				if (optopt == 'h' || optopt == 'r' || optopt == 'm') 
    				{
     					init_banner_octopus();
					option_banner_octopus();
     					DEBUG("Option -%c requires an argument.\n", optopt); 
					die("Try again using other argument...");
    				}
			break;

		}

}
