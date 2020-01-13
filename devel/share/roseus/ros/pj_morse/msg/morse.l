;; Auto-generated. Do not edit!


(when (boundp 'pj_morse::morse)
  (if (not (find-package "PJ_MORSE"))
    (make-package "PJ_MORSE"))
  (shadow 'morse (find-package "PJ_MORSE")))
(unless (find-package "PJ_MORSE::MORSE")
  (make-package "PJ_MORSE::MORSE"))

(in-package "ROS")
;;//! \htmlinclude morse.msg.html


(defclass pj_morse::morse
  :super ros::object
  :slots (_morsecode ))

(defmethod pj_morse::morse
  (:init
   (&key
    ((:morsecode __morsecode) "")
    )
   (send-super :init)
   (setq _morsecode (string __morsecode))
   self)
  (:morsecode
   (&optional __morsecode)
   (if __morsecode (setq _morsecode __morsecode)) _morsecode)
  (:serialization-length
   ()
   (+
    ;; string _morsecode
    4 (length _morsecode)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _morsecode
       (write-long (length _morsecode) s) (princ _morsecode s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _morsecode
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _morsecode (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(setf (get pj_morse::morse :md5sum-) "2fe097829068c1a59507c379630e3347")
(setf (get pj_morse::morse :datatype-) "pj_morse/morse")
(setf (get pj_morse::morse :definition-)
      "string morsecode
")



(provide :pj_morse/morse "2fe097829068c1a59507c379630e3347")


