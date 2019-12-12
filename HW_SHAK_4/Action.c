Action()
{
	lr_start_transaction("S4_Cancellation_of_all_tickets");
	
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
	lr_start_transaction("T11_Login");
	lr_think_time(5);
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
	
	lr_start_transaction("T17_Itinerary_Button");
	lr_think_time(5);
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

	lr_start_transaction("T18_Delete_All_Flights");
	lr_think_time(5);
	web_submit_data("itinerary.pl", 
		"Action=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=flightID", "Value=2514444-7-JB", ENDITEM, 
		"Name=flightID", "Value=2514444-15-JB", ENDITEM, 
		"Name=flightID", "Value=0-23-JB", ENDITEM, 
		"Name=flightID", "Value=2514444-30-JB", ENDITEM, 
		"Name=flightID", "Value=0-38-JB", ENDITEM, 
		"Name=flightID", "Value=0-46-JB", ENDITEM, 
		"Name=removeAllFlights.x", "Value=48", ENDITEM, 
		"Name=removeAllFlights.y", "Value=16", ENDITEM, 
		"Name=.cgifields", "Value=6", ENDITEM, 
		"Name=.cgifields", "Value=4", ENDITEM, 
		"Name=.cgifields", "Value=1", ENDITEM, 
		"Name=.cgifields", "Value=3", ENDITEM, 
		"Name=.cgifields", "Value=2", ENDITEM, 
		"Name=.cgifields", "Value=5", ENDITEM, 
		LAST);
	lr_end_transaction("T18_Delete_All_Flights",LR_AUTO);

	lr_start_transaction("T20_Logout");
	lr_think_time(5);
	web_url("SignOff Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("T20_Logout",LR_AUTO);

	lr_end_transaction("S4_Cancellation_of_all_tickets",LR_AUTO);

	return 0;
}