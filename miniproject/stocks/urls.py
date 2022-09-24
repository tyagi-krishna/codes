from django.urls import path
from . import views
urlpatterns = [
    path('',views.home ,name="home"),
    path('search', views.search, name="searchpage ") ,
    path('search/<code>' , views.searchpage , name='search'),
    path('gainers', views.gainers, name='gainers'),
    path('losers' , views.losers , name='losers'),
]