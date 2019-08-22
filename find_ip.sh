#!/bin/bash

sudo apt install arp-scan 
read -p "Disconnect the Device and Press enter to continue"
sudo arp-scan --localnet --interface=$(arp | awk '$4=="C"' |awk '{print $5}' | sort -u) | sort >> a.txt
sudo arp-scan --localnet --interface=$(arp | awk '$4=="C"' |awk '{print $5}' | sort -u) | sort >> b.txt
diff3 a.txt b.txt b.txt -m > e.txt
read -p "Connect your Device and Press Enter to Continue"
sudo arp-scan --localnet --interface=$(arp | awk '$4=="C"' |awk '{print $5}' | sort -u) | sort >> c.txt
sudo arp-scan --localnet --interface=$(arp | awk '$4=="C"' |awk '{print $5}' | sort -u) | sort >> d.txt
diff3 c.txt c.txt d.txt -m > f.txt
diff e.txt f.txt | grep '10.22' | awk '{print $2}'| sort -u > Possible_ip.txt
echo "Possible IP's are :"
cat Possible_ip.txt
rm a.txt b.txt c.txt d.txt e.txt f.txt Possible_ip.txt


