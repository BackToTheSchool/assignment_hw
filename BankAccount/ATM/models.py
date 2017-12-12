from django import forms
from django.db import models

# Create your models here.


class Account(models.Model):
    account_number = models.CharField(max_length=10, primary_key=True)
    password = models.CharField(max_length=20)
    balance = models.IntegerField(default=0)
    user_id = models.CharField(max_length=30, editable=False)

    def __str__(self):
        return self.account_number


class Customer(models.Model):
    id = models.AutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')
    name = models.CharField(max_length=30)
    user_id = models.CharField(max_length=30)
    password = models.CharField(max_length=30)
    date_of_birth = models.DateField()

    def __str__(self):
        return self.user_id
