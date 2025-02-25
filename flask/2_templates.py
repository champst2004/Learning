from flask import Flask, redirect, url_for, render_template

app = Flask("__name__")

@app.route("/")
def home():
    return render_template("index1.html")

@app.route("/<name>")
def home1(name):
    return render_template("index1.html", content = name)

@app.route("/list")
def list():
    return render_template("index1.html", list1 = ["q", "w", "e", "r", "t", "y"])

if __name__ == "__main__":
    app.run(debug=True)