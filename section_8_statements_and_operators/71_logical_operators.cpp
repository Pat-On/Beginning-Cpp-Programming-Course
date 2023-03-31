/*

    71 Logical Operators


    not
    !                   negation


    and
    &&                  logical and


    or
    ||                  logical or


    most of the time operator syntax



--------------------------------------------------
    Precedence

    - not has higher precedence than and
    - and has higher precedence than or

    - not is a unary operator
    - and and or are binary operator

---------------------------------------------------


Short-cicruit Evaluation

- when evaluating a logical expression C++ stops as soon as the result is known


        expr1 && expr2 && expr3  - one false so stop and do not evaluate anymore <-- normal!

        expr1 || expr2 || expr3 - one is true and it go for it



*/