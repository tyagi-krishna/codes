from django.urls import path
from . import views
urlpatterns = [
    path('',views.index,name="index"),  
    path('stock', views.page , name='html'),
    path('hello', views.hello , name='hello')
]