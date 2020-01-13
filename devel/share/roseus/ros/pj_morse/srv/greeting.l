;; Auto-generated. Do not edit!


(when (boundp 'pj_morse::greeting)
  (if (not (find-package "PJ_MORSE"))
    (make-package "PJ_MORSE"))
  (shadow 'greeting (find-package "PJ_MORSE")))
(unless (find-package "PJ_MORSE::GREETING")
  (make-package "PJ_MORSE::GREETING"))
(unless (find-package "PJ_MORSE::GREETINGREQUEST")
  (make-package "PJ_MORSE::GREETINGREQUEST"))
(unless (find-package "PJ_MORSE::GREETINGRESPONSE")
  (make-package "PJ_MORSE::GREETINGRESPONSE"))

(in-package "ROS")





(defclass pj_morse::greetingRequest
  :super ros::object
  :slots (_name _age ))

(defmethod pj_morse::greetingRequest
  (:init
   (&key
    ((:name __name) "")
    ((:age __age) 0)
    )
   (send-super :init)
   (setq _name (string __name))
   (setq _age (round __age))
   self)
  (:name
   (&optional __name)
   (if __name (setq _name __name)) _name)
  (:age
   (&optional __age)
   (if __age (setq _age __age)) _age)
  (:serialization-length
   ()
   (+
    ;; string _name
    4 (length _name)
    ;; int32 _age
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _name
       (write-long (length _name) s) (princ _name s)
     ;; int32 _age
       (write-long _age s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; int32 _age
     (setq _age (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass pj_morse::greetingResponse
  :super ros::object
  :slots (_feedback ))

(defmethod pj_morse::greetingResponse
  (:init
   (&key
    ((:feedback __feedback) "")
    )
   (send-super :init)
   (setq _feedback (string __feedback))
   self)
  (:feedback
   (&optional __feedback)
   (if __feedback (setq _feedback __feedback)) _feedback)
  (:serialization-length
   ()
   (+
    ;; string _feedback
    4 (length _feedback)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _feedback
       (write-long (length _feedback) s) (princ _feedback s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _feedback
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _feedback (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass pj_morse::greeting
  :super ros::object
  :slots ())

(setf (get pj_morse::greeting :md5sum-) "116e2074a4605229af423317e5dff099")
(setf (get pj_morse::greeting :datatype-) "pj_morse/greeting")
(setf (get pj_morse::greeting :request) pj_morse::greetingRequest)
(setf (get pj_morse::greeting :response) pj_morse::greetingResponse)

(defmethod pj_morse::greetingRequest
  (:response () (instance pj_morse::greetingResponse :init)))

(setf (get pj_morse::greetingRequest :md5sum-) "116e2074a4605229af423317e5dff099")
(setf (get pj_morse::greetingRequest :datatype-) "pj_morse/greetingRequest")
(setf (get pj_morse::greetingRequest :definition-)
      "string name
int32 age
---
string feedback
")

(setf (get pj_morse::greetingResponse :md5sum-) "116e2074a4605229af423317e5dff099")
(setf (get pj_morse::greetingResponse :datatype-) "pj_morse/greetingResponse")
(setf (get pj_morse::greetingResponse :definition-)
      "string name
int32 age
---
string feedback
")



(provide :pj_morse/greeting "116e2074a4605229af423317e5dff099")


