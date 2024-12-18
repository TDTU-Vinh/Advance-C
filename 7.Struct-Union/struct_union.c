#include <stdio.h>
#include <stdint.h>
#include <string.h>


typedef union {
    struct {
        uint8_t id[2]; // 2 bytes
        uint8_t data[4];// 4 bytes
        uint8_t check_sum[2]; // 2 bytes
    } data;

    uint8_t frame[8];// 1 byte

} Data_Frame;


int main(int argc, char const *argv[])
{
    Data_Frame transmitter_data;
    printf("size of data : %d\n",sizeof(transmitter_data));
    
    strcpy(transmitter_data.data.id, "10");
    strcpy(transmitter_data.data.data, "1234");
    strcpy(transmitter_data.data.check_sum, "70");

		Data_Frame receiver_data;
    strcpy(receiver_data.frame, transmitter_data.frame);
	
    
    return 0;
}
