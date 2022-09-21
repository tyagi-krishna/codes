from django.shortcuts import render
from django.http import HttpResponse, JsonResponse
from nsetools import Nse
nse = Nse()
import requests
# Create your views here.
def home(request):
    return render(request, 'homepage.html')
        
def gainers(request):
    q = nse.get_top_gainers()
    return HttpResponse(q)

def searchcode(request, code):
    s = nse.get_quote(code)
    return JsonResponse(s) 

def search(request):
    return render(request, 'search.html')