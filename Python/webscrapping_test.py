url = "https://collegedunia.com/chennai-colleges"
no_of_pagedowns = 100

from bs4 import BeautifulSoup
from selenium import webdriver
import requests
import time
from selenium.webdriver.common.keys import Keys

options = webdriver.ChromeOptions()
options.add_argument('headless')
options.add_argument('window-size=1200x600')
browser = webdriver.Chrome(chrome_options=options)
browser.get(url)
time.sleep(1)
elem = browser.find_element_by_tag_name("body")


while no_of_pagedowns:
    elem.send_keys(Keys.PAGE_DOWN)
    time.sleep(0.2)
    no_of_pagedowns-=1

html = browser.page_source
main_page_content = BeautifulSoup(html)
Content = []
for i in range(len(main_page_content.find_all("div", {"class": "clg-name-address"}))):
    print(i)
    paragraphs = main_page_content.find_all("div", {"class": "clg-name-address"})[i]
    link=url= paragraphs.a['href']
    name = paragraphs.text
    print(name)
    Content.append(paragraphs.text)
print(Content)
