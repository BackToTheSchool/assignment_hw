from django import forms
from django.db import models

# Create your models here.


class Account(models.Model):
    account_number = models.CharField(max_length=10, primary_key=True)
    password = models.CharField(max_length=20)
    balance = models.IntegerField()
    user_id = models.CharField(max_length=30, editable=False)

    def __str__(self):
        return self.account_number


class Customer(models.Model):
    name = models.CharField(max_length=30)
    user_id = models.CharField(max_length=30, primary_key=True, null=False, default='user_id')
    password = models.CharField(max_length=30)
    date_of_birth = models.DateField()

    def __str__(self):
        return self.user_id
