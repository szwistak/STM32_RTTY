__IO uint16_t ADCVal[2];
void NVIC_Conf();
void RCC_Conf();
void init_port();
void init_timer(const int rtty_speed);
void init_usart_gps(const uint32_t speed, const uint8_t enable_irq);
