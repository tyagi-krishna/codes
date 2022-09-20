from nsetools import Nse
nse = Nse()


#def gainers():
#    q = nse.get_top_gainers()
#    for i in range(0,5):
#        p = q[i]["symbol"]
#        r = q[i]["highPrice"]
        
q = nse.get_quote('infy')
print(q)