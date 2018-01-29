Version 4.0
===========

The `dominus_client` and `dominus_serveur` binary files must be placed in the RPI3 in `/usr/bin`.
The shell files in the scripts folder must be placed in `/opt/domoticz/scripts` of the RPI3.

Then, in the RPI3, you can run the server with the following command line :

        /usr/bin/dominus_serveur 25000

* Warning : the port number must be 25000 here.

* You can recompile the binary files with the .c files using the Makefile (be sure to set the correct path in the Makefile to the right compiler).
