from django.shortcuts import render
from django.http import HttpResponse, JsonResponse
from nsetools import Nse
nse = Nse()
import requests
# Create your views here.
def home(request):
    return render(request, 'homepage.html')
        
def gainers(request):
    return render(request, 'gainers.html')

def losers(request):
    return render(request, 'losers.html')         

def gainersf(request):
    q = nse.get_top_gainers()
    return JsonResponse(q)

def searchpage(request, code):
    s = nse.get_quote(code)
    return JsonResponse(s)

def search(request):
    return render(request, 'search.html')