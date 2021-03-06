// filename: ISSP_Vectors.h
#include "issp_revision.h"
#ifdef PROJECT_REV_304
// Copyright 2006-2007, Cypress Semiconductor Corporation.
//read_write_setup
//THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND 
//CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, 
//INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF 
//MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE 
//DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS 
//BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR 
//CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
//OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
//BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
//LIABILITY, WHETHER IN CONRTACT, STRICT LIABILITY, OR TORT (INCLUDING
//NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
//SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// Disclaimer: CYPRESS MAKES NO WARRANTY OF ANY KIND,EXPRESS OR IMPLIED,
// WITH REGARD TO THIS MATERIAL, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
// WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
// Cypress reserves the right to make changes without further notice to the
// materials described herein. Cypress does not assume any liability arising
// out of the application or use of any product or circuit described herein.
// Cypress does not authorize its products for use as critical components in
// life-support systems where a malfunction or failure may reasonably be
// expected to result in significant injury to the user. The inclusion of
// Cypress???product in a life-support systems application implies that the
// manufacturer assumes all risk of such use and in doing so indemnifies
// Cypress against all charges.
//
// Use may be limited by and subject to the applicable Cypress software
// license agreement.
//
//-----------------------------------------------------------------------------
#ifndef INC_ISSP_VECTORS
#define INC_ISSP_VECTORS

#include "issp_directives.h"


#ifdef CYONSFN2052
    unsigned char target_id_v[] = {0x05, 0x9A, 0x70, 0x12};
	unsigned char target_id_v2[] = {0x05, 0x83, 0x70, 0x12};
#endif



const unsigned int num_bits_checksum = 418;
const unsigned char checksum_v[] =
{
	0xDE, 0xE2, 0x1F, 0x7F, 0x02, 0x7D, 0xC4, 0x09, 0xF7, 0x00, 0x1F, 0x9F, 0x07, 0x5E, 0x7C, 0x81, 0xF9, 0xF4, 0x01, 0xF7, 0xF0, 0x07, 0xDC, 0x40, 0x1F, 0x70, 0x01, 0xFD, 0xEE, 0x01, 0xF7, 0xA0, 0x1F, 0xDE, 0xA0, 0x1F, 0x7B, 0x00, 0x7D, 0xE0, 0x0F, 0xF7, 0xC0, 0x07, 0xDF, 0x28, 0x1F, 0x7D, 0x18, 0x7D, 0xFE, 0x25, 0xC0
};

const unsigned char read_status[] =
{
	0xBF, 0x00, 0x80
};


const unsigned int num_bits_id_setup_1 = 616;
const unsigned char id_setup_1[] =
{
	0xCA, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0D, 0xEE, 0x21, 0xF7,0xF0, 0x27, 0xDC, 0x40, 0x9F, 0x70, 0x01, 0xFD, 0xEE, 0x01, 0xE7, 0xC1,0xD7, 0x9F, 0x20, 0x7E, 0x3F, 0x9D, 0x78, 0xF6,	0x21, 0xF7, 0xB8, 0x87, 0xDF, 0xC0, 0x1F, 0x71,	0x00, 0x7D,	0xC0, 0x07, 0xF7, 0xB8, 0x07, 0xDE,	0x80, 0x7F, 0x7A, 0x80,	0x7D, 0xEC, 0x01, 0xF7,	0x80, 0x4F, 0xDF, 0x00, 0x1F, 0x7C,	0xA0, 0x7D,	0xF4, 0x61, 0xF7, 0xF8, 0x97
};

const unsigned int num_bits_id_setup_2 = 418;
const unsigned char id_setup_2[] =
{
    0xDE, 0xE2, 0x1F, 0x7F, 0x02, 0x7D, 0xC4, 0x09, 0xF7, 0x00, 0x1F, 0x9F, 0x07, 0x5E, 0x7C, 0x81, 0xF9, 0xF4, 0x01, 0xF7, 0xF0, 0x07, 0xDC, 0x40, 0x1F, 0x70, 0x01, 0xFD, 0xEE, 0x01, 0xF7, 0xA0, 0x1F, 0xDE, 0xA0, 0x1F, 0x7B, 0x00, 0x7D, 0xE0, 0x0D, 0xF7, 0xC0, 0x07, 0xDF, 0x28, 0x1F, 0x7D, 0x18, 0x7D, 0xFE, 0x25, 0xC0
};

const unsigned int num_bits_tsync_enable = 110;
const unsigned char tsync_enable[] =
{
    0xDE, 0xE2, 0x1F, 0x7F, 0x02, 0x7D, 0xC4, 0x09, 0xF7, 0x00, 0x1F, 0xDE, 0xE0, 0x1C
};
const unsigned int num_bits_tsync_disable = 110;
const unsigned char tsync_disable[] =
{
    0xDE, 0xE2, 0x1F, 0x71, 0x00, 0x7D, 0xFC, 0x01, 0xF7, 0x00, 0x1F, 0xDE, 0xE0, 0x1C
};


const unsigned int num_bits_set_block_num = 11;
const unsigned char set_block_num[] =
{
    0x9F, 0x40
};

const unsigned int num_bits_set_block_num_end = 3;		//PTJ: this selects the first three bits of set_block_num_end
const unsigned char set_block_num_end = 0xE0;

const unsigned int num_bits_read_write_setup = 66;		//PTJ:
const unsigned char read_write_setup[] =
{
    0xDE, 0xF0, 0x1F, 0x78, 0x00, 0x7D, 0xA0, 0x03, 0xC0
};

const unsigned int num_bits_my_verify_setup = 440;
const unsigned char verify_setup[] =
{
    0xDE, 0xE2, 0x1F, 0x7F, 0x02, 0x7D, 0xC4, 0x09, 0xF7, 0x00, 0x1F, 0x9F, 0x07, 0x5E, 0x7C, 0x81, 0xF9, 0xF7, 0x01, 0xF7, 0xF0, 0x07, 0xDC, 0x40, 0x1F, 0x70, 0x01, 0xFD, 0xEE, 0x01, 0xF6, 0xA8, 0x0F, 0xDE, 0x80, 0x7F, 0x7A, 0x80, 0x7D, 0xEC, 0x01, 0xF7, 0x80, 0x0F, 0xDF, 0x00, 0x1F, 0x7C, 0xA0, 0x7D, 0xF4, 0x61, 0xF7, 0xF8, 0x97
};

const unsigned int num_bits_erase = 396;		//PTJ: erase with TSYNC Enable and Disable
const unsigned char erase[] =
{
    0xDE, 0xE2, 0x1F, 0x7F, 0x02, 0x7D, 0xC4, 0x09, 0xF7, 0x00, 0x1F, 0x9F, 0x07, 0x5E, 0x7C, 0x85, 0xFD, 0xFC, 0x01, 0xF7, 0x10, 0x07, 0xDC, 0x00, 0x7F, 0x7B, 0x80, 0x7D, 0xE0, 0x0B, 0xF7, 0xA0, 0x1F, 0xDE, 0xA0, 0x1F, 0x7B, 0x04, 0x7D, 0xF0, 0x01, 0xF7, 0xC9, 0x87, 0xDF, 0x48, 0x1F, 0x7F, 0x89, 0x70
};

const unsigned int num_bits_secure = 440;		//PTJ: secure with TSYNC Enable and Disable
const unsigned char secure[] =
{
    0xDE, 0xE2, 0x1F, 0x7F, 0x02, 0x7D, 0xC4, 0x09, 0xF7, 0x00, 0x1F, 0x9F, 0x07, 0x5E, 0x7C, 0x81, 0xF9, 0xF7, 0x01, 0xF7, 0xF0, 0x07, 0xDC, 0x40, 0x1F, 0x70, 0x01, 0xFD, 0xEE, 0x01, 0xF6, 0xA0, 0x0F, 0xDE, 0x80, 0x7F, 0x7A, 0x80, 0x7D, 0xEC, 0x01, 0xF7, 0x80, 0x27, 0xDF, 0x00, 0x1F, 0x7C, 0xA0, 0x7D, 0xF4, 0x61, 0xF7, 0xF8, 0x97
};

const unsigned int num_bits_program_and_verify = 440;		//PTJ: length of program_block[], not including zero padding at end
const unsigned char program_and_verify[] =
{
    0xDE, 0xE2, 0x1F, 0x7F, 0x02, 0x7D, 0xC4, 0x09, 0xF7, 0x00, 0x1F, 0x9F, 0x07, 0x5E, 0x7C, 0x81, 0xF9, 0xF7, 0x01, 0xF7, 0xF0, 0x07, 0xDC, 0x40, 0x1F, 0x70, 0x01, 0xFD, 0xEE, 0x01, 0xF6, 0xA0, 0x0F, 0xDE, 0x80, 0x7F, 0x7A, 0x80, 0x7D, 0xEC, 0x01, 0xF7, 0x80, 0x57, 0xDF, 0x00, 0x1F, 0x7C, 0xA0, 0x7D, 0xF4, 0x61, 0xF7, 0xF8, 0x97
};

const unsigned char read_id_v[] =
{
    0xBF, 0x00, 0xDF, 0x90, 0x00, 0xFE, 0x60, 0xFF, 0x00
};

const unsigned char    write_byte_start = 0x90;			//PTJ: this is set to SRAM 0x80
const unsigned char    write_byte_end = 0xE0;

const unsigned char    num_bits_wait_and_poll_end = 40;
const unsigned char    wait_and_poll_end[] =
{
    0x00, 0x00, 0x00, 0x00, 0x00
};

const unsigned char read_checksum_v[] =
{
    0xBF, 0x20, 0xDF, 0x80, 0x80
};


const unsigned char read_byte_v[] =
{
    0xB0, 0x80
};

#endif  //(INC_ISSP_VECTORS)
#endif  //(PROJECT_REV_)
//end of file ISSP_Vectors.h
