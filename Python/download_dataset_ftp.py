# import subprocess
# data = ["https://www.nrlmry.navy.mil/tcdat/tc00/ATL/01L.NONAME/ir/geo/1km/","https://www.nrlmry.navy.mil/tcdat/tc00/ATL/02L.NONAME/ir/geo/1km/", "https://www.nrlmry.navy.mil/tcdat/tc00/ATL/03L.ALBERTO/ir/geo/1km/"]
# print(len(data))
# string = "echo "+" ".join(data)+' | xargs -n 1 -P '+str(int(len(data)))+' wget -r -np -e robots=off -R "index.html*" '
# proc = subprocess.Popen(string, stdin=subprocess.PIPE,shell=True)
# #proc.communicate("\n".join(data))

import subprocess
data = ["https://www.nrlmry.navy.mil/tcdat/tc00/ATL/01L.NONAME/ir/geo/1km/","https://www.nrlmry.navy.mil/tcdat/tc00/ATL/02L.NONAME/ir/geo/1km/"]
print(len(data))
p1 = subprocess.Popen(["echo"]+data,stdout=subprocess.PIPE)
p2 = subprocess.Popen(["xargs" ,"-n","1","-P",str(int(len(data))),'wget','-r','-np','-e','robots=off','-R','index.html*'],stdin=p1.stdout, stdout=subprocess.PIPE,stderr=subprocess.PIPE)
p1.stdout.close()  # Allow p1 to receive a SIGPIPE if p2 exits.
output,error = p2.communicate()
print("asdasdasdasdasdadadasdasdasdasdasdasda")
# string = "echo "+" ".join(data)+' | xargs -n 1 -P '+str(int(len(data)))+' wget -r -np -e robots=off -R "index.html*" '
# proc = subprocess.Popen(string, stdin=subprocess.PIPE,shell=True)
#proc.communicate("\n".join(data))
