from bs4 import BeautifulSoup
import requests


page_link = open('/home/aswinkumar99/Desktop/Top Colleges In Chennai - 2019 Rankings, Fees, Placements, Correspondence 2017 - Collegedunia.html')
page_content = BeautifulSoup(page_link)
page_link.close()
textContent = []
for i in range(len(page_content.find_all("div", {"class": "clg-name-address"}))):
    paragraphs = page_content.find_all("div", {"class": "clg-name-address"})[i]
    print (i)
    print (paragraphs.text)
    textContent.append(paragraphs.text)

#print(textContent)


#Address & Weblink

# from bs4 import BeautifulSoup
# import requests
# page_link = open('/home/aswinkumar99/Desktop/SSN College of Engineering - [SSNCE], Chennai - Admissions, Contact, Website, Facilities 2019-2020.html')
# page_content = BeautifulSoup(page_link)
# page_link.close()
#
# textContent = []
# for i in range(len(page_content.find_all("div",{"class": "address row"}))):
#     paragraphs = page_content.find_all("div",{"class": "address row"})[i].text
#     textContent.append(paragraphs)
# for i in range(len(textContent)):
#     start = textContent[i].find('India')
#     start_weblink = textContent[i].find('http')
#     start_Ph = textContent[i].find('Km')
#     end_Ph = textContent[i].find('GET')
#     phone=textContent[i][start_Ph:end_Ph]
#     j=0
#     if(start>=0):
#         address = textContent[i][0:start+5]
#         weblink = textContent[i][start_weblink:]
#         while(address.find("\n")>0):
#             loc = address.find("\n")
#             address = address.replace('\n',',')
#     while(not phone[j].isdigit()):
#         start_Ph=start_Ph+1
#         j=j+1
#     phone=textContent[i][start_Ph:end_Ph]
#     phone = phone.replace(' ',',')
#     while(phone.find(',,')>=0):
#         phone = phone.replace(',,',',')
#     if(phone[-1]==','):
#         phone = phone[:-1]
# textContent = []
# for i in range(len(page_content.find_all("script",{"type": "application/ld+json"}))):
#     paragraphs = page_content.find_all("script",{"type": "application/ld+json"})[i].text
#     textContent.append(paragraphs)
# for i in range(len(textContent)):
#     start = textContent[i].find('email')
#     if(start>=0):
#         val=3
#         end = '"'
#         for j in range(100):
#             if (textContent[i][start+j] == end and val):
#                 val=val-1
#                 if(val==0):
#                     end = j
#                     email = textContent[i][start+8:start+end]
# print(email)
# print(address)
# print(weblink)
# print(phone)
