from flask import Flask, render_template, request

from flask_sqlalchemy import SQLAlchemy
from flask_migrate import Migrate, migrate

app = Flask(__name__)
app.debug = True
app.config["SQLALCHEMY_DATABASE_URI"] = "sqlite:///site.db"
db = SQLAlchemy(app)
migrate = Migrate(app, db)


class Todo(db.Model):
    id = db.Column(db.Integer, primary_key=True)
    task = db.Column(db.String(200), unique=False, nullable=False)

    def __repr__(self):
        return f"id : {self.id}, todo: {self.task}"


@app.route("/", methods=["POST", "GET"])
def todo(name=None):
    if request.method == "POST":
        task = request.form["task"]
        task = Todo(task=task)
        db.create_all()
        db.session.add(task)
        db.session.commit()
        all_task = Todo.query.all()
        return render_template("index.html", todos=all_task)
    else:
        all_task = Todo.query.all()
        return render_template("index.html", todos=all_task)
