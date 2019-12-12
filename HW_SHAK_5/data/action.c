Action()
{

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("WebTours", 
		"URL=http://localhost:1080/WebTours/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("merchants.json", 
		"URL=https://www.gstatic.com/autofill/weekly/merchants.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("GAPS=1:Za--ezDusJU0J8uEXMwOpRieVRGbpw:4Ze28C3TIpfmZOOR; DOMAIN=accounts.google.com");

	web_add_header("Origin", 
		"https://www.google.com");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"Body= ", 
		LAST);

	web_url("bins.json", 
		"URL=https://www.gstatic.com/autofill/hourly/bins.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_concurrent_start(NULL);

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=79", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/x-gzip", 
		"Referer=", 
		"Snapshot=t5.inf", 
		LAST);

	web_url("client_model_v5_variation_0.pb", 
		"URL=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_0.pb", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t6.inf", 
		LAST);

	web_url("client_model_v5_ext_variation_0.pb", 
		"URL=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_ext_variation_0.pb", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t7.inf", 
		LAST);

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_url("query", 
		"URL=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZTfkiOcFFuDAjLeeNQA4kIy3OQUx6JBQ=", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/proto", 
		"Referer=", 
		"Snapshot=t8.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("X-Goog-Update-AppId", 
		"aapocclcgogkmnckokdopfmhonfmgoek,aohghmighlieiainnegkcijnfilokake,apdfllckaahabafndbhieahigkjlhalf,blpcfgokakmgnkcojhhkbfbldkacnbeo,felcaaldnbdncclmgdcncolpebgiejap,ghbmnnjooekpmoecnnnilnnbdlolhkhi,nmmhkkegccagdldgiimedpiccmgmieda,pjkljhegncpnkpknbcohdijeoejaedia,pkedcjkdefgpdelpbcmbmeomcjbeemfm");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chromecrx-79.0.3945.79");

	lr_think_time(12);

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=9:1779664928&cup2hreq=e6b76338c0615e9f95776b13f6a485826ed099ce55c1ea32499be092355fa7b2", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"aapocclcgogkmnckokdopfmhonfmgoek\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"ping\":{\"r\":1},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"aohghmighlieiainnegkcijnfilokake\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"ping\":{\"r\":1},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"apdfllckaahabafndbhieahigkjlhalf\",\""
		"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"ping\":{\"r\":1},\"updatecheck\":{},\"version\":\"14.2\"},{\"appid\":\"blpcfgokakmgnkcojhhkbfbldkacnbeo\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"ping\":{\"r\":1},\"updatecheck\":{},\"version\":\"4.2.8\"},{\"appid\":\"felcaaldnbdncclmgdcncolpebgiejap\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"ping\":{\"r\":1},\"updatecheck\":{},\"version\":\"1.2\"},{\"appid\":\""
		"ghbmnnjooekpmoecnnnilnnbdlolhkhi\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"ping\":{\"r\":1},\"updatecheck\":{},\"version\":\"1.7\"},{\"appid\":\"nmmhkkegccagdldgiimedpiccmgmieda\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"other\",\"ping\":{\"r\":1},\"updatecheck\":{},\"version\":\"1.0.0.5\"},{\"appid\":\"pjkljhegncpnkpknbcohdijeoejaedia\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"ping\":{\"r\":1},\"updatecheck\":{},\"version\":\"8.2\""
		"},{\"appid\":\"pkedcjkdefgpdelpbcmbmeomcjbeemfm\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"other\",\"ping\":{\"r\":1},\"updatecheck\":{},\"version\":\"7919.1028.0.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"physmemory\":8},\"lang\":\"ru\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.17763.107\"},\"prodversion\":\"79.0.3945.79\",\"protocol\":\"3.1\",\"requestid\":\"{d24236af-cc05-40ea-ae9b-8fb0f2881bd1}\","
		"\"sessionid\":\"{5f32f7cf-d203-4728-8436-5576993146c3}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.35.342\"},\"updaterversion\":\"79.0.3945.79\"}}", 
		LAST);

	lr_start_transaction("T11_Login");

	web_add_auto_header("Sec-Fetch-Mode", 
		"nested-navigate");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Origin", 
		"http://localhost:1080");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(30);

	web_submit_data("login.pl", 
		"Action=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=127677.455245038zfzHtAQpVAtVzzzHDQtAtptftzcf", ENDITEM, 
		"Name=username", "Value=jojo", ENDITEM, 
		"Name=password", "Value=bean", ENDITEM, 
		"Name=login.x", "Value=68", ENDITEM, 
		"Name=login.y", "Value=10", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_url("plugins_win.json", 
		"URL=https://www.gstatic.com/chrome/config/plugins_3/plugins_win.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("experimentstatus", 
		"URL=https://clients4.google.com/chrome-sync/experimentstatus", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/vnd.google.octet-stream-compressible", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x0Bgcm_channel", 
		LAST);

	lr_end_transaction("T11_Login",LR_AUTO);

	lr_start_transaction("T12_Search_Flights_Button");

	web_add_header("X-HTTP-Method-Override", 
		"POST");

	lr_think_time(19);

	web_url("threatListUpdates:fetch", 
		"URL=https://safebrowsing.googleapis.com/v4/threatListUpdates:fetch?$req=ChwKDGdvb2dsZWNocm9tZRIMNzkuMC4zOTQ1Ljc5GgwIBRABIgQgASACKAEaDAgBEAEiBCABIAIoARoMCAMQASIEIAEgAigBGgwIBxABIgQgASACKAEaDAgBEAEiBCABIAIoAxoMCAEQCCIEIAEgAigEGgwICRABIgQgASACKAYaDAgPEAEiBCABIAIoARoMCAoQCCIEIAEgAigBGgwICRABIgQgASACKAEaDAgIEAEiBCABIAIoARoMCA0QASIEIAEgAigBGgwIDhABIgQgASACKAEaDAgQEAEiBCABIAIoASICCAE=&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t13.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"nested-navigate");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(8);

	web_url("welcome.pl", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_url("query_2", 
		"URL=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZQUJTom3LFQojLVRiKa0kIy17ncSlJCMtHzs5hSQjLdqFmWEkIy2pjkq9JBQ=", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/proto", 
		"Referer=", 
		"Snapshot=t15.inf", 
		LAST);

	lr_end_transaction("T12_Search_Flights_Button",LR_AUTO);

	web_add_auto_header("Origin", 
		"http://localhost:1080");

	lr_think_time(43);

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
		"Name=depart", "Value=Denver", ENDITEM, 
		"Name=departDate", "Value=12/13/2019", ENDITEM, 
		"Name=arrive", "Value=London", ENDITEM, 
		"Name=returnDate", "Value=16/14/2019", ENDITEM, 
		"Name=numPassengers", "Value=2", ENDITEM, 
		"Name=roundtrip", "Value=on", ENDITEM, 
		"Name=seatPref", "Value=Window", ENDITEM, 
		"Name=seatType", "Value=First", ENDITEM, 
		"Name=findFlights.x", "Value=59", ENDITEM, 
		"Name=findFlights.y", "Value=8", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		LAST);

	lr_think_time(29);

	lr_start_transaction("T13_Find_Flight");

	lr_end_transaction("T13_Find_Flight",LR_AUTO);

	lr_start_transaction("T14_Choose_flight");

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
		"Name=seatType", "Value=First", ENDITEM, 
		"Name=seatPref", "Value=Window", ENDITEM, 
		"Name=reserveFlights.x", "Value=59", ENDITEM, 
		"Name=reserveFlights.y", "Value=10", ENDITEM, 
		LAST);

	lr_end_transaction("T14_Choose_flight",LR_AUTO);

	lr_start_transaction("T15_Ticket_payment");

	web_revert_auto_header("Origin");

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("Origin", 
		"http://localhost:1080");

	lr_think_time(40);

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
		"Name=seatType", "Value=First", ENDITEM, 
		"Name=seatPref", "Value=Window", ENDITEM, 
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

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(32);

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

	web_revert_auto_header("Sec-Fetch-User");

	lr_think_time(17);

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

	return 0;
}