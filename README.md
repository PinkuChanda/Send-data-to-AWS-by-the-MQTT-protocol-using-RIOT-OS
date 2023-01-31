# Send data to AWS by the MQTT protocol using RIOT-OS
Send the data by the MQTT protocol and its constrained variant, called MQTT-SN, using RIOT OS on three A8-M3 nodes in FIT/IoT-LAB.

## Abstract

MQTT (MQ Telemetry Transport) is an IoT connectivity protocol designed as an extremely lightweight publish/subscribe protocol to transport messages between devices.

Using RIOT OS on three A8-M3 nodes in FIT/IoT-LAB, we will develop the MQTT protocol and its constrained variant, MQTT-SN. The MQTT-SN client running on a RIOT OS node will display MQTT messages published to the 'test/riot' topic from the Grenoble SSH frontend host. Into the FIT/IoT-LAB we will create 3 nodes, 

* The first node will be used as a border router for propagating an IPv6 prefix.
* The second node will be used as an MQTT broker
* The third node will run an MQTT-SN client to connect with the broker.

After successully created MQTT brocker, we will create a instance into the AWS Cloud and here we will take the AWS EC2 service. 




## Local Implementation using RIOT-OS

1. Connect to the SSH frontend of the FIT/IoT-LAB Grenoble site with the 'username' you created when we registered for the testbed:

    ```
	computer:~$ ssh <username>@grenoble.iot-lab.info

	```
2. Authenticate with the testbed and submit whatever interval experiment we require using three A8-M3 type nodes before waiting for the experiment to begin:

    ```
	username@grenoble:~$ iotlab-auth -u <username>
	username@grenoble:~$ iotlab-experiment submit -n riot_mqtt -d 60 -l 3,archi=a8:at86rf231+site=grenoble
	username@grenoble:~$ iotlab-experiment wait
	```
    Make a note of the displayed experiment ID, then use the commands below to retrieve additional information about the experiment once the experiment is running:

    ```
	username@grenoble:~$ iotlab-experiment get -i <experiment_ID> -s
	username@grenoble:~$ iotlab-experiment get -i <experiment_ID> -r
	```





