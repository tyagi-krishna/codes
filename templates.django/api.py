from nsetools import Nse
nse = Nse()
       
code = int(input("Enter the code:"))
q = nse.get_top_gainers()
s = q[code]["symbol"]
print(s)