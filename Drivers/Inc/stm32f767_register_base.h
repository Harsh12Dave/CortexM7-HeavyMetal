typedef struct{
	volatile unsigned int RES : 19;
	volatile unsigned int ARTRST : 1;
	volatile unsigned int RES1 : 1;
	volatile unsigned int ARTEN : 1;
	volatile unsigned int PRFTEN : 1;
	volatile unsigned int RES2 : 3;
	volatile unsigned int LATENCY : 4;
}FLASH_ACR;


typedef struct{
	volatile unsigned int FKEYR;
}FLASH_KEYR;

typedef struct{
	volatile unsigned int OPTKEYR;
}FLASH_OPTKEYR;

typedef struct{
	volatile unsigned int RES : 14;
	volatile unsigned int BSY : 1;
	volatile unsigned int RES1 : 7;
	volatile unsigned int ERSERR : 1;
	volatile unsigned int PGPERR : 1;
	volatile unsigned int PGAERR : 1;
	volatile unsigned int WRPERR : 1;
	volatile unsigned int RES2: 2;
	volatile unsigned int OPERR : 1;
	volatile unsigned int EOP : 1;
}FLASH_SR;

typedef struct{
	volatile unsigned int LOCK : 1;
	volatile unsigned int RES : 5;
	volatile unsigned int ERRIE : 1;
	volatile unsigned int EOPIE : 1;
	volatile unsigned int RES1 : 6;
	volatile unsigned int STRT : 1;
	volatile unsigned int MER2 : 1;
	volatile unsigned int RES2 : 6;
	volatile unsigned int PSIZE : 2;
	volatile unsigned int SNB : 5;
	volatile unsigned int MER1 : 1;
	volatile unsigned int SER : 1;
	volatile unsigned int PG : 1;
}FLASH_CR;


typedef struct{
	volatile unsigned int IWDG_STOP : 1;
	volatile unsigned int IWDG_STDBY : 1;
	volatile unsigned int nDBANK : 1;
	volatile unsigned int nDBOOT : 1;
	volatile unsigned int nWRP : 12;
	volatile unsigned int RDP : 8;
	volatile unsigned int USER : 4;
	volatile unsigned int BOR_LEV : 2;
	volatile unsigned int OPTSTRT : 1;
	volatile unsigned int OPTLOCK : 1;
}FLASH_OPTCR;

typedef struct{
	volatile unsigned int BOOT_ADD1 : 16;
	volatile unsigned int BOOT_ADD2 : 16;
}FLASH_OPTCR1;


