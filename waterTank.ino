// Calcular litros de agua que contiente un tinaco

// const = solo lectura "constante"

const byte trigger = 8;
const byte echo = 5;

float litros;
float altura;
float distancia;
int tiempo; 

const float pi = 3.1416;
const float radio = 75;
const float Altura = 150;

const byte led1 = 13;
const byte rele = 2;
  

void setup()
{
  Serial.begin(9600);
  pinMode(trigger,OUTPUT);
 
}

void loop()
{
 // Código para sensor
  digitalWrite(trigger,HIGH);
   delayMicroseconds(10);
  digitalWrite(trigger,LOW);
   delayMicroseconds(10);
  tiempo= pulseIn(echo,HIGH);
  distancia = 0.01715 * tiempo;
  
 // Claculado la altura y los litros
  altura = h - distancia;
  litros = pi * (radio * radio) * altura * 0.001;
  
  	// (pow(radio,2))
  
  if (litros < 500){
    digitalWrite(led1,HIGH);
    digitalWrite(rele,HIGH);
  }
  
  if (litros > 2300){
    digitalWrite(led1,LOW);
    digitalWrite(rele,LOW);
  }

 
}
