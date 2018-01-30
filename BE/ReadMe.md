Version 6.0
===========

## Raspberry 1 : Server connected to the relay that controls the LED.

We can use the same image as previously but without the domoticz package.
As previously, `dominus_serveur` must be placed in `/usr/bin` and `S99dominus_serveur` in `/etc/init.d`.


## Raspberry 2 : Client running domoticz.

Here we must place `dominus_client` in `/usr/bin`, and the scripts in `/opt/domoticz/scripts`.

* Warning : Don't forget to change the IP addresses in the scripts files. You must put the address of the server.


The two cards must be connected to the same network.
