from django.shortcuts import render
from django.http import HttpResponse
from nsetools import Nse
nse = Nse()
import requests
# Create your views here.
def index(request):
    q = nse.get_quote('infy')
    p = q["averagePrice"]
    return HttpResponse(p)
