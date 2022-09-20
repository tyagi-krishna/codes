from django.urls import path
from . import views
urlpatterns = [
    path('',views.home ,name="home"),
    path('search', views.search1, name="search1") ,
    path('searchcode/<code>/' , views.search , name='search')
]