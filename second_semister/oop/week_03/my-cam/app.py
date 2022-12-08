"""
My Camera Application
Author : Imran Hossen
Version : 1.0.0
"""
import sys
from PyQt5.QtWidgets import *
from PyQt5.QtGui import QPixmap, QImage, QIcon
from PyQt5.QtCore import QTimer
import cv2
import datetime as dt


class Window(QWidget):
    """ Main app window """

    def __init__(self):
        super().__init__()
        # variables for app window
        self.window_width = 640
        self.window_height = 400

        # image variable
        self.img_width = 640
        self.img_height = 400

        # other variable
        self.dt = "0-0-0"
        self.record_flag = False

        # load icon
        self.camera_icon = QIcon(camare_icon_path)
        self.record_icon = QIcon(video_icon_path)
        self.stop_icon = QIcon(stop_icon_path)

        # to save the video
        self.fourcc = cv2.VideoWriter_fourcc(*"XVID")

        self.setWindowTitle("My web Cam")
        self.setGeometry(100, 100, self.window_width, self.window_height)
        self.setFixedSize(self.window_width, self.window_height)

        # setup timer
        self.timer = QTimer()
        self.timer.timeout.connect(self.update)

        self.ui()

    def ui(self):
        """contains all ui things"""
        # layout
        grid = QGridLayout()
        self.setLayout(grid)

        # images label
        self.image_label = QLabel(self)
        self.image_label.setGeometry(0, 0, self.img_width, self.img_height)

        # capture button
        self.capture_btn = QPushButton(self)
        self.capture_btn.setIcon(self.camera_icon)
        self.capture_btn.setStyleSheet(
            "border-radius:30; border:2px solid black; border-width:3px")
        self.capture_btn.setFixedSize(60, 60)
        self.capture_btn.clicked.connect(self.save_img)

        # record button
        self.record_btn = QPushButton(self)
        self.record_btn.setStyleSheet(
            "border-radius:30; border:2px solid black; border-width:3px")
        self.record_btn.setFixedSize(60, 60)
        self.record_btn.clicked.connect(self.record)

        if not self.timer.isActive():
            self.cap = cv2.VideoCapture(0)
            self.timer.start(10)

        grid.addWidget(self.capture_btn, 0, 0)
        grid.addWidget(self.image_label, 0, 1, 2, 3)
        grid.addWidget(self.record_btn, 1, 0)  # row, col

        self.show()

    def update(self):
        """Update frames"""
        _, self.frame = self.cap.read()
        copy_frame = self.frame
        if self.record_flag:
            # self.out.write(copy_frame)
            self.record_btn.setIcon(self.stop_icon)
            self.frame = cv2.circle(self.frame, (20, 70), 5, (0, 0, 255), 10)
        else:
            self.record_btn.setIcon(self.record_icon)

        frame = cv2.cvtColor(self.frame, cv2.COLOR_BGR2RGB)
        height, width, channel = frame.shape
        step = channel * width
        q_frame = QImage(frame.data, width, height, step, QImage.Format_RGB888)
        self.image_label.setPixmap(QPixmap.fromImage(q_frame))

    def save_img(self):
        """ Save image from camera"""
        print("saved!")
        self.get_time()
        cv2.imwrite(f"{self.dt}-imran.png", self.frame)

    def record(self):
        """Record Video"""
        self.record_flag = not self.record_flag

        if self.record_flag:
            print("Recording... ")
        else:
            self.get_time()
            self.out = cv2.VideoWriter(
                f"{self.dt}-video.avi", self.fourcc, 20.0, (self.img_width, self.img_height))
            print("Stop!")

    def get_time(self):
        now = dt.datetime.now()
        self.dt = now.strftime("%m-%d-%y, %H-%M-%S")
        print(self.dt)


# run app
camare_icon_path = "./assests/camara.png"
video_icon_path = "./assests/video.png"
stop_icon_path = "./assests/stop-button.png"


app = QApplication(sys.argv)
win = Window()
sys.exit(app.exec_())
# python -m fbs my-cam
