## Configuring Linux to use DTCC Users WiFi 
Note: This procedure was done postmortem and needs verification.

1. However you get there, open Network Connections  
2. Select [+] at Choose Connection Type select WiFi from the drop down box.  
3. Select [Create...]  
4. On [WiFi] Tab enter "DTCC Users", leave everything else with the defaults.  
5. Select [WiFi-Security] Tab  (Set as follows)
  5.1 Security: WPA & WPA2 Enterprise  
  5.2 Authentication: Protected EAP (PEAP)  
  5.3 Anonymous identity: (Leave Blank)  
  5.4 Domain (Leave Blank)  
  5.5 Check No CA certificate is required (This grays out the CA boxes above this section.)  
  5.6 PEAP Version: Automatic  
  5.7 Inner authentication: MSCHAPv2  
  5.8 Username: (Same username as on DTCC login)  
  5.9 Password: (Same password as on DTCC login)  
