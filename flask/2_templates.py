from flask import Flask, redirect, url_for, render_template

app = Flask("__name__")

@app.route("/<name>")
def home(name):
    return render_template("index1.html", content = name)

@app.route("/for")
def fo():
    return render_template("index1.html")

@app.route("/list")
def list():
    return render_template("index1.html", list1 = ["q", "w", "e", "r", "t", "y"])

if __name__ == "__main__":
    app.run()