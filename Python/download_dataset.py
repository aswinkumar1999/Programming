from bs4 import BeautifulSoup
import requests
import subprocess
limit = 16

page_link = 'https://www.nrlmry.navy.mil/tcdat/'
parallel=0
parallel_links=[]
textContent = []
for i in range(20):
    new_page_link = page_link+'tc'+str(int(i/10))+str(int(i%10))+'/'
    print(new_page_link)
    links=[]
    links.append(new_page_link+'ATL/')
    # links.append(new_page_link+'CPAC/')
    # links.append(new_page_link+'EPAC/')
    for j in links:
        print(j)
        page_response = requests.get(j,timeout=10)
        page_content = BeautifulSoup(page_response.content, "html.parser")
        for k in range(5,len(page_content.find_all("a"))-1):
            text_output = page_content.find_all("a")[k].text
            parallel_links.append(j+text_output+'ir/geo/1km/')
            if(int(len(parallel_links)==limit)):
                p1 = subprocess.Popen(["echo"]+parallel_links,stdout=subprocess.PIPE)
                p2 = subprocess.Popen(["xargs" ,"-n","1","-P",str(int(len(parallel_links))),'wget','-r','-np','-e','robots=off','-R','index.html*'],stdin=p1.stdout, stdout=subprocess.PIPE,stderr=subprocess.PIPE)
                p1.stdout.close()  # Allow p1 to receive a SIGPIPE if p2 exits.
                output,error = p2.communicate()
                parallel_links=[]
