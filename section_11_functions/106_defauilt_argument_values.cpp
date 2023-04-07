/*
                Default Argument Values


        - When a function is called, all argument must be supplied
        - sometimes some of the argument have the same values most of the time
        - we can tell the compiles to use default values if the arguments are not supplied
        - default values can be in the prototype or definition, not both
            - best practice - in the prototype
            - must appear at the tail and of the parameters list
        - can have multiple default values
            - must appear consecutively at the tail end of the parameters list

------------------------------------------------------------------------------------------------------------------
        example  - no default arguments

        double calc_cost(double base_cost, double tex_rate);

        double calc_cost(double base_cost, double tax_rate) {
            return base_cost += (base_cost * tax_rate);
        }

        int main () {
            double cost {10};
            cost = calc_cost(100.0, 0.06);
            return 0;
        }
------------------------------------------------------------------------------------------------------------------
        example - default arguments

        double calc_cost(double base_cost, double tex_rate = 0.06);

        double calc_cost(double base_cost, double tax_rate) {
            return base_cost += (base_cost * tax_rate);
        }

        int main () {
            double cost {10};
            cost = calc_cost(100.0);
            cost = calc_cost(100.0, 0.08);
            return 0;
        }




*/