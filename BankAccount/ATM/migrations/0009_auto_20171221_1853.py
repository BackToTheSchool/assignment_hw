# Generated by Django 2.0 on 2017-12-21 09:53

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('ATM', '0008_auto_20171221_1758'),
    ]

    operations = [
        migrations.AlterField(
            model_name='account',
            name='account_number',
            field=models.IntegerField(editable=False, max_length=10, primary_key=True, serialize=False),
        ),
    ]
