/*
 * fnc_controller.h
 *
 *  Created on: Jul 7, 2024
 *      Author: IOT
 */

#ifndef INC_FNC_CONTROLLER_H_
#define INC_FNC_CONTROLLER_H_
void init_fnd();
void send(uint8_t X);
void send_port(uint8_t X,uint8_t port);
void digit4_show(int n, int replay,  uint8_t showZero);
void digit4_replay(int n, int replay);
void digit4(int n);
void digit4_showZero_replay(int n, int replay);
void digit4_showZero(int n);
void digit2_replay(int n, int port, int replay);
void digit2_port(int n, int port);



#endif /* INC_FNC_CONTROLLER_H_ */
