
(cl:in-package :asdf)

(defsystem "pj_morse-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "morse" :depends-on ("_package_morse"))
    (:file "_package_morse" :depends-on ("_package"))
  ))