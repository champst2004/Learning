from flask import Flask, redirect, url_for

app = Flask("__name__")

@app.route("/")
def home():
    return "Hello hehe <h1>YO!<!h1>"

@app.route("/<name>")
def user(name):
    return f"Hello {name}"

@app.route("/kalaana")
def kal():
    return "kal aa gaya"

@app.route("/admin")
def admin():
    return redirect(url_for("kal"))

@app.route("/champ")
def champ():
    return redirect(url_for("user", name = "champhehehehehe"))

if __name__ == "__main__":
    app.run()