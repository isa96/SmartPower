void Fasa2() {
    float voltage = pzem2.voltage();
    if(voltage != NAN){
        Serial.print("Voltage2: "); Serial.print(voltage); Serial.println("V");
    } else {
        Serial.println("Error reading voltage");
    }

    float current = pzem2.current();
    if(current != NAN){
        Serial.print("Current2: "); Serial.print(current); Serial.println("A");
    } else {
        Serial.println("Error reading current");
    }

    float power = pzem2.power();
    if(current != NAN){
        Serial.print("Power2: "); Serial.print(power); Serial.println("W");
    } else {
        Serial.println("Error reading power");
    }

    float energy = pzem2.energy();
    if(current != NAN){
        Serial.print("Energy2: "); Serial.print(energy,3); Serial.println("kWh");
    } else {
        Serial.println("Error reading energy");
    }

    float frequency = pzem2.frequency();
    if(current != NAN){
        Serial.print("Frequency2: "); Serial.print(frequency, 1); Serial.println("Hz");
    } else {
        Serial.println("Error reading frequency");
    }

    float pf = pzem2.pf();
    if(current != NAN){
        Serial.print("PF2: "); Serial.println(pf);
    } else {
        Serial.println("Error reading power factor");
    }
}
