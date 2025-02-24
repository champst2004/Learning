from flask import Flask, redirect, url_for, render_template

app = Flask("__name__")

@app.route("/")
def home():
    return render_template("index2.html")

@app.route("/new")
def new():
    return render_template("index3.html")


if __name__ == "__main__":
    app.run(debug=True)