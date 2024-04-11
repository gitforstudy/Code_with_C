 # .bash_profile
  #!/bin/bash
  #~/.bashrc is startup programs
  if [ -f ~/.bashrc ]; then
          . ~/.bashrc
  fi
 
  #specific enviromnet we are write program
  echo "Hello JayaSurya"
  current_time="$(date +'%k%M')" #find the current time
  morning_lower_bound='500' # morning 5 am to 12 pm
  morning_upper_bound='1200'
 
  afternoon_lower_bound_2='1200' #afternoon 12 pm to 6pm
  afternoon_upper_bound_2='1800'
 
  if [ "${current_time}" -gt "${morning_lower_bound}" -a "${current_time}" -lt "${morning_upper_bound}" ]
  then
          echo "Good Morning"
  elif [ "${current_time}" -gt "${afternoon_lower_bound_2}" -a "${current_time}" -lt "${afternoon_upper_bound_2}" ]
  then
          echo "Good Afternoon"
  else
          echo "Good Evening" # evneing 6 pn to when the sun goes down
  fi
 
 
  echo "Current Time : $(date +%T)"

