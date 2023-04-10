* remember to change the init function and file i/o method for windows path
    * `modeling/model settings/model properties/Callbacks/initfcn`

# Internal Combustion Engine Lab Simulink Dashboard

### paths for file i/o on lab windows computers
'C:/Users/[username?]/output-file.txt'

### tuning how to not lock up computer resources
- in subsystem containing logic, right click on file i/o functino and select `block parameters`
then change the sampling rate (in millisecons, i.e. 1000 = 1 second). Other wise you will be
writing to file way to much.
- in simulation function do the same as above to change the sampling rate.
