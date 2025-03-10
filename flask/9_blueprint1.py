from flask import Flask
from blueprint import second

app = Flask(__name__)
app.register_blueprint(second, url_prefix="/admin")

@app.route("/")
def test():
    return "test"

if __name__ == "__main__":
    app.run(debug=True)