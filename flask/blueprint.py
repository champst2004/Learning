from flask import Flask, Blueprint, render_template

second = Blueprint("blueprint", __name__, static_folder="static", template_folder="template")

@second.route("/home")
@second.route("/")
def home():
    return render_template("home.html")


@second.route("/test")
def test():
    return "<h1>test</h1>"