;;;; 1. Да се дефинира функция на Lisp, 
;;;; - която при въвеждане на 'p' 
;;;; - извежда (4*p)/((p-8)*11), ако р е число (различно от 8) 
;;;; - и “not number” – в противен случай. 
;;;; Действието продължава в цикъл, докато се въведе 8.	

(defun f ()
  (loop
    (setq p (read))
    (when (equal p 8) (return))
    (cond ((numberp p) (print (/ (* 4 p) (* 11 (- p 8)))))
          (t (princ "not number")))))

;;;; 2.	Дефинирайте функция, която 
;;;; - премахва от входния списък с произволни елементи, 
;;;; - всички положителни двуцифрени числа.
    
(defun f2 (input)
  (cond ((null input) nil)
        ((and (numberp (car input)) (< 9 (car input) 100))
         (f2 (cdr input)))
        (t (cons (car input) (f2 (cdr input))))))
