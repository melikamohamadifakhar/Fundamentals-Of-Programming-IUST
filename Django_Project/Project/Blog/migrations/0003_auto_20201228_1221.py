# Generated by Django 3.1.3 on 2020-12-28 08:51

from django.db import migrations


class Migration(migrations.Migration):

    dependencies = [
        ('Blog', '0002_auto_20201227_1754'),
    ]

    operations = [
        migrations.RenameField(
            model_name='user',
            old_name='book_translator',
            new_name='translator',
        ),
    ]
