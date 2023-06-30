#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double Volts,
            Amps,
            Ohms,
            Watts;
    int selection,
		VoltsSelect,
		AmpsSelect,
		OhmsSelect,
		WattsSelect;
    
    cout << "#######               ###           #                    			  " << endl;
	cout << "#     # #    # #    # ###  ####     #         ##   #    #			  " << endl;
	cout << "#     # #    # ##  ##  #  #         #        #  #  #    #			  " << endl;
	cout << "#     # ###### # ## # #    ####     #       #    # #    #			  " << endl;
	cout << "#     # #    # #    #          #    #       ###### # ## #			  " << endl;
	cout << "#     # #    # #    #     #    #    #       #    # ##  ##			  " << endl;
	cout << "####### #    # #    #      ####     ####### #    # #    #			  " << endl;
	cout << " #####                                                   			  " << endl;
	cout << "#     #   ##   #       ####  #    # #        ##   #####  ####  ##### " << endl;
	cout << "#        #  #  #      #    # #    # #       #  #    #   #    # #    #" << endl;
	cout << "#       #    # #      #      #    # #      #    #   #   #    # #    #" << endl;
	cout << "#       ###### #      #      #    # #      ######   #   #    # ##### " << endl;
	cout << "#     # #    # #      #    # #    # #      #    #   #   #    # #   # " << endl;
 	cout << " #####  #    # ######  ####   ####  ###### #    #   #    ####  #    #" << endl;
    
    cout << "\n1) Solve for Volts." << endl;
    cout << "2) Solve for Ohms." << endl;
    cout << "3) Solve for Amps." << endl;
    cout << "4) Solve for Watts." << endl;
    cout << "5) Exit" << endl;
    
    cout << "\nSelect option (1-5): " << endl;
    cin >> selection;
    
    if (selection < 1 || selection > 5)
    {
    	cout << "\nInvalid Input" << endl;
    	while (selection < 1 || selection > 5)
    	{
    		cout << "Select option: " << endl;
    		cin >> selection;
		}
	}
	else
	{
		switch (selection)
		{
			case 1:
				{
					cout << "\nSolve For Volts" << endl;
					cout << "\nChoose the option with your two known variables" << endl;
					cout << "1) Ohms & Watts" << endl;
					cout << "2) Watts & Amps" << endl;
					cout << "3) Amps & Ohms" << endl;
					
					cin >> VoltsSelect;
					
					    if (VoltsSelect < 1 || VoltsSelect > 3)
    					{
    						cout << "\nInvalid Input" << endl;
    						while (VoltsSelect < 1 || VoltsSelect > 5)
    						{
    							cout << "\nSelect option: " << endl;
    							cin >> VoltsSelect;
							}
						}
						else
						{
							switch (VoltsSelect)
							{
								case 1:
									{
										cout << "\nEnter Ohms: " << endl;
										cin >> Ohms;
										cout << "Enter Watts" << endl;
										cin >> Watts;
										
										cout << "\nVolts = " << sqrt(Ohms * Watts) << endl;
										break;
									}
								case 2:
									{
										cout << "\nEnter Watts: " << endl;
										cin >> Watts;
										cout << "Enter Amps" << endl;
										cin >> Amps;
										
										cout << "\nVolts = " << Watts / Amps << endl;
										break;
									}
								case 3:
									{
										cout << "\nEnter Amps: " << endl;
										cin >> Amps;
										cout << "Enter Ohms" << endl;
										cin >> Ohms;
										
										cout << "\nVolts = " << Ohms * Amps << endl;
										break;
									}
							}
						}
					break;
				}
			case 2:
				{
					cout << "\nSolve For Ohms" << endl;
					cout << "\nChoose the option with your two known variables" << endl;
					cout << "1) Volts & Amps" << endl;
					cout << "2) Amps & Watts" << endl;
					cout << "3) Watts & Volts" << endl;
					
					cin >> OhmsSelect;
					
					    if (OhmsSelect < 1 || OhmsSelect > 3)
    					{
    						cout << "\nInvalid Input" << endl;
    						while (OhmsSelect < 1 || OhmsSelect > 5)
    						{
    							cout << "\nSelect option: " << endl;
    							cin >> OhmsSelect;
							}
						}
						else
						{
							switch (OhmsSelect)
							{
								case 1:
									{
										cout << "\nEnter Volts: " << endl;
										cin >> Volts;
										cout << "Enter Amps" << endl;
										cin >> Amps;
										
										cout << "\nOhms = " << Volts / Amps << endl;
										break;
									}
								case 2:
									{
										cout << "\nEnter Amps: " << endl;
										cin >> Amps;
										cout << "Enter Watts" << endl;
										cin >> Watts;
										
										cout << "\nOhms = " << Watts / pow(Amps, 2) << endl;
										break;
									}
								case 3:
									{
										cout << "\nEnter Watts: " << endl;
										cin >> Watts;
										cout << "Enter Volts" << endl;
										cin >> Volts;
										
										cout << "\nOhms = " << pow(Volts, 2) / Watts << endl;
										break;
									}
							}
						}
					break;
				}
			case 3:
				{
					cout << "\nSolve For Amps" << endl;
					cout << "\nChoose the option with your two known variables" << endl;
					cout << "1) Volts & Ohms" << endl;
					cout << "2) Ohms & Watts" << endl;
					cout << "3) Watts & Volts" << endl;
					
					cin >> AmpsSelect;
					
					    if (AmpsSelect < 1 || AmpsSelect > 3)
    					{
    						cout << "\nInvalid Input" << endl;
    						while (AmpsSelect < 1 || AmpsSelect > 5)
    						{
    							cout << "\nSelect option: " << endl;
    							cin >> AmpsSelect;
							}
						}
						else
						{
							switch (AmpsSelect)
							{
								case 1:
									{
										cout << "\nEnter Volts: " << endl;
										cin >> Volts;
										cout << "Enter Ohms" << endl;
										cin >> Ohms;
										
										cout << "\nAmps = " << Volts / Ohms << endl;
										break;
									}
								case 2:
									{
										cout << "\nEnter Ohms: " << endl;
										cin >> Ohms;
										cout << "Enter Watts" << endl;
										cin >> Watts;
										
										cout << "\nAmps = " << sqrt(Watts / Ohms) << endl;
										break;
									}
								case 3:
									{
										cout << "\nEnter Watts: " << endl;
										cin >> Watts;
										cout << "Enter Volts" << endl;
										cin >> Volts;
										
										cout << "\nAmps = " << Watts / Volts << endl;
										break;
									}
							}
						}
					break;
				}
			case 4:
				{
					cout << "\nSolve For Watts" << endl;
					cout << "\nChoose the option with your two known variables" << endl;
					cout << "1) Volts & Amps" << endl;
					cout << "2) Amps & Ohms" << endl;
					cout << "3) Ohms & Volts" << endl;
					
					cin >> WattsSelect;
					
					    if (WattsSelect < 1 || WattsSelect > 3)
    					{
    						cout << "\nInvalid Input" << endl;
    						while (WattsSelect < 1 || WattsSelect > 5)
    						{
    							cout << "\nSelect option: " << endl;
    							cin >> WattsSelect;
							}
						}
						else
						{
							switch (WattsSelect)
							{
								case 1:
									{
										cout << "\nEnter Volts: " << endl;
										cin >> Volts;
										cout << "Enter Amps" << endl;
										cin >> Amps;
										
										cout << "\nWatts = " << Volts * Amps << endl;
										break;
									}
								case 2:
									{
										cout << "\nEnter Amps: " << endl;
										cin >> Amps;
										cout << "Enter Ohms" << endl;
										cin >> Ohms;
										
										cout << "\nWatts = " << Ohms * pow(Amps, 2) << endl;
										break;
									}
								case 3:
									{
										cout << "\nEnter Ohms: " << endl;
										cin >> Ohms;
										cout << "Enter Volts" << endl;
										cin >> Volts;
										
										cout << "\nAmps = " << pow(Volts, 2) / Ohms << endl;
										break;
									}
							}
						}
					break;
				}
			case 5:
				{
					cout << "\nNow Exiting" << endl;
					break;
				}
		}
	}
    return 0;
}
