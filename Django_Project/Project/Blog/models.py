from django.db import models

class User(models.Model):
    book = models.CharField(max_length=255, null = True, blank = True)
    book_writer = models.CharField(max_length=255, null = True, blank = True)
    translator = models.CharField(max_length=255, null = True, blank = True)
    description = models.CharField(max_length=1500, null = True, blank = True)

    def __str__(self):
        return self.book