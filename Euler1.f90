PROGRAM Euler1
	INTEGER:: i
	INTEGER:: mysum = 0
	DO i=0, 999 !for loop to go from 0 to 999
		IF (MODULO(i,3) == 0 .OR. MODULO(i,5) == 0) THEN !checks if the current number is a multiple of 3 or 5
			mysum = mysum + i
		END IF
	END DO
	
	PRINT *, mysum !print the value
END PROGRAM Euler1
