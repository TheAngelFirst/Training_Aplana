Action()
{
	lr_start_transaction("S2_Cancellation_of_two_tickets");
	
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
	/* LOGIN */
	lr_think_time(5);
	lr_start_transaction("T11_Login");
	web_reg_find("Text=User password was correct", LAST);
	web_submit_data("login.pl",
		"Action=http://localhost:1080/cgi-bin/login.pl",
		"Method=POST",
		"TargetFrame=body",
		"RecContentType=text/html",
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home",
		"Snapshot=t29.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=userSession", "Value={userSession}", ENDITEM,
		"Name=username", "Value={username}", ENDITEM,
		"Name=password", "Value={password}", ENDITEM,
		"Name=login.x", "Value=0", ENDITEM,
		"Name=login.y", "Value=0", ENDITEM,
		"Name=JSFormSubmit", "Value=off", ENDITEM,
		LAST);
	lr_end_transaction("T11_Login", LR_AUTO);

	lr_think_time(5);
	lr_start_transaction("T17_Itinerary_Button");
	web_url("Itinerary Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("T17_Itinerary_Button",LR_AUTO);

	lr_think_time(5);
	lr_start_transaction("T18_Delete_Selected_Flights");
	web_submit_data("itinerary.pl", 
		"Action=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=1", "Value=on", ENDITEM, 
		"Name=flightID", "Value=0-7-JB", ENDITEM, 
		"Name=flightID", "Value=2514444-15-JB", ENDITEM, 
		"Name=flightID", "Value=2514444-23-JB", ENDITEM, 
		"Name=flightID", "Value=2514444-30-JB", ENDITEM, 
		"Name=flightID", "Value=0-38-JB", ENDITEM, 
		"Name=flightID", "Value=2514444-46-JB", ENDITEM, 
		"Name=removeFlights.x", "Value=74", ENDITEM, 
		"Name=removeFlights.y", "Value=8", ENDITEM, 
		"Name=.cgifields", "Value=6", ENDITEM, 
		"Name=.cgifields", "Value=4", ENDITEM, 
		"Name=.cgifields", "Value=1", ENDITEM, 
		"Name=.cgifields", "Value=3", ENDITEM, 
		"Name=.cgifields", "Value=2", ENDITEM, 
		"Name=.cgifields", "Value=5", ENDITEM, 
		LAST);
	lr_end_transaction("T18_Delete_Selected_Flights",LR_AUTO);

	lr_think_time(5);
	lr_start_transaction("T18_Delete_Selected_Flights");
	web_submit_data("itinerary.pl_2", 
		"Action=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=1", "Value=on", ENDITEM, 
		"Name=flightID", "Value=2514444-7-JB", ENDITEM, 
		"Name=flightID", "Value=2514444-15-JB", ENDITEM, 
		"Name=flightID", "Value=2514444-23-JB", ENDITEM, 
		"Name=flightID", "Value=0-30-JB", ENDITEM, 
		"Name=flightID", "Value=2514444-38-JB", ENDITEM, 
		"Name=removeFlights.x", "Value=36", ENDITEM, 
		"Name=removeFlights.y", "Value=12", ENDITEM, 
		"Name=.cgifields", "Value=4", ENDITEM, 
		"Name=.cgifields", "Value=1", ENDITEM, 
		"Name=.cgifields", "Value=3", ENDITEM, 
		"Name=.cgifields", "Value=2", ENDITEM, 
		"Name=.cgifields", "Value=5", ENDITEM, 
		LAST);
	lr_end_transaction("T18_Delete_Selected_Flights",LR_AUTO);

	lr_think_time(5);
	lr_start_transaction("T19_Home_Button");
	web_url("Home Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=menus", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("T19_Home_Button",LR_AUTO);

	lr_end_transaction("S2_Cancellation_of_two_tickets",LR_AUTO);

	return 0;
}