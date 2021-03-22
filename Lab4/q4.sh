xinput #Earlier details 
xinput create-master Pointer2 #Create new pointer2

xinput #Checking again

xinput reattach 12 15 #reattaching to <usb mouse id> <new pointer id>
xinput #Checking again

xinput remove-master 15
xinput #Checking again

#After a lot of trials 
#⎡ Pointer2 pointer                        	id=17	[master pointer  (18)]
#⎜   ↳ Pointer2 XTEST pointer                  	id=19	[slave  pointer  (17)]
#⎣ Pointer2 keyboard                       	id=18	[master keyboard (17)]
#    ↳ Pointer2 XTEST keyboard                 	id=20	[slave  keyboard (18)]
