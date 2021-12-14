#!/bin/bash
time parallel -j+1 --eta 'cd {} && galfit galfit.feedme>output.dat && cat fit.log>>../allFits.log' ::: */
