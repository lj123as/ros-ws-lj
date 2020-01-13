
(cl:in-package :asdf)

(defsystem "pj_morse-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "greeting" :depends-on ("_package_greeting"))
    (:file "_package_greeting" :depends-on ("_package"))
  ))