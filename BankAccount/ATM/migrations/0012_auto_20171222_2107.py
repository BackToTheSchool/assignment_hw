# Generated by Django 2.0 on 2017-12-22 12:07

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('ATM', '0011_auto_20171221_1901'),
    ]

    operations = [
        migrations.AlterField(
            model_name='account',
            name='account_number',
            field=models.AutoField(editable=False, max_length=10, primary_key=True, serialize=False),
        ),
    ]