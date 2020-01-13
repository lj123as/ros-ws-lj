; Auto-generated. Do not edit!


(cl:in-package pj_morse-msg)


;//! \htmlinclude morse.msg.html

(cl:defclass <morse> (roslisp-msg-protocol:ros-message)
  ((morsecode
    :reader morsecode
    :initarg :morsecode
    :type cl:string
    :initform ""))
)

(cl:defclass morse (<morse>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <morse>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'morse)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name pj_morse-msg:<morse> is deprecated: use pj_morse-msg:morse instead.")))

(cl:ensure-generic-function 'morsecode-val :lambda-list '(m))
(cl:defmethod morsecode-val ((m <morse>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader pj_morse-msg:morsecode-val is deprecated.  Use pj_morse-msg:morsecode instead.")
  (morsecode m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <morse>) ostream)
  "Serializes a message object of type '<morse>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'morsecode))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'morsecode))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <morse>) istream)
  "Deserializes a message object of type '<morse>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'morsecode) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'morsecode) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<morse>)))
  "Returns string type for a message object of type '<morse>"
  "pj_morse/morse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'morse)))
  "Returns string type for a message object of type 'morse"
  "pj_morse/morse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<morse>)))
  "Returns md5sum for a message object of type '<morse>"
  "2fe097829068c1a59507c379630e3347")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'morse)))
  "Returns md5sum for a message object of type 'morse"
  "2fe097829068c1a59507c379630e3347")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<morse>)))
  "Returns full string definition for message of type '<morse>"
  (cl:format cl:nil "string morsecode~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'morse)))
  "Returns full string definition for message of type 'morse"
  (cl:format cl:nil "string morsecode~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <morse>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'morsecode))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <morse>))
  "Converts a ROS message object to a list"
  (cl:list 'morse
    (cl:cons ':morsecode (morsecode msg))
))
