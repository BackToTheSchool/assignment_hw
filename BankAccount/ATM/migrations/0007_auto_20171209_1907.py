# -*- coding: utf-8 -*-
# Generated by Django 1.11.5 on 2017-12-09 10:07
from __future__ import unicode_literals

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('ATM', '0006_customer'),
    ]

    operations = [
        migrations.RemoveField(
            model_name='account',
            name='id',
        ),
        migrations.RemoveField(
            model_name='customer',
            name='id',
        ),
        migrations.AddField(
            model_name='account',
            name='user_id',
            field=models.CharField(default='user_id', editable=False, max_length=30),
            preserve_default=False,
        ),
        migrations.AddField(
            model_name='customer',
            name='password',
            field=models.CharField(default='password', max_length=30),
            preserve_default=False,
        ),
        migrations.AlterField(
            model_name='account',
            name='account_number',
            field=models.CharField(max_length=10, primary_key=True, serialize=False),
        ),
        migrations.AlterField(
            model_name='customer',
            name='user_id',
            field=models.CharField(default='user_id', max_length=30, primary_key=True, serialize=False),
        ),
    ]
