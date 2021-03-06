void Fasa1() {
    float voltage = pzem1.voltage();
    if(voltage != NAN){
        Serial.print("Voltage1: "); Serial.print(voltage); Serial.println("V");
    } else {
        Serial.println("Error reading voltage");
    }

    float current = pzem1.current();
    if(current != NAN){
        Serial.print("Current1: "); Serial.print(current); Serial.println("A");
    } else {
        Serial.println("Error reading current");
    }

    float power = pzem1.power();
    if(current != NAN){
        Serial.print("Power1: "); Serial.print(power); Serial.println("W");
    } else {
        Serial.println("Error reading power");
    }

    float energy = pzem1.energy();
    if(current != NAN){
        Serial.print("Energy1: "); Serial.print(energy,3); Serial.println("kWh");
    } else {
        Serial.println("Error reading energy");
    }

    float frequency = pzem1.frequency();
    if(current != NAN){
        Serial.print("Frequency1: "); Serial.print(frequency, 1); Serial.println("Hz");
    } else {
        Serial.println("Error reading frequency");
    }

    float pf = pzem1.pf();
    if(current != NAN){
        Serial.print("PF1: "); Serial.println(pf);
    } else {
        Serial.println("Error reading power factor");
    }
}
