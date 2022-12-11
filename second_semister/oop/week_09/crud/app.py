from flask import Flask, jsonify, request

app = Flask(__name__)

students = [{"id": 1, "name": "Imran"}]


@app.route("/")
def home():
    print("Show Successfully Data!")
    return jsonify(students)


@app.route("/", methods=["POST"])
def add():
    students.append(request.get_json())
    print("Successfully Added Data! -> ", request.get_json())
    return "Successfully Added", 200


@app.route("/", methods=["PUT"])
def update():
    data = request.get_json()
    for s in students:
        if str(s.get("id")) == str(data.get("id")):
            s.update(data)
            break
    print("Update Successfully Data! -> ", data)
    return "Successfully Update", 200


@app.route("/", methods=["DELETE"])
def dellet():
    data = request.get_json()
    for i in range(len(students)):
        if str(students[i].get("id")) == str(data.get("id")):
            del students[i]
            break
    print("Deleted Successfully Data! -> ", data)
    return "Successfully Deleted", 200


app.run(debug=True)
