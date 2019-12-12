Action()
{
	lr_start_transaction("S5_Buy_roundtrip_tickets");

	web_set_sockets_option("SSL_VERSION", "2&3");
	
	web_reg_save_param_ex(
		"ParamName=userSession",
		"LB=userSession\" value=\"",
		"RB=\"/>",
		SEARCH_FILTERS,
		LAST);
	web_url("welcome.pl", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/WebTours/", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_start_transaction("T11_Login");
	lr_think_time(5);
	web_reg_find("Text=User password was correct", LAST);
	web_submit_data("login.pl", 
		"Action=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value={userSession}", ENDITEM, 
		"Name=username", "Value={username}", ENDITEM, 
		"Name=password", "Value={password}", ENDITEM, 
		"Name=login.x", "Value=68", ENDITEM, 
		"Name=login.y", "Value=10", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		LAST);
	lr_end_transaction("T11_Login",LR_AUTO);

	lr_start_transaction("T12_Search_Flights_Button");
	lr_think_time(5);
	web_url("welcome.pl", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("T12_Search_Flights_Button",LR_AUTO);

	lr_start_transaction("T13_Find_Flight");
	lr_think_time(5);
	web_submit_data("reservations.pl", 
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=depart", "Value={Countries}", ENDITEM, 
		"Name=departDate", "Value={Date}", ENDITEM, 
		"Name=arrive", "Value={Countries}", ENDITEM, 
		"Name=returnDate", "Value={Date}", ENDITEM, 
		"Name=numPassengers", "Value=2", ENDITEM, 
		"Name=roundtrip", "Value=on", ENDITEM, 
		"Name=seatPref", "Value={seatPref}", ENDITEM, 
		"Name=seatType", "Value={seatType}", ENDITEM, 
		"Name=findFlights.x", "Value=59", ENDITEM, 
		"Name=findFlights.y", "Value=8", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		LAST);
	lr_end_transaction("T13_Find_Flight",LR_AUTO);

	lr_start_transaction("T14_Choose_flight");
	lr_think_time(5);
	web_submit_data("reservations.pl_2", 
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=022;600;12/13/2019", ENDITEM, 
		"Name=returnFlight", "Value=202;600;16/14/2019", ENDITEM, 
		"Name=numPassengers", "Value=2", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=seatType", "Value={seatType}", ENDITEM, 
		"Name=seatPref", "Value={seatPref}", ENDITEM, 
		"Name=reserveFlights.x", "Value=59", ENDITEM, 
		"Name=reserveFlights.y", "Value=10", ENDITEM, 
		LAST);
	lr_end_transaction("T14_Choose_flight",LR_AUTO);

	lr_start_transaction("T15_Ticket_payment");
	lr_think_time(5);
	web_submit_data("reservations.pl_3", 
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=firstName", "Value=Jojo", ENDITEM, 
		"Name=lastName", "Value=Bean", ENDITEM, 
		"Name=address1", "Value=", ENDITEM, 
		"Name=address2", "Value=", ENDITEM, 
		"Name=pass1", "Value=Jojo Bean", ENDITEM, 
		"Name=pass2", "Value=", ENDITEM, 
		"Name=creditCard", "Value=123456789", ENDITEM, 
		"Name=expDate", "Value=2019", ENDITEM, 
		"Name=oldCCOption", "Value=", ENDITEM, 
		"Name=numPassengers", "Value=2", ENDITEM, 
		"Name=seatType", "Value={seatType}", ENDITEM, 
		"Name=seatPref", "Value={seatPref}", ENDITEM, 
		"Name=outboundFlight", "Value=022;600;12/13/2019", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=returnFlight", "Value=202;600;16/14/2019", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=buyFlights.x", "Value=70", ENDITEM, 
		"Name=buyFlights.y", "Value=12", ENDITEM, 
		"Name=.cgifields", "Value=saveCC", ENDITEM, 
		LAST);
	lr_end_transaction("T15_Ticket_payment",LR_AUTO);

	lr_start_transaction("T17_Itinerary_Button");
	lr_think_time(5);
	web_url("Itinerary Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("T17_Itinerary_Button",LR_AUTO);

	lr_start_transaction("T20_Logout");
	lr_think_time(5);
	web_url("SignOff Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("T20_Logout",LR_AUTO);
	
	lr_end_transaction("S5_Buy_roundtrip_tickets", LR_AUTO);

	return 0;
}