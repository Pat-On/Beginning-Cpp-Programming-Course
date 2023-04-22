/*

            Throwing multiple exceptions from a function

                - what if a function can fail in several ways
                    - gallons is zero
                    - miles or gallons is negative

            double calculate_mpg(int miles, int gallons) {
                return static_cast<double>(miles)/gallons;
            }

    -----------------------------------------------------------


    Throwing an exception from a function

    Throw different type exception for each condition


        double calculate_mpg (int miles, int gallons) {
            if (gallons == 0)
                throw 0;
            if (miles < 0 || gallons < 0)
                throw std::string {"Negative value error"};

            return static_cast<double>(miles) gallons;
        }

    -----------------------------------------------------------


        double miles_per_gallon {};

        try {
            miles_per_gallon = calculate_mpg(miles, gallons);
            std::cout << miles_per_gallon << std::endl;
        }
        catch (int &ex) {
            std::cerr << "You can not divide by zero" << std::endl;
        }
        catch (std::string &ex) {
            std::cer <<  ex << std::endl;
        }

        std:: cout << "Bye" << std::endl;


        ------------------------------------------------------------

        Catching any type of exception

        catch(int &ex) {
            ....
        }
        catch (std::string &ex) {
            ....
        }
        catch(...){
            std::cerr << "Unknow exception" << std::endl;
        }

        
*/