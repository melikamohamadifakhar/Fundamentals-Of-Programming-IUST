from django.shortcuts import render
from django.shortcuts import HttpResponse
from .models import *
def form(request):
    if request.method == "GET":
        return render(request, "form.html")
    elif request.method == "POST":
        book_name = request.POST['inpbook_name']
        print(book_name)
        book_writer = request.POST['inpbook_writer']
        print(book_writer)
        translator = request.POST['inptranslator']
        print(translator)
        description = request.POST['inpdescription']
        print(description)
        user = User.objects.create(book=book_name, book_writer=book_writer, translator=translator, description=description)
        output = {"result" : user}
        return render(request, "form.html", context=output)

def firstpage(request):
    if request.method == "GET":
        return render(request, "firstpage.html")

# Create your views here.
def search(request):
    if request.method == "GET":
        a = User.objects.all().values_list("book" , flat=True)
        print(a)
        output = {"result" : a}
        return render(request, "search.html", context=output)
    if request.method == "POST":
        book = request.POST['book_name1']
        a = User.objects.filter(book=book)
        print(a)
        if len(a) == 0 :
            return render(request, "notfound.html")
        output = {"result" : a}
        return render(request, "result.html", context=output)
