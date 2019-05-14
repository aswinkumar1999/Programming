url = "https://collegedunia.com/college/55964-amman-college-of-education-chennai"


from bs4 import BeautifulSoup
from selenium import webdriver
import requests
import time
from selenium.webdriver.common.keys import Keys
import pandas as pd

link = url
response = requests.get(link, timeout=5)
page_content = BeautifulSoup(response.content, "html.parser")
textContent = []
for k in range(len(page_content.find_all("div",{"class": "address row"}))):
    paragraphs_new = page_content.find_all("div",{"class": "address row"})[k].text
    textContent.append(paragraphs_new)
for l in range(len(textContent)):
    start = textContent[l].find('India')
    start_weblink = textContent[l].find('http')
    rev = textContent[l][::-1]
    rev_start = rev.find('mK')
    start_Ph = len(rev)-rev_start
    if(rev_start==-1):
        start_Ph = start+5
    http_val = textContent[l].find('http')
    end_Ph = textContent[l].find('GET')
    if(end_Ph==-1):
        end_Ph = http_val

    phone=textContent[l][start_Ph:end_Ph]
    print (start_Ph)
    print (end_Ph)
    j=0
    if(start>=0):
        address = textContent[l][0:start+5]
        weblink = textContent[l][start_weblink:]
        while(address.find("\n")>0):
            loc = address.find("\n")
            address = address.replace('\n',',')
    while(not phone[j].isdigit() and j < len(phone)-1):
        print (j)
        start_Ph=start_Ph+1
        j=j+1
    phone=textContent[l][start_Ph:end_Ph]
    phone = phone.replace(' ',',')
    while(phone.find(',,')>=0):
        phone = phone.replace(',,',',')
    if(phone[-1]==','):
        phone = phone[:-1]
address=address.replace(',    ',',')
textContent = []
for o in range(len(page_content.find_all("script",{"type": "application/ld+json"}))):
    paragraphs = page_content.find_all("script",{"type": "application/ld+json"})[o].text
    textContent.append(paragraphs)
for p in range(len(textContent)):
    start = textContent[p].find('email')
    if(start>=0):
        val=3
        end = '"'
        for j in range(100):
            if (textContent[p][start+j] == end and val):
                val=val-1
                if(val==0):
                    end = j
                    email = textContent[p][start+8:start+end]
