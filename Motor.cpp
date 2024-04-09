#include "Motor.h"
#include "mbed.h"

Motor::Motor(PinName pin1, PinName pin2, PinName pin3, PinName pin4) :  bus(pin1, pin2, pin3, pin4){}
    
// :: é uma estrutura de classe
// testando commit
// https://www.cprogramming.com/tutorial/templates.html
void Motor::gira_motor_sentido_horario(int tempo){
    bus.write(0x08);
    wait_ms(tempo);
    bus.write(0x04);
    wait_ms(tempo);
    bus.write(0x02);
    wait_ms(tempo);
    bus.write(0x01);
    wait_ms(tempo);
}

void Motor::gira_motor_sentido_antihorario(int tempo){
    bus.write(0x01);
    wait_ms(tempo);
    bus.write(0x02);
    wait_ms(tempo);
    bus.write(0x04);
    wait_ms(tempo);
    bus.write(0x08);
    wait_ms(tempo);
    
}

void Motor::stop(){
    bus.write(0x00);
}

