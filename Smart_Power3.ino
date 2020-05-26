void Fasa3() {
    float voltage = pzem3.voltage();
    if(voltage != NAN){
        Serial.print("Voltage3: "); Serial.print(voltage); Serial.println("V");
    } else {
        Serial.println("Error reading voltage");
    }

    float current = pzem3.current();
    if(current != NAN){
        Serial.print("Current3: "); Serial.print(current); Serial.println("A");
    } else {
        Serial.println("Error reading current");
    }

    float power = pzem3.power();
    if(current != NAN){
        Serial.print("Power3: "); Serial.print(power); Serial.println("W");
    } else {
        Serial.println("Error reading power");
    }

    float energy = pzem3.energy();
    if(current != NAN){
        Serial.print("Energy3: "); Serial.print(energy,3); Serial.println("kWh");
    } else {
        Serial.println("Error reading energy");
    }

    float frequency = pzem3.frequency();
    if(current != NAN){
        Serial.print("Frequency3: "); Serial.print(frequency, 1); Serial.println("Hz");
    } else {
        Serial.println("Error reading frequency");
    }

    float pf = pzem3.pf();
    if(current != NAN){
        Serial.print("PF3: "); Serial.println(pf);
    } else {
        Serial.println("Error reading power factor");
    }
}
