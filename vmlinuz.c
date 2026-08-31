typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef pointer32 ImageBaseOffset32;

typedef unsigned long long    qword;
typedef unsigned int    uint;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined5;
typedef unsigned long long    undefined8;
typedef unsigned short    word;
typedef unsigned short    wchar16;
typedef struct IMAGE_DOS_HEADER IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;

struct IMAGE_DOS_HEADER {
    char e_magic[2]; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
    word e_res[4][4]; // Reserved words
    word e_oemid; // OEM identifier (for e_oeminfo)
    word e_oeminfo; // OEM information; e_oemid specific
    word e_res2[10][10]; // Reserved words
    dword e_lfanew; // File address of new exe header
};

typedef struct IMAGE_OPTIONAL_HEADER64 IMAGE_OPTIONAL_HEADER64, *PIMAGE_OPTIONAL_HEADER64;

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

struct IMAGE_OPTIONAL_HEADER64 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    pointer64 ImageBase;
    dword SectionAlignment;
    dword FileAlignment;
    word MajorOperatingSystemVersion;
    word MinorOperatingSystemVersion;
    word MajorImageVersion;
    word MinorImageVersion;
    word MajorSubsystemVersion;
    word MinorSubsystemVersion;
    dword Win32VersionValue;
    dword SizeOfImage;
    dword SizeOfHeaders;
    dword CheckSum;
    word Subsystem;
    word DllCharacteristics;
    qword SizeOfStackReserve;
    qword SizeOfStackCommit;
    qword SizeOfHeapReserve;
    qword SizeOfHeapCommit;
    dword LoaderFlags;
    dword NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[6];
};

typedef struct IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;

typedef union Misc Misc, *PMisc;

typedef enum SectionFlags {
    IMAGE_SCN_TYPE_NO_PAD=8,
    IMAGE_SCN_RESERVED_0001=16,
    IMAGE_SCN_CNT_CODE=32,
    IMAGE_SCN_CNT_INITIALIZED_DATA=64,
    IMAGE_SCN_CNT_UNINITIALIZED_DATA=128,
    IMAGE_SCN_LNK_OTHER=256,
    IMAGE_SCN_LNK_INFO=512,
    IMAGE_SCN_RESERVED_0040=1024,
    IMAGE_SCN_LNK_REMOVE=2048,
    IMAGE_SCN_LNK_COMDAT=4096,
    IMAGE_SCN_GPREL=32768,
    IMAGE_SCN_MEM_16BIT=131072,
    IMAGE_SCN_MEM_PURGEABLE=131072,
    IMAGE_SCN_MEM_LOCKED=262144,
    IMAGE_SCN_MEM_PRELOAD=524288,
    IMAGE_SCN_ALIGN_1BYTES=1048576,
    IMAGE_SCN_ALIGN_2BYTES=2097152,
    IMAGE_SCN_ALIGN_4BYTES=3145728,
    IMAGE_SCN_ALIGN_8BYTES=4194304,
    IMAGE_SCN_ALIGN_16BYTES=5242880,
    IMAGE_SCN_ALIGN_32BYTES=6291456,
    IMAGE_SCN_ALIGN_64BYTES=7340032,
    IMAGE_SCN_ALIGN_128BYTES=8388608,
    IMAGE_SCN_ALIGN_256BYTES=9437184,
    IMAGE_SCN_ALIGN_512BYTES=10485760,
    IMAGE_SCN_ALIGN_1024BYTES=11534336,
    IMAGE_SCN_ALIGN_2048BYTES=12582912,
    IMAGE_SCN_ALIGN_4096BYTES=13631488,
    IMAGE_SCN_ALIGN_8192BYTES=14680064,
    IMAGE_SCN_LNK_NRELOC_OVFL=16777216,
    IMAGE_SCN_MEM_DISCARDABLE=33554432,
    IMAGE_SCN_MEM_NOT_CACHED=67108864,
    IMAGE_SCN_MEM_NOT_PAGED=134217728,
    IMAGE_SCN_MEM_SHARED=268435456,
    IMAGE_SCN_MEM_EXECUTE=536870912,
    IMAGE_SCN_MEM_READ=1073741824,
    IMAGE_SCN_MEM_WRITE=2147483648
} SectionFlags;

union Misc {
    dword PhysicalAddress;
    dword VirtualSize;
};

struct IMAGE_SECTION_HEADER {
    char Name[8];
    union Misc Misc;
    ImageBaseOffset32 VirtualAddress;
    dword SizeOfRawData;
    dword PointerToRawData;
    dword PointerToRelocations;
    dword PointerToLinenumbers;
    word NumberOfRelocations;
    word NumberOfLinenumbers;
    enum SectionFlags Characteristics;
};

typedef struct IMAGE_NT_HEADERS64 IMAGE_NT_HEADERS64, *PIMAGE_NT_HEADERS64;

typedef struct IMAGE_FILE_HEADER IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;

struct IMAGE_FILE_HEADER {
    word Machine; // 34404
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

struct IMAGE_NT_HEADERS64 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER64 OptionalHeader;
};



undefined DAT_00e96140;
undefined DAT_00e96160;
undefined DAT_00e957e0;
undefined DAT_00e95800;
undefined *DAT_00ea6028;
undefined *DAT_00ea6020;
int DAT_00ea0254;
int DAT_00ea0250;
longlong DAT_00ed7048;
undefined DAT_0000683c;
undefined DAT_00006840;
undefined DAT_00006844;
undefined DAT_000074c8;
undefined DAT_000074d0;
undefined DAT_000074d8;
undefined DAT_0000752c;
undefined DAT_00007598;
undefined DAT_000075b8;
undefined DAT_00007678;
undefined DAT_00007688;
undefined DAT_00007680;
undefined DAT_0000768c;
undefined DAT_00007694;
undefined DAT_0000769c;
undefined DAT_000076a4;
undefined DAT_000076ac;
undefined UNK_0001768c;
ulonglong DAT_00ed7058;
ulonglong DAT_00ea6008;
ulonglong DAT_00ea6010;
undefined DAT_00ed7050;
undefined DAT_00e95fc0;
undefined DAT_00e95fc4;
undefined DAT_00e95fc8;
undefined DAT_00e95fcc;
undefined DAT_00007504;
undefined DAT_000075d8;
undefined DAT_000075e0;
undefined DAT_000075e8;
undefined DAT_000075f0;
undefined DAT_000075f8;
undefined DAT_00007588;
undefined DAT_000075c8;
undefined DAT_000075d0;
undefined DAT_000075ec;
undefined DAT_00007600;
undefined DAT_00007604;
undefined DAT_00007608;
undefined DAT_00007610;
undefined DAT_00007620;
undefined DAT_00007630;
undefined DAT_00007654;
undefined DAT_00007658;
undefined DAT_000176c0;
undefined UNK_000176c7;
undefined UNK_000176c8;
undefined DAT_00007508;
undefined DAT_00007510;
undefined DAT_00007530;
undefined DAT_00007538;
undefined DAT_00007540;
undefined DAT_00007548;
undefined DAT_00007550;
undefined DAT_00007558;
undefined DAT_00007560;
undefined DAT_00007568;
undefined DAT_00007570;
undefined DAT_00007578;
undefined DAT_0000758c;
undefined DAT_00007590;
undefined DAT_0000681c;
undefined UNK_00006828;
undefined DAT_00e95da0;
undefined DAT_00e95e80;
undefined DAT_00e95ea0;
undefined DAT_00e95f20;
undefined DAT_00e960c0;
undefined DAT_00e96100;
undefined UNK_00001020;
undefined UNK_00001828;
undefined UNK_00002830;
undefined DAT_00006834;
undefined DAT_00006838;
undefined DAT_00006ab4;
undefined DAT_00006ab8;
undefined DAT_00002838;
undefined UNK_00006abc;
undefined DAT_00007528;
undefined UNK_00010001;
undefined UNK_00020001;
undefined UNK_00020020;
undefined UNK_00020040;
undefined DAT_000074f0;
undefined DAT_00010000;
undefined DAT_000074c0;
undefined DAT_000074e8;
undefined DAT_00ea0258;
byte *DAT_00ea6038;
undefined *DAT_00ea6010;
undefined2 *DAT_00ea6008;
undefined *DAT_00ed7058;
undefined DAT_000052cc;
undefined DAT_00e64ac6;
undefined DAT_00ea7040;
undefined2 DAT_00ed7040;
undefined8 DAT_00ea6038;
undefined DAT_00ed7060;
char DAT_00ed74e4;
undefined DAT_00ed7460;
undefined DAT_00ed7468;
undefined DAT_00ed7464;
undefined DAT_00ed748c;
undefined DAT_00ed749c;
undefined DAT_00ed7480;
undefined DAT_00ed7488;
undefined DAT_00ed74cc;
undefined DAT_00ed74a4;
undefined DAT_00ed7490;
ulonglong *DAT_00ea6038;
undefined8 DAT_00e96360;
pointer PTR_DAT_00e96430;
undefined DAT_00e96260;
ulonglong *DAT_00ed7c58;
int DAT_00ea0398;
ulonglong DAT_00ea0260;
int DAT_00ea0390;
undefined *DAT_00ed7c20;
ulonglong DAT_00ed7c38;
ulonglong DAT_00ed7c50;
ulonglong DAT_00ea0268;
undefined8 DAT_00ea0268;
undefined DAT_00ea0380;
undefined DAT_00ea0270;
undefined4 DAT_00ea0278;
undefined4 DAT_00ea027c;
undefined DAT_00eda4a0;
undefined DAT_00eda4c0;
undefined DAT_00eda4e0;
undefined DAT_00eda500;
undefined DAT_00eda520;
undefined DAT_00eda540;
undefined DAT_00eda560;
undefined DAT_00eda578;
undefined DAT_00eda580;
undefined DAT_00eda590;
undefined DAT_00eda5c0;
undefined DAT_00eda5e0;
undefined DAT_00eda600;
undefined DAT_00eda610;
undefined DAT_00eda620;
undefined DAT_00eda628;
undefined DAT_00eda640;
undefined DAT_00eda648;
undefined DAT_00eda660;
undefined DAT_00eda898;
undefined *DAT_00eda000;
undefined DAT_00eda840;
undefined DAT_00eda848;
undefined DAT_00eda850;
undefined DAT_00eda858;
undefined DAT_00eda860;
undefined DAT_00eda868;
undefined DAT_00eda870;
undefined DAT_00eda878;
undefined DAT_00eda880;
undefined DAT_00eda888;
undefined DAT_00eda890;
undefined DAT_00eda668;
undefined DAT_00eda6c0;
undefined DAT_00eda6c8;
undefined DAT_00eda6d0;
undefined DAT_00eda098;
undefined DAT_00eda6d8;
undefined DAT_00eda0a0;
undefined DAT_00eda720;
undefined DAT_00eda0a8;
undefined DAT_00eda728;
undefined DAT_00eda0b0;
undefined DAT_00eda730;
undefined DAT_00eda0b8;
undefined DAT_00eda740;
undefined DAT_00eda0c0;
undefined DAT_00eda748;
undefined DAT_00eda0c8;
undefined DAT_00eda760;
undefined DAT_00eda0d0;
undefined DAT_00eda768;
undefined DAT_00eda0d8;
undefined DAT_00eda780;
undefined DAT_00eda040;
undefined DAT_00eda048;
undefined DAT_00eda050;
undefined DAT_00eda058;
undefined DAT_00eda060;
undefined DAT_00eda068;
undefined DAT_00eda070;
undefined DAT_00eda078;
undefined DAT_00eda080;
undefined DAT_00eda088;
undefined DAT_00eda090;
undefined DAT_00eda0e0;
undefined DAT_00eda0e8;
undefined DAT_00eda0f0;
undefined DAT_00eda0f8;
undefined DAT_00eda100;
undefined DAT_00eda110;
undefined DAT_00eda118;
undefined DAT_00e96500;
undefined DAT_00e96520;
pointer PTR_DAT_00e96540;
undefined DAT_00e96560;
undefined DAT_00e96580;
undefined DAT_00e965a0;
undefined DAT_00e965c0;
undefined DAT_00e965e0;
undefined DAT_00e96600;
undefined DAT_00e96620;
undefined DAT_00e96640;
undefined DAT_00e96660;
undefined DAT_00e96680;
undefined DAT_00e966a0;
undefined DAT_00e966c0;
undefined DAT_00e966e0;
undefined DAT_00e96700;
undefined DAT_00e96720;
undefined DAT_00e96740;
pointer PTR_DAT_00e96760;
pointer PTR_DAT_00e96780;
undefined DAT_00e967a0;
undefined DAT_00e967c0;
undefined DAT_00e967e0;
undefined DAT_00e96800;
undefined DAT_00e96820;
undefined DAT_00e96840;
undefined DAT_00e96860;
undefined DAT_00e96880;
undefined DAT_00e968a0;
undefined DAT_00e968c0;
undefined DAT_00e968e0;
undefined DAT_00e96900;
undefined DAT_00e96d00;
undefined DAT_00e97100;
undefined DAT_00e97500;
undefined DAT_00e97900;
undefined DAT_00e97d00;
undefined DAT_00e98100;
undefined DAT_00e98500;
undefined DAT_00e98900;
undefined DAT_00e98d00;
undefined DAT_00e99100;
undefined DAT_00e99500;
undefined DAT_00e99900;
undefined DAT_00e99d00;
undefined DAT_00e9a100;
undefined DAT_00e9a500;
undefined DAT_00e9a900;
undefined DAT_00e9ad00;
undefined DAT_00e9b100;
undefined DAT_00e9b500;
undefined DAT_00e9b900;
undefined DAT_00e9bd00;
undefined DAT_00e9c100;
undefined DAT_00e9c500;
undefined DAT_00e9c900;
undefined DAT_00e9cd00;
undefined DAT_00e9d100;
undefined DAT_00edb000;
undefined2 DAT_00ea1010;
char *DAT_00eda000;
char DAT_00ea1028;
longlong DAT_00ea1020;
longlong DAT_00ea1018;
ulonglong DAT_00ea0270;
longlong DAT_00eda000;
undefined4 DAT_00ea0400;
undefined DAT_00ea03e0;
undefined DAT_00ea03e4;
undefined DAT_00ea03e8;
ulonglong DAT_00ea1020;
ulonglong DAT_00ea1018;
longlong DAT_00ea0268;
ushort DAT_00ea1010;
char DAT_00ee4001;
char DAT_00ee4000;
undefined DAT_00ea03aa;
undefined DAT_00ea03a0;
undefined2 DAT_00ea03b4;
char DAT_00ea03c8;
longlong DAT_00ee4058;
undefined DAT_00e9d920;
undefined DAT_00e9d924;
undefined DAT_00e9d928;
undefined1 DAT_00ee400e;
undefined1 DAT_00ee4009;
undefined4 DAT_00ea03cc;
undefined1 DAT_00ee400f;
undefined1 DAT_00ee4040;
undefined4 DAT_00ee4004;
undefined1 DAT_00ee400a;
byte DAT_00ee4008;
undefined1 DAT_00ee400d;
char DAT_00ee400c;
char DAT_00ee400b;
char DAT_00ee400d;
char DAT_00ee400f;
undefined DAT_00e9d900;
undefined DAT_403efcb34006c0c1;
char DAT_00ee400a;
undefined8 DAT_00ee4010;
undefined4 DAT_00ee4020;
undefined4 DAT_00ee4024;
undefined4 DAT_00ee4028;
undefined4 DAT_00ee402c;
undefined1 DAT_00ee4030;
uint DAT_00ee4020;
uint DAT_00ee4024;
int DAT_00ee4028;
int DAT_00ee402c;
char DAT_00ee4030;
undefined UNK_00989680;
undefined DAT_00e9ed26;
int DAT_00ea03cc;
undefined8 DAT_00ee4038;
longlong DAT_00ee4038;
undefined DAT_00e9e557;
undefined8 DAT_00ee4048;
undefined *DAT_00ee4048;
char DAT_00ee4040;
longlong DAT_00ee4068;
longlong DAT_00ee4050;
longlong *DAT_00ee4058;
longlong *DAT_00ee4050;
undefined *DAT_00ee4060;
int DAT_00ee4004;
char DAT_00ee4009;
undefined8 DAT_00ee4068;
undefined DAT_44fbf6c391bd12fe;
undefined DAT_00e9db40;
undefined DAT_00e9db6a;
undefined DAT_41cbf4fa982c298b;
undefined DAT_4a3823dc9042a9de;
undefined8 DAT_00ee4070;
undefined DAT_00e9dba0;

// WARNING: Removing unreachable block (ram,0x00e69ebf)
// WARNING: Removing unreachable block (ram,0x00e69eaa)
// WARNING: Removing unreachable block (ram,0x00e69e9c)
// WARNING: Removing unreachable block (ram,0x00e69e87)
// WARNING: Removing unreachable block (ram,0x00e69e52)
// WARNING: Removing unreachable block (ram,0x00e69e09)

undefined8 FUN_00e69e00(void)

{
  int *piVar1;
  longlong lVar2;
  uint *puVar3;
  ulonglong uVar4;
  bool bVar5;
  uint uVar6;
  
  piVar1 = (int *)cpuid_basic_info(0);
  if (*piVar1 != 0) {
    bVar5 = false;
    if (((piVar1[1] == 0x68747541) && (piVar1[2] == 0x69746e65)) && (piVar1[3] == 0x444d4163)) {
      bVar5 = true;
    }
    else if (((piVar1[1] == 0x756e6547) && (piVar1[2] == 0x49656e69)) && (piVar1[3] == 0x6c65746e))
    {
      puVar3 = (uint *)cpuid_Version_info(1);
      uVar6 = (*puVar3 & 0xff00f00) >> 8;
      if ((6 < uVar6) || ((5 < uVar6 && (0xc < (*puVar3 & 0xf00f0) >> 4)))) {
        uVar4 = rdmsr(0x1a0);
        uVar6 = (uint)(uVar4 >> 0x20);
        if ((uVar6 >> 2 & 1) != 0) {
          wrmsr(0x1a0,(ulonglong)(uVar6 & 0xfffffffb) << 0x20 | uVar4 & 0xffffffff);
        }
      }
    }
    lVar2 = cpuid_Version_info(1);
    if ((((*(uint *)(lVar2 + 8) & 0x7008161) == 0x7008161) &&
        (puVar3 = (uint *)cpuid(0x80000000), 0x80000000 < *puVar3)) &&
       (lVar2 = cpuid(0x80000001), (*(uint *)(lVar2 + 8) & 0x20000000) == 0x20000000)) {
      while( true ) {
        lVar2 = cpuid_Version_info(1);
        if ((*(uint *)(lVar2 + 8) & 0x6000000) == 0x6000000) {
          return 0;
        }
        if (!bVar5) break;
        uVar4 = rdmsr(0xc0010015);
        wrmsr(0xc0010015,uVar4 & 0xffffffff00000000 | (ulonglong)((uint)uVar4 & 0xffff7fff));
        bVar5 = false;
      }
    }
  }
  return 1;
}



void FUN_00e69f30(int param_1,byte *param_2,int param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  byte *unaff_RSI;
  uint uVar5;
  int *unaff_RDI;
  longlong lVar6;
  uint uVar7;
  int local_res8;
  
  uVar5 = 1 << ((byte)(param_3 - param_1) & 0x1f);
  uVar7 = param_3 - param_1 & 0x1f;
  if (uVar7 == 2) {
    if (unaff_RSI != param_2) {
      do {
        uVar5 = (uint)*unaff_RSI;
        if (local_res8 != 1) {
          uVar5 = (uint)*unaff_RSI * 0x100 + (param_4 & 0xffff);
        }
        unaff_RSI = unaff_RSI + 1;
        iVar3 = param_1 * 0x10000 + local_res8 * 0x1000000 + uVar5;
        uVar4 = CONCAT44(iVar3,iVar3);
        *(undefined8 *)unaff_RDI = uVar4;
        *(undefined8 *)(unaff_RDI + 2) = uVar4;
        unaff_RDI = unaff_RDI + 4;
      } while (param_2 != unaff_RSI);
      return;
    }
    return;
  }
  if (uVar5 < 5) {
    if (uVar7 == 0) {
      if (unaff_RSI != param_2) {
        lVar6 = 0;
        do {
          uVar5 = (uint)unaff_RSI[lVar6];
          if (local_res8 != 1) {
            uVar5 = (uint)unaff_RSI[lVar6] * 0x100 + (param_4 & 0xffff);
          }
          unaff_RDI[lVar6] = uVar5 + param_1 * 0x10000 + local_res8 * 0x1000000;
          lVar6 = lVar6 + 1;
        } while ((longlong)param_2 - (longlong)unaff_RSI != lVar6);
        return;
      }
      return;
    }
    if (uVar7 == 1) {
      if (unaff_RSI != param_2) {
        do {
          uVar5 = (uint)*unaff_RSI;
          if (local_res8 != 1) {
            uVar5 = (uint)*unaff_RSI * 0x100 + (param_4 & 0xffff);
          }
          unaff_RSI = unaff_RSI + 1;
          iVar3 = uVar5 + param_1 * 0x10000 + local_res8 * 0x1000000;
          *unaff_RDI = iVar3;
          unaff_RDI[1] = iVar3;
          unaff_RDI = unaff_RDI + 2;
        } while (param_2 != unaff_RSI);
        return;
      }
      return;
    }
  }
  else if (uVar7 == 3) {
    if (unaff_RSI != param_2) {
      do {
        uVar5 = (uint)*unaff_RSI;
        if (local_res8 != 1) {
          uVar5 = (uint)*unaff_RSI * 0x100 + (param_4 & 0xffff);
        }
        unaff_RSI = unaff_RSI + 1;
        iVar3 = param_1 * 0x10000 + local_res8 * 0x1000000 + uVar5;
        uVar4 = CONCAT44(iVar3,iVar3);
        *(undefined8 *)unaff_RDI = uVar4;
        *(undefined8 *)(unaff_RDI + 2) = uVar4;
        *(undefined8 *)(unaff_RDI + 4) = uVar4;
        *(undefined8 *)(unaff_RDI + 6) = uVar4;
        unaff_RDI = unaff_RDI + 8;
      } while (param_2 != unaff_RSI);
      return;
    }
    return;
  }
  if (unaff_RSI != param_2) {
    do {
      uVar7 = (uint)*unaff_RSI;
      if (local_res8 != 1) {
        uVar7 = (uint)*unaff_RSI * 0x100 + (param_4 & 0xffff);
      }
      iVar3 = uVar7 + local_res8 * 0x1000000 + param_1 * 0x10000;
      uVar4 = CONCAT44(iVar3,iVar3);
      piVar1 = unaff_RDI + uVar5;
      piVar2 = unaff_RDI;
      do {
        *(undefined8 *)piVar2 = uVar4;
        unaff_RDI = piVar2 + 8;
        *(undefined8 *)(piVar2 + 2) = uVar4;
        *(undefined8 *)(piVar2 + 4) = uVar4;
        *(undefined8 *)(piVar2 + 6) = uVar4;
        piVar2 = unaff_RDI;
      } while (piVar1 != unaff_RDI);
      unaff_RSI = unaff_RSI + 1;
    } while (param_2 != unaff_RSI);
    return;
  }
  return;
}



longlong FUN_00e6a220(undefined8 param_1,int param_2)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  
  lVar2 = -0x48;
  uVar3 = (ulonglong)(-(uint)(param_2 == 0) & 4) + 1;
  if (uVar3 <= unaff_RSI) {
    bVar1 = *(byte *)(unaff_RDI + -1 + uVar3);
    lVar2 = *(longlong *)(&DAT_00e96160 + (ulonglong)(bVar1 >> 6) * 8) +
            *(longlong *)(&DAT_00e96140 + (ulonglong)(bVar1 & 3) * 8) + uVar3 +
            (ulonglong)(~(uint)(bVar1 >> 5) & 1) +
            ((ulonglong)(bVar1 >> 6 == 0) & (ulonglong)(uint)(bVar1 >> 5));
  }
  return lVar2;
}



void FUN_00e6a290(longlong param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *unaff_RSI;
  undefined8 *puVar8;
  undefined8 *unaff_RDI;
  
  puVar1 = (undefined8 *)((longlong)unaff_RDI + param_1);
  if (param_1 < 8) {
    lVar6 = 0;
    if (puVar1 <= unaff_RDI) {
      return;
    }
    do {
      *(undefined1 *)((longlong)unaff_RDI + lVar6) = *(undefined1 *)((longlong)param_2 + lVar6);
      lVar6 = lVar6 + 1;
    } while (param_1 != lVar6);
    return;
  }
  if (param_3 == 1) {
    uVar7 = (longlong)unaff_RDI - (longlong)param_2;
    if (uVar7 < 8) {
      *(undefined1 *)unaff_RDI = *(undefined1 *)param_2;
      *(undefined1 *)((longlong)unaff_RDI + 1) = *(undefined1 *)((longlong)param_2 + 1);
      *(undefined1 *)((longlong)unaff_RDI + 2) = *(undefined1 *)((longlong)param_2 + 2);
      *(undefined1 *)((longlong)unaff_RDI + 3) = *(undefined1 *)((longlong)param_2 + 3);
      uVar2 = *(uint *)(&DAT_00e957e0 + uVar7 * 4);
      *(undefined4 *)((longlong)unaff_RDI + 4) =
           *(undefined4 *)((longlong)param_2 + (ulonglong)uVar2);
      puVar8 = (undefined8 *)
               ((longlong)((longlong)param_2 + (ulonglong)uVar2) -
               (longlong)*(int *)(&DAT_00e95800 + uVar7 * 4));
    }
    else {
      *unaff_RDI = *param_2;
      puVar8 = param_2;
    }
    param_2 = puVar8 + 1;
    puVar5 = unaff_RDI + 1;
    if (puVar1 <= unaff_RSI) {
      if ((longlong)unaff_RDI - (longlong)puVar8 < 0x10) {
        do {
          uVar3 = *param_2;
          puVar8 = puVar5 + 1;
          param_2 = param_2 + 1;
          *puVar5 = uVar3;
          puVar5 = puVar8;
        } while (puVar8 < puVar1);
        return;
      }
      param_1 = param_1 + -8;
      goto LAB_00e6a340;
    }
    if (unaff_RSI < puVar5) goto LAB_00e6a2c2;
    lVar6 = (longlong)unaff_RSI - (longlong)puVar5;
    puVar4 = param_2;
    if (0xf < (longlong)unaff_RDI - (longlong)puVar8) goto LAB_00e6a426;
    do {
      puVar8 = puVar5 + 1;
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar8;
    } while (puVar8 < unaff_RSI);
  }
  else {
    puVar5 = unaff_RDI;
    if (puVar1 <= unaff_RSI) {
LAB_00e6a340:
      uVar3 = param_2[1];
      *puVar5 = *param_2;
      puVar5[1] = uVar3;
      if (param_1 < 0x11) {
        return;
      }
      puVar8 = puVar5 + 2;
      puVar5 = param_2 + 2;
      do {
        uVar3 = puVar5[1];
        puVar4 = puVar8 + 4;
        *puVar8 = *puVar5;
        puVar8[1] = uVar3;
        uVar3 = puVar5[3];
        puVar8[2] = puVar5[2];
        puVar8[3] = uVar3;
        puVar8 = puVar4;
        puVar5 = puVar5 + 4;
      } while (puVar4 < puVar1);
      return;
    }
    if (unaff_RSI < unaff_RDI) goto LAB_00e6a2c2;
    lVar6 = (longlong)unaff_RSI - (longlong)unaff_RDI;
LAB_00e6a426:
    uVar3 = param_2[1];
    *puVar5 = *param_2;
    puVar5[1] = uVar3;
    if (0x10 < lVar6) {
      puVar8 = puVar5 + 2;
      puVar5 = param_2 + 2;
      do {
        uVar3 = puVar5[1];
        puVar4 = puVar8 + 4;
        *puVar8 = *puVar5;
        puVar8[1] = uVar3;
        uVar3 = puVar5[3];
        puVar8[2] = puVar5[2];
        puVar8[3] = uVar3;
        puVar8 = puVar4;
        puVar5 = puVar5 + 4;
      } while (puVar4 < unaff_RSI);
    }
  }
  param_2 = (undefined8 *)((longlong)param_2 + lVar6);
  puVar5 = unaff_RSI;
LAB_00e6a2c2:
  if (puVar1 <= puVar5) {
    return;
  }
  lVar6 = 0;
  do {
    *(undefined1 *)((longlong)puVar5 + lVar6) = *(undefined1 *)((longlong)param_2 + lVar6);
    lVar6 = lVar6 + 1;
  } while ((longlong)puVar1 - (longlong)puVar5 != lVar6);
  return;
}



void FUN_00e6a4e0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 *puVar7;
  
  puVar2 = (undefined8 *)((longlong)unaff_RDI + param_2);
  if ((param_2 < 8) || (-8 < (longlong)unaff_RDI - (longlong)unaff_RSI)) {
    if (unaff_RDI < puVar2) {
      lVar4 = 0;
      do {
        *(undefined1 *)((longlong)unaff_RDI + lVar4) = *(undefined1 *)((longlong)unaff_RSI + lVar4);
        lVar4 = lVar4 + 1;
      } while (param_2 != lVar4);
      return;
    }
  }
  else {
    puVar1 = puVar2 + -4;
    if (((longlong)unaff_RDI - (longlong)unaff_RSI < -0x10) && (unaff_RDI <= puVar1)) {
      uVar3 = unaff_RSI[1];
      *unaff_RDI = *unaff_RSI;
      unaff_RDI[1] = uVar3;
      if (0x10 < (longlong)puVar1 - (longlong)unaff_RDI) {
        puVar5 = unaff_RDI + 2;
        puVar7 = unaff_RSI + 2;
        do {
          uVar3 = puVar7[1];
          puVar6 = puVar5 + 4;
          *puVar5 = *puVar7;
          puVar5[1] = uVar3;
          uVar3 = puVar7[3];
          puVar5[2] = puVar7[2];
          puVar5[3] = uVar3;
          puVar5 = puVar6;
          puVar7 = puVar7 + 4;
        } while (puVar6 < puVar1);
      }
      unaff_RSI = (undefined8 *)((longlong)unaff_RSI + ((longlong)puVar1 - (longlong)unaff_RDI));
      unaff_RDI = puVar1;
    }
    if (unaff_RDI < puVar2) {
      lVar4 = 0;
      do {
        *(undefined1 *)((longlong)unaff_RDI + lVar4) = *(undefined1 *)((longlong)unaff_RSI + lVar4);
        lVar4 = lVar4 + 1;
      } while (lVar4 != (longlong)puVar2 - (longlong)unaff_RDI);
    }
  }
  return;
}



undefined8 FUN_00e6a5c0(void)

{
  code *unaff_RSI;
  uint uVar1;
  ulonglong unaff_RDI;
  
  if (unaff_RDI < 0xffffffffffffff89) {
    return 0;
  }
  uVar1 = -(int)unaff_RDI;
  if (uVar1 != 0x16) {
    if (uVar1 < 0x17) {
      if (uVar1 == 10) {
        (*unaff_RSI)();
        return 0xffffffff;
      }
      if (uVar1 != 0x14) {
LAB_00e6a60d:
        (*unaff_RSI)();
        return 0xffffffff;
      }
    }
    else {
      if (uVar1 == 0x40) {
        (*unaff_RSI)();
        return 0xffffffff;
      }
      if (uVar1 != 0x46) goto LAB_00e6a60d;
    }
  }
  (*unaff_RSI)();
  return 0xffffffff;
}



void FUN_00e6a630(void)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = 0xffff;
  do {
    uVar1 = (*DAT_00ea6020)();
    if ((uVar1 & 0x20) != 0) break;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
                    // WARNING: Could not recover jumptable at 0x00e6a672. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_00ea6028)();
  return;
}



undefined8 FUN_00e6a680(uint param_1,uint param_2,longlong param_3,ulonglong param_4)

{
  ushort *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  short sVar4;
  ushort uVar5;
  bool bVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  undefined8 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong *plVar16;
  longlong *plVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  ulonglong uVar22;
  longlong unaff_RSI;
  longlong *plVar23;
  uint *unaff_RDI;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  bool bVar27;
  uint local_4c;
  
  bVar9 = (byte)param_1;
  bVar27 = param_4 < (1L << (bVar9 & 0x3f)) + 8 + ((ulonglong)param_2 + 1 & 0xffffffff) * 2;
  uVar12 = 0xffffffffffffffd2;
  bVar6 = bVar27 || 0xff < param_2;
  if ((!bVar27 && 0xff >= param_2) && (uVar12 = 0xffffffffffffffd4, param_1 < 0xd)) {
    uVar24 = param_2 + 1;
    lVar19 = 0;
    uVar15 = 1 << (bVar9 & 0x1f);
    iVar21 = 1;
    local_4c = param_1 & 0xffff | 0x10000;
    uVar25 = uVar15 - 1;
    uVar11 = uVar25;
    do {
      while (sVar4 = *(short *)(unaff_RSI + lVar19 * 2), sVar4 == -1) {
        uVar22 = (ulonglong)uVar11;
        uVar11 = uVar11 - 1;
        *(char *)((longlong)unaff_RDI + uVar22 * 4 + 6) = (char)lVar19;
        *(undefined2 *)(param_3 + lVar19 * 2) = 1;
        lVar19 = lVar19 + 1;
        if (uVar24 <= (uint)lVar19) goto LAB_00e6a772;
      }
      *(short *)(param_3 + lVar19 * 2) = sVar4;
      bVar6 = true;
      if ((short)(1 << (bVar9 - 1 & 0x1f)) <= sVar4) {
        iVar21 = 0;
      }
      lVar19 = lVar19 + 1;
    } while ((uint)lVar19 < uVar24);
LAB_00e6a772:
    if (bVar6) {
      local_4c = param_1 & 0xffff | iVar21 << 0x10;
    }
    lVar19 = 0;
    *unaff_RDI = local_4c;
    uVar2 = (uVar15 >> 1) + 3 + (uVar15 >> 3);
    uVar18 = 0;
    if (uVar11 == uVar25) {
      uVar22 = (ulonglong)uVar11;
      lVar19 = param_3 + ((ulonglong)param_2 + 1) * 2;
      lVar26 = 0;
      lVar13 = 0;
      lVar20 = 0;
      do {
        sVar4 = *(short *)(unaff_RSI + lVar26 * 2);
        *(longlong *)(lVar19 + lVar20) = lVar13;
        if (8 < sVar4) {
          plVar17 = (longlong *)(lVar19 + 8 + lVar20);
          plVar23 = (longlong *)(lVar19 + 0x10 + lVar20 + (ulonglong)((int)sVar4 - 9U & 0xfffffff8))
          ;
          plVar16 = plVar17;
          if (((int)plVar23 - (int)plVar17 & 8U) != 0) {
            *plVar17 = lVar13;
            plVar16 = plVar17 + 1;
            if (plVar23 == plVar17 + 1) goto LAB_00e6a8d8;
          }
          do {
            *plVar16 = lVar13;
            plVar17 = plVar16 + 2;
            plVar16[1] = lVar13;
            plVar16 = plVar17;
          } while (plVar23 != plVar17);
        }
LAB_00e6a8d8:
        lVar26 = lVar26 + 1;
        lVar20 = lVar20 + sVar4;
        lVar13 = lVar13 + 0x101010101010101;
      } while ((uint)lVar26 < uVar24);
      uVar14 = 0;
      uVar8 = 0;
      do {
        uVar7 = uVar8 + uVar2;
        *(undefined1 *)((longlong)unaff_RDI + (uVar22 & uVar8) * 4 + 6) =
             *(undefined1 *)(lVar19 + uVar14);
        puVar3 = (undefined1 *)(lVar19 + 1 + uVar14);
        uVar14 = uVar14 + 2;
        *(undefined1 *)((longlong)unaff_RDI + (uVar22 & uVar7) * 4 + 6) = *puVar3;
        uVar8 = uVar7 + uVar2 & uVar22;
      } while (uVar14 < (ulonglong)(longlong)(int)uVar15);
    }
    else {
      do {
        iVar21 = 0;
        if (0 < *(short *)(unaff_RSI + lVar19 * 2)) {
          do {
            *(char *)((longlong)unaff_RDI + (ulonglong)uVar18 * 4 + 6) = (char)lVar19;
            do {
              uVar18 = uVar18 + uVar2 & uVar25;
            } while (uVar11 < uVar18);
            iVar21 = iVar21 + 1;
          } while (iVar21 < *(short *)(unaff_RSI + lVar19 * 2));
        }
        lVar19 = lVar19 + 1;
      } while ((uint)lVar19 < uVar24);
      if (uVar18 != 0) {
        return 0xffffffffffffffff;
      }
    }
    lVar19 = 0;
    do {
      puVar1 = (ushort *)(param_3 + (ulonglong)*(byte *)((longlong)unaff_RDI + lVar19 * 4 + 6) * 2);
      uVar5 = *puVar1;
      *puVar1 = uVar5 + 1;
      iVar21 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar21 == 0; iVar21 = iVar21 + -1) {
        }
      }
      bVar10 = bVar9 - (char)iVar21;
      *(byte *)((longlong)unaff_RDI + lVar19 * 4 + 7) = bVar10;
      *(ushort *)(unaff_RDI + lVar19 + 1) = (uVar5 << (bVar10 & 0x1f)) - (short)uVar15;
      lVar19 = lVar19 + 1;
    } while ((uint)lVar19 < uVar15);
    uVar12 = 0;
  }
  return uVar12;
}



ulonglong FUN_00e6a940(undefined8 param_1,ulonglong param_2)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  byte *unaff_RSI;
  ulonglong *unaff_RDI;
  
  if (param_2 == 0) {
    *unaff_RDI = 0;
    unaff_RDI[1] = 0;
    unaff_RDI[2] = 0;
    unaff_RDI[3] = 0;
    unaff_RDI[4] = 0;
    return 0xffffffffffffffb8;
  }
  unaff_RDI[3] = (ulonglong)unaff_RSI;
  unaff_RDI[4] = (ulonglong)(unaff_RSI + 8);
  if (7 < param_2) {
    unaff_RDI[2] = (ulonglong)(unaff_RSI + (param_2 - 8));
    *unaff_RDI = *(ulonglong *)(unaff_RSI + (param_2 - 8));
    bVar1 = unaff_RSI[param_2 - 1];
    if (bVar1 != 0) {
      iVar2 = 0x1f;
      if (bVar1 != 0) {
        for (; bVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      *(int *)(unaff_RDI + 1) = 8 - iVar2;
      return param_2;
    }
    *(undefined4 *)(unaff_RDI + 1) = 0;
    return 0xffffffffffffffff;
  }
  unaff_RDI[2] = (ulonglong)unaff_RSI;
  uVar3 = (ulonglong)*unaff_RSI;
  *unaff_RDI = uVar3;
  switch(param_2) {
  case 7:
    uVar3 = uVar3 + ((ulonglong)unaff_RSI[6] << 0x30);
    *unaff_RDI = uVar3;
  case 6:
    uVar3 = uVar3 + ((ulonglong)unaff_RSI[5] << 0x28);
    *unaff_RDI = uVar3;
  case 5:
    uVar3 = uVar3 + ((ulonglong)unaff_RSI[4] << 0x20);
    *unaff_RDI = uVar3;
  case 4:
    uVar3 = uVar3 + (ulonglong)unaff_RSI[3] * 0x1000000;
    *unaff_RDI = uVar3;
  case 3:
    uVar3 = uVar3 + (ulonglong)unaff_RSI[2] * 0x10000;
    *unaff_RDI = uVar3;
  case 2:
    *unaff_RDI = uVar3 + (ulonglong)unaff_RSI[1] * 0x100;
  }
  bVar1 = unaff_RSI[param_2 - 1];
  if (bVar1 == 0) {
    *(undefined4 *)(unaff_RDI + 1) = 0;
    return 0xffffffffffffffec;
  }
  iVar2 = 0x1f;
  if (bVar1 != 0) {
    for (; bVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
    }
  }
  *(int *)(unaff_RDI + 1) = (9 - (int)param_2) * 8 - iVar2;
  return param_2;
}



ulonglong FUN_00e6aa80(ulonglong *param_1,undefined8 param_2,longlong param_3,longlong param_4,
                      ulonglong param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  longlong lVar5;
  ulonglong local_res8;
  longlong local_res10;
  ulonglong local_res18;
  longlong local_res20;
  
  uVar1 = local_res8 + local_res10;
  if (uVar1 <= unaff_RSI - unaff_RDI) {
    uVar3 = *param_1;
    if (param_3 - uVar3 < local_res8) {
      return 0xffffffffffffffec;
    }
    uVar2 = uVar3 + local_res8;
    if ((uVar2 <= unaff_RDI) || (unaff_RDI <= uVar3)) {
      lVar5 = unaff_RDI + local_res8;
      FUN_00e6a4e0();
      *param_1 = uVar2;
      lVar4 = lVar5 - local_res18;
      if ((ulonglong)(lVar5 - param_4) < local_res18) {
        if ((ulonglong)(lVar5 - local_res20) < local_res18) {
          return 0xffffffffffffffec;
        }
        lVar5 = param_4 - (lVar5 - local_res18);
        if ((param_5 - lVar5) + local_res10 <= param_5) {
          FUN_00e86250(uVar2,local_res10);
          return uVar1;
        }
        local_res10 = local_res10 - lVar5;
        FUN_00e86250(uVar2,lVar5);
        lVar4 = param_4;
      }
      FUN_00e6a290(local_res10,lVar4,1);
      return uVar1;
    }
  }
  return 0xffffffffffffffba;
}



ulonglong FUN_00e6aba0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar3;
  ulonglong local_res8;
  longlong local_res10;
  ulonglong local_res18;
  ulonglong local_res20;
  
  uVar3 = local_res8 + local_res10;
  if ((ulonglong)(unaff_RSI - unaff_RDI) < uVar3) {
    return 0xffffffffffffffba;
  }
  lVar2 = *param_2;
  if ((ulonglong)(param_1 - lVar2) < local_res8) {
LAB_00e6aca0:
    uVar3 = 0xffffffffffffffec;
  }
  else {
    lVar1 = unaff_RDI + local_res8;
    FUN_00e6a290(local_res8,lVar2,0);
    *param_2 = lVar2 + local_res8;
    lVar2 = lVar1 - local_res18;
    if ((ulonglong)(lVar1 - param_3) < local_res18) {
      if ((ulonglong)(lVar1 - param_4) < local_res18) goto LAB_00e6aca0;
      lVar2 = param_3 - (lVar1 - local_res18);
      if ((local_res20 - lVar2) + local_res10 <= local_res20) {
        FUN_00e86250();
        return uVar3;
      }
      local_res10 = local_res10 - lVar2;
      FUN_00e86250();
      lVar2 = param_3;
    }
    FUN_00e6a290(local_res10,lVar2,1);
  }
  return uVar3;
}



void FUN_00e6acd0(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_00e86250(param_1,(longlong)((DAT_00ea0254 + -1) * DAT_00ea0250 * 2));
  lVar2 = DAT_00ed7048;
  iVar3 = (DAT_00ea0254 + -1) * DAT_00ea0250;
  if (iVar3 < DAT_00ea0250 + iVar3) {
    iVar1 = (DAT_00ea0250 + iVar3) * 2;
    lVar4 = (longlong)(iVar3 * 2);
    *(undefined1 *)(DAT_00ed7048 + lVar4) = 0x20;
    lVar5 = lVar4 + 2;
    if ((int)lVar5 < iVar1) {
      if (((uint)(~(iVar3 * 2) + iVar1) >> 1 & 1) != 0) {
        *(undefined1 *)(lVar2 + lVar5) = 0x20;
        lVar5 = lVar4 + 4;
        if (iVar1 <= (int)lVar5) {
          return;
        }
      }
      do {
        *(undefined1 *)(lVar2 + lVar5) = 0x20;
        *(undefined1 *)(lVar2 + 2 + lVar5) = 0x20;
        lVar5 = lVar5 + 4;
      } while ((int)lVar5 < iVar1);
    }
  }
  return;
}



void FUN_00e6ad70(longlong param_1,uint param_2,longlong param_3,uint param_4)

{
  ushort *puVar1;
  short *psVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  short *unaff_RSI;
  longlong *plVar12;
  longlong *plVar13;
  int iVar14;
  ulonglong *unaff_RDI;
  ulonglong uVar15;
  byte *pbVar16;
  byte *pbVar17;
  ulonglong *puVar18;
  ulonglong *puVar19;
  longlong *plVar20;
  longlong lVar21;
  uint uVar22;
  ulonglong uVar23;
  bool bVar24;
  longlong local_res8;
  ulonglong local_50;
  
  uVar9 = (ulonglong)param_2;
  uVar22 = 1 << (param_4 & 0x1f);
  uVar11 = uVar22 - 1;
  uVar10 = (ulonglong)uVar11;
  local_50 = (ulonglong)param_4 << 0x20 | 1;
  if (param_2 == 0xffffffff) {
    *unaff_RDI = local_50;
    uVar11 = (uVar22 >> 3) + 3 + (uVar22 >> 1);
  }
  else {
    uVar23 = 0;
    bVar24 = false;
    uVar15 = 1;
    uVar8 = uVar10;
    while( true ) {
      uVar6 = (uint)uVar8;
      sVar3 = unaff_RSI[uVar23];
      if (sVar3 == -1) {
        uVar6 = uVar6 - 1;
        *(int *)((longlong)unaff_RDI + uVar8 * 8 + 0xc) = (int)uVar23;
        *(undefined2 *)(local_res8 + uVar23 * 2) = 1;
        uVar8 = (ulonglong)uVar6;
      }
      else {
        *(short *)(local_res8 + uVar23 * 2) = sVar3;
        bVar24 = true;
        if ((short)(1 << (param_4 - 1 & 0x1f)) <= sVar3) {
          uVar15 = 0;
        }
      }
      if (uVar9 == uVar23) break;
      uVar23 = uVar23 + 1;
    }
    if (bVar24) {
      local_50 = (ulonglong)param_4 << 0x20 | uVar15;
    }
    *unaff_RDI = local_50;
    if (uVar11 != uVar6) {
      uVar5 = 0;
      uVar8 = 0;
      do {
        sVar3 = unaff_RSI[uVar8];
        if (0 < sVar3) {
          iVar14 = 0;
          do {
            *(int *)((longlong)unaff_RDI + (ulonglong)uVar5 * 8 + 0xc) = (int)uVar8;
            do {
              uVar5 = uVar5 + (uVar22 >> 1) + 3 + (uVar22 >> 3) & uVar11;
            } while (uVar6 < uVar5);
            iVar14 = iVar14 + 1;
          } while (sVar3 != iVar14);
        }
        bVar24 = uVar9 != uVar8;
        uVar8 = uVar8 + 1;
      } while (bVar24);
      if (uVar22 == 0) {
        return;
      }
      goto LAB_00e6aed8;
    }
    psVar2 = unaff_RSI + uVar9 + 1;
    uVar11 = (uVar22 >> 1) + 3 + (uVar22 >> 3);
    lVar7 = 0;
    lVar21 = 0;
    do {
      sVar3 = *unaff_RSI;
      *(longlong *)(local_res8 + 0x6a + lVar21) = lVar7;
      if (8 < sVar3) {
        plVar13 = (longlong *)(local_res8 + 0x72 + lVar21);
        plVar20 = (longlong *)
                  (local_res8 + 0x7a + lVar21 + (ulonglong)((int)sVar3 - 9U & 0xfffffff8));
        plVar12 = plVar13;
        if (((int)plVar20 - (int)plVar13 & 8U) != 0) {
          *plVar13 = lVar7;
          plVar12 = plVar13 + 1;
          if (plVar20 == plVar13 + 1) goto LAB_00e6afe0;
        }
        do {
          *plVar12 = lVar7;
          plVar13 = plVar12 + 2;
          plVar12[1] = lVar7;
          plVar12 = plVar13;
        } while (plVar20 != plVar13);
      }
LAB_00e6afe0:
      unaff_RSI = unaff_RSI + 1;
      lVar21 = lVar21 + sVar3;
      lVar7 = lVar7 + 0x101010101010101;
    } while (psVar2 != unaff_RSI);
  }
  if (uVar22 == 0) {
    return;
  }
  uVar9 = 0;
  pbVar16 = (byte *)(local_res8 + 0x6a);
  do {
    uVar8 = uVar9 + uVar11;
    pbVar17 = pbVar16 + 2;
    *(uint *)((longlong)unaff_RDI + (uVar9 & uVar10) * 8 + 0xc) = (uint)*pbVar16;
    uVar9 = uVar8 + uVar11 & uVar10;
    *(uint *)((longlong)unaff_RDI + (uVar8 & uVar10) * 8 + 0xc) = (uint)pbVar16[1];
    pbVar16 = pbVar17;
  } while ((byte *)(local_res8 + 0x6c + ((ulonglong)uVar22 - 1 & 0xfffffffffffffffe)) != pbVar17);
LAB_00e6aed8:
  puVar18 = unaff_RDI + 1;
  do {
    uVar9 = (ulonglong)*(uint *)((longlong)puVar18 + 4);
    puVar19 = puVar18 + 1;
    puVar1 = (ushort *)(local_res8 + uVar9 * 2);
    uVar4 = *puVar1;
    *puVar1 = uVar4 + 1;
    uVar11 = (param_4 & 0xff) - (LZCOUNT((uint)uVar4) ^ 0x1fU);
    *(char *)((longlong)puVar18 + 3) = (char)uVar11;
    *(ushort *)puVar18 = (uVar4 << (uVar11 & 0x1f)) - (short)uVar22;
    *(undefined1 *)((longlong)puVar18 + 2) = *(undefined1 *)(param_3 + uVar9);
    *(undefined4 *)((longlong)puVar18 + 4) = *(undefined4 *)(param_1 + uVar9 * 4);
    puVar18 = puVar19;
  } while (unaff_RDI + uVar10 + 2 != puVar19);
  return;
}



void FUN_00e6b070(longlong param_1,uint param_2,longlong param_3,uint param_4)

{
  uint uVar1;
  ushort *puVar2;
  short *psVar3;
  short sVar4;
  ushort uVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  short *unaff_RSI;
  longlong *plVar14;
  longlong *plVar15;
  int iVar16;
  ulonglong *unaff_RDI;
  ulonglong uVar17;
  byte *pbVar18;
  byte *pbVar19;
  ulonglong *puVar20;
  ulonglong *puVar21;
  longlong *plVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  bool bVar26;
  longlong local_res8;
  ulonglong local_50;
  
  uVar12 = (ulonglong)param_2;
  bVar7 = (byte)param_4;
  uVar24 = 1 << (bVar7 & 0x1f);
  uVar1 = uVar24 - 1;
  uVar13 = (ulonglong)uVar1;
  local_50 = (ulonglong)param_4 << 0x20 | 1;
  if (param_2 == 0xffffffff) {
    *unaff_RDI = local_50;
    uVar1 = (uVar24 >> 3) + 3 + (uVar24 >> 1);
  }
  else {
    uVar25 = 0;
    bVar26 = false;
    uVar17 = 1;
    uVar11 = uVar13;
    while( true ) {
      uVar9 = (uint)uVar11;
      sVar4 = unaff_RSI[uVar25];
      if (sVar4 == -1) {
        uVar9 = uVar9 - 1;
        *(int *)((longlong)unaff_RDI + uVar11 * 8 + 0xc) = (int)uVar25;
        *(undefined2 *)(local_res8 + uVar25 * 2) = 1;
        uVar11 = (ulonglong)uVar9;
      }
      else {
        *(short *)(local_res8 + uVar25 * 2) = sVar4;
        bVar26 = true;
        if ((short)(1 << (bVar7 - 1 & 0x1f)) <= sVar4) {
          uVar17 = 0;
        }
      }
      if (uVar12 == uVar25) break;
      uVar25 = uVar25 + 1;
    }
    if (bVar26) {
      local_50 = (ulonglong)param_4 << 0x20 | uVar17;
    }
    *unaff_RDI = local_50;
    if (uVar1 != uVar9) {
      uVar6 = 0;
      uVar11 = 0;
      do {
        sVar4 = unaff_RSI[uVar11];
        if (0 < sVar4) {
          iVar16 = 0;
          do {
            *(int *)((longlong)unaff_RDI + (ulonglong)uVar6 * 8 + 0xc) = (int)uVar11;
            do {
              uVar6 = uVar6 + (uVar24 >> 1) + 3 + (uVar24 >> 3) & uVar1;
            } while (uVar9 < uVar6);
            iVar16 = iVar16 + 1;
          } while (sVar4 != iVar16);
        }
        bVar26 = uVar12 != uVar11;
        uVar11 = uVar11 + 1;
      } while (bVar26);
      if (uVar24 == 0) {
        return;
      }
      goto LAB_00e6b1d8;
    }
    psVar3 = unaff_RSI + uVar12 + 1;
    uVar1 = (uVar24 >> 1) + 3 + (uVar24 >> 3);
    lVar10 = 0;
    lVar23 = 0;
    do {
      sVar4 = *unaff_RSI;
      *(longlong *)(local_res8 + 0x6a + lVar23) = lVar10;
      if (8 < sVar4) {
        plVar15 = (longlong *)(local_res8 + 0x72 + lVar23);
        plVar22 = (longlong *)
                  (local_res8 + 0x7a + lVar23 + (ulonglong)((int)sVar4 - 9U & 0xfffffff8));
        plVar14 = plVar15;
        if (((int)plVar22 - (int)plVar15 & 8U) != 0) {
          *plVar15 = lVar10;
          plVar14 = plVar15 + 1;
          if (plVar22 == plVar15 + 1) goto LAB_00e6b2d8;
        }
        do {
          *plVar14 = lVar10;
          plVar15 = plVar14 + 2;
          plVar14[1] = lVar10;
          plVar14 = plVar15;
        } while (plVar22 != plVar15);
      }
LAB_00e6b2d8:
      unaff_RSI = unaff_RSI + 1;
      lVar23 = lVar23 + sVar4;
      lVar10 = lVar10 + 0x101010101010101;
    } while (psVar3 != unaff_RSI);
  }
  if (uVar24 == 0) {
    return;
  }
  uVar12 = 0;
  pbVar18 = (byte *)(local_res8 + 0x6a);
  do {
    uVar11 = uVar12 + uVar1;
    pbVar19 = pbVar18 + 2;
    *(uint *)((longlong)unaff_RDI + (uVar12 & uVar13) * 8 + 0xc) = (uint)*pbVar18;
    uVar12 = uVar11 + uVar1 & uVar13;
    *(uint *)((longlong)unaff_RDI + (uVar11 & uVar13) * 8 + 0xc) = (uint)pbVar18[1];
    pbVar18 = pbVar19;
  } while ((byte *)(local_res8 + 0x6c + ((ulonglong)uVar24 - 1 & 0xfffffffffffffffe)) != pbVar19);
LAB_00e6b1d8:
  puVar20 = unaff_RDI + 1;
  do {
    uVar12 = (ulonglong)*(uint *)((longlong)puVar20 + 4);
    puVar2 = (ushort *)(local_res8 + uVar12 * 2);
    uVar5 = *puVar2;
    *puVar2 = uVar5 + 1;
    iVar16 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar16 == 0; iVar16 = iVar16 + -1) {
      }
    }
    puVar21 = puVar20 + 1;
    bVar8 = bVar7 - (char)iVar16;
    *(byte *)((longlong)puVar20 + 3) = bVar8;
    *(ushort *)puVar20 = (uVar5 << (bVar8 & 0x1f)) - (short)uVar24;
    *(undefined1 *)((longlong)puVar20 + 2) = *(undefined1 *)(param_3 + uVar12);
    *(undefined4 *)((longlong)puVar20 + 4) = *(undefined4 *)(param_1 + uVar12 * 4);
    puVar20 = puVar21;
  } while (unaff_RDI + uVar13 + 2 != puVar21);
  return;
}



ulonglong FUN_00e6b370(uint *param_1,uint *param_2,ulonglong param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint *puVar7;
  uint *puVar8;
  int *unaff_RSI;
  uint uVar9;
  uint uVar10;
  longlong unaff_RDI;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  undefined8 local_40 [2];
  
  if (param_3 < 8) {
    local_40[0] = 0;
    uVar5 = FUN_00e862a0(local_40,param_3);
    uVar6 = FUN_00e6b370(uVar5,param_2,8);
    if ((param_3 < uVar6) && (uVar6 < 0xffffffffffffff89)) {
      uVar6 = 0xffffffffffffffec;
    }
  }
  else {
    uVar2 = *unaff_RSI + 1;
    FUN_00e86200(param_1,(ulonglong)uVar2 * 2);
    uVar6 = 0xffffffffffffffd4;
    uVar15 = *param_1 & 0xf;
    uVar12 = uVar15 + 5;
    if (uVar12 < 0x10) {
      iVar16 = uVar15 + 6;
      puVar1 = (uint *)((longlong)param_1 + (param_3 - 7));
      puVar11 = (uint *)((longlong)param_1 + (param_3 - 4));
      uVar4 = *param_1 >> 4;
      uVar15 = 4;
      iVar17 = 1 << (sbyte)uVar12;
      *param_2 = uVar12;
      uVar6 = 0;
      uVar12 = iVar17 + 1;
      puVar8 = param_1;
      do {
        uVar10 = iVar17 * 2 - 1;
        uVar13 = iVar17 - 1U & uVar4;
        uVar9 = uVar10 - uVar12;
        if (uVar13 < uVar9) {
          uVar15 = uVar15 - 1;
        }
        else {
          uVar13 = uVar10 & uVar4;
          if (iVar17 <= (int)uVar13) {
            uVar13 = uVar13 - uVar9;
          }
        }
        uVar15 = uVar15 + iVar16;
        iVar14 = uVar13 - 1;
        uVar10 = (int)uVar6 + 1;
        *(short *)(unaff_RDI + uVar6 * 2) = (short)iVar14;
        iVar3 = iVar14;
        if (-1 < iVar14) {
          iVar3 = -iVar14;
        }
        uVar12 = uVar12 + iVar3;
        if ((int)uVar12 < iVar17) {
          if ((int)uVar12 < 2) {
LAB_00e6b610:
            if (uVar12 != 1) {
              return 0xffffffffffffffec;
            }
            if (uVar2 < uVar10) {
              return 0xffffffffffffffd0;
            }
            if (0x20 < (int)uVar15) {
              return 0xffffffffffffffec;
            }
            *unaff_RSI = uVar10 - 1;
            return (longlong)puVar8 + ((longlong)((int)(uVar15 + 7) >> 3) - (longlong)param_1);
          }
          iVar17 = 0x1f;
          if (uVar12 != 0) {
            for (; uVar12 >> iVar17 == 0; iVar17 = iVar17 + -1) {
            }
          }
          iVar16 = iVar17 + 1;
          iVar17 = 1 << ((byte)iVar17 & 0x1f);
        }
        if (uVar2 <= uVar10) goto LAB_00e6b610;
        puVar7 = (uint *)((longlong)((int)uVar15 >> 3) + (longlong)puVar8);
        if ((puVar1 < puVar8) && (puVar11 < puVar7)) {
          uVar15 = uVar15 + ((int)puVar11 - (int)puVar8) * -8 & 0x1f;
          puVar8 = puVar11;
        }
        else {
          uVar15 = uVar15 & 7;
          puVar8 = puVar7;
        }
        uVar4 = *puVar8 >> (sbyte)uVar15;
        if (iVar14 == 0) {
          uVar13 = 0;
          for (uVar9 = ~uVar4; (uVar9 & 1) == 0; uVar9 = (uVar9 | 0x80000000) >> 1) {
            uVar13 = uVar13 + 1;
          }
          while (iVar3 = (int)puVar8, 0x17 < uVar13) {
            uVar10 = uVar10 + 0x24;
            if (puVar1 < puVar8) {
              uVar15 = uVar15 + ((int)puVar1 - iVar3) * -8 & 0x1f;
              puVar8 = (uint *)((longlong)param_1 + (param_3 - 4));
            }
            else {
              puVar8 = (uint *)((longlong)puVar8 + 3);
            }
            uVar4 = *puVar8 >> (sbyte)uVar15;
            uVar13 = 0;
            for (uVar9 = ~uVar4; (uVar9 & 1) == 0; uVar9 = (uVar9 | 0x80000000) >> 1) {
              uVar13 = uVar13 + 1;
            }
          }
          iVar14 = (uVar13 >> 1) * 2;
          uVar15 = uVar15 + 2 + iVar14;
          uVar10 = (uVar4 >> ((byte)iVar14 & 0x1f) & 3) + (uVar13 >> 1) * 3 + uVar10;
          if (uVar2 <= uVar10) goto LAB_00e6b610;
          puVar7 = (uint *)((longlong)puVar8 + (longlong)((int)uVar15 >> 3));
          if ((puVar1 < puVar8) &&
             (puVar8 = (uint *)((longlong)param_1 + (param_3 - 4)), puVar8 < puVar7)) {
            uVar15 = uVar15 + ((int)puVar8 - iVar3) * -8 & 0x1f;
          }
          else {
            uVar15 = uVar15 & 7;
            puVar8 = puVar7;
          }
          uVar4 = *puVar8 >> (sbyte)uVar15;
          uVar6 = (ulonglong)uVar10;
        }
        else {
          uVar6 = (ulonglong)uVar10;
        }
      } while( true );
    }
  }
  return uVar6;
}



ulonglong FUN_00e6b6b0(uint *param_1,uint *param_2,ulonglong param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  int *unaff_RSI;
  longlong unaff_RDI;
  int iVar15;
  uint uVar16;
  int iVar17;
  undefined8 local_40 [2];
  
  if (param_3 < 8) {
    local_40[0] = 0;
    uVar6 = FUN_00e862a0(local_40,param_3);
    uVar7 = FUN_00e6b370(uVar6,param_2,8);
    if ((param_3 < uVar7) && (uVar7 < 0xffffffffffffff89)) {
      uVar7 = 0xffffffffffffffec;
    }
  }
  else {
    uVar2 = *unaff_RSI + 1;
    FUN_00e86200(param_1,(ulonglong)uVar2 * 2);
    uVar5 = *param_1;
    uVar7 = 0xffffffffffffffd4;
    uVar9 = uVar5 & 0xf;
    uVar14 = uVar9 + 5;
    if (uVar14 < 0x10) {
      *param_2 = uVar14;
      iVar15 = 1 << uVar14;
      uVar5 = uVar5 >> 4;
      uVar7 = 0;
      puVar13 = (uint *)((longlong)param_1 + (param_3 - 4));
      iVar17 = uVar9 + 6;
      iVar3 = iVar15 + 1;
      uVar14 = 4;
      puVar1 = (uint *)((longlong)param_1 + (param_3 - 7));
      puVar10 = param_1;
      do {
        uVar9 = iVar15 * 2 - 1;
        uVar12 = iVar15 - 1U & uVar5;
        uVar16 = uVar9 - iVar3;
        if (uVar12 < uVar16) {
          uVar14 = uVar14 - 1;
        }
        else {
          uVar12 = uVar9 & uVar5;
          if (iVar15 <= (int)uVar12) {
            uVar12 = uVar12 - uVar16;
          }
        }
        uVar14 = uVar14 + iVar17;
        iVar11 = uVar12 - 1;
        uVar9 = (int)uVar7 + 1;
        *(short *)(unaff_RDI + uVar7 * 2) = (short)iVar11;
        iVar4 = iVar11;
        if (-1 < iVar11) {
          iVar4 = -iVar11;
        }
        iVar3 = iVar3 + iVar4;
        if (iVar3 < iVar15) {
          if (iVar3 < 2) {
LAB_00e6b920:
            if (iVar3 != 1) {
              return 0xffffffffffffffec;
            }
            if (uVar2 < uVar9) {
              return 0xffffffffffffffd0;
            }
            if (0x20 < (int)uVar14) {
              return 0xffffffffffffffec;
            }
            *unaff_RSI = uVar9 - 1;
            return (longlong)puVar10 + ((longlong)((int)(uVar14 + 7) >> 3) - (longlong)param_1);
          }
          iVar17 = (LZCOUNT(iVar3) ^ 0x1fU) + 1;
          iVar15 = 1 << ((LZCOUNT(iVar3) ^ 0x1fU) & 0x1f);
        }
        if (uVar2 <= uVar9) goto LAB_00e6b920;
        puVar8 = (uint *)((longlong)((int)uVar14 >> 3) + (longlong)puVar10);
        if ((puVar1 < puVar10) && (puVar13 < puVar8)) {
          uVar14 = uVar14 + ((int)puVar13 - (int)puVar10) * -8 & 0x1f;
          puVar10 = puVar13;
        }
        else {
          uVar14 = uVar14 & 7;
          puVar10 = puVar8;
        }
        uVar5 = *puVar10 >> uVar14;
        if (iVar11 == 0) {
          while( true ) {
            uVar12 = 0;
            for (uVar16 = ~uVar5; (uVar16 & 1) == 0; uVar16 = (uVar16 | 0x80000000) >> 1) {
              uVar12 = uVar12 + 1;
            }
            iVar4 = (int)puVar10;
            if (uVar12 < 0x18) break;
            uVar9 = uVar9 + 0x24;
            if (puVar1 < puVar10) {
              uVar14 = uVar14 + ((int)puVar1 - iVar4) * -8 & 0x1f;
              puVar10 = (uint *)((longlong)param_1 + (param_3 - 4));
              uVar5 = *puVar10 >> uVar14;
            }
            else {
              puVar10 = (uint *)((longlong)puVar10 + 3);
              uVar5 = *puVar10 >> uVar14;
            }
          }
          uVar16 = (uVar12 >> 1) * 2;
          uVar14 = uVar14 + 2 + uVar16;
          uVar9 = (uVar5 >> (uVar16 & 0x1f) & 3) + (uVar12 >> 1) * 3 + uVar9;
          if (uVar2 <= uVar9) goto LAB_00e6b920;
          puVar8 = (uint *)((longlong)puVar10 + (longlong)((int)uVar14 >> 3));
          if ((puVar1 < puVar10) &&
             (puVar10 = (uint *)((longlong)param_1 + (param_3 - 4)), puVar10 < puVar8)) {
            uVar14 = uVar14 + ((int)puVar10 - iVar4) * -8 & 0x1f;
            uVar5 = *puVar10 >> uVar14;
          }
          else {
            uVar14 = uVar14 & 7;
            uVar5 = *puVar8 >> uVar14;
            puVar10 = puVar8;
          }
        }
        uVar7 = (ulonglong)uVar9;
      } while( true );
    }
  }
  return uVar7;
}



ulonglong FUN_00e6b9b0(uint param_1,int param_2,uint param_3,byte *param_4,int param_5,int param_6,
                      int param_7,undefined8 param_8,int param_9)

{
  byte bVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_res8;
  longlong local_res10;
  longlong local_res18;
  undefined8 local_res20;
  uint local_98 [30];
  
  if (param_2 == 2) {
    uVar3 = FUN_00e6b370(param_4,local_98,local_res8);
    if ((0xffffffffffffff88 < uVar3) || (param_3 < local_98[0])) {
      return 0xffffffffffffffec;
    }
    if (param_9 == 0) {
      FUN_00e6b070(local_res10,param_1,local_res18);
    }
    else {
      FUN_00e6ad70(local_res10,param_1,local_res18);
    }
    *unaff_RSI = unaff_RDI;
  }
  else if (param_2 == 3) {
    uVar3 = 0xffffffffffffffec;
    if (param_5 != 0) {
      if (param_6 == 0) {
        return 0;
      }
      if (param_7 < 0x19) {
        return 0;
      }
      uVar3 = 0;
      do {
        uVar3 = uVar3 + 0x40;
      } while (uVar3 < (ulonglong)((longlong)((1 << ((byte)param_3 & 0x1f)) + 1) << 3));
      return 0;
    }
  }
  else {
    if (param_2 != 1) {
      *unaff_RSI = local_res20;
      return 0;
    }
    uVar3 = 0xffffffffffffffb8;
    if (local_res8 != 0) {
      bVar1 = *param_4;
      uVar3 = 0xffffffffffffffec;
      if (bVar1 <= param_1) {
        uVar2 = *(undefined1 *)(local_res18 + (ulonglong)bVar1);
        *(undefined4 *)((longlong)unaff_RDI + 0xc) =
             *(undefined4 *)(local_res10 + (ulonglong)bVar1 * 4);
        uVar3 = 1;
        *(undefined1 *)((longlong)unaff_RDI + 0xb) = 0;
        *unaff_RDI = 0;
        *(undefined2 *)(unaff_RDI + 1) = 0;
        *(undefined1 *)((longlong)unaff_RDI + 10) = uVar2;
        *unaff_RSI = unaff_RDI;
      }
    }
  }
  return uVar3;
}



void FUN_00e6bba0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong *puVar3;
  ulonglong *unaff_RSI;
  ulonglong *puVar4;
  uint uVar5;
  ulonglong *unaff_RDI;
  int iVar6;
  ulonglong *puVar7;
  
  iVar1 = *(int *)(param_2 + 4);
  iVar6 = (int)unaff_RSI[1] + iVar1;
  *(int *)(unaff_RSI + 1) = iVar6;
  *unaff_RDI = *unaff_RSI >> (-(char)iVar6 & 0x3fU) & ~(-1L << ((byte)iVar1 & 0x3f));
  uVar2 = (uint)unaff_RSI[1];
  if (uVar2 < 0x41) {
    puVar4 = (ulonglong *)unaff_RSI[2];
    if ((ulonglong *)unaff_RSI[4] <= puVar4) {
      *(uint *)(unaff_RSI + 1) = uVar2 & 7;
      puVar4 = (ulonglong *)((longlong)puVar4 - (ulonglong)(uVar2 >> 3));
      unaff_RSI[2] = (ulonglong)puVar4;
      *unaff_RSI = *puVar4;
      unaff_RDI[1] = param_2 + 8;
      return;
    }
    puVar3 = (ulonglong *)unaff_RSI[3];
    if (puVar4 != puVar3) {
      uVar5 = uVar2 >> 3;
      puVar7 = (ulonglong *)((longlong)puVar4 - (ulonglong)uVar5);
      if (puVar7 < puVar3) {
        uVar5 = (int)puVar4 - (int)puVar3;
        puVar7 = (ulonglong *)((longlong)puVar4 - (ulonglong)uVar5);
      }
      unaff_RSI[2] = (ulonglong)puVar7;
      *(uint *)(unaff_RSI + 1) = uVar2 + uVar5 * -8;
      *unaff_RSI = *puVar7;
    }
  }
  unaff_RDI[1] = param_2 + 8;
  return;
}



ulonglong FUN_00e6bc60(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  longlong *plVar9;
  ulonglong unaff_RSI;
  longlong *plVar10;
  uint uVar11;
  byte *unaff_RDI;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  longlong local_58;
  uint local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  
  uVar5 = *param_3;
  uVar6 = FUN_00e6a940(param_1,param_1);
  if (0xffffffffffffff88 < uVar6) {
    return uVar6;
  }
  pbVar1 = unaff_RDI + unaff_RSI;
  uVar11 = uVar5 >> 0x10 & 0xff;
  plVar9 = local_48;
  lVar4 = local_58;
  uVar5 = local_50;
  if ((longlong)unaff_RSI < 4) {
    if (0x40 < local_50) goto LAB_00e6bdd0;
    if (local_38 <= local_48) {
      plVar9 = (longlong *)((longlong)local_48 - (ulonglong)(local_50 >> 3));
      lVar4 = *plVar9;
      uVar5 = local_50 & 7;
      goto LAB_00e6bdd0;
    }
    if (local_48 != local_40) {
      uVar5 = local_50 >> 3;
      plVar9 = (longlong *)((longlong)local_48 - (ulonglong)uVar5);
      if (plVar9 < local_40) {
        uVar5 = (int)local_48 - (int)local_40;
        plVar9 = (longlong *)((longlong)local_48 - (ulonglong)uVar5);
      }
      lVar4 = *plVar9;
      uVar5 = local_50 + uVar5 * -8;
      goto LAB_00e6bdd0;
    }
joined_r0x00e6bf05:
    plVar9 = local_48;
    if (pbVar1 <= unaff_RDI) goto LAB_00e6beb8;
LAB_00e6bdd9:
    do {
      pbVar13 = (byte *)((longlong)param_3 +
                        ((ulonglong)(local_58 << ((ulonglong)local_50 & 0x3f)) >> (-uVar11 & 0x3f))
                        * 2 + 4);
      pbVar14 = unaff_RDI + 1;
      bVar2 = *pbVar13;
      *unaff_RDI = pbVar13[1];
      local_50 = local_50 + bVar2;
      unaff_RDI = pbVar14;
    } while (pbVar1 != pbVar14);
  }
  else {
    if (local_50 < 0x41) {
      bVar3 = false;
      uVar12 = -uVar11 & 0x3f;
      lVar7 = local_58;
      pbVar13 = unaff_RDI;
      uVar8 = local_50;
      do {
        unaff_RDI = pbVar13;
        if (plVar9 < local_38) {
          if (plVar9 == local_40) {
            plVar9 = local_48;
            lVar4 = local_58;
            uVar5 = local_50;
            local_58 = lVar7;
            local_50 = uVar8;
            local_48 = local_40;
            if (bVar3) goto joined_r0x00e6bf05;
            break;
          }
          plVar10 = (longlong *)((longlong)plVar9 - (ulonglong)(uVar8 >> 3));
          if (plVar10 < local_40) {
            uVar5 = (int)plVar9 - (int)local_40;
            plVar9 = (longlong *)((longlong)plVar9 - (ulonglong)uVar5);
            lVar4 = *plVar9;
            uVar5 = uVar8 + uVar5 * -8;
            break;
          }
          uVar5 = uVar8 + (uVar8 >> 3) * -8;
          lVar7 = *plVar10;
          plVar9 = plVar10;
        }
        else {
          uVar5 = uVar8 & 7;
          plVar9 = (longlong *)((longlong)plVar9 - (ulonglong)(uVar8 >> 3));
          lVar7 = *plVar9;
        }
        lVar4 = lVar7;
        if (pbVar1 + -3 <= pbVar13) break;
        pbVar14 = (byte *)((longlong)param_3 +
                          ((ulonglong)(lVar7 << ((ulonglong)uVar5 & 0x3f)) >> uVar12) * 2 + 4);
        unaff_RDI = pbVar13 + 4;
        uVar5 = *pbVar14 + uVar5;
        *pbVar13 = pbVar14[1];
        pbVar14 = (byte *)((longlong)param_3 +
                          ((ulonglong)(lVar7 << ((ulonglong)uVar5 & 0x3f)) >> uVar12) * 2 + 4);
        uVar5 = *pbVar14 + uVar5;
        pbVar13[1] = pbVar14[1];
        pbVar14 = (byte *)((longlong)param_3 +
                          ((ulonglong)(lVar7 << ((ulonglong)uVar5 & 0x3f)) >> uVar12) * 2 + 4);
        uVar5 = *pbVar14 + uVar5;
        pbVar13[2] = pbVar14[1];
        pbVar14 = (byte *)((longlong)param_3 +
                          ((ulonglong)(lVar7 << ((ulonglong)uVar5 & 0x3f)) >> uVar12) * 2 + 4);
        uVar8 = *pbVar14 + uVar5;
        pbVar13[3] = pbVar14[1];
        bVar3 = true;
        pbVar13 = unaff_RDI;
        uVar5 = uVar8;
      } while (uVar8 < 0x41);
    }
LAB_00e6bdd0:
    local_50 = uVar5;
    local_58 = lVar4;
    if (unaff_RDI < pbVar1) goto LAB_00e6bdd9;
  }
  if (plVar9 != local_40) {
    return 0xffffffffffffffec;
  }
LAB_00e6beb8:
  if (local_50 != 0x40) {
    return 0xffffffffffffffec;
  }
  return unaff_RSI;
}



ulonglong FUN_00e6bf40(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  byte *pbVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  byte bVar9;
  uint uVar10;
  longlong *plVar11;
  ulonglong unaff_RSI;
  longlong lVar12;
  byte *unaff_RDI;
  byte *pbVar13;
  byte *pbVar14;
  longlong *plVar15;
  longlong local_58;
  uint local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  
  uVar2 = *param_3;
  uVar8 = FUN_00e6a940(param_1,param_1);
  if (0xffffffffffffff88 < uVar8) {
    return uVar8;
  }
  pbVar1 = unaff_RDI + unaff_RSI;
  cVar3 = (char)((uint)uVar2 >> 0x10);
  plVar11 = local_48;
  lVar5 = local_58;
  uVar6 = local_50;
  if ((longlong)unaff_RSI < 4) {
    if (0x40 < local_50) goto LAB_00e6c0d0;
    if (local_38 <= local_48) {
      plVar11 = (longlong *)((longlong)local_48 - (ulonglong)(local_50 >> 3));
      lVar5 = *plVar11;
      uVar6 = local_50 & 7;
      goto LAB_00e6c0d0;
    }
    if (local_48 != local_40) {
      uVar6 = local_50 >> 3;
      plVar11 = (longlong *)((longlong)local_48 - (ulonglong)uVar6);
      if (plVar11 < local_40) {
        uVar6 = (int)local_48 - (int)local_40;
        plVar11 = (longlong *)((longlong)local_48 - (ulonglong)uVar6);
      }
      lVar5 = *plVar11;
      uVar6 = local_50 + uVar6 * -8;
      goto LAB_00e6c0d0;
    }
joined_r0x00e6c20d:
    plVar11 = local_48;
    if (pbVar1 <= unaff_RDI) goto LAB_00e6c1b7;
LAB_00e6c0d9:
    do {
      pbVar14 = unaff_RDI + 1;
      pbVar13 = (byte *)((longlong)param_3 +
                        ((ulonglong)(local_58 << ((byte)local_50 & 0x3f)) >> (-cVar3 & 0x3fU)) * 2 +
                        4);
      bVar9 = *pbVar13;
      *unaff_RDI = pbVar13[1];
      local_50 = local_50 + bVar9;
      unaff_RDI = pbVar14;
    } while (pbVar1 != pbVar14);
  }
  else {
    if (local_50 < 0x41) {
      bVar4 = false;
      bVar9 = -cVar3 & 0x3f;
      lVar12 = local_58;
      pbVar13 = unaff_RDI;
      uVar10 = local_50;
      do {
        unaff_RDI = pbVar13;
        if (plVar11 < local_38) {
          if (plVar11 == local_40) {
            plVar11 = local_48;
            lVar5 = local_58;
            uVar6 = local_50;
            local_58 = lVar12;
            local_50 = uVar10;
            local_48 = local_40;
            if (bVar4) goto joined_r0x00e6c20d;
            break;
          }
          plVar15 = (longlong *)((longlong)plVar11 - (ulonglong)(uVar10 >> 3));
          if (plVar15 < local_40) {
            uVar8 = (longlong)plVar11 - (longlong)local_40;
            plVar11 = (longlong *)((longlong)plVar11 - (uVar8 & 0xffffffff));
            lVar5 = *plVar11;
            uVar6 = uVar10 + (int)uVar8 * -8;
            break;
          }
          uVar6 = uVar10 + (uVar10 >> 3) * -8;
          lVar12 = *plVar15;
          plVar11 = plVar15;
        }
        else {
          plVar11 = (longlong *)((longlong)plVar11 - (ulonglong)(uVar10 >> 3));
          lVar12 = *plVar11;
          uVar6 = uVar10 & 7;
        }
        lVar5 = lVar12;
        if (pbVar1 + -3 <= pbVar13) break;
        unaff_RDI = pbVar13 + 4;
        pbVar14 = (byte *)((longlong)param_3 +
                          ((ulonglong)(lVar12 << ((byte)uVar6 & 0x3f)) >> bVar9) * 2 + 4);
        iVar7 = uVar6 + *pbVar14;
        *pbVar13 = pbVar14[1];
        pbVar14 = (byte *)((longlong)param_3 +
                          ((ulonglong)(lVar12 << ((byte)iVar7 & 0x3f)) >> bVar9) * 2 + 4);
        iVar7 = (uint)*pbVar14 + iVar7;
        pbVar13[1] = pbVar14[1];
        pbVar14 = (byte *)((longlong)param_3 +
                          ((ulonglong)(lVar12 << ((byte)iVar7 & 0x3f)) >> bVar9) * 2 + 4);
        iVar7 = (uint)*pbVar14 + iVar7;
        pbVar13[2] = pbVar14[1];
        pbVar14 = (byte *)((longlong)param_3 +
                          ((ulonglong)(lVar12 << ((byte)iVar7 & 0x3f)) >> bVar9) * 2 + 4);
        uVar10 = (uint)*pbVar14 + iVar7;
        pbVar13[3] = pbVar14[1];
        bVar4 = true;
        pbVar13 = unaff_RDI;
        uVar6 = uVar10;
      } while (uVar10 < 0x41);
    }
LAB_00e6c0d0:
    local_50 = uVar6;
    local_58 = lVar5;
    if (unaff_RDI < pbVar1) goto LAB_00e6c0d9;
  }
  if (plVar11 != local_40) {
    return 0xffffffffffffffec;
  }
LAB_00e6c1b7:
  if (local_50 != 0x40) {
    return 0xffffffffffffffec;
  }
  return unaff_RSI;
}



// WARNING: Type propagation algorithm not settling

ulonglong FUN_00e6c240(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  byte bVar9;
  uint uVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong unaff_RSI;
  undefined2 *unaff_RDI;
  longlong lVar13;
  bool bVar14;
  int iVar15;
  longlong *plVar16;
  longlong local_58;
  uint local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  
  uVar8 = FUN_00e6a940(param_1,param_1);
  if (0xffffffffffffff88 < uVar8) {
    return uVar8;
  }
  bVar4 = *(byte *)(param_3 + 2);
  puVar1 = (undefined2 *)((longlong)unaff_RDI + unaff_RSI);
  param_3 = param_3 + 4;
  plVar16 = local_48;
  if (unaff_RSI < 8) {
    uVar8 = unaff_RSI;
    if (local_50 < 0x41) {
      if (local_48 < local_38) {
        plVar16 = local_40;
        if (local_48 == local_40) goto LAB_00e6c8b3;
        uVar7 = local_50 >> 3;
        plVar16 = (longlong *)((longlong)local_48 - (ulonglong)uVar7);
        if (plVar16 < local_40) {
          uVar7 = (int)local_48 - (int)local_40;
          plVar16 = (longlong *)((longlong)local_48 - (ulonglong)uVar7);
        }
        lVar6 = *plVar16;
        uVar7 = local_50 + uVar7 * -8;
LAB_00e6c6c6:
        local_50 = uVar7;
        local_58 = lVar6;
        if ((ulonglong)((longlong)puVar1 - (longlong)unaff_RDI) < 2) goto LAB_00e6c457;
        plVar11 = plVar16;
        lVar6 = local_58;
        uVar7 = local_50;
        if (0x40 < local_50) goto LAB_00e6c408;
      }
      else {
        plVar16 = (longlong *)((longlong)local_48 - (ulonglong)(local_50 >> 3));
        local_58 = *plVar16;
        local_50 = local_50 & 7;
LAB_00e6c8b3:
        plVar11 = plVar16;
        if (unaff_RSI < 2) goto LAB_00e6c457;
      }
      bVar14 = false;
      plVar12 = plVar11;
      lVar13 = local_58;
      uVar10 = local_50;
      do {
        if (plVar12 < local_38) {
          if (plVar12 == local_40) {
            plVar16 = plVar11;
            lVar6 = local_58;
            uVar7 = local_50;
            if (!bVar14) goto LAB_00e6c408;
            break;
          }
          plVar16 = (longlong *)((longlong)plVar12 - (ulonglong)(uVar10 >> 3));
          if (plVar16 < local_40) {
            plVar16 = (longlong *)
                      ((longlong)plVar12 - ((longlong)plVar12 - (longlong)local_40 & 0xffffffffU));
            lVar6 = *plVar16;
            uVar7 = uVar10 + (int)((longlong)plVar12 - (longlong)local_40) * -8;
            goto LAB_00e6c408;
          }
          lVar13 = *plVar16;
          uVar7 = uVar10 + (uVar10 >> 3) * -8;
        }
        else {
          plVar16 = (longlong *)((longlong)plVar12 - (ulonglong)(uVar10 >> 3));
          uVar7 = uVar10 & 7;
          lVar13 = *plVar16;
        }
        bVar14 = unaff_RDI <= puVar1 + -1;
        lVar6 = lVar13;
        if (!bVar14) goto LAB_00e6c408;
        puVar2 = (undefined2 *)
                 (param_3 + ((ulonglong)(lVar13 << ((byte)uVar7 & 0x3f)) >> (-bVar4 & 0x3f)) * 4);
        *unaff_RDI = *puVar2;
        uVar10 = *(byte *)(puVar2 + 1) + uVar7;
        unaff_RDI = (undefined2 *)((longlong)unaff_RDI + (ulonglong)*(byte *)((longlong)puVar2 + 3))
        ;
        plVar12 = plVar16;
      } while (uVar10 < 0x41);
      plVar16 = plVar12;
      lVar6 = lVar13;
      uVar7 = uVar10;
    }
    else {
joined_r0x00e6c887:
      lVar6 = local_58;
      uVar7 = local_50;
      if (uVar8 < 2) goto LAB_00e6c457;
    }
  }
  else {
    lVar13 = local_58;
    uVar10 = local_50;
    lVar6 = local_58;
    uVar7 = local_50;
    if (bVar4 < 0xc) {
      if (local_50 < 0x41) {
        bVar14 = false;
        bVar9 = -bVar4 & 0x3f;
        plVar11 = local_48;
        do {
          if (plVar11 < local_38) {
            if (plVar11 == local_40) {
              plVar16 = local_48;
              lVar6 = local_58;
              uVar7 = local_50;
              if (!bVar14) goto LAB_00e6c6c6;
              goto LAB_00e6c6b5;
            }
            plVar16 = (longlong *)((longlong)plVar11 - (ulonglong)(uVar10 >> 3));
            if (plVar16 < local_40) {
              uVar7 = (int)plVar11 - (int)local_40;
              plVar16 = (longlong *)((longlong)plVar11 - (ulonglong)uVar7);
              lVar6 = *plVar16;
              uVar7 = uVar10 + uVar7 * -8;
              goto LAB_00e6c6c6;
            }
            uVar7 = uVar10 + (uVar10 >> 3) * -8;
            lVar13 = *plVar16;
          }
          else {
            uVar7 = uVar10 & 7;
            plVar16 = (longlong *)((longlong)plVar11 - (ulonglong)(uVar10 >> 3));
            lVar13 = *plVar16;
          }
          bVar14 = unaff_RDI < (undefined2 *)((longlong)puVar1 - 9U);
          lVar6 = lVar13;
          if (!bVar14) goto LAB_00e6c6c6;
          puVar2 = (undefined2 *)
                   (param_3 + ((ulonglong)(lVar13 << ((byte)uVar7 & 0x3f)) >> bVar9) * 4);
          *unaff_RDI = *puVar2;
          bVar5 = *(byte *)(puVar2 + 1);
          unaff_RDI = (undefined2 *)
                      ((longlong)unaff_RDI + (ulonglong)*(byte *)((longlong)puVar2 + 3));
          puVar2 = (undefined2 *)
                   (param_3 + ((ulonglong)(lVar13 << ((byte)(bVar5 + uVar7) & 0x3f)) >> bVar9) * 4);
          *unaff_RDI = *puVar2;
          iVar15 = (uint)*(byte *)(puVar2 + 1) + bVar5 + uVar7;
          unaff_RDI = (undefined2 *)
                      ((longlong)unaff_RDI + (ulonglong)*(byte *)((longlong)puVar2 + 3));
          puVar2 = (undefined2 *)
                   (param_3 + ((ulonglong)(lVar13 << ((byte)iVar15 & 0x3f)) >> bVar9) * 4);
          *unaff_RDI = *puVar2;
          iVar15 = (uint)*(byte *)(puVar2 + 1) + iVar15;
          unaff_RDI = (undefined2 *)
                      ((longlong)unaff_RDI + (ulonglong)*(byte *)((longlong)puVar2 + 3));
          puVar2 = (undefined2 *)
                   (param_3 + ((ulonglong)(lVar13 << ((byte)iVar15 & 0x3f)) >> bVar9) * 4);
          *unaff_RDI = *puVar2;
          iVar15 = (uint)*(byte *)(puVar2 + 1) + iVar15;
          unaff_RDI = (undefined2 *)
                      ((longlong)unaff_RDI + (ulonglong)*(byte *)((longlong)puVar2 + 3));
          puVar2 = (undefined2 *)
                   (param_3 + ((ulonglong)(lVar13 << ((byte)iVar15 & 0x3f)) >> bVar9) * 4);
          *unaff_RDI = *puVar2;
          uVar10 = (uint)*(byte *)(puVar2 + 1) + iVar15;
          unaff_RDI = (undefined2 *)
                      ((longlong)unaff_RDI + (ulonglong)*(byte *)((longlong)puVar2 + 3));
          plVar11 = plVar16;
        } while (uVar10 < 0x41);
        goto LAB_00e6c688;
      }
    }
    else if (local_50 < 0x41) {
      bVar14 = false;
      bVar9 = -bVar4 & 0x3f;
      plVar11 = local_48;
      do {
        if (plVar11 < local_38) {
          if (plVar11 == local_40) {
            plVar16 = local_48;
            lVar6 = local_58;
            uVar7 = local_50;
            if (bVar14) {
LAB_00e6c6b5:
              plVar16 = local_40;
              lVar6 = lVar13;
              uVar7 = uVar10;
            }
            goto LAB_00e6c6c6;
          }
          plVar16 = (longlong *)((longlong)plVar11 - (ulonglong)(uVar10 >> 3));
          if (plVar16 < local_40) {
            plVar16 = (longlong *)
                      ((longlong)plVar11 - ((longlong)plVar11 - (longlong)local_40 & 0xffffffffU));
            lVar6 = *plVar16;
            uVar7 = uVar10 + (int)((longlong)plVar11 - (longlong)local_40) * -8;
            goto LAB_00e6c6c6;
          }
          lVar13 = *plVar16;
          uVar7 = uVar10 + (uVar10 >> 3) * -8;
        }
        else {
          plVar16 = (longlong *)((longlong)plVar11 - (ulonglong)(uVar10 >> 3));
          uVar7 = uVar10 & 7;
          lVar13 = *plVar16;
        }
        bVar14 = unaff_RDI < (undefined2 *)((longlong)puVar1 - 7U);
        lVar6 = lVar13;
        if (!bVar14) goto LAB_00e6c6c6;
        puVar2 = (undefined2 *)
                 (param_3 + ((ulonglong)(lVar13 << ((byte)uVar7 & 0x3f)) >> bVar9) * 4);
        *unaff_RDI = *puVar2;
        bVar5 = *(byte *)(puVar2 + 1);
        unaff_RDI = (undefined2 *)((longlong)unaff_RDI + (ulonglong)*(byte *)((longlong)puVar2 + 3))
        ;
        puVar2 = (undefined2 *)
                 (param_3 + ((ulonglong)(lVar13 << ((byte)(uVar7 + bVar5) & 0x3f)) >> bVar9) * 4);
        *unaff_RDI = *puVar2;
        iVar15 = (uint)*(byte *)(puVar2 + 1) + uVar7 + bVar5;
        unaff_RDI = (undefined2 *)((longlong)unaff_RDI + (ulonglong)*(byte *)((longlong)puVar2 + 3))
        ;
        puVar2 = (undefined2 *)
                 (param_3 + ((ulonglong)(lVar13 << ((byte)iVar15 & 0x3f)) >> bVar9) * 4);
        *unaff_RDI = *puVar2;
        iVar15 = (uint)*(byte *)(puVar2 + 1) + iVar15;
        unaff_RDI = (undefined2 *)((longlong)unaff_RDI + (ulonglong)*(byte *)((longlong)puVar2 + 3))
        ;
        puVar2 = (undefined2 *)
                 (param_3 + ((ulonglong)(lVar13 << ((byte)iVar15 & 0x3f)) >> bVar9) * 4);
        *unaff_RDI = *puVar2;
        uVar10 = (uint)*(byte *)(puVar2 + 1) + iVar15;
        unaff_RDI = (undefined2 *)((longlong)unaff_RDI + (ulonglong)*(byte *)((longlong)puVar2 + 3))
        ;
        plVar11 = plVar16;
      } while (uVar10 < 0x41);
LAB_00e6c688:
      local_58 = lVar13;
      local_50 = uVar10;
      uVar8 = (longlong)puVar1 - (longlong)unaff_RDI;
      goto joined_r0x00e6c887;
    }
  }
LAB_00e6c408:
  local_50 = uVar7;
  local_58 = lVar6;
  if (unaff_RDI <= puVar1 + -1) {
    do {
      puVar2 = (undefined2 *)
               (param_3 + ((ulonglong)(local_58 << ((byte)local_50 & 0x3f)) >> (-bVar4 & 0x3f)) * 4)
      ;
      *unaff_RDI = *puVar2;
      local_50 = local_50 + *(byte *)(puVar2 + 1);
      unaff_RDI = (undefined2 *)((longlong)unaff_RDI + (ulonglong)*(byte *)((longlong)puVar2 + 3));
    } while (unaff_RDI <= puVar1 + -1);
  }
LAB_00e6c457:
  if (unaff_RDI < puVar1) {
    puVar3 = (undefined1 *)
             (param_3 + ((ulonglong)(local_58 << ((byte)local_50 & 0x3f)) >> (-bVar4 & 0x3f)) * 4);
    *(undefined1 *)unaff_RDI = *puVar3;
    if (puVar3[3] == '\x01') {
      local_50 = (byte)puVar3[2] + local_50;
    }
    else if ((local_50 < 0x40) && (local_50 = (byte)puVar3[2] + local_50, 0x40 < local_50)) {
      if (plVar16 != local_40) {
        return 0xffffffffffffffec;
      }
      return unaff_RSI;
    }
  }
  if ((plVar16 == local_40) && (local_50 == 0x40)) {
    return unaff_RSI;
  }
  return 0xffffffffffffffec;
}



ulonglong FUN_00e6c8f0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  ulonglong unaff_RSI;
  longlong lVar11;
  longlong *plVar12;
  undefined2 *unaff_RDI;
  uint uVar13;
  longlong lVar14;
  bool bVar15;
  uint uVar16;
  longlong local_58;
  uint local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  
  uVar6 = FUN_00e6a940(param_1,param_1);
  if (0xffffffffffffff88 < uVar6) {
    return uVar6;
  }
  bVar4 = *(byte *)(param_3 + 2);
  uVar16 = (uint)bVar4;
  param_3 = param_3 + 4;
  puVar1 = (undefined2 *)((longlong)unaff_RDI + unaff_RSI);
  iVar5 = (int)local_40;
  plVar8 = local_48;
  if (unaff_RSI < 8) {
    uVar6 = unaff_RSI;
    if (0x40 < local_50) {
joined_r0x00e6ce03:
      if (uVar6 < 2) goto LAB_00e6caeb;
      goto LAB_00e6caa0;
    }
    if (local_48 < local_38) {
      plVar8 = local_40;
      if (local_48 != local_40) {
        uVar9 = local_50 >> 3;
        plVar8 = (longlong *)((longlong)local_48 - (ulonglong)uVar9);
        if (plVar8 < local_40) {
          uVar9 = (int)local_48 - iVar5;
          plVar8 = (longlong *)((longlong)local_48 - (ulonglong)uVar9);
        }
        lVar14 = *plVar8;
        uVar9 = local_50 + uVar9 * -8;
        goto LAB_00e6cd12;
      }
    }
    else {
      plVar8 = (longlong *)((longlong)local_48 - (ulonglong)(local_50 >> 3));
      local_58 = *plVar8;
      local_50 = local_50 & 7;
    }
    if (unaff_RSI < 2) goto LAB_00e6caeb;
    goto LAB_00e6cd36;
  }
  plVar7 = local_48;
  lVar11 = local_58;
  uVar10 = local_50;
  if (bVar4 < 0xc) {
    if (local_50 < 0x41) {
      bVar15 = false;
      uVar13 = -(uint)bVar4 & 0x3f;
      do {
        if (plVar7 < local_38) {
          if (plVar7 == local_40) goto LAB_00e6ccfc;
          plVar8 = (longlong *)((longlong)plVar7 - (ulonglong)(uVar10 >> 3));
          if (plVar8 < local_40) goto LAB_00e6ca61;
          uVar9 = uVar10 + (uVar10 >> 3) * -8;
          lVar11 = *plVar8;
        }
        else {
          uVar9 = uVar10 & 7;
          plVar8 = (longlong *)((longlong)plVar7 - (ulonglong)(uVar10 >> 3));
          lVar11 = *plVar8;
        }
        bVar15 = unaff_RDI < (undefined2 *)((longlong)puVar1 - 9U);
        lVar14 = lVar11;
        if (!bVar15) goto LAB_00e6cd12;
        puVar2 = (undefined2 *)
                 (param_3 + ((ulonglong)(lVar11 << ((ulonglong)uVar9 & 0x3f)) >> uVar13) * 4);
        *unaff_RDI = *puVar2;
        bVar4 = *(byte *)(puVar2 + 1);
        unaff_RDI = (undefined2 *)((longlong)unaff_RDI + (ulonglong)*(byte *)((longlong)puVar2 + 3))
        ;
        puVar2 = (undefined2 *)
                 (param_3 +
                 ((ulonglong)(lVar11 << ((ulonglong)(uVar9 + bVar4) & 0x3f)) >> uVar13) * 4);
        *unaff_RDI = *puVar2;
        uVar10 = (uint)*(byte *)(puVar2 + 1) + uVar9 + bVar4;
        unaff_RDI = (undefined2 *)((longlong)unaff_RDI + (ulonglong)*(byte *)((longlong)puVar2 + 3))
        ;
        puVar2 = (undefined2 *)
                 (param_3 + ((ulonglong)(lVar11 << ((ulonglong)uVar10 & 0x3f)) >> uVar13) * 4);
        *unaff_RDI = *puVar2;
        uVar10 = *(byte *)(puVar2 + 1) + uVar10;
        unaff_RDI = (undefined2 *)((longlong)unaff_RDI + (ulonglong)*(byte *)((longlong)puVar2 + 3))
        ;
        puVar2 = (undefined2 *)
                 (param_3 + ((ulonglong)(lVar11 << ((ulonglong)uVar10 & 0x3f)) >> uVar13) * 4);
        *unaff_RDI = *puVar2;
        uVar10 = *(byte *)(puVar2 + 1) + uVar10;
        unaff_RDI = (undefined2 *)((longlong)unaff_RDI + (ulonglong)*(byte *)((longlong)puVar2 + 3))
        ;
        puVar2 = (undefined2 *)
                 (param_3 + ((ulonglong)(lVar11 << ((ulonglong)uVar10 & 0x3f)) >> uVar13) * 4);
        *unaff_RDI = *puVar2;
        uVar10 = *(byte *)(puVar2 + 1) + uVar10;
        unaff_RDI = (undefined2 *)((longlong)unaff_RDI + (ulonglong)*(byte *)((longlong)puVar2 + 3))
        ;
        plVar7 = plVar8;
      } while (uVar10 < 0x41);
      goto LAB_00e6cdf0;
    }
  }
  else if (local_50 < 0x41) {
    bVar15 = false;
    uVar13 = -uVar16 & 0x3f;
    do {
      if (plVar7 < local_38) {
        if (plVar7 == local_40) goto LAB_00e6ccfc;
        plVar8 = (longlong *)((longlong)plVar7 - (ulonglong)(uVar10 >> 3));
        if (plVar8 < local_40) goto LAB_00e6ca61;
        uVar9 = uVar10 + (uVar10 >> 3) * -8;
        lVar11 = *plVar8;
      }
      else {
        uVar9 = uVar10 & 7;
        plVar8 = (longlong *)((longlong)plVar7 - (ulonglong)(uVar10 >> 3));
        lVar11 = *plVar8;
      }
      lVar14 = lVar11;
      if ((undefined2 *)((longlong)puVar1 - 7U) <= unaff_RDI) goto LAB_00e6cd12;
      puVar2 = (undefined2 *)
               (param_3 + ((ulonglong)(lVar11 << ((ulonglong)uVar9 & 0x3f)) >> uVar13) * 4);
      *unaff_RDI = *puVar2;
      bVar4 = *(byte *)(puVar2 + 1);
      unaff_RDI = (undefined2 *)((longlong)unaff_RDI + (ulonglong)*(byte *)((longlong)puVar2 + 3));
      puVar2 = (undefined2 *)
               (param_3 + ((ulonglong)(lVar11 << ((ulonglong)(bVar4 + uVar9) & 0x3f)) >> uVar13) * 4
               );
      *unaff_RDI = *puVar2;
      uVar10 = (uint)*(byte *)(puVar2 + 1) + bVar4 + uVar9;
      unaff_RDI = (undefined2 *)((longlong)unaff_RDI + (ulonglong)*(byte *)((longlong)puVar2 + 3));
      puVar2 = (undefined2 *)
               (param_3 + ((ulonglong)(lVar11 << ((ulonglong)uVar10 & 0x3f)) >> uVar13) * 4);
      *unaff_RDI = *puVar2;
      uVar10 = *(byte *)(puVar2 + 1) + uVar10;
      unaff_RDI = (undefined2 *)((longlong)unaff_RDI + (ulonglong)*(byte *)((longlong)puVar2 + 3));
      puVar2 = (undefined2 *)
               (param_3 + ((ulonglong)(lVar11 << ((ulonglong)uVar10 & 0x3f)) >> uVar13) * 4);
      *unaff_RDI = *puVar2;
      uVar10 = *(byte *)(puVar2 + 1) + uVar10;
      unaff_RDI = (undefined2 *)((longlong)unaff_RDI + (ulonglong)*(byte *)((longlong)puVar2 + 3));
      bVar15 = true;
      plVar7 = plVar8;
    } while (uVar10 < 0x41);
LAB_00e6cdf0:
    local_58 = lVar11;
    local_50 = uVar10;
    uVar6 = (longlong)puVar1 - (longlong)unaff_RDI;
    goto joined_r0x00e6ce03;
  }
  goto LAB_00e6caa0;
LAB_00e6ca61:
  uVar9 = (int)plVar7 - iVar5;
  plVar8 = (longlong *)((longlong)plVar7 - (ulonglong)uVar9);
  lVar14 = *plVar8;
  uVar9 = uVar10 + uVar9 * -8;
  goto LAB_00e6cd12;
LAB_00e6ccfc:
  plVar8 = local_48;
  lVar14 = local_58;
  uVar9 = local_50;
  if (bVar15) {
    plVar8 = local_40;
    lVar14 = lVar11;
    uVar9 = uVar10;
  }
LAB_00e6cd12:
  local_50 = uVar9;
  local_58 = lVar14;
  if (1 < (ulonglong)((longlong)puVar1 - (longlong)unaff_RDI)) {
    if (local_50 < 0x41) {
LAB_00e6cd36:
      bVar15 = false;
      plVar7 = plVar8;
      lVar14 = local_58;
      uVar9 = local_50;
      do {
        if (plVar7 < local_38) {
          if (plVar7 == local_40) {
            if (!bVar15) goto LAB_00e6caa0;
            break;
          }
          plVar12 = (longlong *)((longlong)plVar7 - (ulonglong)(uVar9 >> 3));
          if (plVar12 < local_40) {
            uVar10 = (int)plVar7 - iVar5;
            plVar7 = (longlong *)((longlong)plVar7 - (ulonglong)uVar10);
            uVar9 = uVar9 + uVar10 * -8;
            lVar14 = *plVar7;
            break;
          }
          lVar14 = *plVar12;
          plVar7 = plVar12;
          uVar9 = uVar9 + (uVar9 >> 3) * -8;
        }
        else {
          plVar7 = (longlong *)((longlong)plVar7 - (ulonglong)(uVar9 >> 3));
          lVar14 = *plVar7;
          uVar9 = uVar9 & 7;
        }
        bVar15 = unaff_RDI <= puVar1 + -1;
        if (!bVar15) break;
        puVar2 = (undefined2 *)
                 (param_3 +
                 ((ulonglong)(lVar14 << ((ulonglong)uVar9 & 0x3f)) >> (-uVar16 & 0x3f)) * 4);
        *unaff_RDI = *puVar2;
        uVar9 = uVar9 + *(byte *)(puVar2 + 1);
        unaff_RDI = (undefined2 *)((longlong)unaff_RDI + (ulonglong)*(byte *)((longlong)puVar2 + 3))
        ;
      } while (uVar9 < 0x41);
      plVar8 = plVar7;
      local_58 = lVar14;
      local_50 = uVar9;
    }
LAB_00e6caa0:
    if (unaff_RDI <= puVar1 + -1) {
      do {
        puVar2 = (undefined2 *)
                 (param_3 +
                 ((ulonglong)(local_58 << ((ulonglong)local_50 & 0x3f)) >> (-uVar16 & 0x3f)) * 4);
        *unaff_RDI = *puVar2;
        local_50 = local_50 + *(byte *)(puVar2 + 1);
        unaff_RDI = (undefined2 *)((longlong)unaff_RDI + (ulonglong)*(byte *)((longlong)puVar2 + 3))
        ;
      } while (unaff_RDI <= puVar1 + -1);
    }
  }
LAB_00e6caeb:
  if (unaff_RDI < puVar1) {
    puVar3 = (undefined1 *)
             (param_3 +
             ((ulonglong)(local_58 << ((ulonglong)local_50 & 0x3f)) >> ((ulonglong)-uVar16 & 0x3f))
             * 4);
    *(undefined1 *)unaff_RDI = *puVar3;
    if (puVar3[3] == '\x01') {
      local_50 = (byte)puVar3[2] + local_50;
    }
    else if ((local_50 < 0x40) && (local_50 = (byte)puVar3[2] + local_50, 0x40 < local_50)) {
      if (plVar8 != local_40) {
        return 0xffffffffffffffec;
      }
      return unaff_RSI;
    }
  }
  if ((plVar8 == local_40) && (local_50 == 0x40)) {
    return unaff_RSI;
  }
  return 0xffffffffffffffec;
}



ulonglong FUN_00e6cf40(undefined8 param_1,longlong param_2,undefined8 param_3,int param_4)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  sbyte sVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  ulonglong *puVar22;
  uint uVar23;
  undefined8 *puVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  longlong lVar28;
  undefined8 *unaff_RSI;
  undefined8 *puVar29;
  longlong unaff_RDI;
  undefined8 *puVar30;
  longlong lVar31;
  undefined8 *puVar32;
  longlong lVar33;
  longlong lVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  int local_13c;
  ulonglong local_130;
  longlong local_118;
  undefined8 *local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  uint local_a0 [2];
  ulonglong *local_98;
  ulonglong *local_90;
  ulonglong *local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  ulonglong local_50 [4];
  
  if (*(int *)(&DAT_00007688 + unaff_RDI) == 0) {
    local_118 = (longlong)unaff_RSI + param_2;
  }
  else {
    local_118 = *(longlong *)(&DAT_00007678 + unaff_RDI);
  }
  local_c8 = *(undefined8 **)(&DAT_00007598 + unaff_RDI);
  puVar15 = (undefined8 *)(*(longlong *)(&DAT_000075b8 + unaff_RDI) + (longlong)local_c8);
  puVar10 = *(undefined8 **)(&DAT_000074c8 + unaff_RDI);
  lVar11 = *(longlong *)(&DAT_000074d0 + unaff_RDI);
  puVar12 = *(undefined1 **)(&DAT_000074d8 + unaff_RDI);
  puVar32 = unaff_RSI;
  if (param_4 == 0) {
LAB_00e6d04b:
    uVar16 = 0xffffffffffffffba;
    uVar36 = (longlong)puVar15 - (longlong)local_c8;
    if (uVar36 <= (ulonglong)(local_118 - (longlong)puVar32)) {
      if (puVar32 != (undefined8 *)0x0) {
        puVar32 = (undefined8 *)((longlong)puVar32 + uVar36);
        FUN_00e862a0(0xffffffffffffffba,uVar36);
      }
      uVar16 = (longlong)puVar32 - (longlong)unaff_RSI;
    }
  }
  else {
    local_50[0] = (ulonglong)*(uint *)(&DAT_0000683c + unaff_RDI);
    *(undefined4 *)(&DAT_0000752c + unaff_RDI) = 1;
    local_50[1] = (ulonglong)*(uint *)(&DAT_00006840 + unaff_RDI);
    local_50[2] = (ulonglong)*(uint *)(&DAT_00006844 + unaff_RDI);
    uVar16 = FUN_00e6a940(param_1,param_3);
    if (uVar16 < 0xffffffffffffff89) {
      FUN_00e6bba0();
      FUN_00e6bba0();
      FUN_00e6bba0();
      uVar16 = (ulonglong)local_a0[0];
      lVar28 = local_70;
      lVar33 = local_60;
      lVar34 = local_80;
      local_13c = param_4;
LAB_00e6d198:
      puVar1 = (ushort *)(local_78 + lVar34 * 8);
      bVar4 = (byte)puVar1[1];
      puVar2 = (ushort *)(local_58 + lVar33 * 8);
      bVar5 = (byte)puVar2[1];
      puVar3 = (ushort *)(local_68 + lVar28 * 8);
      uVar36 = (ulonglong)*(uint *)(puVar2 + 2);
      uVar26 = *(uint *)(puVar1 + 2);
      uVar18 = (ulonglong)uVar26;
      bVar6 = (byte)puVar3[1];
      bVar7 = *(byte *)((longlong)puVar1 + 3);
      bVar8 = *(byte *)((longlong)puVar2 + 3);
      bVar9 = *(byte *)((longlong)puVar3 + 3);
      if (bVar6 < 2) {
        if (bVar6 == 1) {
          uVar35 = uVar16 & 0x3f;
          uVar16 = (ulonglong)((int)uVar16 + 1);
          lVar28 = (ulonglong)(*(uint *)(puVar3 + 2) + (uint)(uVar26 == 0)) -
                   ((longlong)(local_a8 << uVar35) >> 0x3f);
          local_130 = local_50[0];
          if (lVar28 == 3) {
            uVar35 = (ulonglong)(local_50[0] - 1 == 0) + (local_50[0] - 1);
          }
          else {
            uVar35 = local_50[lVar28] + (ulonglong)(local_50[lVar28] == 0);
            if (lVar28 == 1) goto LAB_00e6d240;
          }
          local_50[2] = local_50[1];
        }
        else {
          uVar35 = local_50[uVar26 == 0];
          local_130 = *(ulonglong *)(local_a0 + (0xb - (ulonglong)(uVar26 == 0)) * 2);
        }
      }
      else {
        uVar35 = uVar16 & 0x3f;
        uVar16 = (ulonglong)((int)uVar16 + (uint)bVar6);
        local_50[2] = local_50[1];
        uVar35 = (ulonglong)*(uint *)(puVar3 + 2) +
                 ((local_a8 << uVar35) >> ((ulonglong)-(uint)bVar6 & 0x3f));
        local_130 = local_50[0];
      }
LAB_00e6d240:
      local_50[0] = uVar35;
      local_50[1] = local_130;
      if (bVar5 != 0) {
        uVar19 = uVar16 & 0x3f;
        uVar16 = (ulonglong)((int)uVar16 + (uint)bVar5);
        uVar36 = uVar36 + ((local_a8 << uVar19) >> ((ulonglong)-(uint)bVar5 & 0x3f));
      }
      if ((0x1e < (byte)(bVar4 + bVar5 + bVar6)) && (uVar26 = (uint)uVar16, uVar26 < 0x41)) {
        if (local_98 < local_88) {
          if (local_98 != local_90) {
            uVar23 = (uint)(uVar16 >> 3);
            puVar22 = (ulonglong *)((longlong)local_98 - (uVar16 >> 3));
            if (puVar22 < local_90) {
              uVar23 = (int)local_98 - (int)local_90;
              puVar22 = (ulonglong *)((longlong)local_98 - (ulonglong)uVar23);
            }
            local_a8 = *puVar22;
            uVar16 = (ulonglong)(uVar26 + uVar23 * -8);
            local_98 = puVar22;
          }
        }
        else {
          local_98 = (ulonglong *)((longlong)local_98 - (uVar16 >> 3));
          local_a8 = *local_98;
          uVar16 = (ulonglong)(uVar26 & 7);
        }
      }
      iVar27 = (int)uVar16;
      if (bVar4 != 0) {
        iVar27 = iVar27 + (uint)bVar4;
        uVar18 = uVar18 + ((local_a8 << (uVar16 & 0x3f)) >> ((ulonglong)-(uint)bVar4 & 0x3f));
      }
      puVar30 = (undefined8 *)((longlong)puVar32 + uVar18);
      iVar25 = iVar27 + (uint)bVar7 + (uint)bVar8;
      sVar14 = (bVar7 < 0x41) * ('@' - bVar7);
      lVar34 = (((local_a8 >> ((ulonglong)-(iVar27 + (uint)bVar7) & 0x3f)) << sVar14) >> sVar14) +
               (ulonglong)*puVar1;
      uVar26 = iVar25 + (uint)bVar9;
      uVar16 = (ulonglong)uVar26;
      sVar14 = (bVar8 < 0x41) * ('@' - bVar8);
      lVar33 = (((local_a8 >> ((ulonglong)(uint)-iVar25 & 0x3f)) << sVar14) >> sVar14) +
               (ulonglong)*puVar2;
      sVar14 = (bVar9 < 0x41) * ('@' - bVar9);
      uVar19 = uVar18 + uVar36;
      puVar29 = (undefined8 *)((longlong)local_c8 + uVar18);
      lVar28 = (((local_a8 >> ((ulonglong)-uVar26 & 0x3f)) << sVar14) >> sVar14) +
               (ulonglong)*puVar3;
      puVar24 = (undefined8 *)((longlong)puVar30 - uVar35);
      local_a0[0] = uVar26;
      local_80 = lVar34;
      local_70 = lVar28;
      local_60 = lVar33;
      if ((local_118 - 0x20U < (longlong)puVar32 + uVar19) || (puVar15 < puVar29)) {
        local_c0 = uVar18;
        local_b8 = uVar36;
        local_b0 = uVar35;
        uVar19 = FUN_00e6aba0(puVar15,&local_c8,puVar10,lVar11);
      }
      else {
        uVar13 = local_c8[1];
        *puVar32 = *local_c8;
        puVar32[1] = uVar13;
        if (0x10 < uVar18) {
          uVar13 = local_c8[3];
          puVar32[2] = local_c8[2];
          puVar32[3] = uVar13;
          if (0x10 < (longlong)(uVar18 - 0x10)) {
            puVar20 = puVar32 + 4;
            do {
              uVar13 = local_c8[5];
              puVar21 = puVar20 + 4;
              *puVar20 = local_c8[4];
              puVar20[1] = uVar13;
              uVar13 = local_c8[7];
              puVar20[2] = local_c8[6];
              puVar20[3] = uVar13;
              puVar20 = puVar21;
              local_c8 = local_c8 + 4;
            } while (puVar21 < puVar30);
          }
        }
        local_c8 = puVar29;
        if ((ulonglong)((longlong)puVar30 - (longlong)puVar10) < uVar35) {
          if ((ulonglong)((longlong)puVar30 - lVar11) < uVar35) goto LAB_00e6d010;
          if ((undefined1 *)((longlong)puVar24 + (longlong)(puVar12 + (uVar36 - (longlong)puVar10)))
              <= puVar12) {
            FUN_00e86250(uVar19,uVar36);
            goto LAB_00e6d40c;
          }
          lVar31 = (longlong)puVar10 - (longlong)puVar24;
          lVar17 = FUN_00e86250(uVar19,lVar31);
          puVar30 = (undefined8 *)(lVar17 + lVar31);
          uVar36 = uVar36 - lVar31;
          puVar24 = puVar10;
        }
        if (uVar35 < 0x10) {
          if (uVar35 < 8) {
            *(undefined1 *)puVar30 = *(undefined1 *)puVar24;
            *(undefined1 *)((longlong)puVar30 + 1) = *(undefined1 *)((longlong)puVar24 + 1);
            *(undefined1 *)((longlong)puVar30 + 2) = *(undefined1 *)((longlong)puVar24 + 2);
            *(undefined1 *)((longlong)puVar30 + 3) = *(undefined1 *)((longlong)puVar24 + 3);
            uVar23 = *(uint *)(&DAT_00e957e0 + uVar35 * 4);
            *(undefined4 *)((longlong)puVar30 + 4) =
                 *(undefined4 *)((ulonglong)uVar23 + (longlong)puVar24);
            puVar24 = (undefined8 *)
                      ((longlong)((ulonglong)uVar23 + (longlong)puVar24) -
                      (longlong)*(int *)(&DAT_00e95800 + uVar35 * 4));
          }
          else {
            *puVar30 = *puVar24;
          }
          if (8 < uVar36) {
            if ((longlong)puVar30 - (longlong)puVar24 < 0x10) {
              puVar29 = puVar30 + 1;
              do {
                puVar24 = puVar24 + 1;
                puVar20 = puVar29 + 1;
                *puVar29 = *puVar24;
                puVar29 = puVar20;
              } while (puVar20 < (undefined8 *)((longlong)puVar30 + uVar36));
            }
            else {
              uVar13 = puVar24[2];
              puVar30[1] = puVar24[1];
              puVar30[2] = uVar13;
              if (0x18 < (longlong)uVar36) {
                puVar29 = puVar30 + 3;
                puVar24 = puVar24 + 3;
                do {
                  uVar13 = puVar24[1];
                  puVar20 = puVar29 + 4;
                  *puVar29 = *puVar24;
                  puVar29[1] = uVar13;
                  uVar13 = puVar24[3];
                  puVar29[2] = puVar24[2];
                  puVar29[3] = uVar13;
                  puVar29 = puVar20;
                  puVar24 = puVar24 + 4;
                } while (puVar20 < (undefined8 *)((longlong)puVar30 + uVar36));
              }
            }
          }
        }
        else {
          uVar13 = puVar24[1];
          *puVar30 = *puVar24;
          puVar30[1] = uVar13;
          if (0x10 < (longlong)uVar36) {
            puVar29 = puVar24 + 2;
            puVar24 = puVar30 + 2;
            do {
              uVar13 = puVar29[1];
              puVar20 = puVar24 + 4;
              *puVar24 = *puVar29;
              puVar24[1] = uVar13;
              uVar13 = puVar29[3];
              puVar24[2] = puVar29[2];
              puVar24[3] = uVar13;
              puVar29 = puVar29 + 4;
              puVar24 = puVar20;
            } while (puVar20 < (undefined8 *)(uVar36 + (longlong)puVar30));
          }
        }
      }
LAB_00e6d40c:
      if (0xffffffffffffff88 < uVar19) {
        return uVar19;
      }
      puVar32 = (undefined8 *)((longlong)puVar32 + uVar19);
      local_13c = local_13c + -1;
      if (local_13c != 0) {
        if (uVar26 < 0x41) {
          if (local_98 < local_88) {
            if (local_98 != local_90) {
              uVar23 = uVar26 >> 3;
              puVar22 = (ulonglong *)((longlong)local_98 - (ulonglong)uVar23);
              if (puVar22 < local_90) {
                uVar23 = (int)local_98 - (int)local_90;
                puVar22 = (ulonglong *)((longlong)local_98 - (ulonglong)uVar23);
              }
              local_a8 = *puVar22;
              uVar16 = (ulonglong)(uVar26 + uVar23 * -8);
              local_98 = puVar22;
            }
          }
          else {
            uVar16 = (ulonglong)(uVar26 & 7);
            local_98 = (ulonglong *)((longlong)local_98 - (ulonglong)(uVar26 >> 3));
            local_a8 = *local_98;
          }
        }
        goto LAB_00e6d198;
      }
      if ((0x40 < uVar26) || (((local_98 < local_88 && (local_90 == local_98)) && (uVar26 == 0x40)))
         ) {
        *(int *)(&DAT_0000683c + unaff_RDI) = (int)uVar35;
        *(undefined4 *)(&DAT_00006840 + unaff_RDI) = (undefined4)local_130;
        *(int *)(&DAT_00006844 + unaff_RDI) = (int)local_50[2];
        goto LAB_00e6d04b;
      }
    }
LAB_00e6d010:
    uVar16 = 0xffffffffffffffec;
  }
  return uVar16;
}



// WARNING: Type propagation algorithm not settling

ulonglong FUN_00e6d8e0(undefined8 param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  undefined *puVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  sbyte sVar15;
  sbyte sVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  uint uVar26;
  ulonglong uVar27;
  longlong lVar28;
  ulonglong *puVar29;
  undefined8 *puVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  undefined8 *puVar33;
  undefined8 *unaff_RSI;
  ulonglong *puVar34;
  longlong unaff_RDI;
  longlong lVar35;
  undefined8 *puVar36;
  undefined8 *puVar37;
  undefined8 *puVar38;
  longlong lVar39;
  undefined8 *puVar40;
  byte bVar41;
  ulonglong *puVar42;
  int iVar43;
  uint uVar44;
  ulonglong uVar45;
  uint uVar46;
  undefined8 *local_2a8;
  ulonglong local_298;
  ulonglong local_290;
  ulonglong local_270;
  undefined8 *local_240;
  undefined8 *local_200;
  ulonglong local_1f8;
  ulonglong local_1f0;
  ulonglong local_1e8;
  ulonglong local_1e0;
  ulonglong local_1d8;
  ulonglong local_1d0;
  ulonglong local_1c8;
  ulonglong local_1c0;
  ulonglong local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  ulonglong local_1a0;
  ulonglong local_198;
  ulonglong local_190;
  ulonglong local_188;
  ulonglong local_180;
  ulonglong local_178;
  ulonglong local_170;
  ulonglong local_168;
  uint local_160 [2];
  ulonglong *local_158;
  ulonglong *local_150;
  ulonglong *local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  ulonglong local_110 [28];
  
  local_270 = (longlong)unaff_RSI + param_2;
  iVar23 = *(int *)(&DAT_00007688 + unaff_RDI);
  if (iVar23 == 1) {
    local_270 = *(ulonglong *)(&DAT_00007678 + unaff_RDI);
  }
  local_240 = *(undefined8 **)(&DAT_00007680 + unaff_RDI);
  local_200 = *(undefined8 **)(&DAT_00007598 + unaff_RDI);
  puVar11 = *(undefined8 **)(&DAT_000074c8 + unaff_RDI);
  lVar12 = *(longlong *)(&DAT_000074d0 + unaff_RDI);
  puVar13 = *(undefined1 **)(&DAT_000074d8 + unaff_RDI);
  puVar33 = unaff_RSI;
  if (param_4 != 0) {
    local_110[0] = (ulonglong)*(uint *)(&DAT_0000683c + unaff_RDI);
    *(undefined4 *)(&DAT_0000752c + unaff_RDI) = 1;
    local_110[1] = (ulonglong)*(uint *)(&DAT_00006840 + unaff_RDI);
    local_110[2] = (ulonglong)*(uint *)(&DAT_00006844 + unaff_RDI);
    uVar24 = FUN_00e6a940(iVar23,param_3);
    if (0xffffffffffffff88 < uVar24) {
      return 0xffffffffffffffec;
    }
    uVar22 = 8;
    if ((int)param_4 < 9) {
      uVar22 = param_4;
    }
    FUN_00e6bba0();
    FUN_00e6bba0();
    FUN_00e6bba0();
    if (local_160[0] < 0x41) {
      puVar42 = local_110;
      bVar18 = false;
      bVar19 = false;
      uVar46 = 0;
      lVar28 = local_140;
      lVar35 = local_130;
      lVar39 = local_120;
      puVar29 = local_158;
      uVar24 = local_168;
      uVar44 = local_160[0];
      do {
        puVar42 = puVar42 + 3;
        if (puVar29 < local_148) {
          puVar34 = puVar29;
          bVar17 = bVar18;
          if (puVar29 != local_150) {
            uVar26 = uVar44 >> 3;
            puVar34 = (ulonglong *)((longlong)puVar29 - (ulonglong)uVar26);
            if (puVar34 < local_150) {
              uVar26 = (uint)((longlong)puVar29 - (longlong)local_150);
              puVar34 = (ulonglong *)
                        ((longlong)puVar29 - ((longlong)puVar29 - (longlong)local_150 & 0xffffffffU)
                        );
            }
            uVar24 = *puVar34;
            bVar19 = true;
            uVar44 = uVar44 + uVar26 * -8;
            bVar17 = true;
          }
        }
        else {
          puVar34 = (ulonglong *)((longlong)puVar29 - (ulonglong)(uVar44 >> 3));
          uVar24 = *puVar34;
          bVar19 = true;
          uVar44 = uVar44 & 7;
          bVar17 = true;
        }
        if ((int)uVar22 <= (int)uVar46) {
          if (bVar19) {
            local_168 = uVar24;
            local_158 = puVar34;
            if (bVar17) {
              local_160[0] = uVar44;
            }
          }
          else if (bVar17) {
            local_160[0] = uVar44;
          }
          uVar44 = local_160[0];
          puVar42 = local_158;
          if (bVar18) {
            local_140 = lVar28;
            local_130 = lVar35;
            local_120 = lVar39;
          }
          goto joined_r0x00e6df17;
        }
        uVar32 = (ulonglong)uVar44;
        puVar1 = (ushort *)(local_138 + lVar28 * 8);
        bVar5 = (byte)puVar1[1];
        uVar26 = *(uint *)(puVar1 + 2);
        uVar25 = (ulonglong)uVar26;
        puVar2 = (ushort *)(local_118 + lVar39 * 8);
        bVar10 = (byte)puVar2[1];
        uVar31 = (ulonglong)*(uint *)(puVar2 + 2);
        puVar3 = (ushort *)(local_128 + lVar35 * 8);
        bVar6 = (byte)puVar3[1];
        bVar7 = *(byte *)((longlong)puVar1 + 3);
        bVar8 = *(byte *)((longlong)puVar2 + 3);
        bVar9 = *(byte *)((longlong)puVar3 + 3);
        if (bVar6 < 2) {
          if (bVar6 == 1) {
            uVar45 = uVar32 & 0x3f;
            uVar32 = (ulonglong)(uVar44 + 1);
            lVar28 = (ulonglong)(*(uint *)(puVar3 + 2) + (uint)(uVar26 == 0)) -
                     ((longlong)(uVar24 << uVar45) >> 0x3f);
            if (lVar28 == 3) {
              uVar45 = (ulonglong)(local_110[0] - 1 == 0) + (local_110[0] - 1);
            }
            else {
              uVar45 = local_110[lVar28] + (ulonglong)(local_110[lVar28] == 0);
              if (lVar28 == 1) goto LAB_00e6db6b;
            }
            local_110[2] = local_110[1];
          }
          else {
            uVar45 = local_110[uVar26 == 0];
            local_110[0] = *(ulonglong *)(local_160 + (0xb - (ulonglong)(uVar26 == 0)) * 2);
          }
        }
        else {
          uVar45 = uVar32 & 0x3f;
          uVar32 = (ulonglong)(uVar44 + bVar6);
          local_110[2] = local_110[1];
          uVar45 = (ulonglong)*(uint *)(puVar3 + 2) +
                   ((uVar24 << uVar45) >> ((ulonglong)-(uint)bVar6 & 0x3f));
        }
LAB_00e6db6b:
        local_110[1] = local_110[0];
        local_110[0] = uVar45;
        if (bVar10 != 0) {
          uVar27 = uVar32 & 0x3f;
          uVar32 = (ulonglong)((int)uVar32 + (uint)bVar10);
          uVar31 = uVar31 + ((uVar24 << uVar27) >> ((ulonglong)-(uint)bVar10 & 0x3f));
        }
        uVar27 = uVar32;
        puVar29 = puVar34;
        if ((0x1e < (byte)(bVar5 + bVar10 + bVar6)) && (uVar44 = (uint)uVar32, uVar44 < 0x41)) {
          if (puVar34 < local_148) {
            if (puVar34 != local_150) {
              uVar26 = (uint)(uVar32 >> 3);
              puVar29 = (ulonglong *)((longlong)puVar34 - (uVar32 >> 3));
              if (puVar29 < local_150) {
                uVar26 = (int)puVar34 - (int)local_150;
                puVar29 = (ulonglong *)((longlong)puVar34 - (ulonglong)uVar26);
              }
              uVar24 = *puVar29;
              bVar19 = true;
              uVar27 = (ulonglong)(uVar44 + uVar26 * -8);
            }
          }
          else {
            uVar27 = (ulonglong)(uVar44 & 7);
            puVar29 = (ulonglong *)((longlong)puVar34 - (uVar32 >> 3));
            uVar24 = *puVar29;
            bVar19 = true;
          }
        }
        iVar23 = (int)uVar27;
        if (bVar5 != 0) {
          iVar23 = iVar23 + (uint)bVar5;
          uVar25 = uVar25 + ((uVar24 << (uVar27 & 0x3f)) >> ((ulonglong)-(uint)bVar5 & 0x3f));
        }
        iVar43 = iVar23 + (uint)bVar7 + (uint)bVar8;
        sVar15 = (bVar7 < 0x41) * ('@' - bVar7);
        lVar28 = (((uVar24 >> ((ulonglong)-(iVar23 + (uint)bVar7) & 0x3f)) << sVar15) >> sVar15) +
                 (ulonglong)*puVar1;
        uVar44 = iVar43 + (uint)bVar9;
        sVar15 = (bVar8 < 0x41) * ('@' - bVar8);
        lVar39 = (((uVar24 >> ((ulonglong)(uint)-iVar43 & 0x3f)) << sVar15) >> sVar15) +
                 (ulonglong)*puVar2;
        sVar15 = (bVar9 < 0x41) * ('@' - bVar9);
        lVar35 = (((uVar24 >> ((ulonglong)-uVar44 & 0x3f)) << sVar15) >> sVar15) +
                 (ulonglong)*puVar3;
        *puVar42 = uVar25;
        bVar18 = true;
        puVar42[1] = uVar31;
        puVar42[2] = uVar45;
        uVar46 = uVar46 + 1;
      } while (uVar44 < 0x41);
      if (bVar19) {
        local_168 = uVar24;
        local_158 = puVar29;
      }
      local_160[0] = uVar44;
      puVar42 = local_158;
      local_140 = lVar28;
      local_130 = lVar35;
      local_120 = lVar39;
      if ((int)uVar46 < (int)uVar22) {
        return 0xffffffffffffffec;
      }
joined_r0x00e6df17:
      do {
        local_158 = puVar42;
        if (0x40 < uVar44) goto LAB_00e6e322;
        if (puVar42 < local_148) {
          if (local_150 != puVar42) {
            uVar26 = uVar44 >> 3;
            local_158 = (ulonglong *)((longlong)puVar42 - (ulonglong)uVar26);
            if (local_158 < local_150) {
              uVar26 = (int)puVar42 - (int)local_150;
              local_158 = (ulonglong *)((longlong)puVar42 - (ulonglong)uVar26);
            }
            local_168 = *local_158;
            local_160[0] = uVar44 + uVar26 * -8;
          }
        }
        else {
          local_160[0] = uVar44 & 7;
          local_158 = (ulonglong *)((longlong)puVar42 - (ulonglong)(uVar44 >> 3));
          local_168 = *local_158;
        }
        if ((int)param_4 <= (int)uVar46) goto LAB_00e6e330;
        puVar1 = (ushort *)(local_138 + local_140 * 8);
        bVar5 = (byte)puVar1[1];
        puVar2 = (ushort *)(local_118 + local_120 * 8);
        bVar10 = *(byte *)((longlong)puVar1 + 3);
        bVar6 = (byte)puVar2[1];
        puVar3 = (ushort *)(local_128 + local_130 * 8);
        local_298 = (ulonglong)*(uint *)(puVar2 + 2);
        bVar7 = (byte)puVar3[1];
        uVar44 = *(uint *)(puVar1 + 2);
        local_290 = (ulonglong)uVar44;
        bVar41 = bVar5 + bVar6 + bVar7;
        bVar8 = *(byte *)((longlong)puVar2 + 3);
        bVar9 = *(byte *)((longlong)puVar3 + 3);
        uVar24 = (ulonglong)local_160[0];
        if (bVar7 < 2) {
          if (bVar7 == 1) {
            uVar31 = uVar24 & 0x3f;
            uVar24 = (ulonglong)(local_160[0] + 1);
            lVar28 = (ulonglong)(*(uint *)(puVar3 + 2) + (uint)(uVar44 == 0)) -
                     ((longlong)(local_168 << uVar31) >> 0x3f);
            if (lVar28 == 3) {
              uVar31 = (ulonglong)(local_110[0] - 1 == 0) + (local_110[0] - 1);
            }
            else {
              uVar31 = local_110[lVar28] + (ulonglong)(local_110[lVar28] == 0);
              if (lVar28 == 1) goto LAB_00e6e06d;
            }
            local_110[2] = local_110[1];
          }
          else {
            uVar31 = local_110[uVar44 == 0];
            local_110[0] = *(ulonglong *)(local_160 + (0xb - (ulonglong)(uVar44 == 0)) * 2);
          }
        }
        else {
          uVar31 = uVar24 & 0x3f;
          uVar24 = (ulonglong)(local_160[0] + bVar7);
          local_110[2] = local_110[1];
          uVar31 = (ulonglong)*(uint *)(puVar3 + 2) +
                   ((local_168 << uVar31) >> ((ulonglong)-(uint)bVar7 & 0x3f));
        }
LAB_00e6e06d:
        local_110[1] = local_110[0];
        local_110[0] = uVar31;
        if (bVar6 == 0) {
          if (bVar41 < 0x1f) goto LAB_00e6e098;
LAB_00e6e775:
          uVar44 = (uint)uVar24;
          if (0x40 < uVar44) goto LAB_00e6e098;
          if (local_148 <= local_158) {
            local_158 = (ulonglong *)((longlong)local_158 - (uVar24 >> 3));
            local_168 = *local_158;
            uVar24 = (ulonglong)(uVar44 & 7);
            goto LAB_00e6e098;
          }
          if (local_150 == local_158) goto LAB_00e6e098;
          iVar23 = (int)(uVar24 >> 3);
          puVar42 = (ulonglong *)((longlong)local_158 - (uVar24 >> 3));
          if (puVar42 < local_150) {
            iVar23 = (int)((longlong)local_158 - (longlong)local_150);
            puVar42 = (ulonglong *)
                      ((longlong)local_158 -
                      ((longlong)local_158 - (longlong)local_150 & 0xffffffffU));
          }
          local_168 = *puVar42;
          uVar44 = uVar44 + iVar23 * -8;
          uVar24 = (ulonglong)uVar44;
          local_158 = puVar42;
        }
        else {
          uVar32 = uVar24 & 0x3f;
          uVar24 = (ulonglong)((int)uVar24 + (uint)bVar6);
          local_298 = local_298 + ((local_168 << uVar32) >> ((ulonglong)-(uint)bVar6 & 0x3f));
          if (0x1e < bVar41) goto LAB_00e6e775;
LAB_00e6e098:
          uVar44 = (uint)uVar24;
        }
        if (bVar5 != 0) {
          uVar44 = (int)uVar24 + (uint)bVar5;
          local_290 = local_290 +
                      ((local_168 << (uVar24 & 0x3f)) >> ((ulonglong)-(uint)bVar5 & 0x3f));
        }
        iVar23 = uVar44 + bVar10 + (uint)bVar8;
        uVar32 = (ulonglong)(uVar46 & 7);
        sVar15 = (bVar10 < 0x41) * ('@' - bVar10);
        local_140 = (((local_168 >> ((ulonglong)-(uVar44 + bVar10) & 0x3f)) << sVar15) >> sVar15) +
                    (ulonglong)*puVar1;
        uVar44 = (uint)bVar9 + iVar23;
        sVar15 = (bVar8 < 0x41) * ('@' - bVar8);
        sVar16 = (bVar9 < 0x41) * ('@' - bVar9);
        local_130 = (((local_168 >> ((ulonglong)-uVar44 & 0x3f)) << sVar16) >> sVar16) +
                    (ulonglong)*puVar3;
        local_120 = (ulonglong)*puVar2 +
                    (((local_168 >> ((ulonglong)(uint)-iVar23 & 0x3f)) << sVar15) >> sVar15);
        uVar24 = local_110[uVar32 * 3 + 3];
        puVar37 = (undefined8 *)((longlong)local_200 + uVar24);
        local_160[0] = uVar44;
        if (*(int *)(&DAT_00007688 + unaff_RDI) == 2) {
          if (*(undefined8 **)(&DAT_00007680 + unaff_RDI) < puVar37) {
            uVar25 = (longlong)*(undefined8 **)(&DAT_00007680 + unaff_RDI) - (longlong)local_200;
            if (uVar25 != 0) {
              if (local_270 - (longlong)puVar33 < uVar25) {
                return 0xffffffffffffffba;
              }
              uVar24 = uVar24 - uVar25;
              puVar33 = (undefined8 *)((longlong)puVar33 + uVar25);
              FUN_00e6a4e0();
              local_110[uVar32 * 3 + 3] = uVar24;
            }
            puVar37 = (undefined8 *)((longlong)puVar33 + uVar24);
            local_1c8 = local_110[uVar32 * 3 + 3];
            uVar45 = local_110[uVar32 * 3 + 4];
            puVar38 = (undefined8 *)(&DAT_0000768c + unaff_RDI);
            local_240 = (undefined8 *)(&UNK_0001768c + unaff_RDI);
            local_200 = (undefined8 *)((longlong)puVar38 + uVar24);
            local_1c0 = local_110[uVar32 * 3 + 4];
            uVar25 = uVar45 + uVar24;
            local_1b8 = local_110[uVar32 * 3 + 5];
            uVar27 = local_110[uVar32 * 3 + 5];
            *(undefined4 *)(&DAT_00007688 + unaff_RDI) = 0;
            puVar36 = (undefined8 *)((longlong)puVar37 - uVar27);
            uVar20 = uVar45;
            uVar21 = uVar27;
            if ((local_270 - 0x20 < (longlong)puVar33 + uVar25) || (local_240 < local_200))
            goto LAB_00e6ea79;
            uVar14 = *(undefined8 *)(&DAT_00007694 + unaff_RDI);
            *puVar33 = *(undefined8 *)(&DAT_0000768c + unaff_RDI);
            puVar33[1] = uVar14;
            if (0x10 < uVar24) {
              uVar14 = *(undefined8 *)(&DAT_000076a4 + unaff_RDI);
              puVar33[2] = *(undefined8 *)(&DAT_0000769c + unaff_RDI);
              puVar33[3] = uVar14;
              if (0x10 < (longlong)(uVar24 - 0x10)) {
                puVar38 = puVar33 + 4;
                puVar30 = (undefined8 *)(&DAT_000076ac + unaff_RDI);
                do {
                  uVar14 = puVar30[1];
                  puVar40 = puVar38 + 4;
                  *puVar38 = *puVar30;
                  puVar38[1] = uVar14;
                  uVar14 = puVar30[3];
                  puVar38[2] = puVar30[2];
                  puVar38[3] = uVar14;
                  puVar38 = puVar40;
                  puVar30 = puVar30 + 4;
                } while (puVar40 < puVar37);
              }
            }
            if ((ulonglong)((longlong)puVar37 - (longlong)puVar11) < uVar27) {
              if ((ulonglong)((longlong)puVar37 - lVar12) < uVar27) {
                return 0xffffffffffffffec;
              }
              if ((undefined1 *)
                  ((longlong)puVar36 + (longlong)(puVar13 + (uVar45 - (longlong)puVar11))) <=
                  puVar13) {
LAB_00e6ea48:
                FUN_00e86250(uVar27,uVar45);
                goto LAB_00e6e29c;
              }
              lVar28 = FUN_00e86250();
              puVar37 = (undefined8 *)(lVar28 + ((longlong)puVar11 - (longlong)puVar36));
              uVar45 = uVar45 - ((longlong)puVar11 - (longlong)puVar36);
              puVar36 = puVar11;
            }
            if (uVar27 < 0x10) {
              if (uVar27 < 8) {
                *(undefined1 *)puVar37 = *(undefined1 *)puVar36;
                *(undefined1 *)((longlong)puVar37 + 1) = *(undefined1 *)((longlong)puVar36 + 1);
                *(undefined1 *)((longlong)puVar37 + 2) = *(undefined1 *)((longlong)puVar36 + 2);
                *(undefined1 *)((longlong)puVar37 + 3) = *(undefined1 *)((longlong)puVar36 + 3);
                uVar26 = *(uint *)(&DAT_00e957e0 + uVar27 * 4);
                *(undefined4 *)((longlong)puVar37 + 4) =
                     *(undefined4 *)((longlong)puVar36 + (ulonglong)uVar26);
                puVar36 = (undefined8 *)
                          ((longlong)((longlong)puVar36 + (ulonglong)uVar26) -
                          (longlong)*(int *)(&DAT_00e95800 + uVar27 * 4));
              }
              else {
                *puVar37 = *puVar36;
              }
              if (8 < uVar45) {
                if ((longlong)puVar37 - (longlong)puVar36 < 0x10) {
                  puVar38 = puVar37 + 1;
                  do {
                    puVar36 = puVar36 + 1;
                    puVar30 = puVar38 + 1;
                    *puVar38 = *puVar36;
                    puVar38 = puVar30;
                  } while (puVar30 < (undefined8 *)((longlong)puVar37 + uVar45));
                }
                else {
                  uVar14 = puVar36[2];
                  puVar37[1] = puVar36[1];
                  puVar37[2] = uVar14;
                  if (0x18 < (longlong)uVar45) {
                    puVar38 = puVar36 + 3;
                    puVar36 = puVar37 + 3;
                    do {
                      uVar14 = puVar38[1];
                      puVar30 = puVar36 + 4;
                      *puVar36 = *puVar38;
                      puVar36[1] = uVar14;
                      uVar14 = puVar38[3];
                      puVar36[2] = puVar38[2];
                      puVar36[3] = uVar14;
                      puVar38 = puVar38 + 4;
                      puVar36 = puVar30;
                    } while (puVar30 < (undefined8 *)((longlong)puVar37 + uVar45));
                  }
                }
              }
            }
            else {
              uVar14 = puVar36[1];
              *puVar37 = *puVar36;
              puVar37[1] = uVar14;
              if (0x10 < (longlong)uVar45) {
                puVar38 = puVar36 + 2;
                puVar36 = puVar37 + 2;
                do {
                  uVar14 = puVar38[1];
                  puVar30 = puVar36 + 4;
                  *puVar36 = *puVar38;
                  puVar36[1] = uVar14;
                  uVar14 = puVar38[3];
                  puVar36[2] = puVar38[2];
                  puVar36[3] = uVar14;
                  puVar38 = puVar38 + 4;
                  puVar36 = puVar30;
                } while (puVar30 < (undefined8 *)(uVar45 + (longlong)puVar37));
              }
            }
          }
          else {
            local_1d8 = local_110[uVar32 * 3 + 4];
            uVar45 = local_110[uVar32 * 3 + 4];
            puVar4 = (undefined *)((longlong)local_200 + (uVar24 - 0x20));
            local_1d0 = local_110[uVar32 * 3 + 5];
            puVar38 = (undefined8 *)((longlong)puVar33 + uVar24);
            uVar27 = local_110[uVar32 * 3 + 5];
            uVar25 = uVar45 + uVar24;
            puVar36 = (undefined8 *)((longlong)puVar38 - uVar27);
            local_1e0 = uVar24;
            if ((puVar4 < (undefined *)((longlong)puVar33 + uVar25)) || (local_240 < puVar37)) {
              uVar25 = FUN_00e6aa80(&local_200,puVar4,local_240,puVar11,puVar13);
            }
            else {
              uVar14 = local_200[1];
              *puVar33 = *local_200;
              puVar33[1] = uVar14;
              if (0x10 < uVar24) {
                uVar14 = local_200[3];
                puVar33[2] = local_200[2];
                puVar33[3] = uVar14;
                if (0x10 < (longlong)(uVar24 - 0x10)) {
                  puVar30 = puVar33 + 4;
                  do {
                    uVar14 = local_200[5];
                    puVar40 = puVar30 + 4;
                    *puVar30 = local_200[4];
                    puVar30[1] = uVar14;
                    uVar14 = local_200[7];
                    puVar30[2] = local_200[6];
                    puVar30[3] = uVar14;
                    puVar30 = puVar40;
                    local_200 = local_200 + 4;
                  } while (puVar40 < puVar38);
                }
              }
              local_200 = puVar37;
              if ((ulonglong)((longlong)puVar38 - (longlong)puVar11) < uVar27) {
                if ((ulonglong)((longlong)puVar38 - lVar12) < uVar27) {
                  return 0xffffffffffffffec;
                }
                if ((undefined1 *)
                    ((longlong)puVar36 + (longlong)(puVar13 + (uVar45 - (longlong)puVar11))) <=
                    puVar13) goto LAB_00e6ea48;
                lVar28 = FUN_00e86250();
                puVar38 = (undefined8 *)(lVar28 + ((longlong)puVar11 - (longlong)puVar36));
                uVar45 = uVar45 - ((longlong)puVar11 - (longlong)puVar36);
                puVar36 = puVar11;
              }
              if (uVar27 < 0x10) {
                if (uVar27 < 8) {
                  *(undefined1 *)puVar38 = *(undefined1 *)puVar36;
                  *(undefined1 *)((longlong)puVar38 + 1) = *(undefined1 *)((longlong)puVar36 + 1);
                  *(undefined1 *)((longlong)puVar38 + 2) = *(undefined1 *)((longlong)puVar36 + 2);
                  *(undefined1 *)((longlong)puVar38 + 3) = *(undefined1 *)((longlong)puVar36 + 3);
                  uVar26 = *(uint *)(&DAT_00e957e0 + uVar27 * 4);
                  *(undefined4 *)((longlong)puVar38 + 4) =
                       *(undefined4 *)((ulonglong)uVar26 + (longlong)puVar36);
                  puVar36 = (undefined8 *)
                            ((longlong)((ulonglong)uVar26 + (longlong)puVar36) -
                            (longlong)*(int *)(&DAT_00e95800 + uVar27 * 4));
                }
                else {
                  *puVar38 = *puVar36;
                }
                if (8 < uVar45) {
                  if ((longlong)puVar38 - (longlong)puVar36 < 0x10) {
                    puVar37 = puVar38 + 1;
                    do {
                      puVar36 = puVar36 + 1;
                      puVar30 = puVar37 + 1;
                      *puVar37 = *puVar36;
                      puVar37 = puVar30;
                    } while (puVar30 < (undefined8 *)((longlong)puVar38 + uVar45));
                  }
                  else {
                    uVar14 = puVar36[2];
                    puVar38[1] = puVar36[1];
                    puVar38[2] = uVar14;
                    if (0x18 < (longlong)uVar45) {
                      puVar37 = puVar38 + 3;
                      puVar36 = puVar36 + 3;
                      do {
                        uVar14 = puVar36[1];
                        puVar30 = puVar37 + 4;
                        *puVar37 = *puVar36;
                        puVar37[1] = uVar14;
                        uVar14 = puVar36[3];
                        puVar37[2] = puVar36[2];
                        puVar37[3] = uVar14;
                        puVar37 = puVar30;
                        puVar36 = puVar36 + 4;
                      } while (puVar30 < (undefined8 *)((longlong)puVar38 + uVar45));
                    }
                  }
                }
              }
              else {
                uVar14 = puVar36[1];
                *puVar38 = *puVar36;
                puVar38[1] = uVar14;
                if (0x10 < (longlong)uVar45) {
                  puVar37 = puVar38 + 2;
                  puVar36 = puVar36 + 2;
                  do {
                    uVar14 = puVar36[1];
                    puVar30 = puVar37 + 4;
                    *puVar37 = *puVar36;
                    puVar37[1] = uVar14;
                    uVar14 = puVar36[3];
                    puVar37[2] = puVar36[2];
                    puVar37[3] = uVar14;
                    puVar37 = puVar30;
                    puVar36 = puVar36 + 4;
                  } while (puVar30 < (undefined8 *)(uVar45 + (longlong)puVar38));
                }
              }
            }
          }
        }
        else {
          local_1f0 = local_110[uVar32 * 3 + 4];
          puVar36 = (undefined8 *)((longlong)puVar33 + uVar24);
          uVar45 = local_110[uVar32 * 3 + 4];
          local_1e8 = local_110[uVar32 * 3 + 5];
          uVar27 = local_110[uVar32 * 3 + 5];
          uVar25 = uVar45 + uVar24;
          puVar30 = (undefined8 *)((longlong)puVar36 - uVar27);
          puVar38 = local_200;
          local_1f8 = uVar24;
          uVar20 = local_1c0;
          uVar21 = local_1b8;
          if ((local_270 - 0x20 < (longlong)puVar33 + uVar25) || (local_240 < puVar37)) {
LAB_00e6ea79:
            local_1b8 = uVar21;
            local_1c0 = uVar20;
            local_200 = puVar38;
            uVar25 = FUN_00e6aba0(local_240,&local_200,puVar11,lVar12);
          }
          else {
            uVar14 = local_200[1];
            *puVar33 = *local_200;
            puVar33[1] = uVar14;
            if (0x10 < uVar24) {
              uVar14 = local_200[3];
              puVar33[2] = local_200[2];
              puVar33[3] = uVar14;
              if (0x10 < (longlong)(uVar24 - 0x10)) {
                puVar38 = puVar33 + 4;
                do {
                  uVar14 = local_200[5];
                  puVar40 = puVar38 + 4;
                  *puVar38 = local_200[4];
                  puVar38[1] = uVar14;
                  uVar14 = local_200[7];
                  puVar38[2] = local_200[6];
                  puVar38[3] = uVar14;
                  puVar38 = puVar40;
                  local_200 = local_200 + 4;
                } while (puVar40 < puVar36);
              }
            }
            local_200 = puVar37;
            if ((ulonglong)((longlong)puVar36 - (longlong)puVar11) < uVar27) {
              if ((ulonglong)((longlong)puVar36 - lVar12) < uVar27) {
                return 0xffffffffffffffec;
              }
              if ((undefined1 *)
                  ((longlong)puVar30 + (longlong)(puVar13 + (uVar45 - (longlong)puVar11))) <=
                  puVar13) goto LAB_00e6ea48;
              lVar35 = (longlong)puVar11 - (longlong)puVar30;
              lVar28 = FUN_00e86250(uVar27,lVar35);
              puVar36 = (undefined8 *)(lVar28 + lVar35);
              uVar45 = uVar45 - lVar35;
              puVar30 = puVar11;
            }
            if (uVar27 < 0x10) {
              if (uVar27 < 8) {
                *(undefined1 *)puVar36 = *(undefined1 *)puVar30;
                *(undefined1 *)((longlong)puVar36 + 1) = *(undefined1 *)((longlong)puVar30 + 1);
                *(undefined1 *)((longlong)puVar36 + 2) = *(undefined1 *)((longlong)puVar30 + 2);
                *(undefined1 *)((longlong)puVar36 + 3) = *(undefined1 *)((longlong)puVar30 + 3);
                uVar26 = *(uint *)(&DAT_00e957e0 + uVar27 * 4);
                *(undefined4 *)((longlong)puVar36 + 4) =
                     *(undefined4 *)((ulonglong)uVar26 + (longlong)puVar30);
                puVar30 = (undefined8 *)
                          ((longlong)((ulonglong)uVar26 + (longlong)puVar30) -
                          (longlong)*(int *)(&DAT_00e95800 + uVar27 * 4));
              }
              else {
                *puVar36 = *puVar30;
              }
              if (8 < uVar45) {
                if ((longlong)puVar36 - (longlong)puVar30 < 0x10) {
                  puVar37 = puVar36 + 1;
                  do {
                    puVar30 = puVar30 + 1;
                    puVar38 = puVar37 + 1;
                    *puVar37 = *puVar30;
                    puVar37 = puVar38;
                  } while (puVar38 < (undefined8 *)((longlong)puVar36 + uVar45));
                }
                else {
                  uVar14 = puVar30[2];
                  puVar36[1] = puVar30[1];
                  puVar36[2] = uVar14;
                  if (0x18 < (longlong)uVar45) {
                    puVar37 = puVar30 + 3;
                    puVar38 = puVar36 + 3;
                    do {
                      uVar14 = puVar37[1];
                      puVar30 = puVar38 + 4;
                      *puVar38 = *puVar37;
                      puVar38[1] = uVar14;
                      uVar14 = puVar37[3];
                      puVar38[2] = puVar37[2];
                      puVar38[3] = uVar14;
                      puVar37 = puVar37 + 4;
                      puVar38 = puVar30;
                    } while (puVar30 < (undefined8 *)((longlong)puVar36 + uVar45));
                  }
                }
              }
            }
            else {
              uVar14 = puVar30[1];
              *puVar36 = *puVar30;
              puVar36[1] = uVar14;
              if (0x10 < (longlong)uVar45) {
                puVar37 = puVar30 + 2;
                puVar38 = puVar36 + 2;
                do {
                  uVar14 = puVar37[1];
                  puVar30 = puVar38 + 4;
                  *puVar38 = *puVar37;
                  puVar38[1] = uVar14;
                  uVar14 = puVar37[3];
                  puVar38[2] = puVar37[2];
                  puVar38[3] = uVar14;
                  puVar37 = puVar37 + 4;
                  puVar38 = puVar30;
                } while (puVar30 < (undefined8 *)(uVar45 + (longlong)puVar36));
              }
            }
          }
        }
LAB_00e6e29c:
        if (0xffffffffffffff88 < uVar25) {
          return uVar25;
        }
        uVar46 = uVar46 + 1;
        local_110[uVar32 * 3 + 3] = local_290;
        local_110[uVar32 * 3 + 5] = uVar31;
        local_110[uVar32 * 3 + 4] = local_298;
        puVar33 = (undefined8 *)((longlong)puVar33 + uVar25);
        puVar42 = local_158;
      } while( true );
    }
    if (0 < (int)param_4) {
      return 0xffffffffffffffec;
    }
    goto LAB_00e6ddbb;
  }
  goto LAB_00e6d9e3;
LAB_00e6e322:
  if ((int)uVar46 < (int)param_4) {
    return 0xffffffffffffffec;
  }
LAB_00e6e330:
  uVar46 = uVar46 - uVar22;
  if ((int)uVar46 < (int)param_4) {
    do {
      uVar31 = (ulonglong)(uVar46 & 7);
      uVar24 = local_110[uVar31 * 3 + 3];
      puVar37 = (undefined8 *)((longlong)local_200 + uVar24);
      if (*(int *)(&DAT_00007688 + unaff_RDI) == 2) {
        if (*(undefined8 **)(&DAT_00007680 + unaff_RDI) < puVar37) {
          uVar32 = (longlong)*(undefined8 **)(&DAT_00007680 + unaff_RDI) - (longlong)local_200;
          if (uVar32 != 0) {
            if (local_270 - (longlong)puVar33 < uVar32) {
              return 0xffffffffffffffba;
            }
            uVar24 = uVar24 - uVar32;
            puVar33 = (undefined8 *)((longlong)puVar33 + uVar32);
            FUN_00e6a4e0();
            local_110[uVar31 * 3 + 3] = uVar24;
          }
          puVar37 = (undefined8 *)((longlong)puVar33 + uVar24);
          *(undefined4 *)(&DAT_00007688 + unaff_RDI) = 0;
          puVar38 = (undefined8 *)(&DAT_0000768c + unaff_RDI);
          local_240 = (undefined8 *)(&UNK_0001768c + unaff_RDI);
          local_1b0 = local_110[uVar31 * 3 + 3];
          uVar32 = local_110[uVar31 * 3 + 4];
          uVar25 = local_110[uVar31 * 3 + 5];
          local_200 = (undefined8 *)((longlong)puVar38 + uVar24);
          local_1a8 = local_110[uVar31 * 3 + 4];
          local_1a0 = local_110[uVar31 * 3 + 5];
          puVar36 = (undefined8 *)((longlong)puVar37 - uVar25);
          uVar31 = uVar32 + uVar24;
          uVar45 = uVar32;
          if ((local_270 - 0x20 < (longlong)puVar33 + uVar31) || (local_240 < local_200))
          goto LAB_00e6f001;
          uVar14 = *(undefined8 *)(&DAT_00007694 + unaff_RDI);
          *puVar33 = *(undefined8 *)(&DAT_0000768c + unaff_RDI);
          puVar33[1] = uVar14;
          if (0x10 < uVar24) {
            uVar14 = *(undefined8 *)(&DAT_000076a4 + unaff_RDI);
            puVar33[2] = *(undefined8 *)(&DAT_0000769c + unaff_RDI);
            puVar33[3] = uVar14;
            if (0x10 < (longlong)(uVar24 - 0x10)) {
              puVar38 = puVar33 + 4;
              puVar30 = (undefined8 *)(&DAT_000076ac + unaff_RDI);
              do {
                uVar14 = puVar30[1];
                puVar40 = puVar38 + 4;
                *puVar38 = *puVar30;
                puVar38[1] = uVar14;
                uVar14 = puVar30[3];
                puVar38[2] = puVar30[2];
                puVar38[3] = uVar14;
                puVar38 = puVar40;
                puVar30 = puVar30 + 4;
              } while (puVar40 < puVar37);
            }
          }
          if ((ulonglong)((longlong)puVar37 - (longlong)puVar11) < uVar25) {
            if ((ulonglong)((longlong)puVar37 - lVar12) < uVar25) {
              return 0xffffffffffffffec;
            }
            if ((undefined1 *)
                ((longlong)puVar36 + (longlong)(puVar13 + (uVar32 - (longlong)puVar11))) <= puVar13)
            {
LAB_00e6efc0:
              FUN_00e86250(uVar31,uVar32);
              goto LAB_00e6e4ec;
            }
            lVar28 = FUN_00e86250();
            puVar37 = (undefined8 *)(lVar28 + ((longlong)puVar11 - (longlong)puVar36));
            uVar32 = uVar32 - ((longlong)puVar11 - (longlong)puVar36);
            puVar36 = puVar11;
          }
          if (uVar25 < 0x10) {
            if (uVar25 < 8) {
              *(undefined1 *)puVar37 = *(undefined1 *)puVar36;
              *(undefined1 *)((longlong)puVar37 + 1) = *(undefined1 *)((longlong)puVar36 + 1);
              *(undefined1 *)((longlong)puVar37 + 2) = *(undefined1 *)((longlong)puVar36 + 2);
              *(undefined1 *)((longlong)puVar37 + 3) = *(undefined1 *)((longlong)puVar36 + 3);
              uVar22 = *(uint *)(&DAT_00e957e0 + uVar25 * 4);
              *(undefined4 *)((longlong)puVar37 + 4) =
                   *(undefined4 *)((longlong)puVar36 + (ulonglong)uVar22);
              puVar36 = (undefined8 *)
                        ((longlong)((longlong)puVar36 + (ulonglong)uVar22) -
                        (longlong)*(int *)(&DAT_00e95800 + uVar25 * 4));
            }
            else {
              *puVar37 = *puVar36;
            }
            if (8 < uVar32) {
              if ((longlong)puVar37 - (longlong)puVar36 < 0x10) {
                puVar38 = puVar37 + 1;
                do {
                  puVar36 = puVar36 + 1;
                  puVar30 = puVar38 + 1;
                  *puVar38 = *puVar36;
                  puVar38 = puVar30;
                } while (puVar30 < (undefined8 *)((longlong)puVar37 + uVar32));
              }
              else {
                uVar14 = puVar36[2];
                puVar37[1] = puVar36[1];
                puVar37[2] = uVar14;
                if (0x18 < (longlong)uVar32) {
                  puVar38 = puVar36 + 3;
                  puVar36 = puVar37 + 3;
                  do {
                    uVar14 = puVar38[1];
                    puVar30 = puVar36 + 4;
                    *puVar36 = *puVar38;
                    puVar36[1] = uVar14;
                    uVar14 = puVar38[3];
                    puVar36[2] = puVar38[2];
                    puVar36[3] = uVar14;
                    puVar38 = puVar38 + 4;
                    puVar36 = puVar30;
                  } while (puVar30 < (undefined8 *)((longlong)puVar37 + uVar32));
                }
              }
            }
          }
          else {
            uVar14 = puVar36[1];
            *puVar37 = *puVar36;
            puVar37[1] = uVar14;
            if (0x10 < (longlong)uVar32) {
              puVar38 = puVar36 + 2;
              puVar36 = puVar37 + 2;
              do {
                uVar14 = puVar38[1];
                puVar30 = puVar36 + 4;
                *puVar36 = *puVar38;
                puVar36[1] = uVar14;
                uVar14 = puVar38[3];
                puVar36[2] = puVar38[2];
                puVar36[3] = uVar14;
                puVar38 = puVar38 + 4;
                puVar36 = puVar30;
              } while (puVar30 < (undefined8 *)(uVar32 + (longlong)puVar37));
            }
          }
        }
        else {
          local_178 = local_110[uVar31 * 3 + 4];
          local_170 = local_110[uVar31 * 3 + 5];
          puVar4 = (undefined *)((longlong)local_200 + (uVar24 - 0x20));
          uVar32 = local_110[uVar31 * 3 + 4];
          uVar25 = local_110[uVar31 * 3 + 5];
          puVar38 = (undefined8 *)((longlong)puVar33 + uVar24);
          uVar31 = uVar32 + uVar24;
          local_2a8 = (undefined8 *)((longlong)puVar38 - uVar25);
          local_180 = uVar24;
          if ((puVar4 < (undefined *)((longlong)puVar33 + uVar31)) || (local_240 < puVar37)) {
            uVar31 = FUN_00e6aa80(&local_200,puVar4,local_240,puVar11,puVar13);
          }
          else {
            uVar14 = local_200[1];
            *puVar33 = *local_200;
            puVar33[1] = uVar14;
            if (0x10 < uVar24) {
              uVar14 = local_200[3];
              puVar33[2] = local_200[2];
              puVar33[3] = uVar14;
              if (0x10 < (longlong)(uVar24 - 0x10)) {
                puVar36 = puVar33 + 4;
                do {
                  uVar14 = local_200[5];
                  puVar30 = puVar36 + 4;
                  *puVar36 = local_200[4];
                  puVar36[1] = uVar14;
                  uVar14 = local_200[7];
                  puVar36[2] = local_200[6];
                  puVar36[3] = uVar14;
                  puVar36 = puVar30;
                  local_200 = local_200 + 4;
                } while (puVar30 < puVar38);
              }
            }
            local_200 = puVar37;
            if ((ulonglong)((longlong)puVar38 - (longlong)puVar11) < uVar25) {
              if ((ulonglong)((longlong)puVar38 - lVar12) < uVar25) {
                return 0xffffffffffffffec;
              }
              if ((undefined1 *)
                  ((longlong)local_2a8 + (longlong)(puVar13 + (uVar32 - (longlong)puVar11))) <=
                  puVar13) goto LAB_00e6efc0;
              lVar28 = FUN_00e86250();
              puVar38 = (undefined8 *)(lVar28 + ((longlong)puVar11 - (longlong)local_2a8));
              uVar32 = uVar32 - ((longlong)puVar11 - (longlong)local_2a8);
              local_2a8 = puVar11;
            }
            if (uVar25 < 0x10) {
              if (uVar25 < 8) {
                *(undefined1 *)puVar38 = *(undefined1 *)local_2a8;
                *(undefined1 *)((longlong)puVar38 + 1) = *(undefined1 *)((longlong)local_2a8 + 1);
                *(undefined1 *)((longlong)puVar38 + 2) = *(undefined1 *)((longlong)local_2a8 + 2);
                *(undefined1 *)((longlong)puVar38 + 3) = *(undefined1 *)((longlong)local_2a8 + 3);
                uVar22 = *(uint *)(&DAT_00e957e0 + uVar25 * 4);
                *(undefined4 *)((longlong)puVar38 + 4) =
                     *(undefined4 *)((ulonglong)uVar22 + (longlong)local_2a8);
                local_2a8 = (undefined8 *)
                            ((longlong)((ulonglong)uVar22 + (longlong)local_2a8) -
                            (longlong)*(int *)(&DAT_00e95800 + uVar25 * 4));
              }
              else {
                *puVar38 = *local_2a8;
              }
              if (8 < uVar32) {
                if ((longlong)puVar38 - (longlong)local_2a8 < 0x10) {
                  puVar37 = puVar38 + 1;
                  do {
                    local_2a8 = local_2a8 + 1;
                    puVar36 = puVar37 + 1;
                    *puVar37 = *local_2a8;
                    puVar37 = puVar36;
                  } while (puVar36 < (undefined8 *)((longlong)puVar38 + uVar32));
                }
                else {
                  uVar14 = local_2a8[2];
                  puVar38[1] = local_2a8[1];
                  puVar38[2] = uVar14;
                  if (0x18 < (longlong)uVar32) {
                    puVar37 = puVar38 + 3;
                    puVar36 = local_2a8 + 3;
                    do {
                      uVar14 = puVar36[1];
                      puVar30 = puVar37 + 4;
                      *puVar37 = *puVar36;
                      puVar37[1] = uVar14;
                      uVar14 = puVar36[3];
                      puVar37[2] = puVar36[2];
                      puVar37[3] = uVar14;
                      puVar37 = puVar30;
                      puVar36 = puVar36 + 4;
                    } while (puVar30 < (undefined8 *)((longlong)puVar38 + uVar32));
                  }
                }
              }
            }
            else {
              uVar14 = local_2a8[1];
              *puVar38 = *local_2a8;
              puVar38[1] = uVar14;
              if (0x10 < (longlong)uVar32) {
                puVar37 = puVar38 + 2;
                puVar36 = local_2a8 + 2;
                do {
                  uVar14 = puVar36[1];
                  puVar30 = puVar37 + 4;
                  *puVar37 = *puVar36;
                  puVar37[1] = uVar14;
                  uVar14 = puVar36[3];
                  puVar37[2] = puVar36[2];
                  puVar37[3] = uVar14;
                  puVar37 = puVar30;
                  puVar36 = puVar36 + 4;
                } while (puVar30 < (undefined8 *)(uVar32 + (longlong)puVar38));
              }
            }
          }
        }
      }
      else {
        local_190 = local_110[uVar31 * 3 + 4];
        uVar32 = local_110[uVar31 * 3 + 4];
        uVar27 = local_110[uVar31 * 3 + 5];
        local_188 = local_110[uVar31 * 3 + 5];
        uVar31 = uVar32 + uVar24;
        puVar36 = (undefined8 *)((longlong)puVar33 + uVar24);
        puVar30 = (undefined8 *)((longlong)puVar36 - uVar27);
        puVar38 = local_200;
        uVar45 = local_1a8;
        uVar25 = local_1a0;
        local_198 = uVar24;
        if ((local_270 - 0x20 < (longlong)puVar33 + uVar31) || (local_240 < puVar37)) {
LAB_00e6f001:
          local_1a0 = uVar25;
          local_1a8 = uVar45;
          local_200 = puVar38;
          uVar31 = FUN_00e6aba0(local_240,&local_200,puVar11,lVar12);
        }
        else {
          uVar14 = local_200[1];
          *puVar33 = *local_200;
          puVar33[1] = uVar14;
          if (0x10 < uVar24) {
            uVar14 = local_200[3];
            puVar33[2] = local_200[2];
            puVar33[3] = uVar14;
            if (0x10 < (longlong)(uVar24 - 0x10)) {
              puVar38 = puVar33 + 4;
              do {
                uVar14 = local_200[5];
                puVar40 = puVar38 + 4;
                *puVar38 = local_200[4];
                puVar38[1] = uVar14;
                uVar14 = local_200[7];
                puVar38[2] = local_200[6];
                puVar38[3] = uVar14;
                puVar38 = puVar40;
                local_200 = local_200 + 4;
              } while (puVar40 < puVar36);
            }
          }
          local_200 = puVar37;
          if ((ulonglong)((longlong)puVar36 - (longlong)puVar11) < uVar27) {
            if ((ulonglong)((longlong)puVar36 - lVar12) < uVar27) {
              return 0xffffffffffffffec;
            }
            if ((undefined1 *)
                ((longlong)puVar30 + (longlong)(puVar13 + (uVar32 - (longlong)puVar11))) <= puVar13)
            goto LAB_00e6efc0;
            lVar35 = (longlong)puVar11 - (longlong)puVar30;
            lVar28 = FUN_00e86250(uVar31,lVar35);
            puVar36 = (undefined8 *)(lVar28 + lVar35);
            uVar32 = uVar32 - lVar35;
            puVar30 = puVar11;
          }
          if (uVar27 < 0x10) {
            if (uVar27 < 8) {
              *(undefined1 *)puVar36 = *(undefined1 *)puVar30;
              *(undefined1 *)((longlong)puVar36 + 1) = *(undefined1 *)((longlong)puVar30 + 1);
              *(undefined1 *)((longlong)puVar36 + 2) = *(undefined1 *)((longlong)puVar30 + 2);
              *(undefined1 *)((longlong)puVar36 + 3) = *(undefined1 *)((longlong)puVar30 + 3);
              uVar22 = *(uint *)(&DAT_00e957e0 + uVar27 * 4);
              *(undefined4 *)((longlong)puVar36 + 4) =
                   *(undefined4 *)((ulonglong)uVar22 + (longlong)puVar30);
              puVar30 = (undefined8 *)
                        ((longlong)((ulonglong)uVar22 + (longlong)puVar30) -
                        (longlong)*(int *)(&DAT_00e95800 + uVar27 * 4));
            }
            else {
              *puVar36 = *puVar30;
            }
            if (8 < uVar32) {
              if ((longlong)puVar36 - (longlong)puVar30 < 0x10) {
                puVar37 = puVar36 + 1;
                do {
                  puVar30 = puVar30 + 1;
                  puVar38 = puVar37 + 1;
                  *puVar37 = *puVar30;
                  puVar37 = puVar38;
                } while (puVar38 < (undefined8 *)((longlong)puVar36 + uVar32));
              }
              else {
                uVar14 = puVar30[2];
                puVar36[1] = puVar30[1];
                puVar36[2] = uVar14;
                if (0x18 < (longlong)uVar32) {
                  puVar37 = puVar36 + 3;
                  puVar38 = puVar30 + 3;
                  do {
                    uVar14 = puVar38[1];
                    puVar30 = puVar37 + 4;
                    *puVar37 = *puVar38;
                    puVar37[1] = uVar14;
                    uVar14 = puVar38[3];
                    puVar37[2] = puVar38[2];
                    puVar37[3] = uVar14;
                    puVar37 = puVar30;
                    puVar38 = puVar38 + 4;
                  } while (puVar30 < (undefined8 *)((longlong)puVar36 + uVar32));
                }
              }
            }
          }
          else {
            uVar14 = puVar30[1];
            *puVar36 = *puVar30;
            puVar36[1] = uVar14;
            if (0x10 < (longlong)uVar32) {
              puVar37 = puVar30 + 2;
              puVar38 = puVar36 + 2;
              do {
                uVar14 = puVar37[1];
                puVar30 = puVar38 + 4;
                *puVar38 = *puVar37;
                puVar38[1] = uVar14;
                uVar14 = puVar37[3];
                puVar38[2] = puVar37[2];
                puVar38[3] = uVar14;
                puVar37 = puVar37 + 4;
                puVar38 = puVar30;
              } while (puVar30 < (undefined8 *)(uVar32 + (longlong)puVar36));
            }
          }
        }
      }
LAB_00e6e4ec:
      if (0xffffffffffffff88 < uVar31) {
        return uVar31;
      }
      puVar33 = (undefined8 *)((longlong)puVar33 + uVar31);
      uVar46 = uVar46 + 1;
    } while (param_4 != uVar46);
  }
LAB_00e6ddbb:
  *(int *)(&DAT_0000683c + unaff_RDI) = (int)local_110[0];
  iVar23 = *(int *)(&DAT_00007688 + unaff_RDI);
  *(int *)(&DAT_00006840 + unaff_RDI) = (int)local_110[1];
  *(int *)(&DAT_00006844 + unaff_RDI) = (int)local_110[2];
LAB_00e6d9e3:
  uVar24 = (longlong)local_240 - (longlong)local_200;
  if (iVar23 == 2) {
    if (local_270 - (longlong)puVar33 < uVar24) {
      return 0xffffffffffffffba;
    }
    if (puVar33 == (undefined8 *)0x0) {
      if (local_270 < 0x10000) {
        return 0xffffffffffffffba;
      }
      goto LAB_00e6da1b;
    }
    puVar33 = (undefined8 *)((longlong)puVar33 + uVar24);
    FUN_00e86250(2,uVar24);
    uVar24 = 0x10000;
    local_200 = (undefined8 *)(&DAT_0000768c + unaff_RDI);
    if (local_270 - (longlong)puVar33 < 0x10000) {
      return 0xffffffffffffffba;
    }
  }
  else {
    if (local_270 - (longlong)puVar33 < uVar24) {
      return 0xffffffffffffffba;
    }
    if (puVar33 == (undefined8 *)0x0) goto LAB_00e6da1b;
  }
  puVar33 = (undefined8 *)((longlong)puVar33 + uVar24);
  FUN_00e86250();
LAB_00e6da1b:
  return (longlong)puVar33 - (longlong)unaff_RSI;
}



// WARNING: Type propagation algorithm not settling

ulonglong FUN_00e6f8e0(undefined8 param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  undefined *puVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  byte bVar22;
  ulonglong *puVar23;
  ulonglong uVar24;
  ulonglong *puVar25;
  undefined8 *puVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  undefined8 *puVar32;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  undefined8 *puVar33;
  undefined8 *puVar34;
  undefined8 *puVar35;
  longlong lVar36;
  undefined8 *puVar37;
  longlong lVar38;
  longlong lVar39;
  ulonglong *puVar40;
  ulonglong uVar41;
  uint uVar42;
  undefined8 *local_2a8;
  ulonglong local_290;
  ulonglong local_270;
  undefined8 *local_238;
  undefined8 *local_200;
  ulonglong local_1f8;
  ulonglong local_1f0;
  ulonglong local_1e8;
  ulonglong local_1e0;
  ulonglong local_1d8;
  ulonglong local_1d0;
  ulonglong local_1c8;
  ulonglong local_1c0;
  ulonglong local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  ulonglong local_1a0;
  ulonglong local_198;
  ulonglong local_190;
  ulonglong local_188;
  ulonglong local_180;
  ulonglong local_178;
  ulonglong local_170;
  ulonglong local_168;
  uint local_160 [2];
  ulonglong *local_158;
  ulonglong *local_150;
  ulonglong *local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  ulonglong local_110 [28];
  
  local_270 = (longlong)unaff_RSI + param_2;
  iVar29 = *(int *)(&DAT_00007688 + unaff_RDI);
  if (iVar29 == 1) {
    local_270 = *(ulonglong *)(&DAT_00007678 + unaff_RDI);
  }
  local_238 = *(undefined8 **)(&DAT_00007680 + unaff_RDI);
  local_200 = *(undefined8 **)(&DAT_00007598 + unaff_RDI);
  puVar8 = *(undefined8 **)(&DAT_000074c8 + unaff_RDI);
  lVar9 = *(longlong *)(&DAT_000074d0 + unaff_RDI);
  puVar10 = *(undefined1 **)(&DAT_000074d8 + unaff_RDI);
  puVar32 = unaff_RSI;
  if (param_4 != 0) {
    local_110[0] = (ulonglong)*(uint *)(&DAT_0000683c + unaff_RDI);
    *(undefined4 *)(&DAT_0000752c + unaff_RDI) = 1;
    local_110[1] = (ulonglong)*(uint *)(&DAT_00006840 + unaff_RDI);
    local_110[2] = (ulonglong)*(uint *)(&DAT_00006844 + unaff_RDI);
    uVar31 = param_4;
    uVar19 = FUN_00e6a940(iVar29,param_3);
    if (0xffffffffffffff88 < uVar19) {
      return 0xffffffffffffffec;
    }
    uVar17 = 8;
    if ((int)uVar31 < 9) {
      uVar17 = uVar31;
    }
    FUN_00e6bba0();
    FUN_00e6bba0();
    FUN_00e6bba0();
    if (local_160[0] < 0x41) {
      bVar14 = false;
      puVar40 = local_110;
      bVar13 = false;
      uVar42 = 0;
      uVar19 = local_168;
      lVar36 = local_130;
      lVar38 = local_120;
      lVar39 = local_140;
      puVar25 = local_158;
      uVar31 = local_160[0];
      do {
        puVar40 = puVar40 + 3;
        if (puVar25 < local_148) {
          puVar23 = puVar25;
          bVar12 = bVar13;
          if (puVar25 != local_150) {
            uVar18 = uVar31 >> 3;
            puVar23 = (ulonglong *)((longlong)puVar25 - (ulonglong)uVar18);
            if (puVar23 < local_150) {
              uVar18 = (uint)((longlong)puVar25 - (longlong)local_150);
              puVar23 = (ulonglong *)
                        ((longlong)puVar25 - ((longlong)puVar25 - (longlong)local_150 & 0xffffffffU)
                        );
            }
            uVar19 = *puVar23;
            bVar14 = true;
            uVar31 = uVar31 + uVar18 * -8;
            bVar12 = true;
          }
        }
        else {
          puVar23 = (ulonglong *)((longlong)puVar25 - (ulonglong)(uVar31 >> 3));
          uVar19 = *puVar23;
          bVar14 = true;
          uVar31 = uVar31 & 7;
          bVar12 = true;
        }
        if ((int)uVar17 <= (int)uVar42) {
          if (bVar14) {
            local_168 = uVar19;
            local_158 = puVar23;
            if (bVar12) {
              local_160[0] = uVar31;
            }
          }
          else if (bVar12) {
            local_160[0] = uVar31;
          }
          uVar31 = local_160[0];
          puVar40 = local_158;
          if (bVar13) {
            local_140 = lVar39;
            local_130 = lVar36;
            local_120 = lVar38;
          }
          goto joined_r0x00e6ff43;
        }
        puVar1 = (ushort *)(local_138 + lVar39 * 8);
        bVar5 = (byte)puVar1[1];
        uVar18 = *(uint *)(puVar1 + 2);
        uVar28 = (ulonglong)uVar18;
        puVar2 = (ushort *)(local_118 + lVar38 * 8);
        bVar6 = (byte)puVar2[1];
        puVar3 = (ushort *)(local_128 + lVar36 * 8);
        uVar27 = (ulonglong)*(uint *)(puVar2 + 2);
        bVar7 = (byte)puVar3[1];
        bVar22 = (byte)uVar31;
        if (bVar7 < 2) {
          if (bVar7 == 1) {
            uVar31 = uVar31 + 1;
            lVar36 = (ulonglong)(*(uint *)(puVar3 + 2) + (uint)(uVar18 == 0)) -
                     ((longlong)(uVar19 << (bVar22 & 0x3f)) >> 0x3f);
            if (lVar36 == 3) {
              uVar21 = (ulonglong)(local_110[0] - 1 == 0) + (local_110[0] - 1);
            }
            else {
              uVar21 = local_110[lVar36] + (ulonglong)(local_110[lVar36] == 0);
              if (lVar36 == 1) goto LAB_00e6fb64;
            }
            local_110[2] = local_110[1];
          }
          else {
            uVar21 = local_110[uVar18 == 0];
            local_110[0] = *(ulonglong *)(local_160 + (0xb - (ulonglong)(uVar18 == 0)) * 2);
          }
        }
        else {
          uVar31 = uVar31 + bVar7;
          local_110[2] = local_110[1];
          uVar21 = (ulonglong)*(uint *)(puVar3 + 2) +
                   ((uVar19 << (bVar22 & 0x3f)) >> (-bVar7 & 0x3f));
        }
LAB_00e6fb64:
        local_110[1] = local_110[0];
        local_110[0] = uVar21;
        if (bVar6 != 0) {
          uVar27 = uVar27 + ((uVar19 << ((byte)uVar31 & 0x3f)) >> (-bVar6 & 0x3f));
          uVar31 = uVar31 + bVar6;
        }
        puVar25 = puVar23;
        uVar18 = uVar31;
        if ((0x1e < (byte)(bVar5 + bVar6 + bVar7)) && (uVar31 < 0x41)) {
          if (puVar23 < local_148) {
            if (puVar23 != local_150) {
              uVar18 = uVar31 >> 3;
              puVar25 = (ulonglong *)((longlong)puVar23 - (ulonglong)uVar18);
              if (puVar25 < local_150) {
                uVar18 = (int)puVar23 - (int)local_150;
                puVar25 = (ulonglong *)((longlong)puVar23 - (ulonglong)uVar18);
              }
              uVar19 = *puVar25;
              bVar14 = true;
              uVar18 = uVar31 + uVar18 * -8;
            }
          }
          else {
            uVar18 = uVar31 & 7;
            puVar25 = (ulonglong *)((longlong)puVar23 - (ulonglong)(uVar31 >> 3));
            uVar19 = *puVar25;
            bVar14 = true;
          }
        }
        uVar31 = uVar18;
        if (bVar5 != 0) {
          uVar31 = uVar18 + bVar5;
          uVar28 = uVar28 + ((uVar19 << ((byte)uVar18 & 0x3f)) >> (-bVar5 & 0x3f));
        }
        iVar29 = uVar31 + *(byte *)((longlong)puVar1 + 3);
        iVar30 = iVar29 + (uint)*(byte *)((longlong)puVar2 + 3);
        uVar31 = iVar30 + (uint)*(byte *)((longlong)puVar3 + 3);
        lVar39 = (~(-1L << (*(byte *)((longlong)puVar1 + 3) & 0x3f)) &
                 uVar19 >> (-(char)iVar29 & 0x3fU)) + (ulonglong)*puVar1;
        lVar38 = (~(-1L << (*(byte *)((longlong)puVar2 + 3) & 0x3f)) &
                 uVar19 >> (-(char)iVar30 & 0x3fU)) + (ulonglong)*puVar2;
        lVar36 = (~(-1L << (*(byte *)((longlong)puVar3 + 3) & 0x3f)) &
                 uVar19 >> (-(char)uVar31 & 0x3fU)) + (ulonglong)*puVar3;
        *puVar40 = uVar28;
        bVar13 = true;
        puVar40[1] = uVar27;
        puVar40[2] = uVar21;
        uVar42 = uVar42 + 1;
      } while (uVar31 < 0x41);
      if (bVar14) {
        local_168 = uVar19;
        local_158 = puVar25;
      }
      local_160[0] = uVar31;
      puVar40 = local_158;
      local_140 = lVar39;
      local_130 = lVar36;
      local_120 = lVar38;
      if ((int)uVar42 < (int)uVar17) {
        return 0xffffffffffffffec;
      }
joined_r0x00e6ff43:
      do {
        local_158 = puVar40;
        if (0x40 < uVar31) goto LAB_00e70372;
        if (puVar40 < local_148) {
          if (local_150 != puVar40) {
            uVar18 = uVar31 >> 3;
            local_158 = (ulonglong *)((longlong)puVar40 - (ulonglong)uVar18);
            if (local_158 < local_150) {
              uVar18 = (int)puVar40 - (int)local_150;
              local_158 = (ulonglong *)((longlong)puVar40 - (ulonglong)uVar18);
            }
            local_168 = *local_158;
            local_160[0] = uVar31 + uVar18 * -8;
          }
        }
        else {
          local_160[0] = uVar31 & 7;
          local_158 = (ulonglong *)((longlong)puVar40 - (ulonglong)(uVar31 >> 3));
          local_168 = *local_158;
        }
        if ((int)param_4 <= (int)uVar42) goto LAB_00e70380;
        puVar1 = (ushort *)(local_138 + local_140 * 8);
        bVar5 = (byte)puVar1[1];
        puVar2 = (ushort *)(local_118 + local_120 * 8);
        bVar6 = (byte)puVar2[1];
        puVar3 = (ushort *)(local_128 + local_130 * 8);
        uVar19 = (ulonglong)*(uint *)(puVar2 + 2);
        bVar7 = (byte)puVar3[1];
        uVar31 = *(uint *)(puVar1 + 2);
        local_290 = (ulonglong)uVar31;
        bVar22 = (byte)local_160[0];
        if (bVar7 < 2) {
          if (bVar7 == 1) {
            local_160[0] = local_160[0] + 1;
            lVar36 = (ulonglong)((uint)(uVar31 == 0) + *(uint *)(puVar3 + 2)) -
                     ((longlong)(local_168 << (bVar22 & 0x3f)) >> 0x3f);
            if (lVar36 == 3) {
              uVar27 = (ulonglong)(local_110[0] - 1 == 0) + (local_110[0] - 1);
            }
            else {
              uVar27 = local_110[lVar36] + (ulonglong)(local_110[lVar36] == 0);
              if (lVar36 == 1) goto LAB_00e70097;
            }
            local_110[2] = local_110[1];
          }
          else {
            uVar27 = local_110[uVar31 == 0];
            local_110[0] = *(ulonglong *)(local_160 + (0xb - (ulonglong)(uVar31 == 0)) * 2);
          }
        }
        else {
          local_160[0] = local_160[0] + bVar7;
          uVar27 = (ulonglong)*(uint *)(puVar3 + 2) +
                   ((local_168 << (bVar22 & 0x3f)) >> (-bVar7 & 0x3f));
          local_110[2] = local_110[1];
        }
LAB_00e70097:
        local_110[1] = local_110[0];
        local_110[0] = uVar27;
        if (bVar6 != 0) {
          uVar19 = uVar19 + ((local_168 << ((byte)local_160[0] & 0x3f)) >> (-bVar6 & 0x3f));
          local_160[0] = local_160[0] + bVar6;
        }
        if ((0x1e < (byte)(bVar5 + bVar6 + bVar7)) && (local_160[0] < 0x41)) {
          if (local_158 < local_148) {
            if (local_150 != local_158) {
              uVar31 = local_160[0] >> 3;
              puVar40 = (ulonglong *)((longlong)local_158 - (ulonglong)uVar31);
              if (puVar40 < local_150) {
                uVar31 = (uint)((longlong)local_158 - (longlong)local_150);
                puVar40 = (ulonglong *)
                          ((longlong)local_158 -
                          ((longlong)local_158 - (longlong)local_150 & 0xffffffffU));
              }
              local_168 = *puVar40;
              local_160[0] = local_160[0] + uVar31 * -8;
              local_158 = puVar40;
            }
          }
          else {
            local_158 = (ulonglong *)((longlong)local_158 - (ulonglong)(local_160[0] >> 3));
            local_168 = *local_158;
            local_160[0] = local_160[0] & 7;
          }
        }
        uVar31 = local_160[0];
        if (bVar5 != 0) {
          uVar31 = local_160[0] + bVar5;
          local_290 = local_290 + ((local_168 << ((byte)local_160[0] & 0x3f)) >> (-bVar5 & 0x3f));
        }
        iVar29 = uVar31 + *(byte *)((longlong)puVar1 + 3);
        iVar30 = iVar29 + (uint)*(byte *)((longlong)puVar2 + 3);
        uVar21 = (ulonglong)(uVar42 & 7);
        local_140 = (local_168 >> (-(char)iVar29 & 0x3fU) &
                    ~(-1L << (*(byte *)((longlong)puVar1 + 3) & 0x3f))) + (ulonglong)*puVar1;
        uVar31 = (uint)*(byte *)((longlong)puVar3 + 3) + iVar30;
        local_120 = (local_168 >> (-(char)iVar30 & 0x3fU) &
                    ~(-1L << (*(byte *)((longlong)puVar2 + 3) & 0x3f))) + (ulonglong)*puVar2;
        uVar28 = local_110[uVar21 * 3 + 3];
        local_130 = (local_168 >> (-(char)uVar31 & 0x3fU) &
                    ~(-1L << (*(byte *)((longlong)puVar3 + 3) & 0x3f))) + (ulonglong)*puVar3;
        puVar34 = (undefined8 *)((longlong)local_200 + uVar28);
        local_160[0] = uVar31;
        if (*(int *)(&DAT_00007688 + unaff_RDI) == 2) {
          if (*(undefined8 **)(&DAT_00007680 + unaff_RDI) < puVar34) {
            uVar20 = (longlong)*(undefined8 **)(&DAT_00007680 + unaff_RDI) - (longlong)local_200;
            if (uVar20 != 0) {
              if (local_270 - (longlong)puVar32 < uVar20) {
                return 0xffffffffffffffba;
              }
              uVar28 = uVar28 - uVar20;
              puVar32 = (undefined8 *)((longlong)puVar32 + uVar20);
              FUN_00e6a4e0();
              local_110[uVar21 * 3 + 3] = uVar28;
            }
            puVar34 = (undefined8 *)((longlong)puVar32 + uVar28);
            local_1c8 = local_110[uVar21 * 3 + 3];
            uVar41 = local_110[uVar21 * 3 + 4];
            puVar35 = (undefined8 *)(&DAT_0000768c + unaff_RDI);
            local_238 = (undefined8 *)(&UNK_0001768c + unaff_RDI);
            local_200 = (undefined8 *)((longlong)puVar35 + uVar28);
            local_1c0 = local_110[uVar21 * 3 + 4];
            uVar20 = uVar41 + uVar28;
            local_1b8 = local_110[uVar21 * 3 + 5];
            uVar24 = local_110[uVar21 * 3 + 5];
            *(undefined4 *)(&DAT_00007688 + unaff_RDI) = 0;
            puVar33 = (undefined8 *)((longlong)puVar34 - uVar24);
            uVar15 = uVar41;
            uVar16 = uVar24;
            if ((local_270 - 0x20 < (longlong)puVar32 + uVar20) || (local_238 < local_200))
            goto LAB_00e70ab1;
            uVar11 = *(undefined8 *)(&DAT_00007694 + unaff_RDI);
            *puVar32 = *(undefined8 *)(&DAT_0000768c + unaff_RDI);
            puVar32[1] = uVar11;
            if (0x10 < uVar28) {
              uVar11 = *(undefined8 *)(&DAT_000076a4 + unaff_RDI);
              puVar32[2] = *(undefined8 *)(&DAT_0000769c + unaff_RDI);
              puVar32[3] = uVar11;
              if (0x10 < (longlong)(uVar28 - 0x10)) {
                puVar35 = puVar32 + 4;
                puVar26 = (undefined8 *)(&DAT_000076ac + unaff_RDI);
                do {
                  uVar11 = puVar26[1];
                  puVar37 = puVar35 + 4;
                  *puVar35 = *puVar26;
                  puVar35[1] = uVar11;
                  uVar11 = puVar26[3];
                  puVar35[2] = puVar26[2];
                  puVar35[3] = uVar11;
                  puVar35 = puVar37;
                  puVar26 = puVar26 + 4;
                } while (puVar37 < puVar34);
              }
            }
            if ((ulonglong)((longlong)puVar34 - (longlong)puVar8) < uVar24) {
              if ((ulonglong)((longlong)puVar34 - lVar9) < uVar24) {
                return 0xffffffffffffffec;
              }
              if ((undefined1 *)
                  ((longlong)puVar33 + (longlong)(puVar10 + (uVar41 - (longlong)puVar8))) <= puVar10
                 ) {
LAB_00e70a80:
                FUN_00e86250(uVar24,uVar41);
                goto LAB_00e702ec;
              }
              lVar36 = FUN_00e86250();
              puVar34 = (undefined8 *)(lVar36 + ((longlong)puVar8 - (longlong)puVar33));
              uVar41 = uVar41 - ((longlong)puVar8 - (longlong)puVar33);
              puVar33 = puVar8;
            }
            if (uVar24 < 0x10) {
              if (uVar24 < 8) {
                *(undefined1 *)puVar34 = *(undefined1 *)puVar33;
                *(undefined1 *)((longlong)puVar34 + 1) = *(undefined1 *)((longlong)puVar33 + 1);
                *(undefined1 *)((longlong)puVar34 + 2) = *(undefined1 *)((longlong)puVar33 + 2);
                *(undefined1 *)((longlong)puVar34 + 3) = *(undefined1 *)((longlong)puVar33 + 3);
                uVar18 = *(uint *)(&DAT_00e957e0 + uVar24 * 4);
                *(undefined4 *)((longlong)puVar34 + 4) =
                     *(undefined4 *)((longlong)puVar33 + (ulonglong)uVar18);
                puVar33 = (undefined8 *)
                          ((longlong)((longlong)puVar33 + (ulonglong)uVar18) -
                          (longlong)*(int *)(&DAT_00e95800 + uVar24 * 4));
              }
              else {
                *puVar34 = *puVar33;
              }
              if (8 < uVar41) {
                if ((longlong)puVar34 - (longlong)puVar33 < 0x10) {
                  puVar35 = puVar34 + 1;
                  do {
                    puVar33 = puVar33 + 1;
                    puVar26 = puVar35 + 1;
                    *puVar35 = *puVar33;
                    puVar35 = puVar26;
                  } while (puVar26 < (undefined8 *)((longlong)puVar34 + uVar41));
                }
                else {
                  uVar11 = puVar33[2];
                  puVar34[1] = puVar33[1];
                  puVar34[2] = uVar11;
                  if (0x18 < (longlong)uVar41) {
                    puVar35 = puVar33 + 3;
                    puVar33 = puVar34 + 3;
                    do {
                      uVar11 = puVar35[1];
                      puVar26 = puVar33 + 4;
                      *puVar33 = *puVar35;
                      puVar33[1] = uVar11;
                      uVar11 = puVar35[3];
                      puVar33[2] = puVar35[2];
                      puVar33[3] = uVar11;
                      puVar35 = puVar35 + 4;
                      puVar33 = puVar26;
                    } while (puVar26 < (undefined8 *)((longlong)puVar34 + uVar41));
                  }
                }
              }
            }
            else {
              uVar11 = puVar33[1];
              *puVar34 = *puVar33;
              puVar34[1] = uVar11;
              if (0x10 < (longlong)uVar41) {
                puVar35 = puVar33 + 2;
                puVar33 = puVar34 + 2;
                do {
                  uVar11 = puVar35[1];
                  puVar26 = puVar33 + 4;
                  *puVar33 = *puVar35;
                  puVar33[1] = uVar11;
                  uVar11 = puVar35[3];
                  puVar33[2] = puVar35[2];
                  puVar33[3] = uVar11;
                  puVar35 = puVar35 + 4;
                  puVar33 = puVar26;
                } while (puVar26 < (undefined8 *)(uVar41 + (longlong)puVar34));
              }
            }
          }
          else {
            local_1d8 = local_110[uVar21 * 3 + 4];
            uVar41 = local_110[uVar21 * 3 + 4];
            puVar4 = (undefined *)((longlong)local_200 + (uVar28 - 0x20));
            local_1d0 = local_110[uVar21 * 3 + 5];
            puVar35 = (undefined8 *)((longlong)puVar32 + uVar28);
            uVar24 = local_110[uVar21 * 3 + 5];
            uVar20 = uVar41 + uVar28;
            puVar33 = (undefined8 *)((longlong)puVar35 - uVar24);
            local_1e0 = uVar28;
            if ((puVar4 < (undefined *)((longlong)puVar32 + uVar20)) || (local_238 < puVar34)) {
              uVar20 = FUN_00e6aa80(&local_200,puVar4,local_238,puVar8,puVar10);
            }
            else {
              uVar11 = local_200[1];
              *puVar32 = *local_200;
              puVar32[1] = uVar11;
              if (0x10 < uVar28) {
                uVar11 = local_200[3];
                puVar32[2] = local_200[2];
                puVar32[3] = uVar11;
                if (0x10 < (longlong)(uVar28 - 0x10)) {
                  puVar26 = puVar32 + 4;
                  do {
                    uVar11 = local_200[5];
                    puVar37 = puVar26 + 4;
                    *puVar26 = local_200[4];
                    puVar26[1] = uVar11;
                    uVar11 = local_200[7];
                    puVar26[2] = local_200[6];
                    puVar26[3] = uVar11;
                    puVar26 = puVar37;
                    local_200 = local_200 + 4;
                  } while (puVar37 < puVar35);
                }
              }
              local_200 = puVar34;
              if ((ulonglong)((longlong)puVar35 - (longlong)puVar8) < uVar24) {
                if ((ulonglong)((longlong)puVar35 - lVar9) < uVar24) {
                  return 0xffffffffffffffec;
                }
                if ((undefined1 *)
                    ((longlong)puVar33 + (longlong)(puVar10 + (uVar41 - (longlong)puVar8))) <=
                    puVar10) goto LAB_00e70a80;
                lVar36 = FUN_00e86250();
                puVar35 = (undefined8 *)(lVar36 + ((longlong)puVar8 - (longlong)puVar33));
                uVar41 = uVar41 - ((longlong)puVar8 - (longlong)puVar33);
                puVar33 = puVar8;
              }
              if (uVar24 < 0x10) {
                if (uVar24 < 8) {
                  *(undefined1 *)puVar35 = *(undefined1 *)puVar33;
                  *(undefined1 *)((longlong)puVar35 + 1) = *(undefined1 *)((longlong)puVar33 + 1);
                  *(undefined1 *)((longlong)puVar35 + 2) = *(undefined1 *)((longlong)puVar33 + 2);
                  *(undefined1 *)((longlong)puVar35 + 3) = *(undefined1 *)((longlong)puVar33 + 3);
                  uVar18 = *(uint *)(&DAT_00e957e0 + uVar24 * 4);
                  *(undefined4 *)((longlong)puVar35 + 4) =
                       *(undefined4 *)((ulonglong)uVar18 + (longlong)puVar33);
                  puVar33 = (undefined8 *)
                            ((longlong)((ulonglong)uVar18 + (longlong)puVar33) -
                            (longlong)*(int *)(&DAT_00e95800 + uVar24 * 4));
                }
                else {
                  *puVar35 = *puVar33;
                }
                if (8 < uVar41) {
                  if ((longlong)puVar35 - (longlong)puVar33 < 0x10) {
                    puVar34 = puVar35 + 1;
                    do {
                      puVar33 = puVar33 + 1;
                      puVar26 = puVar34 + 1;
                      *puVar34 = *puVar33;
                      puVar34 = puVar26;
                    } while (puVar26 < (undefined8 *)((longlong)puVar35 + uVar41));
                  }
                  else {
                    uVar11 = puVar33[2];
                    puVar35[1] = puVar33[1];
                    puVar35[2] = uVar11;
                    if (0x18 < (longlong)uVar41) {
                      puVar34 = puVar35 + 3;
                      puVar33 = puVar33 + 3;
                      do {
                        uVar11 = puVar33[1];
                        puVar26 = puVar34 + 4;
                        *puVar34 = *puVar33;
                        puVar34[1] = uVar11;
                        uVar11 = puVar33[3];
                        puVar34[2] = puVar33[2];
                        puVar34[3] = uVar11;
                        puVar34 = puVar26;
                        puVar33 = puVar33 + 4;
                      } while (puVar26 < (undefined8 *)((longlong)puVar35 + uVar41));
                    }
                  }
                }
              }
              else {
                uVar11 = puVar33[1];
                *puVar35 = *puVar33;
                puVar35[1] = uVar11;
                if (0x10 < (longlong)uVar41) {
                  puVar34 = puVar35 + 2;
                  puVar33 = puVar33 + 2;
                  do {
                    uVar11 = puVar33[1];
                    puVar26 = puVar34 + 4;
                    *puVar34 = *puVar33;
                    puVar34[1] = uVar11;
                    uVar11 = puVar33[3];
                    puVar34[2] = puVar33[2];
                    puVar34[3] = uVar11;
                    puVar34 = puVar26;
                    puVar33 = puVar33 + 4;
                  } while (puVar26 < (undefined8 *)(uVar41 + (longlong)puVar35));
                }
              }
            }
          }
        }
        else {
          local_1f0 = local_110[uVar21 * 3 + 4];
          puVar33 = (undefined8 *)((longlong)puVar32 + uVar28);
          uVar41 = local_110[uVar21 * 3 + 4];
          local_1e8 = local_110[uVar21 * 3 + 5];
          uVar24 = local_110[uVar21 * 3 + 5];
          uVar20 = uVar41 + uVar28;
          puVar26 = (undefined8 *)((longlong)puVar33 - uVar24);
          puVar35 = local_200;
          local_1f8 = uVar28;
          uVar15 = local_1c0;
          uVar16 = local_1b8;
          if ((local_270 - 0x20 < (longlong)puVar32 + uVar20) || (local_238 < puVar34)) {
LAB_00e70ab1:
            local_1b8 = uVar16;
            local_1c0 = uVar15;
            local_200 = puVar35;
            uVar20 = FUN_00e6aba0(local_238,&local_200,puVar8,lVar9);
          }
          else {
            uVar11 = local_200[1];
            *puVar32 = *local_200;
            puVar32[1] = uVar11;
            if (0x10 < uVar28) {
              uVar11 = local_200[3];
              puVar32[2] = local_200[2];
              puVar32[3] = uVar11;
              if (0x10 < (longlong)(uVar28 - 0x10)) {
                puVar35 = puVar32 + 4;
                do {
                  uVar11 = local_200[5];
                  puVar37 = puVar35 + 4;
                  *puVar35 = local_200[4];
                  puVar35[1] = uVar11;
                  uVar11 = local_200[7];
                  puVar35[2] = local_200[6];
                  puVar35[3] = uVar11;
                  puVar35 = puVar37;
                  local_200 = local_200 + 4;
                } while (puVar37 < puVar33);
              }
            }
            local_200 = puVar34;
            if ((ulonglong)((longlong)puVar33 - (longlong)puVar8) < uVar24) {
              if ((ulonglong)((longlong)puVar33 - lVar9) < uVar24) {
                return 0xffffffffffffffec;
              }
              if ((undefined1 *)
                  ((longlong)puVar26 + (longlong)(puVar10 + (uVar41 - (longlong)puVar8))) <= puVar10
                 ) goto LAB_00e70a80;
              lVar38 = (longlong)puVar8 - (longlong)puVar26;
              lVar36 = FUN_00e86250(uVar24,lVar38);
              puVar33 = (undefined8 *)(lVar36 + lVar38);
              uVar41 = uVar41 - lVar38;
              puVar26 = puVar8;
            }
            if (uVar24 < 0x10) {
              if (uVar24 < 8) {
                *(undefined1 *)puVar33 = *(undefined1 *)puVar26;
                *(undefined1 *)((longlong)puVar33 + 1) = *(undefined1 *)((longlong)puVar26 + 1);
                *(undefined1 *)((longlong)puVar33 + 2) = *(undefined1 *)((longlong)puVar26 + 2);
                *(undefined1 *)((longlong)puVar33 + 3) = *(undefined1 *)((longlong)puVar26 + 3);
                uVar18 = *(uint *)(&DAT_00e957e0 + uVar24 * 4);
                *(undefined4 *)((longlong)puVar33 + 4) =
                     *(undefined4 *)((ulonglong)uVar18 + (longlong)puVar26);
                puVar26 = (undefined8 *)
                          ((longlong)((ulonglong)uVar18 + (longlong)puVar26) -
                          (longlong)*(int *)(&DAT_00e95800 + uVar24 * 4));
              }
              else {
                *puVar33 = *puVar26;
              }
              if (8 < uVar41) {
                if ((longlong)puVar33 - (longlong)puVar26 < 0x10) {
                  puVar34 = puVar33 + 1;
                  do {
                    puVar26 = puVar26 + 1;
                    puVar35 = puVar34 + 1;
                    *puVar34 = *puVar26;
                    puVar34 = puVar35;
                  } while (puVar35 < (undefined8 *)((longlong)puVar33 + uVar41));
                }
                else {
                  uVar11 = puVar26[2];
                  puVar33[1] = puVar26[1];
                  puVar33[2] = uVar11;
                  if (0x18 < (longlong)uVar41) {
                    puVar34 = puVar26 + 3;
                    puVar35 = puVar33 + 3;
                    do {
                      uVar11 = puVar34[1];
                      puVar26 = puVar35 + 4;
                      *puVar35 = *puVar34;
                      puVar35[1] = uVar11;
                      uVar11 = puVar34[3];
                      puVar35[2] = puVar34[2];
                      puVar35[3] = uVar11;
                      puVar34 = puVar34 + 4;
                      puVar35 = puVar26;
                    } while (puVar26 < (undefined8 *)((longlong)puVar33 + uVar41));
                  }
                }
              }
            }
            else {
              uVar11 = puVar26[1];
              *puVar33 = *puVar26;
              puVar33[1] = uVar11;
              if (0x10 < (longlong)uVar41) {
                puVar34 = puVar26 + 2;
                puVar35 = puVar33 + 2;
                do {
                  uVar11 = puVar34[1];
                  puVar26 = puVar35 + 4;
                  *puVar35 = *puVar34;
                  puVar35[1] = uVar11;
                  uVar11 = puVar34[3];
                  puVar35[2] = puVar34[2];
                  puVar35[3] = uVar11;
                  puVar34 = puVar34 + 4;
                  puVar35 = puVar26;
                } while (puVar26 < (undefined8 *)(uVar41 + (longlong)puVar33));
              }
            }
          }
        }
LAB_00e702ec:
        if (0xffffffffffffff88 < uVar20) {
          return uVar20;
        }
        uVar42 = uVar42 + 1;
        local_110[uVar21 * 3 + 3] = local_290;
        local_110[uVar21 * 3 + 5] = uVar27;
        local_110[uVar21 * 3 + 4] = uVar19;
        puVar32 = (undefined8 *)((longlong)puVar32 + uVar20);
        puVar40 = local_158;
      } while( true );
    }
    if (0 < (int)param_4) {
      return 0xffffffffffffffec;
    }
    goto LAB_00e6fdeb;
  }
  goto LAB_00e6f9eb;
LAB_00e70372:
  if ((int)uVar42 < (int)param_4) {
    return 0xffffffffffffffec;
  }
LAB_00e70380:
  uVar42 = uVar42 - uVar17;
  if ((int)uVar42 < (int)param_4) {
    do {
      uVar27 = (ulonglong)(uVar42 & 7);
      uVar19 = local_110[uVar27 * 3 + 3];
      puVar34 = (undefined8 *)((longlong)local_200 + uVar19);
      if (*(int *)(&DAT_00007688 + unaff_RDI) == 2) {
        if (*(undefined8 **)(&DAT_00007680 + unaff_RDI) < puVar34) {
          uVar28 = (longlong)*(undefined8 **)(&DAT_00007680 + unaff_RDI) - (longlong)local_200;
          if (uVar28 != 0) {
            if (local_270 - (longlong)puVar32 < uVar28) {
              return 0xffffffffffffffba;
            }
            uVar19 = uVar19 - uVar28;
            puVar32 = (undefined8 *)((longlong)puVar32 + uVar28);
            FUN_00e6a4e0();
            local_110[uVar27 * 3 + 3] = uVar19;
          }
          puVar34 = (undefined8 *)((longlong)puVar32 + uVar19);
          *(undefined4 *)(&DAT_00007688 + unaff_RDI) = 0;
          puVar35 = (undefined8 *)(&DAT_0000768c + unaff_RDI);
          local_238 = (undefined8 *)(&UNK_0001768c + unaff_RDI);
          local_1b0 = local_110[uVar27 * 3 + 3];
          uVar28 = local_110[uVar27 * 3 + 4];
          uVar21 = local_110[uVar27 * 3 + 5];
          local_200 = (undefined8 *)((longlong)puVar35 + uVar19);
          local_1a8 = local_110[uVar27 * 3 + 4];
          local_1a0 = local_110[uVar27 * 3 + 5];
          puVar33 = (undefined8 *)((longlong)puVar34 - uVar21);
          uVar27 = uVar28 + uVar19;
          uVar20 = uVar28;
          if ((local_270 - 0x20 < (longlong)puVar32 + uVar27) || (local_238 < local_200))
          goto LAB_00e71031;
          uVar11 = *(undefined8 *)(&DAT_00007694 + unaff_RDI);
          *puVar32 = *(undefined8 *)(&DAT_0000768c + unaff_RDI);
          puVar32[1] = uVar11;
          if (0x10 < uVar19) {
            uVar11 = *(undefined8 *)(&DAT_000076a4 + unaff_RDI);
            puVar32[2] = *(undefined8 *)(&DAT_0000769c + unaff_RDI);
            puVar32[3] = uVar11;
            if (0x10 < (longlong)(uVar19 - 0x10)) {
              puVar35 = puVar32 + 4;
              puVar26 = (undefined8 *)(&DAT_000076ac + unaff_RDI);
              do {
                uVar11 = puVar26[1];
                puVar37 = puVar35 + 4;
                *puVar35 = *puVar26;
                puVar35[1] = uVar11;
                uVar11 = puVar26[3];
                puVar35[2] = puVar26[2];
                puVar35[3] = uVar11;
                puVar35 = puVar37;
                puVar26 = puVar26 + 4;
              } while (puVar37 < puVar34);
            }
          }
          if ((ulonglong)((longlong)puVar34 - (longlong)puVar8) < uVar21) {
            if ((ulonglong)((longlong)puVar34 - lVar9) < uVar21) {
              return 0xffffffffffffffec;
            }
            if ((undefined1 *)
                ((longlong)puVar33 + (longlong)(puVar10 + (uVar28 - (longlong)puVar8))) <= puVar10)
            {
LAB_00e70ff0:
              FUN_00e86250(uVar27,uVar28);
              goto LAB_00e7053c;
            }
            lVar36 = FUN_00e86250();
            puVar34 = (undefined8 *)(lVar36 + ((longlong)puVar8 - (longlong)puVar33));
            uVar28 = uVar28 - ((longlong)puVar8 - (longlong)puVar33);
            puVar33 = puVar8;
          }
          if (uVar21 < 0x10) {
            if (uVar21 < 8) {
              *(undefined1 *)puVar34 = *(undefined1 *)puVar33;
              *(undefined1 *)((longlong)puVar34 + 1) = *(undefined1 *)((longlong)puVar33 + 1);
              *(undefined1 *)((longlong)puVar34 + 2) = *(undefined1 *)((longlong)puVar33 + 2);
              *(undefined1 *)((longlong)puVar34 + 3) = *(undefined1 *)((longlong)puVar33 + 3);
              uVar31 = *(uint *)(&DAT_00e957e0 + uVar21 * 4);
              *(undefined4 *)((longlong)puVar34 + 4) =
                   *(undefined4 *)((longlong)puVar33 + (ulonglong)uVar31);
              puVar33 = (undefined8 *)
                        ((longlong)((longlong)puVar33 + (ulonglong)uVar31) -
                        (longlong)*(int *)(&DAT_00e95800 + uVar21 * 4));
            }
            else {
              *puVar34 = *puVar33;
            }
            if (8 < uVar28) {
              if ((longlong)puVar34 - (longlong)puVar33 < 0x10) {
                puVar35 = puVar34 + 1;
                do {
                  puVar33 = puVar33 + 1;
                  puVar26 = puVar35 + 1;
                  *puVar35 = *puVar33;
                  puVar35 = puVar26;
                } while (puVar26 < (undefined8 *)((longlong)puVar34 + uVar28));
              }
              else {
                uVar11 = puVar33[2];
                puVar34[1] = puVar33[1];
                puVar34[2] = uVar11;
                if (0x18 < (longlong)uVar28) {
                  puVar35 = puVar33 + 3;
                  puVar33 = puVar34 + 3;
                  do {
                    uVar11 = puVar35[1];
                    puVar26 = puVar33 + 4;
                    *puVar33 = *puVar35;
                    puVar33[1] = uVar11;
                    uVar11 = puVar35[3];
                    puVar33[2] = puVar35[2];
                    puVar33[3] = uVar11;
                    puVar35 = puVar35 + 4;
                    puVar33 = puVar26;
                  } while (puVar26 < (undefined8 *)((longlong)puVar34 + uVar28));
                }
              }
            }
          }
          else {
            uVar11 = puVar33[1];
            *puVar34 = *puVar33;
            puVar34[1] = uVar11;
            if (0x10 < (longlong)uVar28) {
              puVar35 = puVar33 + 2;
              puVar33 = puVar34 + 2;
              do {
                uVar11 = puVar35[1];
                puVar26 = puVar33 + 4;
                *puVar33 = *puVar35;
                puVar33[1] = uVar11;
                uVar11 = puVar35[3];
                puVar33[2] = puVar35[2];
                puVar33[3] = uVar11;
                puVar35 = puVar35 + 4;
                puVar33 = puVar26;
              } while (puVar26 < (undefined8 *)(uVar28 + (longlong)puVar34));
            }
          }
        }
        else {
          local_178 = local_110[uVar27 * 3 + 4];
          local_170 = local_110[uVar27 * 3 + 5];
          puVar4 = (undefined *)((longlong)local_200 + (uVar19 - 0x20));
          uVar28 = local_110[uVar27 * 3 + 4];
          uVar21 = local_110[uVar27 * 3 + 5];
          puVar35 = (undefined8 *)((longlong)puVar32 + uVar19);
          uVar27 = uVar28 + uVar19;
          local_2a8 = (undefined8 *)((longlong)puVar35 - uVar21);
          local_180 = uVar19;
          if ((puVar4 < (undefined *)((longlong)puVar32 + uVar27)) || (local_238 < puVar34)) {
            uVar27 = FUN_00e6aa80(&local_200,puVar4,local_238,puVar8,puVar10);
          }
          else {
            uVar11 = local_200[1];
            *puVar32 = *local_200;
            puVar32[1] = uVar11;
            if (0x10 < uVar19) {
              uVar11 = local_200[3];
              puVar32[2] = local_200[2];
              puVar32[3] = uVar11;
              if (0x10 < (longlong)(uVar19 - 0x10)) {
                puVar33 = puVar32 + 4;
                do {
                  uVar11 = local_200[5];
                  puVar26 = puVar33 + 4;
                  *puVar33 = local_200[4];
                  puVar33[1] = uVar11;
                  uVar11 = local_200[7];
                  puVar33[2] = local_200[6];
                  puVar33[3] = uVar11;
                  puVar33 = puVar26;
                  local_200 = local_200 + 4;
                } while (puVar26 < puVar35);
              }
            }
            local_200 = puVar34;
            if ((ulonglong)((longlong)puVar35 - (longlong)puVar8) < uVar21) {
              if ((ulonglong)((longlong)puVar35 - lVar9) < uVar21) {
                return 0xffffffffffffffec;
              }
              if ((undefined1 *)
                  ((longlong)local_2a8 + (longlong)(puVar10 + (uVar28 - (longlong)puVar8))) <=
                  puVar10) goto LAB_00e70ff0;
              lVar36 = FUN_00e86250();
              puVar35 = (undefined8 *)(lVar36 + ((longlong)puVar8 - (longlong)local_2a8));
              uVar28 = uVar28 - ((longlong)puVar8 - (longlong)local_2a8);
              local_2a8 = puVar8;
            }
            if (uVar21 < 0x10) {
              if (uVar21 < 8) {
                *(undefined1 *)puVar35 = *(undefined1 *)local_2a8;
                *(undefined1 *)((longlong)puVar35 + 1) = *(undefined1 *)((longlong)local_2a8 + 1);
                *(undefined1 *)((longlong)puVar35 + 2) = *(undefined1 *)((longlong)local_2a8 + 2);
                *(undefined1 *)((longlong)puVar35 + 3) = *(undefined1 *)((longlong)local_2a8 + 3);
                uVar31 = *(uint *)(&DAT_00e957e0 + uVar21 * 4);
                *(undefined4 *)((longlong)puVar35 + 4) =
                     *(undefined4 *)((ulonglong)uVar31 + (longlong)local_2a8);
                local_2a8 = (undefined8 *)
                            ((longlong)((ulonglong)uVar31 + (longlong)local_2a8) -
                            (longlong)*(int *)(&DAT_00e95800 + uVar21 * 4));
              }
              else {
                *puVar35 = *local_2a8;
              }
              if (8 < uVar28) {
                if ((longlong)puVar35 - (longlong)local_2a8 < 0x10) {
                  puVar34 = puVar35 + 1;
                  do {
                    local_2a8 = local_2a8 + 1;
                    puVar33 = puVar34 + 1;
                    *puVar34 = *local_2a8;
                    puVar34 = puVar33;
                  } while (puVar33 < (undefined8 *)((longlong)puVar35 + uVar28));
                }
                else {
                  uVar11 = local_2a8[2];
                  puVar35[1] = local_2a8[1];
                  puVar35[2] = uVar11;
                  if (0x18 < (longlong)uVar28) {
                    puVar34 = puVar35 + 3;
                    puVar33 = local_2a8 + 3;
                    do {
                      uVar11 = puVar33[1];
                      puVar26 = puVar34 + 4;
                      *puVar34 = *puVar33;
                      puVar34[1] = uVar11;
                      uVar11 = puVar33[3];
                      puVar34[2] = puVar33[2];
                      puVar34[3] = uVar11;
                      puVar34 = puVar26;
                      puVar33 = puVar33 + 4;
                    } while (puVar26 < (undefined8 *)((longlong)puVar35 + uVar28));
                  }
                }
              }
            }
            else {
              uVar11 = local_2a8[1];
              *puVar35 = *local_2a8;
              puVar35[1] = uVar11;
              if (0x10 < (longlong)uVar28) {
                puVar34 = puVar35 + 2;
                puVar33 = local_2a8 + 2;
                do {
                  uVar11 = puVar33[1];
                  puVar26 = puVar34 + 4;
                  *puVar34 = *puVar33;
                  puVar34[1] = uVar11;
                  uVar11 = puVar33[3];
                  puVar34[2] = puVar33[2];
                  puVar34[3] = uVar11;
                  puVar34 = puVar26;
                  puVar33 = puVar33 + 4;
                } while (puVar26 < (undefined8 *)(uVar28 + (longlong)puVar35));
              }
            }
          }
        }
      }
      else {
        local_190 = local_110[uVar27 * 3 + 4];
        uVar28 = local_110[uVar27 * 3 + 4];
        uVar41 = local_110[uVar27 * 3 + 5];
        local_188 = local_110[uVar27 * 3 + 5];
        uVar27 = uVar28 + uVar19;
        puVar33 = (undefined8 *)((longlong)puVar32 + uVar19);
        puVar26 = (undefined8 *)((longlong)puVar33 - uVar41);
        puVar35 = local_200;
        uVar20 = local_1a8;
        uVar21 = local_1a0;
        local_198 = uVar19;
        if ((local_270 - 0x20 < (longlong)puVar32 + uVar27) || (local_238 < puVar34)) {
LAB_00e71031:
          local_1a0 = uVar21;
          local_1a8 = uVar20;
          local_200 = puVar35;
          uVar27 = FUN_00e6aba0(local_238,&local_200,puVar8,lVar9);
        }
        else {
          uVar11 = local_200[1];
          *puVar32 = *local_200;
          puVar32[1] = uVar11;
          if (0x10 < uVar19) {
            uVar11 = local_200[3];
            puVar32[2] = local_200[2];
            puVar32[3] = uVar11;
            if (0x10 < (longlong)(uVar19 - 0x10)) {
              puVar35 = puVar32 + 4;
              do {
                uVar11 = local_200[5];
                puVar37 = puVar35 + 4;
                *puVar35 = local_200[4];
                puVar35[1] = uVar11;
                uVar11 = local_200[7];
                puVar35[2] = local_200[6];
                puVar35[3] = uVar11;
                puVar35 = puVar37;
                local_200 = local_200 + 4;
              } while (puVar37 < puVar33);
            }
          }
          local_200 = puVar34;
          if ((ulonglong)((longlong)puVar33 - (longlong)puVar8) < uVar41) {
            if ((ulonglong)((longlong)puVar33 - lVar9) < uVar41) {
              return 0xffffffffffffffec;
            }
            if ((undefined1 *)
                ((longlong)puVar26 + (longlong)(puVar10 + (uVar28 - (longlong)puVar8))) <= puVar10)
            goto LAB_00e70ff0;
            lVar38 = (longlong)puVar8 - (longlong)puVar26;
            lVar36 = FUN_00e86250(uVar27,lVar38);
            puVar33 = (undefined8 *)(lVar36 + lVar38);
            uVar28 = uVar28 - lVar38;
            puVar26 = puVar8;
          }
          if (uVar41 < 0x10) {
            if (uVar41 < 8) {
              *(undefined1 *)puVar33 = *(undefined1 *)puVar26;
              *(undefined1 *)((longlong)puVar33 + 1) = *(undefined1 *)((longlong)puVar26 + 1);
              *(undefined1 *)((longlong)puVar33 + 2) = *(undefined1 *)((longlong)puVar26 + 2);
              *(undefined1 *)((longlong)puVar33 + 3) = *(undefined1 *)((longlong)puVar26 + 3);
              uVar31 = *(uint *)(&DAT_00e957e0 + uVar41 * 4);
              *(undefined4 *)((longlong)puVar33 + 4) =
                   *(undefined4 *)((ulonglong)uVar31 + (longlong)puVar26);
              puVar26 = (undefined8 *)
                        ((longlong)((ulonglong)uVar31 + (longlong)puVar26) -
                        (longlong)*(int *)(&DAT_00e95800 + uVar41 * 4));
            }
            else {
              *puVar33 = *puVar26;
            }
            if (8 < uVar28) {
              if ((longlong)puVar33 - (longlong)puVar26 < 0x10) {
                puVar34 = puVar33 + 1;
                do {
                  puVar26 = puVar26 + 1;
                  puVar35 = puVar34 + 1;
                  *puVar34 = *puVar26;
                  puVar34 = puVar35;
                } while (puVar35 < (undefined8 *)((longlong)puVar33 + uVar28));
              }
              else {
                uVar11 = puVar26[2];
                puVar33[1] = puVar26[1];
                puVar33[2] = uVar11;
                if (0x18 < (longlong)uVar28) {
                  puVar34 = puVar33 + 3;
                  puVar35 = puVar26 + 3;
                  do {
                    uVar11 = puVar35[1];
                    puVar26 = puVar34 + 4;
                    *puVar34 = *puVar35;
                    puVar34[1] = uVar11;
                    uVar11 = puVar35[3];
                    puVar34[2] = puVar35[2];
                    puVar34[3] = uVar11;
                    puVar34 = puVar26;
                    puVar35 = puVar35 + 4;
                  } while (puVar26 < (undefined8 *)((longlong)puVar33 + uVar28));
                }
              }
            }
          }
          else {
            uVar11 = puVar26[1];
            *puVar33 = *puVar26;
            puVar33[1] = uVar11;
            if (0x10 < (longlong)uVar28) {
              puVar34 = puVar26 + 2;
              puVar35 = puVar33 + 2;
              do {
                uVar11 = puVar34[1];
                puVar26 = puVar35 + 4;
                *puVar35 = *puVar34;
                puVar35[1] = uVar11;
                uVar11 = puVar34[3];
                puVar35[2] = puVar34[2];
                puVar35[3] = uVar11;
                puVar34 = puVar34 + 4;
                puVar35 = puVar26;
              } while (puVar26 < (undefined8 *)(uVar28 + (longlong)puVar33));
            }
          }
        }
      }
LAB_00e7053c:
      if (0xffffffffffffff88 < uVar27) {
        return uVar27;
      }
      puVar32 = (undefined8 *)((longlong)puVar32 + uVar27);
      uVar42 = uVar42 + 1;
    } while (param_4 != uVar42);
  }
LAB_00e6fdeb:
  *(int *)(&DAT_0000683c + unaff_RDI) = (int)local_110[0];
  iVar29 = *(int *)(&DAT_00007688 + unaff_RDI);
  *(int *)(&DAT_00006840 + unaff_RDI) = (int)local_110[1];
  *(int *)(&DAT_00006844 + unaff_RDI) = (int)local_110[2];
LAB_00e6f9eb:
  uVar19 = (longlong)local_238 - (longlong)local_200;
  if (iVar29 == 2) {
    if (local_270 - (longlong)puVar32 < uVar19) {
      return 0xffffffffffffffba;
    }
    if (puVar32 == (undefined8 *)0x0) {
      if (local_270 < 0x10000) {
        return 0xffffffffffffffba;
      }
      goto LAB_00e6fa26;
    }
    puVar32 = (undefined8 *)((longlong)puVar32 + uVar19);
    FUN_00e86250(2,uVar19);
    uVar19 = 0x10000;
    local_200 = (undefined8 *)(&DAT_0000768c + unaff_RDI);
    if (local_270 - (longlong)puVar32 < 0x10000) {
      return 0xffffffffffffffba;
    }
  }
  else {
    if (local_270 - (longlong)puVar32 < uVar19) {
      return 0xffffffffffffffba;
    }
    if (puVar32 == (undefined8 *)0x0) goto LAB_00e6fa26;
  }
  puVar32 = (undefined8 *)((longlong)puVar32 + uVar19);
  FUN_00e86250();
LAB_00e6fa26:
  return (longlong)puVar32 - (longlong)unaff_RSI;
}



ulonglong FUN_00e71910(undefined8 param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  undefined1 *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  sbyte sVar8;
  sbyte sVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  undefined1 *puVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong unaff_RSI;
  undefined1 *puVar19;
  ulonglong uVar20;
  undefined1 *unaff_RDI;
  ulonglong *puVar21;
  uint uVar22;
  bool bVar23;
  ulonglong *puVar24;
  ulonglong uVar25;
  uint uVar26;
  uint uVar27;
  ulonglong local_res8;
  uint local_68;
  int local_64;
  ulonglong local_60;
  uint local_58;
  ulonglong *local_50;
  ulonglong *local_48;
  ulonglong *local_40;
  
  local_64 = 0xff;
  if (local_res8 < 0x200) {
    return 0xffffffffffffffff;
  }
  uVar11 = FUN_00e6b6b0(param_2,&local_68,param_1);
  if (0xffffffffffffff88 < uVar11) {
    return uVar11;
  }
  if ((param_3 < local_68) ||
     (lVar12 = (longlong)((1 << (local_68 & 0x1f)) + 1),
     local_res8 <
     (lVar12 + 0x81 +
     ((1L << ((ulonglong)local_68 & 0x3f)) + 0xb + (ulonglong)(local_64 + 1) * 2 >> 2)) * 4)) {
    return 0xffffffffffffffd4;
  }
  uVar11 = FUN_00e6a680((ulonglong)local_68,local_64,param_4 + 0x200 + lVar12 * 4);
  if (0xffffffffffffff88 < uVar11) {
    return uVar11;
  }
  if (*(short *)(param_4 + 0x202) != 0) {
    uVar11 = FUN_00e6a940();
    if (0xffffffffffffff88 < uVar11) {
      return uVar11;
    }
    uVar6 = *(ushort *)(param_4 + 0x200);
    local_58 = local_58 + uVar6;
    uVar11 = -1L << ((ulonglong)uVar6 & 0x3f);
    uVar13 = ~uVar11 & local_60 >> ((ulonglong)-local_58 & 0x3f);
    iVar10 = (int)local_48;
    uVar17 = local_58;
    if (local_58 < 0x41) {
      if (local_50 < local_40) {
        if (local_50 != local_48) {
          uVar17 = local_58 >> 3;
          puVar24 = (ulonglong *)((longlong)local_50 - (ulonglong)uVar17);
          if (puVar24 < local_48) {
            uVar17 = (int)local_50 - iVar10;
            puVar24 = (ulonglong *)((longlong)local_50 - (ulonglong)uVar17);
          }
          uVar17 = local_58 + uVar17 * -8;
          local_60 = *puVar24;
          local_50 = puVar24;
        }
      }
      else {
        uVar17 = local_58 & 7;
        local_50 = (ulonglong *)((longlong)local_50 - (ulonglong)(local_58 >> 3));
        local_60 = *local_50;
      }
    }
    uVar17 = uVar6 + uVar17;
    uVar20 = (ulonglong)uVar17;
    lVar12 = param_4 + 0x204;
    uVar18 = local_60 >> ((ulonglong)-uVar17 & 0x3f) & ~uVar11;
    puVar19 = unaff_RDI;
    uVar11 = local_60;
    puVar24 = local_50;
    if (uVar17 < 0x41) {
      if (local_50 < local_40) {
        local_58 = uVar17;
        if (local_48 != local_50) {
          uVar22 = uVar17 >> 3;
          puVar24 = (ulonglong *)((longlong)local_50 - (ulonglong)uVar22);
          if (puVar24 < local_48) {
            uVar22 = (int)local_50 - iVar10;
            puVar24 = (ulonglong *)((longlong)local_50 - (ulonglong)uVar22);
          }
          local_60 = *puVar24;
          local_58 = uVar17 + uVar22 * -8;
          uVar20 = (ulonglong)local_58;
          uVar11 = local_60;
          uVar17 = local_58;
          local_50 = puVar24;
          if (0x40 < local_58) goto LAB_00e720fe;
        }
      }
      else {
        local_58 = uVar17 & 7;
        uVar20 = (ulonglong)local_58;
        local_50 = (ulonglong *)((longlong)local_50 - (ulonglong)(uVar17 >> 3));
        local_60 = *local_50;
      }
      bVar23 = false;
      puVar16 = unaff_RDI;
      puVar21 = local_50;
      uVar25 = local_60;
      do {
        uVar22 = (uint)uVar20;
        puVar19 = puVar16;
        if (puVar21 < local_40) {
          if (local_48 == puVar21) {
            uVar11 = local_60;
            uVar17 = local_58;
            puVar24 = local_50;
            if (bVar23) {
              local_50 = local_48;
              uVar11 = uVar25;
              uVar17 = uVar22;
              puVar24 = local_50;
            }
            break;
          }
          puVar24 = (ulonglong *)((longlong)puVar21 - (uVar20 >> 3));
          if (puVar24 < local_48) {
            uVar17 = (int)puVar21 - iVar10;
            puVar24 = (ulonglong *)((longlong)puVar21 - (ulonglong)uVar17);
            uVar11 = *puVar24;
            uVar17 = uVar22 + uVar17 * -8;
            break;
          }
          uVar17 = uVar22 + (int)(uVar20 >> 3) * -8;
          uVar25 = *puVar24;
        }
        else {
          uVar17 = uVar22 & 7;
          puVar24 = (ulonglong *)((longlong)puVar21 - (uVar20 >> 3));
          uVar25 = *puVar24;
        }
        bVar23 = puVar16 < unaff_RDI + unaff_RSI + -3;
        uVar11 = uVar25;
        if (!bVar23) break;
        puVar2 = (ushort *)(lVar12 + uVar13 * 4);
        puVar19 = puVar16 + 4;
        bVar5 = *(byte *)((longlong)puVar2 + 3);
        uVar26 = bVar5 + uVar17;
        uVar6 = *puVar2;
        puVar3 = (ushort *)(lVar12 + uVar18 * 4);
        *puVar16 = (char)puVar2[1];
        bVar4 = *(byte *)((longlong)puVar3 + 3);
        uVar22 = bVar4 + uVar26;
        uVar7 = *puVar3;
        puVar2 = (ushort *)
                 (lVar12 + (((uVar25 << ((ulonglong)uVar17 & 0x3f)) >>
                            ((ulonglong)-(uint)bVar5 & 0x3f)) + (ulonglong)uVar6) * 4);
        puVar16[1] = (char)puVar3[1];
        bVar5 = *(byte *)((longlong)puVar2 + 3);
        uVar27 = bVar5 + uVar22;
        puVar3 = (ushort *)
                 (lVar12 + (((uVar25 << ((ulonglong)uVar26 & 0x3f)) >>
                            ((ulonglong)-(uint)bVar4 & 0x3f)) + (ulonglong)uVar7) * 4);
        uVar6 = *puVar2;
        puVar16[2] = (char)puVar2[1];
        bVar4 = *(byte *)((longlong)puVar3 + 3);
        uVar7 = *puVar3;
        uVar13 = ((uVar25 << ((ulonglong)uVar22 & 0x3f)) >> ((ulonglong)-(uint)bVar5 & 0x3f)) +
                 (ulonglong)uVar6;
        uVar17 = bVar4 + uVar27;
        uVar20 = (ulonglong)uVar17;
        puVar16[3] = (char)puVar3[1];
        uVar18 = (ulonglong)uVar7 +
                 ((uVar25 << ((ulonglong)uVar27 & 0x3f)) >> ((ulonglong)-(uint)bVar4 & 0x3f));
        puVar16 = puVar19;
        puVar21 = puVar24;
      } while (uVar17 < 0x41);
    }
LAB_00e720fe:
    local_50 = puVar24;
    local_58 = uVar17;
    local_60 = uVar11;
    if (unaff_RDI + unaff_RSI + -2 < puVar19) {
      return 0xffffffffffffffba;
    }
    uVar11 = (ulonglong)local_58;
    puVar16 = puVar19;
    while( true ) {
      puVar2 = (ushort *)(lVar12 + uVar13 * 4);
      bVar5 = *(byte *)((longlong)puVar2 + 3);
      uVar6 = *puVar2;
      uVar17 = (uint)bVar5 + (int)uVar11;
      uVar20 = (ulonglong)uVar17;
      *puVar16 = (char)puVar2[1];
      uVar13 = (ulonglong)uVar6 +
               ((local_60 << (uVar11 & 0x3f)) >> ((ulonglong)-(uint)bVar5 & 0x3f));
      if (0x40 < uVar17) {
        puVar19 = puVar16 + 2;
        puVar16[1] = *(undefined1 *)(param_4 + 0x206 + uVar18 * 4);
        goto LAB_00e71dfc;
      }
      if (local_50 < local_40) {
        puVar24 = local_48;
        if (local_48 != local_50) {
          uVar22 = uVar17 >> 3;
          puVar24 = (ulonglong *)((longlong)local_50 - (ulonglong)uVar22);
          if (puVar24 < local_48) {
            uVar22 = (uint)((longlong)local_50 - (longlong)local_48);
            puVar24 = (ulonglong *)
                      ((longlong)local_50 - ((longlong)local_50 - (longlong)local_48 & 0xffffffffU))
            ;
          }
          local_60 = *puVar24;
          uVar20 = (ulonglong)(uVar17 + uVar22 * -8);
        }
      }
      else {
        uVar20 = (ulonglong)(uVar17 & 7);
        puVar24 = (ulonglong *)((longlong)local_50 - (ulonglong)(uVar17 >> 3));
        local_60 = *puVar24;
      }
      if (puVar16 ==
          puVar19 + ((ulonglong)(unaff_RDI + ((unaff_RSI + -1) - (longlong)puVar19)) &
                    0xfffffffffffffffe)) {
        return 0xffffffffffffffba;
      }
      puVar2 = (ushort *)(lVar12 + uVar18 * 4);
      uVar17 = (uint)*(byte *)((longlong)puVar2 + 3) + (int)uVar20;
      uVar11 = (ulonglong)uVar17;
      uVar18 = (ulonglong)*puVar2 +
               ((local_60 << (uVar20 & 0x3f)) >>
               ((ulonglong)-(uint)*(byte *)((longlong)puVar2 + 3) & 0x3f));
      puVar1 = puVar16 + 2;
      puVar16[1] = (char)puVar2[1];
      if (0x40 < uVar17) break;
      if (puVar24 < local_40) {
        local_50 = local_48;
        if (local_48 != puVar24) {
          uVar22 = uVar17 >> 3;
          local_50 = (ulonglong *)((longlong)puVar24 - (ulonglong)uVar22);
          if (local_50 < local_48) {
            uVar22 = (int)puVar24 - iVar10;
            local_50 = (ulonglong *)((longlong)puVar24 - (ulonglong)uVar22);
          }
          local_60 = *local_50;
          uVar11 = (ulonglong)(uVar17 + uVar22 * -8);
        }
      }
      else {
        uVar11 = (ulonglong)(uVar17 & 7);
        local_50 = (ulonglong *)((longlong)puVar24 - (ulonglong)(uVar17 >> 3));
        local_60 = *local_50;
      }
      puVar16 = puVar1;
      if (unaff_RDI + unaff_RSI + -2 < puVar1) {
        return 0xffffffffffffffba;
      }
    }
    puVar19 = puVar16 + 3;
    puVar16[2] = *(undefined1 *)(param_4 + 0x206 + uVar13 * 4);
LAB_00e71dfc:
    return (longlong)puVar19 - (longlong)unaff_RDI;
  }
  uVar11 = FUN_00e6a940();
  if (0xffffffffffffff88 < uVar11) {
    return uVar11;
  }
  uVar6 = *(ushort *)(param_4 + 0x200);
  local_58 = local_58 + uVar6;
  uVar11 = -1L << ((ulonglong)uVar6 & 0x3f);
  uVar13 = ~uVar11 & local_60 >> ((ulonglong)-local_58 & 0x3f);
  iVar10 = (int)local_48;
  uVar17 = local_58;
  if (local_58 < 0x41) {
    if (local_50 < local_40) {
      if (local_50 != local_48) {
        uVar17 = local_58 >> 3;
        puVar24 = (ulonglong *)((longlong)local_50 - (ulonglong)uVar17);
        if (puVar24 < local_48) {
          uVar17 = (int)local_50 - iVar10;
          puVar24 = (ulonglong *)((longlong)local_50 - (ulonglong)uVar17);
        }
        uVar17 = local_58 + uVar17 * -8;
        local_60 = *puVar24;
        local_50 = puVar24;
      }
    }
    else {
      uVar17 = local_58 & 7;
      local_50 = (ulonglong *)((longlong)local_50 - (ulonglong)(local_58 >> 3));
      local_60 = *local_50;
    }
  }
  uVar17 = uVar6 + uVar17;
  lVar12 = param_4 + 0x204;
  uVar18 = local_60 >> ((ulonglong)-uVar17 & 0x3f) & ~uVar11;
  puVar19 = unaff_RDI;
  uVar11 = local_60;
  puVar24 = local_50;
  if (uVar17 < 0x41) {
    if (local_50 < local_40) {
      local_58 = uVar17;
      if (local_50 != local_48) {
        uVar22 = uVar17 >> 3;
        puVar24 = (ulonglong *)((longlong)local_50 - (ulonglong)uVar22);
        if (puVar24 < local_48) {
          uVar22 = (int)local_50 - iVar10;
          puVar24 = (ulonglong *)((longlong)local_50 - (ulonglong)uVar22);
        }
        local_60 = *puVar24;
        local_58 = uVar17 + uVar22 * -8;
        uVar11 = local_60;
        uVar17 = local_58;
        local_50 = puVar24;
        if (0x40 < local_58) goto LAB_00e71cb7;
      }
    }
    else {
      local_58 = uVar17 & 7;
      local_50 = (ulonglong *)((longlong)local_50 - (ulonglong)(uVar17 >> 3));
      local_60 = *local_50;
    }
    bVar23 = false;
    puVar16 = unaff_RDI;
    puVar21 = local_50;
    uVar20 = local_60;
    uVar22 = local_58;
    do {
      puVar19 = puVar16;
      if (puVar21 < local_40) {
        if (local_48 == puVar21) {
          uVar11 = local_60;
          uVar17 = local_58;
          puVar24 = local_50;
          if (bVar23) {
            local_50 = local_48;
            uVar11 = uVar20;
            uVar17 = uVar22;
            puVar24 = local_50;
          }
          break;
        }
        puVar24 = (ulonglong *)((longlong)puVar21 - (ulonglong)(uVar22 >> 3));
        if (puVar24 < local_48) {
          uVar17 = (int)puVar21 - iVar10;
          puVar24 = (ulonglong *)((longlong)puVar21 - (ulonglong)uVar17);
          uVar11 = *puVar24;
          uVar17 = uVar22 + uVar17 * -8;
          break;
        }
        uVar17 = uVar22 + (uVar22 >> 3) * -8;
        uVar20 = *puVar24;
      }
      else {
        uVar17 = uVar22 & 7;
        puVar24 = (ulonglong *)((longlong)puVar21 - (ulonglong)(uVar22 >> 3));
        uVar20 = *puVar24;
      }
      bVar23 = puVar16 < unaff_RDI + unaff_RSI + -3;
      uVar11 = uVar20;
      if (!bVar23) break;
      puVar2 = (ushort *)(lVar12 + uVar13 * 4);
      puVar19 = puVar16 + 4;
      bVar5 = *(byte *)((longlong)puVar2 + 3);
      uVar6 = *puVar2;
      *puVar16 = (char)puVar2[1];
      sVar9 = (bVar5 < 0x41) * ('@' - bVar5);
      puVar2 = (ushort *)(lVar12 + uVar18 * 4);
      bVar4 = *(byte *)((longlong)puVar2 + 3);
      uVar7 = *puVar2;
      iVar14 = uVar17 + bVar5 + (uint)bVar4;
      puVar16[1] = (char)puVar2[1];
      sVar8 = (bVar4 < 0x41) * ('@' - bVar4);
      puVar2 = (ushort *)
               (lVar12 + ((((uVar20 >> ((ulonglong)-(uVar17 + bVar5) & 0x3f)) << sVar9) >> sVar9) +
                         (ulonglong)uVar6) * 4);
      bVar5 = *(byte *)((longlong)puVar2 + 3);
      uVar6 = *puVar2;
      iVar15 = iVar14 + (uint)bVar5;
      puVar16[2] = (char)puVar2[1];
      sVar9 = (bVar5 < 0x41) * ('@' - bVar5);
      uVar13 = (((uVar20 >> ((ulonglong)(uint)-iVar15 & 0x3f)) << sVar9) >> sVar9) +
               (ulonglong)uVar6;
      puVar2 = (ushort *)
               (lVar12 + ((((uVar20 >> ((ulonglong)(uint)-iVar14 & 0x3f)) << sVar8) >> sVar8) +
                         (ulonglong)uVar7) * 4);
      bVar5 = *(byte *)((longlong)puVar2 + 3);
      uVar6 = *puVar2;
      uVar22 = iVar15 + (uint)bVar5;
      puVar16[3] = (char)puVar2[1];
      sVar9 = (bVar5 < 0x41) * ('@' - bVar5);
      uVar18 = (((uVar20 >> ((ulonglong)-uVar22 & 0x3f)) << sVar9) >> sVar9) + (ulonglong)uVar6;
      puVar16 = puVar19;
      puVar21 = puVar24;
      uVar17 = uVar22;
    } while (uVar22 < 0x41);
  }
LAB_00e71cb7:
  local_50 = puVar24;
  local_58 = uVar17;
  local_60 = uVar11;
  if (puVar19 <= unaff_RDI + unaff_RSI + -2) {
    puVar16 = puVar19;
    do {
      puVar2 = (ushort *)(lVar12 + uVar13 * 4);
      bVar5 = *(byte *)((longlong)puVar2 + 3);
      uVar6 = *puVar2;
      local_58 = local_58 + bVar5;
      *puVar16 = (char)puVar2[1];
      sVar9 = (bVar5 < 0x41) * ('@' - bVar5);
      uVar13 = (((local_60 >> ((ulonglong)-local_58 & 0x3f)) << sVar9) >> sVar9) + (ulonglong)uVar6;
      if (0x40 < local_58) {
        puVar19 = puVar16 + 2;
        puVar16[1] = *(undefined1 *)(param_4 + 0x206 + uVar18 * 4);
        goto LAB_00e71dfc;
      }
      if (local_50 < local_40) {
        puVar24 = local_48;
        uVar17 = local_58;
        if (local_48 != local_50) {
          uVar17 = local_58 >> 3;
          puVar24 = (ulonglong *)((longlong)local_50 - (ulonglong)uVar17);
          if (puVar24 < local_48) {
            uVar17 = (int)local_50 - iVar10;
            puVar24 = (ulonglong *)((longlong)local_50 - (ulonglong)uVar17);
          }
          uVar17 = local_58 + uVar17 * -8;
          local_60 = *puVar24;
        }
      }
      else {
        uVar17 = local_58 & 7;
        puVar24 = (ulonglong *)((longlong)local_50 - (ulonglong)(local_58 >> 3));
        local_60 = *puVar24;
      }
      if (puVar16 ==
          puVar19 + ((ulonglong)(unaff_RDI + ((unaff_RSI + -1) - (longlong)puVar19)) &
                    0xfffffffffffffffe)) {
        return 0xffffffffffffffba;
      }
      puVar2 = (ushort *)(lVar12 + uVar18 * 4);
      bVar5 = *(byte *)((longlong)puVar2 + 3);
      uVar17 = uVar17 + bVar5;
      sVar9 = (bVar5 < 0x41) * ('@' - bVar5);
      uVar18 = (((local_60 >> ((ulonglong)-uVar17 & 0x3f)) << sVar9) >> sVar9) + (ulonglong)*puVar2;
      puVar1 = puVar16 + 2;
      puVar16[1] = (char)puVar2[1];
      if (0x40 < uVar17) {
        puVar19 = puVar16 + 3;
        puVar16[2] = *(undefined1 *)(param_4 + 0x206 + uVar13 * 4);
        goto LAB_00e71dfc;
      }
      if (puVar24 < local_40) {
        local_50 = local_48;
        local_58 = uVar17;
        if (local_48 != puVar24) {
          uVar22 = uVar17 >> 3;
          local_50 = (ulonglong *)((longlong)puVar24 - (ulonglong)uVar22);
          if (local_50 < local_48) {
            uVar22 = (int)puVar24 - iVar10;
            local_50 = (ulonglong *)((longlong)puVar24 - (ulonglong)uVar22);
          }
          local_60 = *local_50;
          local_58 = uVar17 + uVar22 * -8;
        }
      }
      else {
        local_58 = uVar17 & 7;
        local_50 = (ulonglong *)((longlong)puVar24 - (ulonglong)(uVar17 >> 3));
        local_60 = *local_50;
      }
      puVar16 = puVar1;
    } while (puVar1 <= unaff_RDI + unaff_RSI + -2);
  }
  return 0xffffffffffffffba;
}



ulonglong FUN_00e72390(int *param_1,undefined8 *param_2,uint *param_3,byte *param_4)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong local_res8;
  undefined8 local_res10;
  
  if (local_res8 == 0) {
    return 0xffffffffffffffb8;
  }
  uVar4 = (ulonglong)*param_4;
  if (uVar4 < 0x80) {
    uVar8 = uVar4 + 1;
    if (local_res8 < uVar8) {
      return 0xffffffffffffffb8;
    }
    uVar5 = FUN_00e71910(uVar4,param_4 + 1,6,local_res10);
    if (0xffffffffffffff88 < uVar5) {
      return uVar5;
    }
    *param_2 = 0;
    *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
    puVar7 = (undefined8 *)((ulonglong)(param_2 + 1) & 0xfffffffffffffff8);
    for (uVar4 = (ulonglong)
                 (((int)param_2 - (int)(undefined8 *)((ulonglong)(param_2 + 1) & 0xfffffffffffffff8)
                  ) + 0x34U >> 3); uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    if (uVar5 == 0) {
      return 0xffffffffffffffec;
    }
  }
  else {
    uVar5 = uVar4 - 0x7f;
    uVar8 = (uVar4 - 0x7e >> 1) + 1;
    if (local_res8 < uVar8) {
      return 0xffffffffffffffb8;
    }
    if (unaff_RSI <= uVar5) {
      return 0xffffffffffffffec;
    }
    uVar4 = 0;
    do {
      *(byte *)(unaff_RDI + uVar4) = param_4[((uint)(uVar4 >> 1) & 0x7fffffff) + 1] >> 4;
      *(byte *)(unaff_RDI + 1 + uVar4) = param_4[((uint)(uVar4 >> 1) & 0x7fffffff) + 1] & 0xf;
      uVar4 = uVar4 + 2;
    } while (uVar4 < uVar5);
    *param_2 = 0;
    *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
    puVar7 = (undefined8 *)((ulonglong)(param_2 + 1) & 0xfffffffffffffff8);
    for (uVar4 = (ulonglong)
                 (((int)param_2 - (int)(undefined8 *)((ulonglong)(param_2 + 1) & 0xfffffffffffffff8)
                  ) + 0x34U >> 3); uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
  }
  uVar4 = 0;
  iVar6 = 0;
  do {
    bVar2 = *(byte *)(uVar4 + unaff_RDI);
    if (0xc < bVar2) {
      return 0xffffffffffffffec;
    }
    piVar1 = (int *)((longlong)param_2 + (ulonglong)bVar2 * 4);
    *piVar1 = *piVar1 + 1;
    iVar6 = iVar6 + ((1 << (*(byte *)(uVar4 + unaff_RDI) & 0x1f)) >> 1);
    uVar4 = (ulonglong)((int)uVar4 + 1);
  } while (uVar4 < uVar5);
  if ((iVar6 != 0) && (uVar3 = (LZCOUNT(iVar6) ^ 0x1fU) + 1, uVar3 < 0xd)) {
    *param_3 = uVar3;
    iVar6 = (1 << (uVar3 & 0x1f)) - iVar6;
    uVar3 = LZCOUNT(iVar6) ^ 0x1f;
    if (iVar6 == 1 << (uVar3 & 0x1f)) {
      uVar3 = uVar3 + 1;
      *(char *)(unaff_RDI + uVar5) = (char)uVar3;
      piVar1 = (int *)((longlong)param_2 + (ulonglong)uVar3 * 4);
      *piVar1 = *piVar1 + 1;
      if ((1 < *(uint *)((longlong)param_2 + 4)) && ((*(uint *)((longlong)param_2 + 4) & 1) == 0)) {
        *param_1 = (int)uVar5 + 1;
        return uVar8;
      }
    }
  }
  return 0xffffffffffffffec;
}



ulonglong FUN_00e72580(undefined8 param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  undefined1 *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  longlong unaff_RSI;
  undefined1 *puVar16;
  uint uVar17;
  undefined1 *unaff_RDI;
  undefined1 *puVar18;
  ulonglong *puVar19;
  ulonglong *puVar20;
  ulonglong uVar21;
  ulonglong local_res8;
  bool bVar22;
  uint local_68;
  int local_64;
  ulonglong local_60;
  uint local_58;
  ulonglong *local_50;
  ulonglong *local_48;
  ulonglong *local_40;
  
  local_64 = 0xff;
  if (local_res8 < 0x200) {
    return 0xffffffffffffffff;
  }
  uVar11 = FUN_00e6b370(param_2,&local_68,param_1);
  if (0xffffffffffffff88 < uVar11) {
    return uVar11;
  }
  if ((param_3 < local_68) ||
     (lVar12 = (longlong)((1 << ((byte)local_68 & 0x1f)) + 1),
     local_res8 <
     (lVar12 + 0x81 + ((1L << ((byte)local_68 & 0x3f)) + 0xb + (ulonglong)(local_64 + 1) * 2 >> 2))
     * 4)) {
    return 0xffffffffffffffd4;
  }
  lVar12 = lVar12 * 4;
  uVar11 = FUN_00e6a680(local_68,local_64,param_4 + 0x200 + lVar12,local_res8 - (lVar12 + 0x200));
  if (0xffffffffffffff88 < uVar11) {
    return uVar11;
  }
  if (*(short *)(param_4 + 0x202) != 0) {
    uVar11 = FUN_00e6a940();
    if (0xffffffffffffff88 < uVar11) {
      return uVar11;
    }
    uVar7 = *(ushort *)(param_4 + 0x200);
    local_58 = local_58 + uVar7;
    uVar11 = ~(-1L << ((byte)uVar7 & 0x3f));
    uVar13 = local_60 >> (-(char)local_58 & 0x3fU) & uVar11;
    uVar10 = local_58;
    if (local_58 < 0x41) {
      if (local_50 < local_40) {
        if (local_50 != local_48) {
          uVar10 = local_58 >> 3;
          puVar20 = (ulonglong *)((longlong)local_50 - (ulonglong)uVar10);
          if (puVar20 < local_48) {
            uVar10 = (int)local_50 - (int)local_48;
            puVar20 = (ulonglong *)((longlong)local_50 - (ulonglong)uVar10);
          }
          uVar10 = local_58 + uVar10 * -8;
          local_60 = *puVar20;
          local_50 = puVar20;
        }
      }
      else {
        uVar10 = local_58 & 7;
        local_50 = (ulonglong *)((longlong)local_50 - (ulonglong)(local_58 >> 3));
        local_60 = *local_50;
      }
    }
    uVar10 = uVar7 + uVar10;
    lVar12 = param_4 + 0x204;
    uVar11 = local_60 >> (-(char)uVar10 & 0x3fU) & uVar11;
    puVar18 = unaff_RDI;
    uVar9 = local_60;
    puVar20 = local_50;
    if (uVar10 < 0x41) {
      if (local_50 < local_40) {
        local_58 = uVar10;
        if (local_48 != local_50) {
          uVar17 = uVar10 >> 3;
          puVar20 = (ulonglong *)((longlong)local_50 - (ulonglong)uVar17);
          if (puVar20 < local_48) {
            uVar17 = (int)local_50 - (int)local_48;
            puVar20 = (ulonglong *)((longlong)local_50 - (ulonglong)uVar17);
          }
          local_58 = uVar10 + uVar17 * -8;
          local_60 = *puVar20;
          uVar9 = local_60;
          uVar10 = local_58;
          local_50 = puVar20;
          if (0x40 < local_58) goto LAB_00e72e20;
        }
      }
      else {
        local_58 = uVar10 & 7;
        local_50 = (ulonglong *)((longlong)local_50 - (ulonglong)(uVar10 >> 3));
        local_60 = *local_50;
      }
      bVar22 = false;
      puVar16 = unaff_RDI;
      puVar19 = local_50;
      uVar21 = local_60;
      uVar17 = local_58;
      do {
        puVar18 = puVar16;
        if (puVar19 < local_40) {
          if (local_48 == puVar19) {
            uVar9 = local_60;
            uVar10 = local_58;
            puVar20 = local_50;
            if (bVar22) {
              local_50 = local_48;
              uVar9 = uVar21;
              uVar10 = uVar17;
              puVar20 = local_50;
            }
            break;
          }
          puVar20 = (ulonglong *)((longlong)puVar19 - (ulonglong)(uVar17 >> 3));
          if (puVar20 < local_48) {
            puVar20 = (ulonglong *)
                      ((longlong)puVar19 - ((longlong)puVar19 - (longlong)local_48 & 0xffffffffU));
            uVar9 = *puVar20;
            uVar10 = uVar17 + (int)((longlong)puVar19 - (longlong)local_48) * -8;
            break;
          }
          uVar21 = *puVar20;
          uVar10 = uVar17 + (uVar17 >> 3) * -8;
        }
        else {
          uVar10 = uVar17 & 7;
          puVar20 = (ulonglong *)((longlong)puVar19 - (ulonglong)(uVar17 >> 3));
          uVar21 = *puVar20;
        }
        bVar22 = puVar16 < unaff_RDI + unaff_RSI + -3;
        uVar9 = uVar21;
        if (!bVar22) break;
        puVar3 = (ushort *)(lVar12 + uVar13 * 4);
        puVar18 = puVar16 + 4;
        bVar6 = *(byte *)((longlong)puVar3 + 3);
        iVar4 = bVar6 + uVar10;
        uVar7 = *puVar3;
        puVar2 = (ushort *)(lVar12 + uVar11 * 4);
        *puVar16 = (char)puVar3[1];
        bVar5 = *(byte *)((longlong)puVar2 + 3);
        iVar15 = (uint)bVar5 + iVar4;
        puVar3 = (ushort *)
                 (lVar12 + (((uVar21 << ((byte)uVar10 & 0x3f)) >> (-bVar6 & 0x3f)) +
                           (ulonglong)uVar7) * 4);
        uVar7 = *puVar2;
        puVar16[1] = (char)puVar2[1];
        bVar6 = *(byte *)((longlong)puVar3 + 3);
        uVar8 = *puVar3;
        iVar14 = (uint)bVar6 + iVar15;
        puVar16[2] = (char)puVar3[1];
        puVar3 = (ushort *)
                 (lVar12 + (((uVar21 << ((byte)iVar4 & 0x3f)) >> (-bVar5 & 0x3f)) + (ulonglong)uVar7
                           ) * 4);
        bVar5 = *(byte *)((longlong)puVar3 + 3);
        uVar13 = (ulonglong)uVar8 + ((uVar21 << ((byte)iVar15 & 0x3f)) >> (-bVar6 & 0x3f));
        uVar17 = (uint)bVar5 + iVar14;
        uVar7 = *puVar3;
        puVar16[3] = (char)puVar3[1];
        uVar11 = ((uVar21 << ((byte)iVar14 & 0x3f)) >> (-bVar5 & 0x3f)) + (ulonglong)uVar7;
        puVar16 = puVar18;
        puVar19 = puVar20;
        uVar10 = uVar17;
      } while (uVar17 < 0x41);
    }
LAB_00e72e20:
    local_50 = puVar20;
    local_58 = uVar10;
    local_60 = uVar9;
    if (unaff_RDI + unaff_RSI + -2 < puVar18) {
      return 0xffffffffffffffba;
    }
    puVar16 = puVar18;
    while( true ) {
      puVar3 = (ushort *)(lVar12 + uVar13 * 4);
      bVar6 = *(byte *)((longlong)puVar3 + 3);
      uVar7 = *puVar3;
      uVar10 = bVar6 + local_58;
      *puVar16 = (char)puVar3[1];
      uVar13 = (ulonglong)uVar7 + ((local_60 << ((byte)local_58 & 0x3f)) >> (-bVar6 & 0x3f));
      if (0x40 < uVar10) {
        puVar18 = puVar16 + 2;
        puVar16[1] = *(undefined1 *)(param_4 + 0x206 + uVar11 * 4);
        goto LAB_00e72ae2;
      }
      if (local_50 < local_40) {
        puVar20 = local_48;
        uVar17 = uVar10;
        if (local_48 != local_50) {
          uVar17 = uVar10 >> 3;
          puVar20 = (ulonglong *)((longlong)local_50 - (ulonglong)uVar17);
          if (puVar20 < local_48) {
            uVar17 = (uint)((longlong)local_50 - (longlong)local_48);
            puVar20 = (ulonglong *)
                      ((longlong)local_50 - ((longlong)local_50 - (longlong)local_48 & 0xffffffffU))
            ;
          }
          local_60 = *puVar20;
          uVar17 = uVar10 + uVar17 * -8;
        }
      }
      else {
        uVar17 = uVar10 & 7;
        puVar20 = (ulonglong *)((longlong)local_50 - (ulonglong)(uVar10 >> 3));
        local_60 = *puVar20;
      }
      if (puVar16 ==
          puVar18 + ((ulonglong)(unaff_RDI + ((unaff_RSI + -1) - (longlong)puVar18)) &
                    0xfffffffffffffffe)) {
        return 0xffffffffffffffba;
      }
      puVar3 = (ushort *)(lVar12 + uVar11 * 4);
      uVar10 = *(byte *)((longlong)puVar3 + 3) + uVar17;
      puVar1 = puVar16 + 2;
      uVar11 = (ulonglong)*puVar3 +
               ((local_60 << ((byte)uVar17 & 0x3f)) >> (-*(byte *)((longlong)puVar3 + 3) & 0x3f));
      puVar16[1] = (char)puVar3[1];
      if (0x40 < uVar10) break;
      if (puVar20 < local_40) {
        local_50 = local_48;
        local_58 = uVar10;
        if (local_48 != puVar20) {
          uVar17 = uVar10 >> 3;
          local_50 = (ulonglong *)((longlong)puVar20 - (ulonglong)uVar17);
          if (local_50 < local_48) {
            uVar17 = (uint)((longlong)puVar20 - (longlong)local_48);
            local_50 = (ulonglong *)
                       ((longlong)puVar20 - ((longlong)puVar20 - (longlong)local_48 & 0xffffffffU));
          }
          local_60 = *local_50;
          local_58 = uVar10 + uVar17 * -8;
        }
      }
      else {
        local_58 = uVar10 & 7;
        local_50 = (ulonglong *)((longlong)puVar20 - (ulonglong)(uVar10 >> 3));
        local_60 = *local_50;
      }
      puVar16 = puVar1;
      if (unaff_RDI + unaff_RSI + -2 < puVar1) {
        return 0xffffffffffffffba;
      }
    }
    puVar18 = puVar16 + 3;
    puVar16[2] = *(undefined1 *)(param_4 + 0x206 + uVar13 * 4);
LAB_00e72ae2:
    return (longlong)puVar18 - (longlong)unaff_RDI;
  }
  uVar11 = FUN_00e6a940();
  if (0xffffffffffffff88 < uVar11) {
    return uVar11;
  }
  uVar7 = *(ushort *)(param_4 + 0x200);
  local_58 = local_58 + uVar7;
  uVar11 = ~(-1L << ((byte)uVar7 & 0x3f));
  uVar13 = local_60 >> (-(char)local_58 & 0x3fU) & uVar11;
  iVar4 = (int)local_48;
  uVar10 = local_58;
  if (local_58 < 0x41) {
    if (local_50 < local_40) {
      if (local_50 != local_48) {
        uVar10 = local_58 >> 3;
        puVar20 = (ulonglong *)((longlong)local_50 - (ulonglong)uVar10);
        if (puVar20 < local_48) {
          uVar10 = (int)local_50 - iVar4;
          puVar20 = (ulonglong *)((longlong)local_50 - (ulonglong)uVar10);
        }
        uVar10 = local_58 + uVar10 * -8;
        local_60 = *puVar20;
        local_50 = puVar20;
      }
    }
    else {
      uVar10 = local_58 & 7;
      local_50 = (ulonglong *)((longlong)local_50 - (ulonglong)(local_58 >> 3));
      local_60 = *local_50;
    }
  }
  uVar10 = uVar7 + uVar10;
  lVar12 = param_4 + 0x204;
  uVar11 = local_60 >> (-(char)uVar10 & 0x3fU) & uVar11;
  puVar18 = unaff_RDI;
  uVar9 = local_60;
  puVar20 = local_50;
  if (uVar10 < 0x41) {
    if (local_50 < local_40) {
      local_58 = uVar10;
      if (local_50 != local_48) {
        uVar17 = uVar10 >> 3;
        puVar20 = (ulonglong *)((longlong)local_50 - (ulonglong)uVar17);
        if (puVar20 < local_48) {
          uVar17 = (int)local_50 - iVar4;
          puVar20 = (ulonglong *)((longlong)local_50 - (ulonglong)uVar17);
        }
        local_58 = uVar10 + uVar17 * -8;
        local_60 = *puVar20;
        uVar9 = local_60;
        uVar10 = local_58;
        local_50 = puVar20;
        if (0x40 < local_58) goto LAB_00e72966;
      }
    }
    else {
      local_58 = uVar10 & 7;
      local_50 = (ulonglong *)((longlong)local_50 - (ulonglong)(uVar10 >> 3));
      local_60 = *local_50;
    }
    bVar22 = false;
    puVar16 = unaff_RDI;
    puVar19 = local_50;
    uVar21 = local_60;
    uVar17 = local_58;
    do {
      puVar18 = puVar16;
      if (puVar19 < local_40) {
        if (local_48 == puVar19) {
          uVar9 = local_60;
          uVar10 = local_58;
          puVar20 = local_50;
          if (bVar22) {
            local_50 = local_48;
            uVar9 = uVar21;
            uVar10 = uVar17;
            puVar20 = local_50;
          }
          break;
        }
        puVar20 = (ulonglong *)((longlong)puVar19 - (ulonglong)(uVar17 >> 3));
        if (puVar20 < local_48) {
          uVar10 = (int)puVar19 - iVar4;
          puVar20 = (ulonglong *)((longlong)puVar19 - (ulonglong)uVar10);
          uVar9 = *puVar20;
          uVar10 = uVar17 + uVar10 * -8;
          break;
        }
        uVar10 = uVar17 + (uVar17 >> 3) * -8;
        uVar21 = *puVar20;
      }
      else {
        uVar10 = uVar17 & 7;
        puVar20 = (ulonglong *)((longlong)puVar19 - (ulonglong)(uVar17 >> 3));
        uVar21 = *puVar20;
      }
      bVar22 = puVar16 < unaff_RDI + unaff_RSI + -3;
      uVar9 = uVar21;
      if (!bVar22) break;
      puVar3 = (ushort *)(lVar12 + uVar13 * 4);
      puVar18 = puVar16 + 4;
      bVar6 = *(byte *)((longlong)puVar3 + 3);
      iVar14 = uVar10 + bVar6;
      uVar7 = *puVar3;
      puVar2 = (ushort *)(lVar12 + uVar11 * 4);
      *puVar16 = (char)puVar3[1];
      bVar5 = *(byte *)((longlong)puVar2 + 3);
      iVar15 = iVar14 + (uint)bVar5;
      uVar8 = *puVar2;
      puVar3 = (ushort *)
               (lVar12 + ((uVar21 >> (-(char)iVar14 & 0x3fU) & ~(-1L << (bVar6 & 0x3f))) +
                         (ulonglong)uVar7) * 4);
      puVar16[1] = (char)puVar2[1];
      bVar6 = *(byte *)((longlong)puVar3 + 3);
      iVar14 = iVar15 + (uint)bVar6;
      uVar7 = *puVar3;
      puVar2 = (ushort *)
               (lVar12 + ((uVar21 >> (-(char)iVar15 & 0x3fU) & ~(-1L << (bVar5 & 0x3f))) +
                         (ulonglong)uVar8) * 4);
      puVar16[2] = (char)puVar3[1];
      bVar5 = *(byte *)((longlong)puVar2 + 3);
      uVar13 = (uVar21 >> (-(char)iVar14 & 0x3fU) & ~(-1L << (bVar6 & 0x3f))) + (ulonglong)uVar7;
      uVar17 = iVar14 + (uint)bVar5;
      uVar7 = *puVar2;
      puVar16[3] = (char)puVar2[1];
      uVar11 = (uVar21 >> (-(char)uVar17 & 0x3fU) & ~(-1L << (bVar5 & 0x3f))) + (ulonglong)uVar7;
      puVar16 = puVar18;
      puVar19 = puVar20;
      uVar10 = uVar17;
    } while (uVar17 < 0x41);
  }
LAB_00e72966:
  local_50 = puVar20;
  local_58 = uVar10;
  local_60 = uVar9;
  if (puVar18 <= unaff_RDI + unaff_RSI + -2) {
    puVar16 = puVar18;
    do {
      puVar3 = (ushort *)(lVar12 + uVar13 * 4);
      bVar6 = *(byte *)((longlong)puVar3 + 3);
      local_58 = local_58 + bVar6;
      uVar7 = *puVar3;
      *puVar16 = (char)puVar3[1];
      uVar13 = (local_60 >> (-(char)local_58 & 0x3fU) & ~(-1L << (bVar6 & 0x3f))) + (ulonglong)uVar7
      ;
      if (0x40 < local_58) {
        puVar18 = puVar16 + 2;
        puVar16[1] = *(undefined1 *)(param_4 + 0x206 + uVar11 * 4);
        goto LAB_00e72ae2;
      }
      if (local_50 < local_40) {
        puVar20 = local_48;
        uVar10 = local_58;
        if (local_48 != local_50) {
          uVar10 = local_58 >> 3;
          puVar20 = (ulonglong *)((longlong)local_50 - (ulonglong)uVar10);
          if (puVar20 < local_48) {
            uVar10 = (uint)((longlong)local_50 - (longlong)local_48);
            puVar20 = (ulonglong *)
                      ((longlong)local_50 - ((longlong)local_50 - (longlong)local_48 & 0xffffffffU))
            ;
          }
          local_60 = *puVar20;
          uVar10 = local_58 + uVar10 * -8;
        }
      }
      else {
        uVar10 = local_58 & 7;
        puVar20 = (ulonglong *)((longlong)local_50 - (ulonglong)(local_58 >> 3));
        local_60 = *puVar20;
      }
      if (puVar16 ==
          puVar18 + ((ulonglong)(unaff_RDI + ((unaff_RSI + -1) - (longlong)puVar18)) &
                    0xfffffffffffffffe)) {
        return 0xffffffffffffffba;
      }
      puVar3 = (ushort *)(lVar12 + uVar11 * 4);
      uVar10 = uVar10 + *(byte *)((longlong)puVar3 + 3);
      uVar11 = (local_60 >> (-(char)uVar10 & 0x3fU) &
               ~(-1L << (*(byte *)((longlong)puVar3 + 3) & 0x3f))) + (ulonglong)*puVar3;
      puVar1 = puVar16 + 2;
      puVar16[1] = (char)puVar3[1];
      if (0x40 < uVar10) {
        puVar18 = puVar16 + 3;
        puVar16[2] = *(undefined1 *)(param_4 + 0x206 + uVar13 * 4);
        goto LAB_00e72ae2;
      }
      if (puVar20 < local_40) {
        local_50 = local_48;
        local_58 = uVar10;
        if (local_48 != puVar20) {
          uVar17 = uVar10 >> 3;
          local_50 = (ulonglong *)((longlong)puVar20 - (ulonglong)uVar17);
          if (local_50 < local_48) {
            uVar17 = (uint)((longlong)puVar20 - (longlong)local_48);
            local_50 = (ulonglong *)
                       ((longlong)puVar20 - ((longlong)puVar20 - (longlong)local_48 & 0xffffffffU));
          }
          local_60 = *local_50;
          local_58 = uVar10 + uVar17 * -8;
        }
      }
      else {
        local_58 = uVar10 & 7;
        local_50 = (ulonglong *)((longlong)puVar20 - (ulonglong)(uVar10 >> 3));
        local_60 = *local_50;
      }
      puVar16 = puVar1;
    } while (puVar1 <= unaff_RDI + unaff_RSI + -2);
  }
  return 0xffffffffffffffba;
}



ulonglong FUN_00e73100(int *param_1,undefined8 *param_2,uint *param_3,byte *param_4)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong unaff_RSI;
  uint uVar7;
  longlong unaff_RDI;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong local_res8;
  undefined8 local_res10;
  
  if (local_res8 == 0) {
    return 0xffffffffffffffb8;
  }
  uVar4 = (ulonglong)*param_4;
  if (uVar4 < 0x80) {
    uVar9 = uVar4 + 1;
    if (local_res8 < uVar9) {
      return 0xffffffffffffffb8;
    }
    uVar5 = FUN_00e72580(uVar4,param_4 + 1,6,local_res10);
    if (0xffffffffffffff88 < uVar5) {
      return uVar5;
    }
    *param_2 = 0;
    *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
    puVar8 = (undefined8 *)((ulonglong)(param_2 + 1) & 0xfffffffffffffff8);
    for (uVar4 = (ulonglong)
                 (((int)param_2 - (int)(undefined8 *)((ulonglong)(param_2 + 1) & 0xfffffffffffffff8)
                  ) + 0x34U >> 3); uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    if (uVar5 == 0) {
      return 0xffffffffffffffec;
    }
  }
  else {
    uVar5 = uVar4 - 0x7f;
    uVar9 = (uVar4 - 0x7e >> 1) + 1;
    if (local_res8 < uVar9) {
      return 0xffffffffffffffb8;
    }
    if (unaff_RSI <= uVar5) {
      return 0xffffffffffffffec;
    }
    uVar4 = 0;
    do {
      *(byte *)(unaff_RDI + uVar4) = param_4[((uint)(uVar4 >> 1) & 0x7fffffff) + 1] >> 4;
      *(byte *)(unaff_RDI + 1 + uVar4) = param_4[((uint)(uVar4 >> 1) & 0x7fffffff) + 1] & 0xf;
      uVar4 = uVar4 + 2;
    } while (uVar4 < uVar5);
    *param_2 = 0;
    *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
    puVar8 = (undefined8 *)((ulonglong)(param_2 + 1) & 0xfffffffffffffff8);
    for (uVar4 = (ulonglong)
                 (((int)param_2 - (int)(undefined8 *)((ulonglong)(param_2 + 1) & 0xfffffffffffffff8)
                  ) + 0x34U >> 3); uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
  }
  uVar4 = 0;
  uVar7 = 0;
  do {
    bVar2 = *(byte *)(uVar4 + unaff_RDI);
    if (0xc < bVar2) {
      return 0xffffffffffffffec;
    }
    piVar1 = (int *)((longlong)param_2 + (ulonglong)bVar2 * 4);
    *piVar1 = *piVar1 + 1;
    uVar7 = uVar7 + ((1 << (*(byte *)(uVar4 + unaff_RDI) & 0x1f)) >> 1);
    uVar4 = (ulonglong)((int)uVar4 + 1);
  } while (uVar4 < uVar5);
  if (uVar7 != 0) {
    iVar3 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    uVar6 = iVar3 + 1;
    if (uVar6 < 0xd) {
      *param_3 = uVar6;
      uVar7 = (1 << ((byte)uVar6 & 0x1f)) - uVar7;
      iVar3 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      if (uVar7 == 1 << ((byte)iVar3 & 0x1f)) {
        *(char *)(unaff_RDI + uVar5) = (char)(iVar3 + 1U);
        piVar1 = (int *)((longlong)param_2 + (ulonglong)(iVar3 + 1U) * 4);
        *piVar1 = *piVar1 + 1;
        if ((1 < *(uint *)((longlong)param_2 + 4)) && ((*(uint *)((longlong)param_2 + 4) & 1) == 0))
        {
          *param_1 = (int)uVar5 + 1;
          return uVar9;
        }
      }
    }
  }
  return 0xffffffffffffffec;
}



ulonglong FUN_00e732f0(undefined8 param_1,longlong param_2,undefined8 param_3,int param_4)

{
  ulonglong uVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  undefined *puVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  sbyte sVar15;
  sbyte sVar16;
  int iVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  uint uVar27;
  int iVar28;
  longlong lVar29;
  ulonglong uVar30;
  undefined8 *unaff_RSI;
  ulonglong *puVar31;
  undefined8 *puVar32;
  longlong unaff_RDI;
  undefined8 *puVar33;
  undefined8 *puVar34;
  undefined8 *puVar35;
  longlong lVar36;
  longlong lVar37;
  ulonglong uVar38;
  undefined8 *local_170;
  ulonglong local_158;
  ulonglong local_140;
  int local_104;
  undefined8 *local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  uint local_a0 [2];
  ulonglong *local_98;
  ulonglong *local_90;
  ulonglong *local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  ulonglong local_50 [4];
  
  uVar1 = (longlong)unaff_RSI + param_2;
  local_170 = *(undefined8 **)(&DAT_00007680 + unaff_RDI);
  local_f8 = *(undefined8 **)(&DAT_00007598 + unaff_RDI);
  puVar12 = *(undefined8 **)(&DAT_000074c8 + unaff_RDI);
  lVar29 = *(longlong *)(&DAT_000074d0 + unaff_RDI);
  puVar13 = *(undefined1 **)(&DAT_000074d8 + unaff_RDI);
  puVar35 = unaff_RSI;
  if (param_4 != 0) {
    uVar21 = (ulonglong)*(uint *)(&DAT_0000683c + unaff_RDI);
    *(undefined4 *)(&DAT_0000752c + unaff_RDI) = 1;
    uVar38 = (ulonglong)*(uint *)(&DAT_00006840 + unaff_RDI);
    local_50[2] = (ulonglong)*(uint *)(&DAT_00006844 + unaff_RDI);
    local_50[0] = uVar21;
    local_50[1] = uVar38;
    uVar18 = FUN_00e6a940(param_1,param_3);
    if (0xffffffffffffff88 < uVar18) {
      return 0xffffffffffffffec;
    }
    FUN_00e6bba0();
    FUN_00e6bba0();
    FUN_00e6bba0();
    puVar2 = (ushort *)(local_78 + local_80 * 8);
    bVar6 = (byte)puVar2[1];
    uVar24 = *(uint *)(puVar2 + 2);
    uVar18 = (ulonglong)uVar24;
    puVar3 = (ushort *)(local_58 + local_60 * 8);
    bVar7 = (byte)puVar3[1];
    local_140 = (ulonglong)*(uint *)(puVar3 + 2);
    puVar4 = (ushort *)(local_68 + local_70 * 8);
    bVar8 = (byte)puVar4[1];
    bVar9 = *(byte *)((longlong)puVar4 + 3);
    bVar10 = *(byte *)((longlong)puVar2 + 3);
    bVar11 = *(byte *)((longlong)puVar3 + 3);
    if (bVar8 < 2) {
      uVar23 = (ulonglong)local_a0[0];
      if (bVar8 == 1) {
        uVar30 = uVar23 & 0x3f;
        uVar23 = (ulonglong)(local_a0[0] + 1);
        lVar20 = (ulonglong)(*(uint *)(puVar4 + 2) + (uint)(uVar24 == 0)) -
                 ((longlong)(local_a8 << uVar30) >> 0x3f);
        if (lVar20 == 3) {
          uVar30 = (ulonglong)(uVar21 - 1 == 0) + (uVar21 - 1);
        }
        else {
          uVar30 = local_50[lVar20] + (ulonglong)(local_50[lVar20] == 0);
          if (lVar20 == 1) goto LAB_00e7352a;
        }
        local_50[2] = uVar38;
      }
      else {
        uVar30 = local_50[uVar24 == 0];
        uVar21 = *(ulonglong *)(local_a0 + (0xb - (ulonglong)(uVar24 == 0)) * 2);
      }
    }
    else {
      local_50[2] = uVar38;
      uVar23 = (ulonglong)(local_a0[0] + bVar8);
      uVar30 = (ulonglong)*(uint *)(puVar4 + 2) +
               ((local_a8 << ((ulonglong)local_a0[0] & 0x3f)) >> ((ulonglong)-(uint)bVar8 & 0x3f));
    }
LAB_00e7352a:
    local_50[1] = uVar21;
    local_50[0] = uVar30;
    if (bVar7 != 0) {
      uVar21 = uVar23 & 0x3f;
      uVar23 = (ulonglong)((int)uVar23 + (uint)bVar7);
      local_140 = local_140 + ((local_a8 << uVar21) >> ((ulonglong)-(uint)bVar7 & 0x3f));
    }
    if ((0x1e < (byte)(bVar6 + bVar7 + bVar8)) && (uVar24 = (uint)uVar23, uVar24 < 0x41)) {
      if (local_98 < local_88) {
        if (local_98 != local_90) {
          uVar27 = (uint)(uVar23 >> 3);
          puVar31 = (ulonglong *)((longlong)local_98 - (uVar23 >> 3));
          if (puVar31 < local_90) {
            uVar27 = (int)local_98 - (int)local_90;
            puVar31 = (ulonglong *)((longlong)local_98 - (ulonglong)uVar27);
          }
          local_a8 = *puVar31;
          uVar23 = (ulonglong)(uVar24 + uVar27 * -8);
          local_98 = puVar31;
        }
      }
      else {
        local_98 = (ulonglong *)((longlong)local_98 - (uVar23 >> 3));
        local_a8 = *local_98;
        uVar23 = (ulonglong)(uVar24 & 7);
      }
    }
    iVar28 = (int)uVar23;
    if (bVar6 != 0) {
      iVar28 = iVar28 + (uint)bVar6;
      uVar18 = uVar18 + ((local_a8 << (uVar23 & 0x3f)) >> ((ulonglong)-(uint)bVar6 & 0x3f));
    }
    iVar17 = iVar28 + (uint)bVar10 + (uint)bVar11;
    sVar15 = (bVar10 < 0x41) * ('@' - bVar10);
    local_80 = (((local_a8 >> ((ulonglong)-(iVar28 + (uint)bVar10) & 0x3f)) << sVar15) >> sVar15) +
               (ulonglong)*puVar2;
    local_a0[0] = iVar17 + (uint)bVar9;
    sVar15 = (bVar11 < 0x41) * ('@' - bVar11);
    sVar16 = (bVar9 < 0x41) * ('@' - bVar9);
    local_60 = (((local_a8 >> ((ulonglong)(uint)-iVar17 & 0x3f)) << sVar15) >> sVar15) +
               (ulonglong)*puVar3;
    local_70 = (((local_a8 >> ((ulonglong)-local_a0[0] & 0x3f)) << sVar16) >> sVar16) +
               (ulonglong)*puVar4;
    puVar33 = *(undefined8 **)(&DAT_00007680 + unaff_RDI);
    puVar34 = (undefined8 *)((longlong)local_f8 + uVar18);
    local_158._0_4_ = param_4;
    if (puVar34 <= puVar33) {
      do {
        puVar33 = (undefined8 *)((longlong)puVar35 + uVar18);
        uVar21 = local_140 + uVar18;
        puVar5 = (undefined *)((longlong)local_f8 + (uVar18 - 0x20));
        puVar19 = (undefined8 *)((longlong)puVar33 - uVar30);
        local_50[0] = uVar30;
        if ((puVar5 < (undefined *)((longlong)puVar35 + uVar21)) || (local_170 < puVar34)) {
          local_f0 = uVar18;
          local_e8 = local_140;
          local_e0 = uVar30;
          uVar21 = FUN_00e6aa80(&local_f8,puVar5,local_170,puVar12,puVar13);
        }
        else {
          uVar14 = local_f8[1];
          *puVar35 = *local_f8;
          puVar35[1] = uVar14;
          if (0x10 < uVar18) {
            uVar14 = local_f8[3];
            puVar35[2] = local_f8[2];
            puVar35[3] = uVar14;
            if (0x10 < (longlong)(uVar18 - 0x10)) {
              puVar25 = puVar35 + 4;
              do {
                uVar14 = local_f8[5];
                puVar32 = puVar25 + 4;
                *puVar25 = local_f8[4];
                puVar25[1] = uVar14;
                uVar14 = local_f8[7];
                puVar25[2] = local_f8[6];
                puVar25[3] = uVar14;
                puVar25 = puVar32;
                local_f8 = local_f8 + 4;
              } while (puVar32 < puVar33);
            }
          }
          local_f8 = puVar34;
          if ((ulonglong)((longlong)puVar33 - (longlong)puVar12) < uVar30) {
            if ((ulonglong)((longlong)puVar33 - lVar29) < uVar30) {
              return 0xffffffffffffffec;
            }
            if ((undefined1 *)
                ((longlong)puVar19 + (longlong)(puVar13 + (local_140 - (longlong)puVar12))) <=
                puVar13) {
              FUN_00e86250(puVar13,local_140);
              goto LAB_00e73764;
            }
            lVar36 = (longlong)puVar12 - (longlong)puVar19;
            local_140 = local_140 - lVar36;
            lVar20 = FUN_00e86250(puVar13,lVar36);
            puVar33 = (undefined8 *)(lVar20 + lVar36);
            puVar19 = puVar12;
          }
          if (uVar30 < 0x10) {
            if (uVar30 < 8) {
              *(undefined1 *)puVar33 = *(undefined1 *)puVar19;
              *(undefined1 *)((longlong)puVar33 + 1) = *(undefined1 *)((longlong)puVar19 + 1);
              *(undefined1 *)((longlong)puVar33 + 2) = *(undefined1 *)((longlong)puVar19 + 2);
              *(undefined1 *)((longlong)puVar33 + 3) = *(undefined1 *)((longlong)puVar19 + 3);
              uVar24 = *(uint *)(&DAT_00e957e0 + uVar30 * 4);
              *(undefined4 *)((longlong)puVar33 + 4) =
                   *(undefined4 *)((longlong)puVar19 + (ulonglong)uVar24);
              puVar19 = (undefined8 *)
                        ((longlong)((longlong)puVar19 + (ulonglong)uVar24) -
                        (longlong)*(int *)(&DAT_00e95800 + uVar30 * 4));
            }
            else {
              *puVar33 = *puVar19;
            }
            if (8 < local_140) {
              if ((longlong)puVar33 - (longlong)puVar19 < 0x10) {
                puVar34 = puVar33 + 1;
                do {
                  puVar19 = puVar19 + 1;
                  puVar25 = puVar34 + 1;
                  *puVar34 = *puVar19;
                  puVar34 = puVar25;
                } while (puVar25 < (undefined8 *)((longlong)puVar33 + local_140));
              }
              else {
                uVar14 = puVar19[2];
                puVar33[1] = puVar19[1];
                puVar33[2] = uVar14;
                if (0x18 < (longlong)local_140) {
                  puVar34 = puVar19 + 3;
                  puVar19 = puVar33 + 3;
                  do {
                    uVar14 = puVar34[1];
                    puVar25 = puVar19 + 4;
                    *puVar19 = *puVar34;
                    puVar19[1] = uVar14;
                    uVar14 = puVar34[3];
                    puVar19[2] = puVar34[2];
                    puVar19[3] = uVar14;
                    puVar34 = puVar34 + 4;
                    puVar19 = puVar25;
                  } while (puVar25 < (undefined8 *)((longlong)puVar33 + local_140));
                }
              }
            }
          }
          else {
            uVar14 = puVar19[1];
            *puVar33 = *puVar19;
            puVar33[1] = uVar14;
            if (0x10 < (longlong)local_140) {
              puVar34 = puVar19 + 2;
              puVar19 = puVar33 + 2;
              do {
                uVar14 = puVar34[1];
                puVar25 = puVar19 + 4;
                *puVar19 = *puVar34;
                puVar19[1] = uVar14;
                uVar14 = puVar34[3];
                puVar19[2] = puVar34[2];
                puVar19[3] = uVar14;
                puVar34 = puVar34 + 4;
                puVar19 = puVar25;
              } while (puVar25 < (undefined8 *)(local_140 + (longlong)puVar33));
            }
          }
        }
LAB_00e73764:
        if (0xffffffffffffff88 < uVar21) {
          return uVar21;
        }
        puVar35 = (undefined8 *)((longlong)puVar35 + uVar21);
        local_158._0_4_ = (int)local_158 + -1;
        uVar21 = (ulonglong)local_a0[0];
        if ((int)local_158 == 0) goto LAB_00e73b31;
        if (local_a0[0] < 0x41) {
          if (local_98 < local_88) {
            if (local_98 != local_90) {
              uVar24 = local_a0[0] >> 3;
              puVar31 = (ulonglong *)((longlong)local_98 - (ulonglong)uVar24);
              if (puVar31 < local_90) {
                uVar24 = (int)local_98 - (int)local_90;
                puVar31 = (ulonglong *)((longlong)local_98 - (ulonglong)uVar24);
              }
              local_a8 = *puVar31;
              uVar21 = (ulonglong)(local_a0[0] + uVar24 * -8);
              local_98 = puVar31;
            }
          }
          else {
            uVar21 = (ulonglong)(local_a0[0] & 7);
            local_98 = (ulonglong *)((longlong)local_98 - (ulonglong)(local_a0[0] >> 3));
            local_a8 = *local_98;
          }
        }
        puVar2 = (ushort *)(local_78 + local_80 * 8);
        uVar24 = *(uint *)(puVar2 + 2);
        uVar18 = (ulonglong)uVar24;
        puVar3 = (ushort *)(local_58 + local_60 * 8);
        bVar6 = (byte)puVar3[1];
        puVar4 = (ushort *)(local_68 + local_70 * 8);
        bVar7 = (byte)puVar2[1];
        local_140 = (ulonglong)*(uint *)(puVar3 + 2);
        bVar8 = (byte)puVar4[1];
        bVar9 = *(byte *)((longlong)puVar2 + 3);
        bVar10 = *(byte *)((longlong)puVar3 + 3);
        bVar11 = *(byte *)((longlong)puVar4 + 3);
        if (bVar8 < 2) {
          if (bVar8 == 1) {
            uVar38 = uVar21 & 0x3f;
            uVar21 = (ulonglong)((int)uVar21 + 1);
            lVar20 = (ulonglong)(*(uint *)(puVar4 + 2) + (uint)(uVar24 == 0)) -
                     ((longlong)(local_a8 << uVar38) >> 0x3f);
            if (lVar20 == 3) {
              uVar30 = (ulonglong)(local_50[0] - 1 == 0) + (local_50[0] - 1);
            }
            else {
              uVar30 = local_50[lVar20] + (ulonglong)(local_50[lVar20] == 0);
              if (lVar20 == 1) goto LAB_00e738b8;
            }
            local_50[2] = local_50[1];
          }
          else {
            uVar30 = local_50[uVar24 == 0];
            local_50[0] = *(ulonglong *)(local_a0 + (0xb - (ulonglong)(uVar24 == 0)) * 2);
          }
        }
        else {
          uVar38 = uVar21 & 0x3f;
          uVar21 = (ulonglong)((int)uVar21 + (uint)bVar8);
          local_50[2] = local_50[1];
          uVar30 = (ulonglong)*(uint *)(puVar4 + 2) +
                   ((local_a8 << uVar38) >> ((ulonglong)-(uint)bVar8 & 0x3f));
        }
LAB_00e738b8:
        local_50[1] = local_50[0];
        local_50[0] = uVar30;
        if (bVar6 != 0) {
          uVar38 = uVar21 & 0x3f;
          uVar21 = (ulonglong)((int)uVar21 + (uint)bVar6);
          local_140 = local_140 + ((local_a8 << uVar38) >> ((ulonglong)-(uint)bVar6 & 0x3f));
        }
        if ((0x1e < (byte)(bVar7 + bVar6 + bVar8)) && (uVar24 = (uint)uVar21, uVar24 < 0x41)) {
          if (local_98 < local_88) {
            if (local_98 != local_90) {
              uVar27 = (uint)(uVar21 >> 3);
              puVar31 = (ulonglong *)((longlong)local_98 - (uVar21 >> 3));
              if (puVar31 < local_90) {
                uVar27 = (int)local_98 - (int)local_90;
                puVar31 = (ulonglong *)((longlong)local_98 - (ulonglong)uVar27);
              }
              local_a8 = *puVar31;
              uVar21 = (ulonglong)(uVar24 + uVar27 * -8);
              local_98 = puVar31;
            }
          }
          else {
            local_98 = (ulonglong *)((longlong)local_98 - (uVar21 >> 3));
            local_a8 = *local_98;
            uVar21 = (ulonglong)(uVar24 & 7);
          }
        }
        iVar28 = (int)uVar21;
        if (bVar7 != 0) {
          iVar28 = iVar28 + (uint)bVar7;
          uVar18 = uVar18 + ((local_a8 << (uVar21 & 0x3f)) >> ((ulonglong)-(uint)bVar7 & 0x3f));
        }
        iVar17 = iVar28 + (uint)bVar9 + (uint)bVar10;
        sVar15 = (bVar9 < 0x41) * ('@' - bVar9);
        local_80 = (((local_a8 >> ((ulonglong)-(iVar28 + (uint)bVar9) & 0x3f)) << sVar15) >> sVar15)
                   + (ulonglong)*puVar2;
        local_a0[0] = iVar17 + (uint)bVar11;
        sVar15 = (bVar11 < 0x41) * ('@' - bVar11);
        sVar16 = (bVar10 < 0x41) * ('@' - bVar10);
        local_60 = (((local_a8 >> ((ulonglong)(uint)-iVar17 & 0x3f)) << sVar16) >> sVar16) +
                   (ulonglong)*puVar3;
        local_70 = (((local_a8 >> ((ulonglong)-local_a0[0] & 0x3f)) << sVar15) >> sVar15) +
                   (ulonglong)*puVar4;
        puVar34 = (undefined8 *)((longlong)local_f8 + uVar18);
        puVar33 = *(undefined8 **)(&DAT_00007680 + unaff_RDI);
      } while (puVar34 <= puVar33);
    }
    if ((int)local_158 < 1) {
      return 0xffffffffffffffec;
    }
    uVar21 = (longlong)puVar33 - (longlong)local_f8;
    local_50[0] = uVar30;
    if (uVar21 != 0) {
      if (uVar1 - (longlong)puVar35 < uVar21) {
        return 0xffffffffffffffba;
      }
      uVar18 = uVar18 - uVar21;
      puVar35 = (undefined8 *)((longlong)puVar35 + uVar21);
      FUN_00e6a4e0(puVar34,uVar21);
    }
    puVar34 = (undefined8 *)((longlong)puVar35 + uVar18);
    uVar21 = uVar18 + local_140;
    local_f8 = (undefined8 *)(&DAT_0000768c + unaff_RDI);
    *(undefined4 *)(&DAT_00007688 + unaff_RDI) = 0;
    local_170 = (undefined8 *)(&UNK_0001768c + unaff_RDI);
    puVar19 = (undefined8 *)((longlong)local_f8 + uVar18);
    puVar33 = (undefined8 *)((longlong)puVar34 - uVar30);
    if ((uVar1 - 0x20 < (longlong)puVar35 + uVar21) || (local_170 < puVar19)) {
      local_d0 = local_140;
      local_d8 = uVar18;
      local_c8 = uVar30;
      uVar21 = FUN_00e6aba0(local_170,&local_f8,puVar12,lVar29);
    }
    else {
      uVar14 = *(undefined8 *)(&DAT_00007694 + unaff_RDI);
      *puVar35 = *(undefined8 *)(&DAT_0000768c + unaff_RDI);
      puVar35[1] = uVar14;
      if (0x10 < uVar18) {
        uVar14 = *(undefined8 *)(&DAT_000076a4 + unaff_RDI);
        puVar35[2] = *(undefined8 *)(&DAT_0000769c + unaff_RDI);
        puVar35[3] = uVar14;
        if (0x10 < (longlong)(uVar18 - 0x10)) {
          puVar25 = puVar35 + 4;
          puVar32 = (undefined8 *)(&DAT_000076ac + unaff_RDI);
          do {
            uVar14 = puVar32[1];
            puVar26 = puVar25 + 4;
            *puVar25 = *puVar32;
            puVar25[1] = uVar14;
            uVar14 = puVar32[3];
            puVar25[2] = puVar32[2];
            puVar25[3] = uVar14;
            puVar25 = puVar26;
            puVar32 = puVar32 + 4;
          } while (puVar26 < puVar34);
        }
      }
      local_f8 = puVar19;
      if ((ulonglong)((longlong)puVar34 - (longlong)puVar12) < uVar30) {
        if ((ulonglong)((longlong)puVar34 - lVar29) < uVar30) {
          return 0xffffffffffffffec;
        }
        if ((undefined1 *)
            ((longlong)puVar33 + (longlong)(puVar13 + (local_140 - (longlong)puVar12))) <= puVar13)
        {
          FUN_00e86250(puVar13,local_140);
          goto LAB_00e73b0c;
        }
        lVar36 = (longlong)puVar12 - (longlong)puVar33;
        lVar20 = FUN_00e86250(puVar13,lVar36);
        local_140 = local_140 - lVar36;
        puVar34 = (undefined8 *)(lVar20 + lVar36);
        puVar33 = puVar12;
      }
      if (uVar30 < 0x10) {
        if (uVar30 < 8) {
          *(undefined1 *)puVar34 = *(undefined1 *)puVar33;
          *(undefined1 *)((longlong)puVar34 + 1) = *(undefined1 *)((longlong)puVar33 + 1);
          *(undefined1 *)((longlong)puVar34 + 2) = *(undefined1 *)((longlong)puVar33 + 2);
          *(undefined1 *)((longlong)puVar34 + 3) = *(undefined1 *)((longlong)puVar33 + 3);
          uVar24 = *(uint *)(&DAT_00e957e0 + uVar30 * 4);
          *(undefined4 *)((longlong)puVar34 + 4) =
               *(undefined4 *)((longlong)puVar33 + (ulonglong)uVar24);
          puVar33 = (undefined8 *)
                    ((longlong)((longlong)puVar33 + (ulonglong)uVar24) -
                    (longlong)*(int *)(&DAT_00e95800 + uVar30 * 4));
        }
        else {
          *puVar34 = *puVar33;
        }
        if (8 < local_140) {
          if ((longlong)puVar34 - (longlong)puVar33 < 0x10) {
            puVar19 = puVar34 + 1;
            do {
              puVar33 = puVar33 + 1;
              puVar25 = puVar19 + 1;
              *puVar19 = *puVar33;
              puVar19 = puVar25;
            } while (puVar25 < (undefined8 *)((longlong)puVar34 + local_140));
          }
          else {
            uVar14 = puVar33[2];
            puVar34[1] = puVar33[1];
            puVar34[2] = uVar14;
            if (0x18 < (longlong)local_140) {
              puVar33 = puVar33 + 3;
              puVar19 = puVar34 + 3;
              do {
                uVar14 = puVar33[1];
                puVar25 = puVar19 + 4;
                *puVar19 = *puVar33;
                puVar19[1] = uVar14;
                uVar14 = puVar33[3];
                puVar19[2] = puVar33[2];
                puVar19[3] = uVar14;
                puVar33 = puVar33 + 4;
                puVar19 = puVar25;
              } while (puVar25 < (undefined8 *)((longlong)puVar34 + local_140));
            }
          }
        }
      }
      else {
        uVar14 = *puVar33;
        puVar34[1] = puVar33[1];
        *puVar34 = uVar14;
        if (0x10 < (longlong)local_140) {
          puVar33 = puVar33 + 2;
          puVar19 = puVar34 + 2;
          do {
            uVar14 = puVar33[1];
            puVar25 = puVar19 + 4;
            *puVar19 = *puVar33;
            puVar19[1] = uVar14;
            uVar14 = puVar33[3];
            puVar19[2] = puVar33[2];
            puVar19[3] = uVar14;
            puVar33 = puVar33 + 4;
            puVar19 = puVar25;
          } while (puVar25 < (undefined8 *)(local_140 + (longlong)puVar34));
        }
      }
    }
LAB_00e73b0c:
    if (0xffffffffffffff88 < uVar21) {
      return uVar21;
    }
    puVar35 = (undefined8 *)((longlong)puVar35 + uVar21);
    local_104 = (int)local_158 + -1;
    if (local_104 != 0) {
      if (local_a0[0] < 0x41) {
        if (local_98 < local_88) {
          if (local_98 != local_90) {
            uVar24 = local_a0[0] >> 3;
            puVar31 = (ulonglong *)((longlong)local_98 - (ulonglong)uVar24);
            if (puVar31 < local_90) {
              uVar24 = (uint)((longlong)local_98 - (longlong)local_90);
              puVar31 = (ulonglong *)
                        ((longlong)local_98 -
                        ((longlong)local_98 - (longlong)local_90 & 0xffffffffU));
            }
            local_a8 = *puVar31;
            local_a0[0] = local_a0[0] + uVar24 * -8;
            local_98 = puVar31;
          }
        }
        else {
          local_98 = (ulonglong *)((longlong)local_98 - (ulonglong)(local_a0[0] >> 3));
          local_a8 = *local_98;
          local_a0[0] = local_a0[0] & 7;
        }
      }
      uVar21 = (ulonglong)local_a0[0];
      lVar36 = local_70;
      lVar20 = local_80;
      lVar37 = local_60;
LAB_00e740f0:
      puVar2 = (ushort *)(local_78 + lVar20 * 8);
      bVar6 = (byte)puVar2[1];
      puVar3 = (ushort *)(local_58 + lVar37 * 8);
      bVar7 = (byte)puVar3[1];
      uVar38 = (ulonglong)*(uint *)(puVar3 + 2);
      puVar4 = (ushort *)(local_68 + lVar36 * 8);
      uVar24 = *(uint *)(puVar2 + 2);
      uVar18 = (ulonglong)uVar24;
      bVar8 = (byte)puVar4[1];
      bVar9 = *(byte *)((longlong)puVar2 + 3);
      bVar10 = *(byte *)((longlong)puVar3 + 3);
      bVar11 = *(byte *)((longlong)puVar4 + 3);
      if (bVar8 < 2) {
        if (bVar8 == 1) {
          uVar23 = uVar21 & 0x3f;
          uVar21 = (ulonglong)((int)uVar21 + 1);
          lVar20 = (ulonglong)(*(uint *)(puVar4 + 2) + (uint)(uVar24 == 0)) -
                   ((longlong)(local_a8 << uVar23) >> 0x3f);
          if (lVar20 == 3) {
            local_158 = (local_50[0] - 1) + (ulonglong)(local_50[0] - 1 == 0);
          }
          else {
            local_158 = local_50[lVar20] + (ulonglong)(local_50[lVar20] == 0);
            if (lVar20 == 1) goto LAB_00e74191;
          }
          local_50[2] = local_50[1];
        }
        else {
          local_158 = local_50[uVar24 == 0];
          local_50[0] = *(ulonglong *)(local_a0 + (0xb - (ulonglong)(uVar24 == 0)) * 2);
        }
      }
      else {
        uVar23 = uVar21 & 0x3f;
        uVar21 = (ulonglong)((int)uVar21 + (uint)bVar8);
        local_158 = (ulonglong)*(uint *)(puVar4 + 2) +
                    ((local_a8 << uVar23) >> ((ulonglong)-(uint)bVar8 & 0x3f));
        local_50[2] = local_50[1];
      }
LAB_00e74191:
      local_50[1] = local_50[0];
      local_50[0] = local_158;
      if (bVar7 != 0) {
        uVar23 = uVar21 & 0x3f;
        uVar21 = (ulonglong)((int)uVar21 + (uint)bVar7);
        uVar38 = uVar38 + ((local_a8 << uVar23) >> ((ulonglong)-(uint)bVar7 & 0x3f));
      }
      if ((0x1e < (byte)(bVar6 + bVar7 + bVar8)) && (uVar24 = (uint)uVar21, uVar24 < 0x41)) {
        if (local_98 < local_88) {
          if (local_98 != local_90) {
            iVar28 = (int)(uVar21 >> 3);
            puVar31 = (ulonglong *)((longlong)local_98 - (uVar21 >> 3));
            if (puVar31 < local_90) {
              iVar28 = (int)((longlong)local_98 - (longlong)local_90);
              puVar31 = (ulonglong *)
                        ((longlong)local_98 -
                        ((longlong)local_98 - (longlong)local_90 & 0xffffffffU));
            }
            local_a8 = *puVar31;
            uVar21 = (ulonglong)(uVar24 + iVar28 * -8);
            local_98 = puVar31;
          }
        }
        else {
          local_98 = (ulonglong *)((longlong)local_98 - (uVar21 >> 3));
          local_a8 = *local_98;
          uVar21 = (ulonglong)(uVar24 & 7);
        }
      }
      iVar28 = (int)uVar21;
      if (bVar6 != 0) {
        iVar28 = iVar28 + (uint)bVar6;
        uVar18 = uVar18 + ((local_a8 << (uVar21 & 0x3f)) >> ((ulonglong)-(uint)bVar6 & 0x3f));
      }
      iVar17 = iVar28 + (uint)bVar9 + (uint)bVar10;
      puVar34 = (undefined8 *)((longlong)local_f8 + uVar18);
      sVar15 = (bVar9 < 0x41) * ('@' - bVar9);
      lVar20 = (((local_a8 >> ((ulonglong)-(iVar28 + (uint)bVar9) & 0x3f)) << sVar15) >> sVar15) +
               (ulonglong)*puVar2;
      uVar24 = iVar17 + (uint)bVar11;
      uVar21 = (ulonglong)uVar24;
      puVar33 = (undefined8 *)((longlong)puVar35 + uVar18);
      sVar15 = (bVar10 < 0x41) * ('@' - bVar10);
      lVar37 = (((local_a8 >> ((ulonglong)(uint)-iVar17 & 0x3f)) << sVar15) >> sVar15) +
               (ulonglong)*puVar3;
      sVar15 = (bVar11 < 0x41) * ('@' - bVar11);
      uVar23 = uVar18 + uVar38;
      lVar36 = (((local_a8 >> ((ulonglong)-uVar24 & 0x3f)) << sVar15) >> sVar15) +
               (ulonglong)*puVar4;
      puVar19 = (undefined8 *)((longlong)puVar33 - local_158);
      local_a0[0] = uVar24;
      local_80 = lVar20;
      local_70 = lVar36;
      local_60 = lVar37;
      if ((uVar1 - 0x20 < (longlong)puVar35 + uVar23) || (local_170 < puVar34)) {
        local_b0 = local_158;
        local_c0 = uVar18;
        local_b8 = uVar38;
        uVar23 = FUN_00e6aba0(local_170,&local_f8,puVar12,lVar29);
      }
      else {
        uVar14 = local_f8[1];
        *puVar35 = *local_f8;
        puVar35[1] = uVar14;
        if (0x10 < uVar18) {
          uVar14 = local_f8[3];
          puVar35[2] = local_f8[2];
          puVar35[3] = uVar14;
          if (0x10 < (longlong)(uVar18 - 0x10)) {
            puVar25 = puVar35 + 4;
            do {
              uVar14 = local_f8[5];
              puVar32 = puVar25 + 4;
              *puVar25 = local_f8[4];
              puVar25[1] = uVar14;
              uVar14 = local_f8[7];
              puVar25[2] = local_f8[6];
              puVar25[3] = uVar14;
              puVar25 = puVar32;
              local_f8 = local_f8 + 4;
            } while (puVar32 < puVar33);
          }
        }
        local_f8 = puVar34;
        if ((ulonglong)((longlong)puVar33 - (longlong)puVar12) < local_158) {
          if ((ulonglong)((longlong)puVar33 - lVar29) < local_158) {
            return 0xffffffffffffffec;
          }
          if ((undefined1 *)((longlong)puVar19 + (longlong)(puVar13 + (uVar38 - (longlong)puVar12)))
              <= puVar13) {
            FUN_00e86250(uVar23,uVar38);
            goto LAB_00e7436c;
          }
          lVar22 = FUN_00e86250();
          puVar33 = (undefined8 *)(lVar22 + ((longlong)puVar12 - (longlong)puVar19));
          uVar38 = uVar38 - ((longlong)puVar12 - (longlong)puVar19);
          puVar19 = puVar12;
        }
        if (local_158 < 0x10) {
          if (local_158 < 8) {
            *(undefined1 *)puVar33 = *(undefined1 *)puVar19;
            *(undefined1 *)((longlong)puVar33 + 1) = *(undefined1 *)((longlong)puVar19 + 1);
            *(undefined1 *)((longlong)puVar33 + 2) = *(undefined1 *)((longlong)puVar19 + 2);
            *(undefined1 *)((longlong)puVar33 + 3) = *(undefined1 *)((longlong)puVar19 + 3);
            uVar27 = *(uint *)(&DAT_00e957e0 + local_158 * 4);
            *(undefined4 *)((longlong)puVar33 + 4) =
                 *(undefined4 *)((ulonglong)uVar27 + (longlong)puVar19);
            puVar19 = (undefined8 *)
                      ((longlong)((ulonglong)uVar27 + (longlong)puVar19) -
                      (longlong)*(int *)(&DAT_00e95800 + local_158 * 4));
          }
          else {
            *puVar33 = *puVar19;
          }
          if (8 < uVar38) {
            if ((longlong)puVar33 - (longlong)puVar19 < 0x10) {
              puVar34 = puVar33 + 1;
              do {
                puVar19 = puVar19 + 1;
                puVar25 = puVar34 + 1;
                *puVar34 = *puVar19;
                puVar34 = puVar25;
              } while (puVar25 < (undefined8 *)((longlong)puVar33 + uVar38));
            }
            else {
              uVar14 = puVar19[2];
              puVar33[1] = puVar19[1];
              puVar33[2] = uVar14;
              if (0x18 < (longlong)uVar38) {
                puVar34 = puVar19 + 3;
                puVar19 = puVar33 + 3;
                do {
                  uVar14 = puVar34[1];
                  puVar25 = puVar19 + 4;
                  *puVar19 = *puVar34;
                  puVar19[1] = uVar14;
                  uVar14 = puVar34[3];
                  puVar19[2] = puVar34[2];
                  puVar19[3] = uVar14;
                  puVar34 = puVar34 + 4;
                  puVar19 = puVar25;
                } while (puVar25 < (undefined8 *)((longlong)puVar33 + uVar38));
              }
            }
          }
        }
        else {
          uVar14 = puVar19[1];
          *puVar33 = *puVar19;
          puVar33[1] = uVar14;
          if (0x10 < (longlong)uVar38) {
            puVar34 = puVar19 + 2;
            puVar19 = puVar33 + 2;
            do {
              uVar14 = puVar34[1];
              puVar25 = puVar19 + 4;
              *puVar19 = *puVar34;
              puVar19[1] = uVar14;
              uVar14 = puVar34[3];
              puVar19[2] = puVar34[2];
              puVar19[3] = uVar14;
              puVar34 = puVar34 + 4;
              puVar19 = puVar25;
            } while (puVar25 < (undefined8 *)(uVar38 + (longlong)puVar33));
          }
        }
      }
LAB_00e7436c:
      if (0xffffffffffffff88 < uVar23) {
        return uVar23;
      }
      puVar35 = (undefined8 *)((longlong)puVar35 + uVar23);
      local_104 = local_104 + -1;
      if (local_104 != 0) {
        if (uVar24 < 0x41) {
          if (local_98 < local_88) {
            if (local_98 != local_90) {
              uVar27 = uVar24 >> 3;
              puVar31 = (ulonglong *)((longlong)local_98 - (ulonglong)uVar27);
              if (puVar31 < local_90) {
                uVar27 = (int)local_98 - (int)local_90;
                puVar31 = (ulonglong *)((longlong)local_98 - (ulonglong)uVar27);
              }
              local_a8 = *puVar31;
              uVar21 = (ulonglong)(uVar24 + uVar27 * -8);
              local_98 = puVar31;
            }
          }
          else {
            uVar21 = (ulonglong)(uVar24 & 7);
            local_98 = (ulonglong *)((longlong)local_98 - (ulonglong)(uVar24 >> 3));
            local_a8 = *local_98;
          }
        }
        goto LAB_00e740f0;
      }
    }
LAB_00e73b31:
    if ((local_a0[0] < 0x41) &&
       (((local_88 <= local_98 || (local_90 != local_98)) || (local_a0[0] != 0x40)))) {
      return 0xffffffffffffffec;
    }
    *(int *)(&DAT_0000683c + unaff_RDI) = (int)local_50[0];
    *(int *)(&DAT_00006840 + unaff_RDI) = (int)local_50[1];
    *(int *)(&DAT_00006844 + unaff_RDI) = (int)local_50[2];
  }
  uVar21 = (longlong)local_170 - (longlong)local_f8;
  if (*(int *)(&DAT_00007688 + unaff_RDI) == 2) {
    if (uVar1 - (longlong)puVar35 < uVar21) {
      return 0xffffffffffffffba;
    }
    if (puVar35 == (undefined8 *)0x0) {
      *(undefined4 *)(&DAT_00007688 + unaff_RDI) = 0;
      if (uVar1 < 0x10000) {
        return 0xffffffffffffffba;
      }
      goto LAB_00e73c22;
    }
    puVar35 = (undefined8 *)((longlong)puVar35 + uVar21);
    FUN_00e86250();
    local_f8 = (undefined8 *)(&DAT_0000768c + unaff_RDI);
    *(undefined4 *)(&DAT_00007688 + unaff_RDI) = 0;
    uVar21 = 0x10000;
    if (uVar1 - (longlong)puVar35 < 0x10000) {
      return 0xffffffffffffffba;
    }
  }
  else {
    if (uVar1 - (longlong)puVar35 < uVar21) {
      return 0xffffffffffffffba;
    }
    if (puVar35 == (undefined8 *)0x0) {
LAB_00e73c22:
      lVar29 = 0;
      goto LAB_00e7341a;
    }
  }
  lVar29 = uVar21 + (longlong)puVar35;
  FUN_00e862a0();
LAB_00e7341a:
  return lVar29 - (longlong)unaff_RSI;
}



ulonglong FUN_00e74ac0(ulonglong param_1,ushort *param_2,undefined4 *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  ushort uVar6;
  undefined4 uVar7;
  char cVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  byte *pbVar14;
  byte bVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  bool bVar19;
  uint uVar20;
  byte *pbVar21;
  byte *pbVar22;
  ulonglong unaff_RSI;
  longlong lVar23;
  int iVar24;
  byte *unaff_RDI;
  longlong lVar25;
  longlong *plVar26;
  byte *pbVar27;
  byte *pbVar28;
  byte *pbVar29;
  ulonglong uVar30;
  byte *pbVar31;
  int iVar32;
  uint uVar33;
  int iVar34;
  int iVar35;
  longlong *local_150;
  longlong *local_148;
  longlong local_140;
  byte *local_138;
  byte *local_130;
  longlong *local_128;
  longlong *local_120;
  longlong *local_118;
  longlong local_d0;
  uint local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong local_a8;
  uint local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong local_80;
  uint local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  uint local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  
  if (param_1 < 10) {
    return 0xffffffffffffffec;
  }
  uVar12 = unaff_RSI + 3 >> 2;
  pbVar2 = unaff_RDI + unaff_RSI;
  pbVar21 = unaff_RDI + uVar12;
  pbVar3 = pbVar21 + uVar12;
  uVar6 = param_2[1];
  pbVar14 = pbVar3 + uVar12;
  uVar12 = (ulonglong)param_2[2];
  uVar7 = *param_3;
  uVar30 = (((param_1 - 6) - (ulonglong)*param_2) - (ulonglong)uVar6) - uVar12;
  bVar9 = param_1 < uVar30 || pbVar2 < pbVar14;
  if (param_1 >= uVar30 && pbVar2 >= pbVar14) {
    uVar13 = FUN_00e6a940();
    if (0xffffffffffffff88 < uVar13) {
      return uVar13;
    }
    uVar13 = FUN_00e6a940();
    if (0xffffffffffffff88 < uVar13) {
      return uVar13;
    }
    uVar13 = FUN_00e6a940(uVar12,uVar12,(ulonglong)uVar6);
    if (0xffffffffffffff88 < uVar13) {
      return uVar13;
    }
    uVar12 = FUN_00e6a940(uVar12,uVar30);
    if (0xffffffffffffff88 < uVar12) {
      return uVar12;
    }
    pbVar1 = pbVar2 + -3;
    cVar8 = (char)((uint)uVar7 >> 0x10);
    pbVar28 = pbVar21;
    local_138 = pbVar3;
    local_130 = pbVar14;
    if ((7 < (longlong)pbVar2 - (longlong)pbVar14) && (pbVar14 < pbVar1)) {
      bVar10 = false;
      local_128 = local_c0;
      local_140 = local_80;
      bVar15 = -cVar8 & 0x3f;
      local_120 = local_98;
      local_150 = (longlong *)local_58;
      bVar11 = false;
      local_118 = local_70;
      bVar19 = false;
      local_148 = local_48;
      pbVar29 = unaff_RDI;
      pbVar22 = pbVar14;
      pbVar27 = pbVar21;
      pbVar31 = pbVar3;
      lVar25 = local_d0;
      lVar23 = local_a8;
      do {
        pbVar28 = (byte *)((longlong)param_3 +
                          ((ulonglong)(lVar25 << ((byte)local_c8 & 0x3f)) >> bVar15) * 2 + 4);
        bVar5 = *pbVar28;
        *pbVar29 = pbVar28[1];
        iVar35 = bVar5 + local_c8;
        pbVar28 = (byte *)((longlong)param_3 +
                          ((ulonglong)(lVar23 << ((byte)local_a0 & 0x3f)) >> bVar15) * 2 + 4);
        iVar34 = *pbVar28 + local_a0;
        *pbVar27 = pbVar28[1];
        pbVar28 = (byte *)((longlong)param_3 +
                          ((ulonglong)(local_140 << ((byte)local_78 & 0x3f)) >> bVar15) * 2 + 4);
        iVar32 = *pbVar28 + local_78;
        *pbVar31 = pbVar28[1];
        pbVar28 = (byte *)((longlong)param_3 +
                          ((ulonglong)((longlong)local_150 << ((byte)local_50 & 0x3f)) >> bVar15) *
                          2 + 4);
        bVar5 = *pbVar28;
        *pbVar22 = pbVar28[1];
        iVar24 = bVar5 + local_50;
        pbVar28 = (byte *)((longlong)param_3 +
                          ((ulonglong)(lVar25 << ((byte)iVar35 & 0x3f)) >> bVar15) * 2 + 4);
        bVar5 = *pbVar28;
        pbVar29[1] = pbVar28[1];
        iVar35 = (uint)bVar5 + iVar35;
        pbVar28 = (byte *)((longlong)param_3 +
                          ((ulonglong)(lVar23 << ((byte)iVar34 & 0x3f)) >> bVar15) * 2 + 4);
        bVar5 = *pbVar28;
        pbVar27[1] = pbVar28[1];
        iVar34 = (uint)bVar5 + iVar34;
        pbVar28 = (byte *)((longlong)param_3 +
                          ((ulonglong)(local_140 << ((byte)iVar32 & 0x3f)) >> bVar15) * 2 + 4);
        iVar32 = (uint)*pbVar28 + iVar32;
        pbVar31[1] = pbVar28[1];
        pbVar28 = (byte *)((longlong)param_3 +
                          ((ulonglong)((longlong)local_150 << ((byte)iVar24 & 0x3f)) >> bVar15) * 2
                          + 4);
        bVar5 = *pbVar28;
        pbVar22[1] = pbVar28[1];
        iVar24 = (uint)bVar5 + iVar24;
        pbVar28 = (byte *)((longlong)param_3 +
                          ((ulonglong)(lVar25 << ((byte)iVar35 & 0x3f)) >> bVar15) * 2 + 4);
        bVar5 = *pbVar28;
        pbVar29[2] = pbVar28[1];
        iVar35 = (uint)bVar5 + iVar35;
        pbVar28 = (byte *)((longlong)param_3 +
                          ((ulonglong)(lVar23 << ((byte)iVar34 & 0x3f)) >> bVar15) * 2 + 4);
        bVar5 = *pbVar28;
        pbVar27[2] = pbVar28[1];
        iVar34 = (uint)bVar5 + iVar34;
        pbVar28 = (byte *)((longlong)param_3 +
                          ((ulonglong)(local_140 << ((byte)iVar32 & 0x3f)) >> bVar15) * 2 + 4);
        iVar32 = (uint)*pbVar28 + iVar32;
        pbVar31[2] = pbVar28[1];
        unaff_RDI = pbVar29 + 4;
        pbVar28 = pbVar27 + 4;
        local_138 = pbVar31 + 4;
        local_130 = pbVar22 + 4;
        pbVar4 = (byte *)((longlong)param_3 +
                         ((ulonglong)((longlong)local_150 << ((byte)iVar24 & 0x3f)) >> bVar15) * 2 +
                         4);
        bVar5 = *pbVar4;
        pbVar22[2] = pbVar4[1];
        iVar24 = (uint)bVar5 + iVar24;
        pbVar4 = (byte *)((longlong)param_3 +
                         ((ulonglong)(lVar25 << ((byte)iVar35 & 0x3f)) >> bVar15) * 2 + 4);
        bVar5 = *pbVar4;
        pbVar29[3] = pbVar4[1];
        uVar33 = (uint)bVar5 + iVar35;
        pbVar29 = (byte *)((longlong)param_3 +
                          ((ulonglong)(lVar23 << ((byte)iVar34 & 0x3f)) >> bVar15) * 2 + 4);
        bVar5 = *pbVar29;
        pbVar27[3] = pbVar29[1];
        local_a0 = (uint)bVar5 + iVar34;
        pbVar29 = (byte *)((longlong)param_3 +
                          ((ulonglong)(local_140 << ((byte)iVar32 & 0x3f)) >> bVar15) * 2 + 4);
        local_78 = (uint)*pbVar29 + iVar32;
        pbVar31[3] = pbVar29[1];
        pbVar29 = (byte *)((longlong)param_3 +
                          ((ulonglong)((longlong)local_150 << ((byte)iVar24 & 0x3f)) >> bVar15) * 2
                          + 4);
        bVar5 = *pbVar29;
        pbVar22[3] = pbVar29[1];
        uVar20 = (uint)bVar5 + iVar24;
        if (local_128 < local_b0) {
          iVar34 = 3;
          local_c8 = uVar33;
        }
        else {
          bVar9 = true;
          local_c8 = uVar33 & 7;
          local_128 = (longlong *)((longlong)local_128 - (ulonglong)(uVar33 >> 3));
          iVar34 = 0;
          lVar25 = *local_128;
        }
        if (local_120 < local_88) {
          iVar34 = 3;
        }
        else {
          bVar10 = true;
          local_120 = (longlong *)((longlong)local_120 - (ulonglong)(local_a0 >> 3));
          lVar23 = *local_120;
          local_a0 = local_a0 & 7;
        }
        if (local_118 < local_60) {
          iVar34 = 3;
        }
        else {
          bVar11 = true;
          local_118 = (longlong *)((longlong)local_118 - (ulonglong)(local_78 >> 3));
          local_140 = *local_118;
          local_78 = local_78 & 7;
        }
        if (local_148 < local_38) {
          if (bVar9) {
            local_c0 = local_128;
            local_d0 = lVar25;
          }
          if (bVar10) {
            local_98 = local_120;
            local_a8 = lVar23;
          }
          if (bVar11) {
            local_70 = local_118;
            local_80 = local_140;
          }
          local_50 = uVar20;
          if (!bVar19) goto LAB_00e75059;
          goto LAB_00e758d9;
        }
        local_50 = uVar20 & 7;
        local_148 = (longlong *)((longlong)local_148 - (ulonglong)(uVar20 >> 3));
        local_150 = (longlong *)*local_148;
        bVar19 = local_130 < pbVar1 && iVar34 == 0;
        pbVar29 = unaff_RDI;
        pbVar22 = local_130;
        pbVar27 = pbVar28;
        pbVar31 = local_138;
      } while (local_130 < pbVar1 && iVar34 == 0);
      if (bVar9) {
        local_c0 = local_128;
        local_d0 = lVar25;
      }
      if (bVar10) {
        local_98 = local_120;
        local_a8 = lVar23;
      }
      if (bVar11) {
        local_70 = local_118;
        local_80 = local_140;
      }
LAB_00e758d9:
      local_48 = local_148;
      local_58 = (longlong)local_150;
    }
LAB_00e75059:
    bVar9 = (pbVar21 < unaff_RDI || pbVar3 < pbVar28) || pbVar14 < local_138;
    if ((pbVar21 >= unaff_RDI && pbVar3 >= pbVar28) && pbVar14 >= local_138) {
      if ((longlong)pbVar21 - (longlong)unaff_RDI < 4) {
        local_150 = local_c0;
        plVar16 = local_150;
        if (local_c8 < 0x41) {
          if (local_c0 < local_b0) {
            local_150 = local_b8;
            plVar16 = local_150;
            if (local_c0 != local_b8) {
              uVar20 = local_c8 >> 3;
              uVar12 = (ulonglong)uVar20;
              if ((longlong *)((longlong)local_c0 - uVar12) < local_b8) {
                uVar20 = (int)local_c0 - (int)local_b8;
                uVar12 = (ulonglong)uVar20;
              }
              local_c8 = local_c8 + uVar20 * -8;
              local_d0 = *(longlong *)((longlong)local_c0 - uVar12);
              plVar16 = (longlong *)((longlong)local_c0 - uVar12);
            }
          }
          else {
            plVar16 = (longlong *)((longlong)local_c0 - (ulonglong)(local_c8 >> 3));
            local_c8 = local_c8 & 7;
            local_d0 = *plVar16;
          }
        }
      }
      else {
        local_150 = local_c0;
        plVar16 = local_150;
        if (local_c8 < 0x41) {
          bVar19 = false;
          bVar15 = -cVar8 & 0x3f;
          lVar25 = local_d0;
          uVar20 = local_c8;
          do {
            if (local_150 < local_b0) {
              if (local_150 == local_b8) {
                plVar16 = local_c0;
                if (!bVar19) goto LAB_00e751fd;
                break;
              }
              plVar16 = (longlong *)((longlong)local_150 - (ulonglong)(uVar20 >> 3));
              if (plVar16 < local_b8) {
                uVar12 = (longlong)local_150 - (longlong)local_b8;
                local_150 = (longlong *)((longlong)local_150 - (uVar12 & 0xffffffff));
                uVar20 = uVar20 + (int)uVar12 * -8;
                lVar25 = *local_150;
                break;
              }
              lVar25 = *plVar16;
              uVar20 = uVar20 + (uVar20 >> 3) * -8;
              local_150 = plVar16;
            }
            else {
              local_150 = (longlong *)((longlong)local_150 - (ulonglong)(uVar20 >> 3));
              lVar25 = *local_150;
              uVar20 = uVar20 & 7;
            }
            bVar19 = unaff_RDI < pbVar21 + -3;
            if (!bVar19) break;
            pbVar22 = unaff_RDI + 4;
            pbVar29 = (byte *)((longlong)param_3 +
                              ((ulonglong)(lVar25 << ((byte)uVar20 & 0x3f)) >> bVar15) * 2 + 4);
            iVar34 = *pbVar29 + uVar20;
            *unaff_RDI = pbVar29[1];
            pbVar29 = (byte *)((longlong)param_3 +
                              ((ulonglong)(lVar25 << ((byte)iVar34 & 0x3f)) >> bVar15) * 2 + 4);
            iVar34 = (uint)*pbVar29 + iVar34;
            unaff_RDI[1] = pbVar29[1];
            pbVar29 = (byte *)((longlong)param_3 +
                              ((ulonglong)(lVar25 << ((byte)iVar34 & 0x3f)) >> bVar15) * 2 + 4);
            iVar34 = (uint)*pbVar29 + iVar34;
            unaff_RDI[2] = pbVar29[1];
            pbVar29 = (byte *)((longlong)param_3 +
                              ((ulonglong)(lVar25 << ((byte)iVar34 & 0x3f)) >> bVar15) * 2 + 4);
            uVar20 = (uint)*pbVar29 + iVar34;
            unaff_RDI[3] = pbVar29[1];
            unaff_RDI = pbVar22;
          } while (uVar20 < 0x41);
          plVar16 = local_150;
          local_d0 = lVar25;
          local_c8 = uVar20;
        }
      }
LAB_00e751fd:
      local_150 = plVar16;
      if (unaff_RDI < pbVar21) {
        do {
          pbVar22 = unaff_RDI + 1;
          pbVar29 = (byte *)((longlong)param_3 +
                            ((ulonglong)(local_d0 << ((byte)local_c8 & 0x3f)) >> (-cVar8 & 0x3fU)) *
                            2 + 4);
          bVar15 = *pbVar29;
          *unaff_RDI = pbVar29[1];
          local_c8 = local_c8 + bVar15;
          unaff_RDI = pbVar22;
        } while (pbVar21 != pbVar22);
      }
      plVar16 = local_98;
      lVar25 = local_a8;
      uVar20 = local_a0;
      if ((longlong)pbVar3 - (longlong)pbVar28 < 4) {
        if (local_a0 < 0x41) {
          if (local_98 < local_88) {
            plVar16 = local_90;
            if (local_98 != local_90) {
              uVar20 = local_a0 >> 3;
              uVar12 = (ulonglong)uVar20;
              if ((longlong *)((longlong)local_98 - uVar12) < local_90) {
                uVar20 = (int)local_98 - (int)local_90;
                uVar12 = (ulonglong)uVar20;
              }
              plVar16 = (longlong *)((longlong)local_98 - uVar12);
              lVar25 = *(longlong *)((longlong)local_98 - uVar12);
              uVar20 = local_a0 + uVar20 * -8;
            }
          }
          else {
            plVar16 = (longlong *)((longlong)local_98 - (ulonglong)(local_a0 >> 3));
            lVar25 = *plVar16;
            uVar20 = local_a0 & 7;
          }
        }
      }
      else if (local_a0 < 0x41) {
        bVar19 = false;
        bVar15 = -cVar8 & 0x3f;
        lVar23 = local_a8;
        pbVar21 = pbVar28;
        plVar17 = local_98;
        uVar33 = local_a0;
        do {
          pbVar28 = pbVar21;
          if (plVar17 < local_88) {
            if (plVar17 == local_90) {
              plVar16 = local_98;
              lVar25 = local_a8;
              uVar20 = local_a0;
              if (bVar19) {
                plVar16 = plVar17;
                lVar25 = lVar23;
                uVar20 = uVar33;
              }
              break;
            }
            plVar16 = (longlong *)((longlong)plVar17 - (ulonglong)(uVar33 >> 3));
            if (plVar16 < local_90) {
              uVar20 = (int)plVar17 - (int)local_90;
              plVar16 = (longlong *)((longlong)plVar17 - (ulonglong)uVar20);
              lVar25 = *plVar16;
              uVar20 = uVar33 + uVar20 * -8;
              break;
            }
            uVar20 = uVar33 + (uVar33 >> 3) * -8;
            lVar23 = *plVar16;
          }
          else {
            uVar20 = uVar33 & 7;
            plVar16 = (longlong *)((longlong)plVar17 - (ulonglong)(uVar33 >> 3));
            lVar23 = *plVar16;
          }
          bVar19 = pbVar21 < pbVar3 + -3;
          lVar25 = lVar23;
          if (!bVar19) break;
          pbVar28 = pbVar21 + 4;
          pbVar29 = (byte *)((longlong)param_3 +
                            ((ulonglong)(lVar23 << ((byte)uVar20 & 0x3f)) >> bVar15) * 2 + 4);
          iVar34 = *pbVar29 + uVar20;
          *pbVar21 = pbVar29[1];
          pbVar29 = (byte *)((longlong)param_3 +
                            ((ulonglong)(lVar23 << ((byte)iVar34 & 0x3f)) >> bVar15) * 2 + 4);
          iVar34 = (uint)*pbVar29 + iVar34;
          pbVar21[1] = pbVar29[1];
          pbVar29 = (byte *)((longlong)param_3 +
                            ((ulonglong)(lVar23 << ((byte)iVar34 & 0x3f)) >> bVar15) * 2 + 4);
          iVar34 = (uint)*pbVar29 + iVar34;
          pbVar21[2] = pbVar29[1];
          pbVar29 = (byte *)((longlong)param_3 +
                            ((ulonglong)(lVar23 << ((byte)iVar34 & 0x3f)) >> bVar15) * 2 + 4);
          uVar33 = (uint)*pbVar29 + iVar34;
          pbVar21[3] = pbVar29[1];
          pbVar21 = pbVar28;
          plVar17 = plVar16;
          uVar20 = uVar33;
        } while (uVar33 < 0x41);
      }
      local_a0 = uVar20;
      local_a8 = lVar25;
      if (pbVar28 < pbVar3) {
        do {
          pbVar29 = pbVar28 + 1;
          pbVar21 = (byte *)((longlong)param_3 +
                            ((ulonglong)(local_a8 << ((byte)local_a0 & 0x3f)) >> (-cVar8 & 0x3fU)) *
                            2 + 4);
          bVar15 = *pbVar21;
          *pbVar28 = pbVar21[1];
          local_a0 = local_a0 + bVar15;
          pbVar28 = pbVar29;
        } while (pbVar3 != pbVar29);
      }
      plVar17 = local_70;
      lVar25 = local_80;
      uVar20 = local_78;
      if ((longlong)pbVar14 - (longlong)local_138 < 4) {
        if (local_78 < 0x41) {
          if (local_70 < local_60) {
            plVar17 = local_68;
            if (local_70 != local_68) {
              uVar20 = local_78 >> 3;
              uVar12 = (ulonglong)uVar20;
              if ((longlong *)((longlong)local_70 - uVar12) < local_68) {
                uVar20 = (int)local_70 - (int)local_68;
                uVar12 = (ulonglong)uVar20;
              }
              plVar17 = (longlong *)((longlong)local_70 - uVar12);
              lVar25 = *(longlong *)((longlong)local_70 - uVar12);
              uVar20 = local_78 + uVar20 * -8;
            }
          }
          else {
            plVar17 = (longlong *)((longlong)local_70 - (ulonglong)(local_78 >> 3));
            lVar25 = *plVar17;
            uVar20 = local_78 & 7;
          }
        }
      }
      else if (local_78 < 0x41) {
        bVar19 = false;
        bVar15 = -cVar8 & 0x3f;
        lVar23 = local_80;
        plVar18 = local_70;
        uVar33 = local_78;
        do {
          if (plVar18 < local_60) {
            if (plVar18 == local_68) {
              plVar17 = local_70;
              lVar25 = local_80;
              uVar20 = local_78;
              if (bVar19) {
                plVar17 = plVar18;
                lVar25 = lVar23;
                uVar20 = uVar33;
              }
              break;
            }
            plVar17 = (longlong *)((longlong)plVar18 - (ulonglong)(uVar33 >> 3));
            if (plVar17 < local_68) {
              uVar20 = (int)plVar18 - (int)local_68;
              plVar17 = (longlong *)((longlong)plVar18 - (ulonglong)uVar20);
              lVar25 = *plVar17;
              uVar20 = uVar33 + uVar20 * -8;
              break;
            }
            uVar20 = uVar33 + (uVar33 >> 3) * -8;
            lVar23 = *plVar17;
          }
          else {
            uVar20 = uVar33 & 7;
            plVar17 = (longlong *)((longlong)plVar18 - (ulonglong)(uVar33 >> 3));
            lVar23 = *plVar17;
          }
          bVar19 = local_138 < pbVar14 + -3;
          lVar25 = lVar23;
          if (!bVar19) break;
          pbVar3 = (byte *)((longlong)param_3 +
                           ((ulonglong)(lVar23 << ((byte)uVar20 & 0x3f)) >> bVar15) * 2 + 4);
          iVar34 = *pbVar3 + uVar20;
          *local_138 = pbVar3[1];
          pbVar3 = (byte *)((longlong)param_3 +
                           ((ulonglong)(lVar23 << ((byte)iVar34 & 0x3f)) >> bVar15) * 2 + 4);
          iVar34 = (uint)*pbVar3 + iVar34;
          local_138[1] = pbVar3[1];
          pbVar3 = (byte *)((longlong)param_3 +
                           ((ulonglong)(lVar23 << ((byte)iVar34 & 0x3f)) >> bVar15) * 2 + 4);
          iVar34 = (uint)*pbVar3 + iVar34;
          local_138[2] = pbVar3[1];
          pbVar21 = local_138 + 4;
          pbVar3 = (byte *)((longlong)param_3 +
                           ((ulonglong)(lVar23 << ((byte)iVar34 & 0x3f)) >> bVar15) * 2 + 4);
          uVar33 = (uint)*pbVar3 + iVar34;
          local_138[3] = pbVar3[1];
          plVar18 = plVar17;
          local_138 = pbVar21;
          uVar20 = uVar33;
        } while (uVar33 < 0x41);
      }
      local_78 = uVar20;
      local_80 = lVar25;
      if (local_138 < pbVar14) {
        do {
          pbVar21 = local_138 + 1;
          pbVar3 = (byte *)((longlong)param_3 +
                           ((ulonglong)(local_80 << ((byte)local_78 & 0x3f)) >> (-cVar8 & 0x3fU)) *
                           2 + 4);
          bVar15 = *pbVar3;
          *local_138 = pbVar3[1];
          local_78 = local_78 + bVar15;
          local_138 = pbVar21;
        } while (pbVar14 != pbVar21);
      }
      plVar18 = local_48;
      lVar25 = local_58;
      uVar20 = local_50;
      if ((longlong)pbVar2 - (longlong)local_130 < 4) {
        if (local_50 < 0x41) {
          if (local_48 < local_38) {
            plVar18 = local_40;
            if (local_48 != local_40) {
              uVar20 = local_50 >> 3;
              uVar12 = (ulonglong)uVar20;
              if ((longlong *)((longlong)local_48 - uVar12) < local_40) {
                uVar20 = (int)local_48 - (int)local_40;
                uVar12 = (ulonglong)uVar20;
              }
              plVar18 = (longlong *)((longlong)local_48 - uVar12);
              lVar25 = *(longlong *)((longlong)local_48 - uVar12);
              uVar20 = local_50 + uVar20 * -8;
            }
          }
          else {
            plVar18 = (longlong *)((longlong)local_48 - (ulonglong)(local_50 >> 3));
            lVar25 = *plVar18;
            uVar20 = local_50 & 7;
          }
        }
      }
      else if (local_50 < 0x41) {
        bVar15 = -cVar8 & 0x3f;
        lVar23 = local_58;
        plVar26 = local_48;
        uVar33 = local_50;
        do {
          if (plVar26 < local_38) {
            if (plVar26 == local_40) {
              plVar18 = local_48;
              lVar25 = local_58;
              uVar20 = local_50;
              if (bVar9) {
                plVar18 = plVar26;
                lVar25 = lVar23;
                uVar20 = uVar33;
              }
              break;
            }
            plVar18 = (longlong *)((longlong)plVar26 - (ulonglong)(uVar33 >> 3));
            if (plVar18 < local_40) {
              uVar20 = (int)plVar26 - (int)local_40;
              plVar18 = (longlong *)((longlong)plVar26 - (ulonglong)uVar20);
              lVar25 = *plVar18;
              uVar20 = uVar33 + uVar20 * -8;
              break;
            }
            uVar20 = uVar33 + (uVar33 >> 3) * -8;
            lVar23 = *plVar18;
          }
          else {
            uVar20 = uVar33 & 7;
            plVar18 = (longlong *)((longlong)plVar26 - (ulonglong)(uVar33 >> 3));
            lVar23 = *plVar18;
          }
          bVar9 = local_130 < pbVar1;
          lVar25 = lVar23;
          if (!bVar9) break;
          pbVar3 = (byte *)((longlong)param_3 +
                           ((ulonglong)(lVar23 << ((byte)uVar20 & 0x3f)) >> bVar15) * 2 + 4);
          iVar34 = *pbVar3 + uVar20;
          *local_130 = pbVar3[1];
          pbVar3 = (byte *)((longlong)param_3 +
                           ((ulonglong)(lVar23 << ((byte)iVar34 & 0x3f)) >> bVar15) * 2 + 4);
          iVar34 = (uint)*pbVar3 + iVar34;
          local_130[1] = pbVar3[1];
          pbVar3 = (byte *)((longlong)param_3 +
                           ((ulonglong)(lVar23 << ((byte)iVar34 & 0x3f)) >> bVar15) * 2 + 4);
          iVar34 = (uint)*pbVar3 + iVar34;
          local_130[2] = pbVar3[1];
          pbVar14 = local_130 + 4;
          pbVar3 = (byte *)((longlong)param_3 +
                           ((ulonglong)(lVar23 << ((byte)iVar34 & 0x3f)) >> bVar15) * 2 + 4);
          uVar33 = (uint)*pbVar3 + iVar34;
          local_130[3] = pbVar3[1];
          plVar26 = plVar18;
          local_130 = pbVar14;
          uVar20 = uVar33;
        } while (uVar33 < 0x41);
      }
      local_50 = uVar20;
      local_58 = lVar25;
      if (local_130 < pbVar2) {
        do {
          pbVar14 = local_130 + 1;
          pbVar3 = (byte *)((longlong)param_3 +
                           ((ulonglong)(local_58 << ((byte)local_50 & 0x3f)) >> (-cVar8 & 0x3fU)) *
                           2 + 4);
          bVar15 = *pbVar3;
          *local_130 = pbVar3[1];
          local_50 = local_50 + bVar15;
          local_130 = pbVar14;
        } while (pbVar2 != pbVar14);
      }
      if ((((plVar17 == local_68) && (plVar18 == local_40)) &&
          (((local_150 == local_b8 && local_c8 == 0x40) && local_78 == 0x40) &&
           (plVar16 == local_90 && local_a0 == 0x40))) && (local_50 == 0x40)) {
        return unaff_RSI;
      }
    }
  }
  return 0xffffffffffffffec;
}



ulonglong FUN_00e75da0(ulonglong param_1,ushort *param_2,uint *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte bVar6;
  ushort uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  longlong lVar16;
  bool bVar17;
  byte *pbVar18;
  longlong *plVar19;
  uint uVar20;
  ulonglong unaff_RSI;
  uint uVar21;
  byte *unaff_RDI;
  uint uVar22;
  longlong *plVar23;
  byte *pbVar24;
  longlong *plVar25;
  longlong *plVar26;
  uint uVar27;
  int iVar28;
  ulonglong uVar29;
  byte *pbVar30;
  byte *pbVar31;
  byte *pbVar32;
  longlong *plVar33;
  longlong *plVar34;
  uint uVar35;
  longlong local_150;
  longlong *local_148;
  longlong *local_140;
  byte *local_138;
  byte *local_130;
  longlong *local_128;
  longlong *local_120;
  longlong local_118;
  longlong local_f0;
  longlong local_d0;
  uint local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong local_a8;
  uint local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong local_80;
  uint local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  uint local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  
  if (param_1 < 10) {
    return 0xffffffffffffffec;
  }
  uVar12 = unaff_RSI + 3 >> 2;
  pbVar2 = unaff_RDI + unaff_RSI;
  pbVar15 = unaff_RDI + uVar12;
  pbVar3 = pbVar15 + uVar12;
  uVar7 = param_2[1];
  pbVar32 = pbVar3 + uVar12;
  uVar12 = (ulonglong)param_2[2];
  uVar22 = *param_3;
  uVar29 = (((param_1 - 6) - (ulonglong)*param_2) - (ulonglong)uVar7) - uVar12;
  bVar8 = param_1 < uVar29 || pbVar2 < pbVar32;
  if (param_1 >= uVar29 && pbVar2 >= pbVar32) {
    uVar13 = FUN_00e6a940();
    if (0xffffffffffffff88 < uVar13) {
      return uVar13;
    }
    uVar13 = FUN_00e6a940();
    if (0xffffffffffffff88 < uVar13) {
      return uVar13;
    }
    uVar13 = FUN_00e6a940(uVar12,uVar12,(ulonglong)uVar7);
    if (0xffffffffffffff88 < uVar13) {
      return uVar13;
    }
    uVar12 = FUN_00e6a940(uVar12,uVar29);
    if (0xffffffffffffff88 < uVar12) {
      return uVar12;
    }
    pbVar1 = pbVar2 + -3;
    uVar22 = uVar22 >> 0x10 & 0xff;
    pbVar31 = pbVar32;
    local_138 = pbVar15;
    local_130 = pbVar3;
    if ((7 < (longlong)pbVar2 - (longlong)pbVar32) && (pbVar32 < pbVar1)) {
      bVar9 = false;
      local_128 = local_c0;
      local_150 = local_a8;
      local_118 = local_80;
      uVar11 = -uVar22 & 0x3f;
      local_120 = local_98;
      bVar10 = false;
      local_140 = local_70;
      bVar17 = false;
      local_148 = local_48;
      pbVar14 = unaff_RDI;
      pbVar18 = pbVar15;
      pbVar24 = pbVar3;
      pbVar30 = pbVar32;
      lVar16 = local_d0;
      local_f0 = local_58;
      do {
        pbVar4 = (byte *)((longlong)param_3 +
                         ((ulonglong)(lVar16 << ((ulonglong)local_c8 & 0x3f)) >> uVar11) * 2 + 4);
        unaff_RDI = pbVar14 + 4;
        bVar6 = *pbVar4;
        local_138 = pbVar18 + 4;
        local_130 = pbVar24 + 4;
        pbVar31 = pbVar30 + 4;
        *pbVar14 = pbVar4[1];
        uVar35 = bVar6 + local_c8;
        pbVar4 = (byte *)((longlong)param_3 +
                         ((ulonglong)(local_150 << ((ulonglong)local_a0 & 0x3f)) >> uVar11) * 2 + 4)
        ;
        bVar6 = *pbVar4;
        *pbVar18 = pbVar4[1];
        uVar27 = bVar6 + local_a0;
        pbVar4 = (byte *)((longlong)param_3 +
                         ((ulonglong)(local_118 << ((ulonglong)local_78 & 0x3f)) >> uVar11) * 2 + 4)
        ;
        bVar6 = *pbVar4;
        *pbVar24 = pbVar4[1];
        uVar21 = bVar6 + local_78;
        pbVar4 = (byte *)((longlong)param_3 +
                         ((ulonglong)(local_f0 << ((ulonglong)local_50 & 0x3f)) >> uVar11) * 2 + 4);
        bVar6 = *pbVar4;
        *pbVar30 = pbVar4[1];
        uVar20 = bVar6 + local_50;
        pbVar4 = (byte *)((longlong)param_3 +
                         ((ulonglong)(lVar16 << ((ulonglong)uVar35 & 0x3f)) >> uVar11) * 2 + 4);
        bVar6 = *pbVar4;
        pbVar14[1] = pbVar4[1];
        pbVar4 = (byte *)((longlong)param_3 +
                         ((ulonglong)(local_150 << ((ulonglong)uVar27 & 0x3f)) >> uVar11) * 2 + 4);
        uVar35 = bVar6 + uVar35;
        uVar27 = *pbVar4 + uVar27;
        pbVar5 = (byte *)((longlong)param_3 +
                         ((ulonglong)(local_118 << ((ulonglong)uVar21 & 0x3f)) >> uVar11) * 2 + 4);
        pbVar18[1] = pbVar4[1];
        bVar6 = *pbVar5;
        pbVar24[1] = pbVar5[1];
        uVar21 = bVar6 + uVar21;
        pbVar4 = (byte *)((longlong)param_3 +
                         ((ulonglong)(local_f0 << ((ulonglong)uVar20 & 0x3f)) >> uVar11) * 2 + 4);
        uVar20 = *pbVar4 + uVar20;
        pbVar5 = (byte *)((longlong)param_3 +
                         ((ulonglong)(lVar16 << ((ulonglong)uVar35 & 0x3f)) >> uVar11) * 2 + 4);
        pbVar30[1] = pbVar4[1];
        bVar6 = *pbVar5;
        pbVar14[2] = pbVar5[1];
        uVar35 = bVar6 + uVar35;
        pbVar4 = (byte *)((longlong)param_3 +
                         ((ulonglong)(local_150 << ((ulonglong)uVar27 & 0x3f)) >> uVar11) * 2 + 4);
        uVar27 = *pbVar4 + uVar27;
        pbVar5 = (byte *)((longlong)param_3 +
                         ((ulonglong)(local_118 << ((ulonglong)uVar21 & 0x3f)) >> uVar11) * 2 + 4);
        pbVar18[2] = pbVar4[1];
        bVar6 = *pbVar5;
        pbVar24[2] = pbVar5[1];
        uVar21 = bVar6 + uVar21;
        pbVar4 = (byte *)((longlong)param_3 +
                         ((ulonglong)(local_f0 << ((ulonglong)uVar20 & 0x3f)) >> uVar11) * 2 + 4);
        uVar20 = *pbVar4 + uVar20;
        pbVar5 = (byte *)((longlong)param_3 +
                         ((ulonglong)(lVar16 << ((ulonglong)uVar35 & 0x3f)) >> uVar11) * 2 + 4);
        pbVar30[2] = pbVar4[1];
        bVar6 = *pbVar5;
        pbVar14[3] = pbVar5[1];
        uVar35 = bVar6 + uVar35;
        pbVar14 = (byte *)((longlong)param_3 +
                          ((ulonglong)(local_150 << ((ulonglong)uVar27 & 0x3f)) >> uVar11) * 2 + 4);
        local_a0 = *pbVar14 + uVar27;
        pbVar4 = (byte *)((longlong)param_3 +
                         ((ulonglong)(local_118 << ((ulonglong)uVar21 & 0x3f)) >> uVar11) * 2 + 4);
        pbVar18[3] = pbVar14[1];
        bVar6 = *pbVar4;
        pbVar24[3] = pbVar4[1];
        local_78 = bVar6 + uVar21;
        pbVar14 = (byte *)((longlong)param_3 +
                          ((ulonglong)(local_f0 << ((ulonglong)uVar20 & 0x3f)) >> uVar11) * 2 + 4);
        bVar6 = *pbVar14;
        pbVar30[3] = pbVar14[1];
        uVar20 = bVar6 + uVar20;
        if (local_128 < local_b0) {
          iVar28 = 3;
          local_c8 = uVar35;
        }
        else {
          bVar8 = true;
          local_c8 = uVar35 & 7;
          local_128 = (longlong *)((longlong)local_128 - (ulonglong)(uVar35 >> 3));
          iVar28 = 0;
          lVar16 = *local_128;
        }
        if (local_120 < local_88) {
          iVar28 = 3;
        }
        else {
          bVar9 = true;
          local_120 = (longlong *)((longlong)local_120 - (ulonglong)(local_a0 >> 3));
          local_150 = *local_120;
          local_a0 = local_a0 & 7;
        }
        if (local_140 < local_60) {
          iVar28 = 3;
        }
        else {
          bVar10 = true;
          local_140 = (longlong *)((longlong)local_140 - (ulonglong)(local_78 >> 3));
          local_118 = *local_140;
          local_78 = local_78 & 7;
        }
        if (local_148 < local_38) {
          if (bVar8) {
            local_c0 = local_128;
            local_d0 = lVar16;
          }
          if (bVar9) {
            local_98 = local_120;
            local_a8 = local_150;
          }
          if (bVar10) {
            local_70 = local_140;
            local_80 = local_118;
          }
          local_50 = uVar20;
          if (!bVar17) goto LAB_00e76309;
          goto LAB_00e76b38;
        }
        local_50 = uVar20 & 7;
        local_148 = (longlong *)((longlong)local_148 - (ulonglong)(uVar20 >> 3));
        local_f0 = *local_148;
        bVar17 = pbVar31 < pbVar1 && iVar28 == 0;
        pbVar14 = unaff_RDI;
        pbVar18 = local_138;
        pbVar24 = local_130;
        pbVar30 = pbVar31;
      } while (pbVar31 < pbVar1 && iVar28 == 0);
      if (bVar8) {
        local_c0 = local_128;
        local_d0 = lVar16;
      }
      if (bVar9) {
        local_98 = local_120;
        local_a8 = local_150;
      }
      if (bVar10) {
        local_70 = local_140;
        local_80 = local_118;
      }
LAB_00e76b38:
      local_48 = local_148;
      local_58 = local_f0;
    }
LAB_00e76309:
    bVar8 = (pbVar15 < unaff_RDI || pbVar3 < local_138) || pbVar32 < local_130;
    if ((pbVar15 >= unaff_RDI && pbVar3 >= local_138) && pbVar32 >= local_130) {
      plVar34 = local_c0;
      if ((longlong)pbVar15 - (longlong)unaff_RDI < 4) {
        if (local_c8 < 0x41) {
          if (local_c0 < local_b0) {
            plVar34 = local_b8;
            if (local_c0 != local_b8) {
              uVar11 = local_c8 >> 3;
              uVar12 = (ulonglong)uVar11;
              if ((longlong *)((longlong)local_c0 - uVar12) < local_b8) {
                uVar11 = (int)local_c0 - (int)local_b8;
                uVar12 = (ulonglong)uVar11;
              }
              local_c8 = local_c8 + uVar11 * -8;
              local_d0 = *(longlong *)((longlong)local_c0 - uVar12);
              plVar34 = (longlong *)((longlong)local_c0 - uVar12);
            }
          }
          else {
            plVar34 = (longlong *)((longlong)local_c0 - (ulonglong)(local_c8 >> 3));
            local_c8 = local_c8 & 7;
            local_d0 = *plVar34;
          }
        }
      }
      else if (local_c8 < 0x41) {
        bVar17 = false;
        uVar35 = -uVar22 & 0x3f;
        lVar16 = local_d0;
        plVar33 = local_c0;
        uVar11 = local_c8;
        do {
          if (plVar33 < local_b0) {
            if (plVar33 == local_b8) {
              if (!bVar17) goto LAB_00e76498;
              break;
            }
            plVar25 = (longlong *)((longlong)plVar33 - (ulonglong)(uVar11 >> 3));
            if (plVar25 < local_b8) {
              uVar35 = (int)plVar33 - (int)local_b8;
              plVar33 = (longlong *)((longlong)plVar33 - (ulonglong)uVar35);
              uVar11 = uVar11 + uVar35 * -8;
              lVar16 = *plVar33;
              break;
            }
            lVar16 = *plVar25;
            plVar33 = plVar25;
            uVar11 = uVar11 + (uVar11 >> 3) * -8;
          }
          else {
            plVar33 = (longlong *)((longlong)plVar33 - (ulonglong)(uVar11 >> 3));
            lVar16 = *plVar33;
            uVar11 = uVar11 & 7;
          }
          bVar17 = unaff_RDI < pbVar15 + -3;
          if (!bVar17) break;
          pbVar14 = (byte *)((longlong)param_3 +
                            ((ulonglong)(lVar16 << ((ulonglong)uVar11 & 0x3f)) >> uVar35) * 2 + 4);
          pbVar18 = unaff_RDI + 4;
          uVar11 = *pbVar14 + uVar11;
          *unaff_RDI = pbVar14[1];
          pbVar14 = (byte *)((longlong)param_3 +
                            ((ulonglong)(lVar16 << ((ulonglong)uVar11 & 0x3f)) >> uVar35) * 2 + 4);
          uVar11 = *pbVar14 + uVar11;
          unaff_RDI[1] = pbVar14[1];
          pbVar14 = (byte *)((longlong)param_3 +
                            ((ulonglong)(lVar16 << ((ulonglong)uVar11 & 0x3f)) >> uVar35) * 2 + 4);
          uVar11 = *pbVar14 + uVar11;
          unaff_RDI[2] = pbVar14[1];
          pbVar14 = (byte *)((longlong)param_3 +
                            ((ulonglong)(lVar16 << ((ulonglong)uVar11 & 0x3f)) >> uVar35) * 2 + 4);
          uVar11 = *pbVar14 + uVar11;
          unaff_RDI[3] = pbVar14[1];
          unaff_RDI = pbVar18;
        } while (uVar11 < 0x41);
        plVar34 = plVar33;
        local_d0 = lVar16;
        local_c8 = uVar11;
      }
LAB_00e76498:
      if (unaff_RDI < pbVar15) {
        do {
          pbVar14 = (byte *)((longlong)param_3 +
                            ((ulonglong)(local_d0 << ((ulonglong)local_c8 & 0x3f)) >>
                            (-uVar22 & 0x3f)) * 2 + 4);
          pbVar18 = unaff_RDI + 1;
          bVar6 = *pbVar14;
          *unaff_RDI = pbVar14[1];
          local_c8 = local_c8 + bVar6;
          unaff_RDI = pbVar18;
        } while (pbVar15 != pbVar18);
      }
      plVar33 = local_98;
      if ((longlong)pbVar3 - (longlong)local_138 < 4) {
        if (local_a0 < 0x41) {
          if (local_98 < local_88) {
            plVar33 = local_90;
            if (local_98 != local_90) {
              uVar11 = local_a0 >> 3;
              uVar12 = (ulonglong)uVar11;
              if ((longlong *)((longlong)local_98 - uVar12) < local_90) {
                uVar11 = (int)local_98 - (int)local_90;
                uVar12 = (ulonglong)uVar11;
              }
              local_a8 = *(longlong *)((longlong)local_98 - uVar12);
              plVar33 = (longlong *)((longlong)local_98 - uVar12);
              local_a0 = local_a0 + uVar11 * -8;
            }
          }
          else {
            plVar33 = (longlong *)((longlong)local_98 - (ulonglong)(local_a0 >> 3));
            local_a8 = *plVar33;
            local_a0 = local_a0 & 7;
          }
        }
      }
      else if (local_a0 < 0x41) {
        bVar17 = false;
        uVar35 = -uVar22 & 0x3f;
        lVar16 = local_a8;
        plVar25 = local_98;
        uVar11 = local_a0;
        do {
          if (plVar25 < local_88) {
            if (plVar25 == local_90) {
              if (!bVar17) goto LAB_00e7665d;
              break;
            }
            plVar23 = (longlong *)((longlong)plVar25 - (ulonglong)(uVar11 >> 3));
            if (plVar23 < local_90) {
              uVar35 = (int)plVar25 - (int)local_90;
              plVar25 = (longlong *)((longlong)plVar25 - (ulonglong)uVar35);
              uVar11 = uVar11 + uVar35 * -8;
              lVar16 = *plVar25;
              break;
            }
            lVar16 = *plVar23;
            plVar25 = plVar23;
            uVar11 = uVar11 + (uVar11 >> 3) * -8;
          }
          else {
            plVar25 = (longlong *)((longlong)plVar25 - (ulonglong)(uVar11 >> 3));
            lVar16 = *plVar25;
            uVar11 = uVar11 & 7;
          }
          bVar17 = local_138 < pbVar3 + -3;
          if (!bVar17) break;
          pbVar15 = (byte *)((longlong)param_3 +
                            ((ulonglong)(lVar16 << ((ulonglong)uVar11 & 0x3f)) >> uVar35) * 2 + 4);
          uVar11 = *pbVar15 + uVar11;
          *local_138 = pbVar15[1];
          pbVar15 = (byte *)((longlong)param_3 +
                            ((ulonglong)(lVar16 << ((ulonglong)uVar11 & 0x3f)) >> uVar35) * 2 + 4);
          uVar11 = *pbVar15 + uVar11;
          local_138[1] = pbVar15[1];
          pbVar15 = (byte *)((longlong)param_3 +
                            ((ulonglong)(lVar16 << ((ulonglong)uVar11 & 0x3f)) >> uVar35) * 2 + 4);
          uVar11 = *pbVar15 + uVar11;
          local_138[2] = pbVar15[1];
          pbVar14 = local_138 + 4;
          pbVar15 = (byte *)((longlong)param_3 +
                            ((ulonglong)(lVar16 << ((ulonglong)uVar11 & 0x3f)) >> uVar35) * 2 + 4);
          uVar11 = *pbVar15 + uVar11;
          local_138[3] = pbVar15[1];
          local_138 = pbVar14;
        } while (uVar11 < 0x41);
        plVar33 = plVar25;
        local_a8 = lVar16;
        local_a0 = uVar11;
      }
LAB_00e7665d:
      if (local_138 < pbVar3) {
        do {
          pbVar15 = (byte *)((longlong)param_3 +
                            ((ulonglong)(local_a8 << ((ulonglong)local_a0 & 0x3f)) >>
                            (-uVar22 & 0x3f)) * 2 + 4);
          pbVar14 = local_138 + 1;
          bVar6 = *pbVar15;
          *local_138 = pbVar15[1];
          local_a0 = local_a0 + bVar6;
          local_138 = pbVar14;
        } while (pbVar3 != pbVar14);
      }
      plVar25 = local_70;
      if ((longlong)pbVar32 - (longlong)local_130 < 4) {
        if (local_78 < 0x41) {
          if (local_70 < local_60) {
            plVar25 = local_68;
            if (local_70 != local_68) {
              uVar11 = local_78 >> 3;
              uVar12 = (ulonglong)uVar11;
              if ((longlong *)((longlong)local_70 - uVar12) < local_68) {
                uVar11 = (int)local_70 - (int)local_68;
                uVar12 = (ulonglong)uVar11;
              }
              local_80 = *(longlong *)((longlong)local_70 - uVar12);
              plVar25 = (longlong *)((longlong)local_70 - uVar12);
              local_78 = local_78 + uVar11 * -8;
            }
          }
          else {
            plVar25 = (longlong *)((longlong)local_70 - (ulonglong)(local_78 >> 3));
            local_80 = *plVar25;
            local_78 = local_78 & 7;
          }
        }
      }
      else if (local_78 < 0x41) {
        bVar17 = false;
        uVar35 = -uVar22 & 0x3f;
        lVar16 = local_80;
        plVar23 = local_70;
        uVar11 = local_78;
        do {
          if (plVar23 < local_60) {
            if (plVar23 == local_68) {
              if (!bVar17) goto LAB_00e76837;
              break;
            }
            plVar26 = (longlong *)((longlong)plVar23 - (ulonglong)(uVar11 >> 3));
            if (plVar26 < local_68) {
              uVar35 = (int)plVar23 - (int)local_68;
              plVar23 = (longlong *)((longlong)plVar23 - (ulonglong)uVar35);
              uVar11 = uVar11 + uVar35 * -8;
              lVar16 = *plVar23;
              break;
            }
            lVar16 = *plVar26;
            plVar23 = plVar26;
            uVar11 = uVar11 + (uVar11 >> 3) * -8;
          }
          else {
            plVar23 = (longlong *)((longlong)plVar23 - (ulonglong)(uVar11 >> 3));
            lVar16 = *plVar23;
            uVar11 = uVar11 & 7;
          }
          bVar17 = local_130 < pbVar32 + -3;
          if (!bVar17) break;
          pbVar3 = (byte *)((longlong)param_3 +
                           ((ulonglong)(lVar16 << ((ulonglong)uVar11 & 0x3f)) >> uVar35) * 2 + 4);
          uVar11 = *pbVar3 + uVar11;
          *local_130 = pbVar3[1];
          pbVar3 = (byte *)((longlong)param_3 +
                           ((ulonglong)(lVar16 << ((ulonglong)uVar11 & 0x3f)) >> uVar35) * 2 + 4);
          uVar11 = *pbVar3 + uVar11;
          local_130[1] = pbVar3[1];
          pbVar3 = (byte *)((longlong)param_3 +
                           ((ulonglong)(lVar16 << ((ulonglong)uVar11 & 0x3f)) >> uVar35) * 2 + 4);
          uVar11 = *pbVar3 + uVar11;
          local_130[2] = pbVar3[1];
          pbVar15 = local_130 + 4;
          pbVar3 = (byte *)((longlong)param_3 +
                           ((ulonglong)(lVar16 << ((ulonglong)uVar11 & 0x3f)) >> uVar35) * 2 + 4);
          uVar11 = *pbVar3 + uVar11;
          local_130[3] = pbVar3[1];
          local_130 = pbVar15;
        } while (uVar11 < 0x41);
        plVar25 = plVar23;
        local_80 = lVar16;
        local_78 = uVar11;
      }
LAB_00e76837:
      if (local_130 < pbVar32) {
        do {
          pbVar3 = (byte *)((longlong)param_3 +
                           ((ulonglong)(local_80 << ((ulonglong)local_78 & 0x3f)) >>
                           (-uVar22 & 0x3f)) * 2 + 4);
          pbVar15 = local_130 + 1;
          bVar6 = *pbVar3;
          *local_130 = pbVar3[1];
          local_78 = local_78 + bVar6;
          local_130 = pbVar15;
        } while (pbVar32 != pbVar15);
      }
      plVar23 = local_48;
      if ((longlong)pbVar2 - (longlong)pbVar31 < 4) {
        if (local_50 < 0x41) {
          if (local_48 < local_38) {
            plVar23 = local_40;
            if (local_48 != local_40) {
              uVar11 = local_50 >> 3;
              uVar12 = (ulonglong)uVar11;
              if ((longlong *)((longlong)local_48 - uVar12) < local_40) {
                uVar11 = (int)local_48 - (int)local_40;
                uVar12 = (ulonglong)uVar11;
              }
              local_58 = *(longlong *)((longlong)local_48 - uVar12);
              plVar23 = (longlong *)((longlong)local_48 - uVar12);
              local_50 = local_50 + uVar11 * -8;
            }
          }
          else {
            plVar23 = (longlong *)((longlong)local_48 - (ulonglong)(local_50 >> 3));
            local_58 = *plVar23;
            local_50 = local_50 & 7;
          }
        }
      }
      else if (local_50 < 0x41) {
        uVar35 = -uVar22 & 0x3f;
        lVar16 = local_58;
        plVar26 = local_48;
        uVar11 = local_50;
        do {
          if (plVar26 < local_38) {
            if (plVar26 == local_40) {
              if (!bVar8) goto LAB_00e769ca;
              break;
            }
            plVar19 = (longlong *)((longlong)plVar26 - (ulonglong)(uVar11 >> 3));
            if (plVar19 < local_40) {
              uVar35 = (int)plVar26 - (int)local_40;
              plVar26 = (longlong *)((longlong)plVar26 - (ulonglong)uVar35);
              lVar16 = *plVar26;
              uVar11 = uVar11 + uVar35 * -8;
              break;
            }
            uVar27 = uVar11 + (uVar11 >> 3) * -8;
            lVar16 = *plVar19;
            plVar26 = plVar19;
          }
          else {
            uVar27 = uVar11 & 7;
            plVar26 = (longlong *)((longlong)plVar26 - (ulonglong)(uVar11 >> 3));
            lVar16 = *plVar26;
          }
          bVar8 = pbVar31 < pbVar1;
          uVar11 = uVar27;
          if (!bVar8) break;
          pbVar3 = (byte *)((longlong)param_3 +
                           ((ulonglong)(lVar16 << ((ulonglong)uVar27 & 0x3f)) >> uVar35) * 2 + 4);
          pbVar32 = pbVar31 + 4;
          uVar27 = *pbVar3 + uVar27;
          *pbVar31 = pbVar3[1];
          pbVar3 = (byte *)((longlong)param_3 +
                           ((ulonglong)(lVar16 << ((ulonglong)uVar27 & 0x3f)) >> uVar35) * 2 + 4);
          uVar27 = *pbVar3 + uVar27;
          pbVar31[1] = pbVar3[1];
          pbVar3 = (byte *)((longlong)param_3 +
                           ((ulonglong)(lVar16 << ((ulonglong)uVar27 & 0x3f)) >> uVar35) * 2 + 4);
          uVar27 = *pbVar3 + uVar27;
          pbVar31[2] = pbVar3[1];
          pbVar3 = (byte *)((longlong)param_3 +
                           ((ulonglong)(lVar16 << ((ulonglong)uVar27 & 0x3f)) >> uVar35) * 2 + 4);
          uVar11 = *pbVar3 + uVar27;
          pbVar31[3] = pbVar3[1];
          pbVar31 = pbVar32;
        } while (uVar11 < 0x41);
        plVar23 = plVar26;
        local_58 = lVar16;
        local_50 = uVar11;
      }
LAB_00e769ca:
      if (pbVar31 < pbVar2) {
        do {
          pbVar3 = (byte *)((longlong)param_3 +
                           ((ulonglong)(local_58 << ((ulonglong)local_50 & 0x3f)) >>
                           (-uVar22 & 0x3f)) * 2 + 4);
          pbVar32 = pbVar31 + 1;
          bVar6 = *pbVar3;
          *pbVar31 = pbVar3[1];
          local_50 = local_50 + bVar6;
          pbVar31 = pbVar32;
        } while (pbVar2 != pbVar32);
      }
      if ((((plVar25 == local_68) && (plVar23 == local_40)) &&
          (((plVar34 == local_b8 && local_c8 == 0x40) && local_78 == 0x40) &&
           (plVar33 == local_90 && local_a0 == 0x40))) && (local_50 == 0x40)) {
        return unaff_RSI;
      }
    }
  }
  return 0xffffffffffffffec;
}



ulonglong FUN_00e76f60(ulonglong param_1,ushort *param_2,uint *param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  uint *puVar5;
  ushort uVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  ulonglong uVar12;
  byte bVar13;
  longlong *plVar14;
  longlong *plVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  longlong *plVar20;
  int iVar21;
  ulonglong uVar22;
  ulonglong unaff_RSI;
  longlong lVar23;
  int iVar24;
  uint uVar25;
  undefined2 *unaff_RDI;
  longlong lVar26;
  undefined2 *puVar27;
  int iVar28;
  undefined2 *puVar29;
  byte local_168;
  longlong *local_160;
  longlong *local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong *local_130;
  undefined2 *local_128;
  undefined2 *local_120;
  longlong *local_118;
  longlong *local_110;
  longlong *local_108;
  char local_e8;
  longlong local_d0;
  uint local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong local_a8;
  uint local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong local_80;
  uint local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  uint local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  
  if (param_1 < 10) {
    return 0xffffffffffffffec;
  }
  uVar10 = unaff_RSI + 3 >> 2;
  puVar2 = (undefined2 *)((longlong)unaff_RDI + unaff_RSI);
  puVar3 = (undefined2 *)((longlong)unaff_RDI + uVar10);
  puVar4 = (undefined2 *)((longlong)puVar3 + uVar10);
  uVar6 = param_2[1];
  puVar11 = (undefined2 *)(uVar10 + (longlong)puVar4);
  uVar10 = (ulonglong)param_2[2];
  uVar18 = *param_3;
  uVar22 = (((param_1 - 6) - (ulonglong)*param_2) - (ulonglong)uVar6) - uVar10;
  local_e8 = puVar2 < puVar11 || param_1 < uVar22;
  if (puVar2 >= puVar11 && param_1 >= uVar22) {
    uVar12 = FUN_00e6a940();
    if (0xffffffffffffff88 < uVar12) {
      return uVar12;
    }
    uVar12 = FUN_00e6a940();
    if (0xffffffffffffff88 < uVar12) {
      return uVar12;
    }
    uVar12 = FUN_00e6a940(uVar10,uVar10,(ulonglong)uVar6);
    if (0xffffffffffffff88 < uVar12) {
      return uVar12;
    }
    uVar10 = FUN_00e6a940(uVar10,uVar22);
    if (0xffffffffffffff88 < uVar10) {
      return uVar10;
    }
    puVar1 = (undefined2 *)((longlong)puVar2 - 7);
    uVar19 = uVar18 >> 0x10 & 0xff;
    cVar7 = (char)(uVar18 >> 0x10);
    puVar29 = puVar3;
    local_128 = puVar4;
    local_120 = puVar11;
    if ((7 < (longlong)puVar2 - (longlong)puVar11) && (puVar11 < puVar1)) {
      bVar8 = false;
      bVar9 = false;
      local_150 = (longlong *)local_d0;
      bVar16 = false;
      local_140 = local_a8;
      local_138 = local_80;
      local_148 = local_58;
      local_118 = local_c0;
      local_110 = local_98;
      local_108 = local_70;
      local_130 = local_48;
      bVar13 = -cVar7 & 0x3f;
      do {
        puVar5 = param_3 + ((ulonglong)((longlong)local_150 << ((byte)local_c8 & 0x3f)) >> bVar13) +
                           1;
        *unaff_RDI = (short)*puVar5;
        iVar28 = *(byte *)((longlong)puVar5 + 2) + local_c8;
        puVar27 = (undefined2 *)((longlong)unaff_RDI + (ulonglong)*(byte *)((longlong)puVar5 + 3));
        puVar5 = param_3 + ((ulonglong)(local_140 << ((byte)local_a0 & 0x3f)) >> bVar13) + 1;
        *puVar29 = (short)*puVar5;
        iVar21 = *(byte *)((longlong)puVar5 + 2) + local_a0;
        puVar29 = (undefined2 *)((longlong)puVar29 + (ulonglong)*(byte *)((longlong)puVar5 + 3));
        puVar5 = param_3 + ((ulonglong)(local_138 << ((byte)local_78 & 0x3f)) >> bVar13) + 1;
        *local_128 = (short)*puVar5;
        iVar24 = *(byte *)((longlong)puVar5 + 2) + local_78;
        local_128 = (undefined2 *)((ulonglong)*(byte *)((longlong)puVar5 + 3) + (longlong)local_128)
        ;
        puVar5 = param_3 + ((ulonglong)(local_148 << ((byte)local_50 & 0x3f)) >> bVar13) + 1;
        *local_120 = (short)*puVar5;
        iVar17 = *(byte *)((longlong)puVar5 + 2) + local_50;
        local_120 = (undefined2 *)((ulonglong)*(byte *)((longlong)puVar5 + 3) + (longlong)local_120)
        ;
        puVar5 = param_3 + ((ulonglong)((longlong)local_150 << ((byte)iVar28 & 0x3f)) >> bVar13) + 1
        ;
        *puVar27 = (short)*puVar5;
        iVar28 = (uint)*(byte *)((longlong)puVar5 + 2) + iVar28;
        puVar27 = (undefined2 *)((longlong)puVar27 + (ulonglong)*(byte *)((longlong)puVar5 + 3));
        puVar5 = param_3 + ((ulonglong)(local_140 << ((byte)iVar21 & 0x3f)) >> bVar13) + 1;
        *puVar29 = (short)*puVar5;
        iVar21 = (uint)*(byte *)((longlong)puVar5 + 2) + iVar21;
        puVar29 = (undefined2 *)((longlong)puVar29 + (ulonglong)*(byte *)((longlong)puVar5 + 3));
        puVar5 = param_3 + ((ulonglong)(local_138 << ((byte)iVar24 & 0x3f)) >> bVar13) + 1;
        *local_128 = (short)*puVar5;
        iVar24 = (uint)*(byte *)((longlong)puVar5 + 2) + iVar24;
        local_128 = (undefined2 *)((longlong)local_128 + (ulonglong)*(byte *)((longlong)puVar5 + 3))
        ;
        puVar5 = param_3 + ((ulonglong)(local_148 << ((byte)iVar17 & 0x3f)) >> bVar13) + 1;
        *local_120 = (short)*puVar5;
        iVar17 = (uint)*(byte *)((longlong)puVar5 + 2) + iVar17;
        local_120 = (undefined2 *)((longlong)local_120 + (ulonglong)*(byte *)((longlong)puVar5 + 3))
        ;
        puVar5 = param_3 + ((ulonglong)((longlong)local_150 << ((byte)iVar28 & 0x3f)) >> bVar13) + 1
        ;
        *puVar27 = (short)*puVar5;
        iVar28 = (uint)*(byte *)((longlong)puVar5 + 2) + iVar28;
        puVar27 = (undefined2 *)((ulonglong)*(byte *)((longlong)puVar5 + 3) + (longlong)puVar27);
        puVar5 = param_3 + ((ulonglong)(local_140 << ((byte)iVar21 & 0x3f)) >> bVar13) + 1;
        *puVar29 = (short)*puVar5;
        iVar21 = (uint)*(byte *)((longlong)puVar5 + 2) + iVar21;
        puVar29 = (undefined2 *)((ulonglong)*(byte *)((longlong)puVar5 + 3) + (longlong)puVar29);
        puVar5 = param_3 + ((ulonglong)(local_138 << ((byte)iVar24 & 0x3f)) >> bVar13) + 1;
        *local_128 = (short)*puVar5;
        iVar24 = (uint)*(byte *)((longlong)puVar5 + 2) + iVar24;
        local_128 = (undefined2 *)((ulonglong)*(byte *)((longlong)puVar5 + 3) + (longlong)local_128)
        ;
        puVar5 = param_3 + ((ulonglong)(local_148 << ((byte)iVar17 & 0x3f)) >> bVar13) + 1;
        *local_120 = (short)*puVar5;
        iVar17 = (uint)*(byte *)((longlong)puVar5 + 2) + iVar17;
        local_120 = (undefined2 *)((longlong)local_120 + (ulonglong)*(byte *)((longlong)puVar5 + 3))
        ;
        puVar5 = param_3 + ((ulonglong)((longlong)local_150 << ((byte)iVar28 & 0x3f)) >> bVar13) + 1
        ;
        *puVar27 = (short)*puVar5;
        uVar25 = (uint)*(byte *)((longlong)puVar5 + 2) + iVar28;
        unaff_RDI = (undefined2 *)((ulonglong)*(byte *)((longlong)puVar5 + 3) + (longlong)puVar27);
        puVar5 = param_3 + ((ulonglong)(local_140 << ((byte)iVar21 & 0x3f)) >> bVar13) + 1;
        *puVar29 = (short)*puVar5;
        puVar29 = (undefined2 *)((ulonglong)*(byte *)((longlong)puVar5 + 3) + (longlong)puVar29);
        local_a0 = (uint)*(byte *)((longlong)puVar5 + 2) + iVar21;
        puVar5 = param_3 + ((ulonglong)(local_138 << ((byte)iVar24 & 0x3f)) >> bVar13) + 1;
        *local_128 = (short)*puVar5;
        local_78 = (uint)*(byte *)((longlong)puVar5 + 2) + iVar24;
        local_128 = (undefined2 *)((longlong)local_128 + (ulonglong)*(byte *)((longlong)puVar5 + 3))
        ;
        puVar5 = param_3 + ((ulonglong)(local_148 << ((byte)iVar17 & 0x3f)) >> bVar13) + 1;
        *local_120 = (short)*puVar5;
        uVar18 = (uint)*(byte *)((longlong)puVar5 + 2) + iVar17;
        local_120 = (undefined2 *)((longlong)local_120 + (ulonglong)*(byte *)((longlong)puVar5 + 3))
        ;
        if (local_118 < local_b0) {
          iVar17 = 3;
          local_c8 = uVar25;
        }
        else {
          local_e8 = '\x01';
          local_c8 = uVar25 & 7;
          local_118 = (longlong *)((longlong)local_118 - (ulonglong)(uVar25 >> 3));
          local_150 = (longlong *)*local_118;
          iVar17 = 0;
        }
        if (local_110 < local_88) {
          iVar17 = 3;
        }
        else {
          bVar8 = true;
          local_110 = (longlong *)((longlong)local_110 - (ulonglong)(local_a0 >> 3));
          local_140 = *local_110;
          local_a0 = local_a0 & 7;
        }
        if (local_108 < local_60) {
          iVar17 = 3;
        }
        else {
          bVar9 = true;
          local_108 = (longlong *)((longlong)local_108 - (ulonglong)(local_78 >> 3));
          local_138 = *local_108;
          local_78 = local_78 & 7;
        }
        if (local_130 < local_38) {
          if (local_e8 != '\0') {
            local_c0 = local_118;
            local_d0 = (longlong)local_150;
          }
          if (bVar8) {
            local_98 = local_110;
            local_a8 = local_140;
          }
          if (bVar9) {
            local_70 = local_108;
            local_80 = local_138;
          }
          local_50 = uVar18;
          if (!bVar16) goto LAB_00e775be;
          goto LAB_00e784f5;
        }
        local_50 = uVar18 & 7;
        local_130 = (longlong *)((longlong)local_130 - (ulonglong)(uVar18 >> 3));
        local_148 = *local_130;
        bVar16 = iVar17 == 0 && local_120 < puVar1;
      } while (iVar17 == 0 && local_120 < puVar1);
      if (local_e8 != '\0') {
        local_c0 = local_118;
        local_d0 = (longlong)local_150;
      }
      if (bVar8) {
        local_98 = local_110;
        local_a8 = local_140;
      }
      if (bVar9) {
        local_70 = local_108;
        local_80 = local_138;
      }
LAB_00e784f5:
      local_48 = local_130;
      local_58 = local_148;
    }
LAB_00e775be:
    if ((puVar4 < puVar29 || puVar3 < unaff_RDI) || puVar11 < local_128) goto LAB_00e76fe6;
    local_150 = local_c0;
    iVar17 = (int)local_b8;
    if (7 < (longlong)puVar3 - (longlong)unaff_RDI) {
      lVar23 = local_d0;
      uVar18 = local_c8;
      if (uVar19 < 0xc) {
        if (local_c8 < 0x41) {
          bVar16 = false;
          bVar13 = -cVar7 & 0x3f;
          do {
            if (local_c0 < local_b0) {
              if (local_c0 == local_b8) goto LAB_00e785a0;
              plVar14 = (longlong *)((longlong)local_c0 - (ulonglong)(uVar18 >> 3));
              if (plVar14 < local_b8) goto LAB_00e77751;
              uVar25 = uVar18 + (uVar18 >> 3) * -8;
              lVar23 = *plVar14;
            }
            else {
              uVar25 = uVar18 & 7;
              plVar14 = (longlong *)((longlong)local_c0 - (ulonglong)(uVar18 >> 3));
              lVar23 = *plVar14;
            }
            bVar16 = unaff_RDI < (undefined2 *)((longlong)puVar3 - 9U);
            lVar26 = lVar23;
            if (!bVar16) goto LAB_00e7778c;
            puVar5 = param_3 + ((ulonglong)(lVar23 << ((byte)uVar25 & 0x3f)) >> bVar13) + 1;
            *unaff_RDI = (short)*puVar5;
            iVar28 = uVar25 + *(byte *)((longlong)puVar5 + 2);
            puVar27 = (undefined2 *)
                      ((longlong)unaff_RDI + (ulonglong)*(byte *)((longlong)puVar5 + 3));
            puVar5 = param_3 + ((ulonglong)(lVar23 << ((byte)iVar28 & 0x3f)) >> bVar13) + 1;
            *puVar27 = (short)*puVar5;
            iVar28 = iVar28 + (uint)*(byte *)((longlong)puVar5 + 2);
            puVar27 = (undefined2 *)((longlong)puVar27 + (ulonglong)*(byte *)((longlong)puVar5 + 3))
            ;
            puVar5 = param_3 + ((ulonglong)(lVar23 << ((byte)iVar28 & 0x3f)) >> bVar13) + 1;
            *puVar27 = (short)*puVar5;
            iVar28 = iVar28 + (uint)*(byte *)((longlong)puVar5 + 2);
            puVar27 = (undefined2 *)((longlong)puVar27 + (ulonglong)*(byte *)((longlong)puVar5 + 3))
            ;
            puVar5 = param_3 + ((ulonglong)(lVar23 << ((byte)iVar28 & 0x3f)) >> bVar13) + 1;
            *puVar27 = (short)*puVar5;
            iVar28 = (uint)*(byte *)((longlong)puVar5 + 2) + iVar28;
            puVar27 = (undefined2 *)((longlong)puVar27 + (ulonglong)*(byte *)((longlong)puVar5 + 3))
            ;
            puVar5 = param_3 + ((ulonglong)(lVar23 << ((byte)iVar28 & 0x3f)) >> bVar13) + 1;
            *puVar27 = (short)*puVar5;
            uVar18 = (uint)*(byte *)((longlong)puVar5 + 2) + iVar28;
            unaff_RDI = (undefined2 *)
                        ((ulonglong)*(byte *)((longlong)puVar5 + 3) + (longlong)puVar27);
            local_c0 = plVar14;
          } while (uVar18 < 0x41);
          goto LAB_00e78528;
        }
LAB_00e788eb:
        plVar14 = local_150;
        lVar23 = local_d0;
        uVar18 = local_c8;
      }
      else {
        if (0x40 < local_c8) goto LAB_00e788eb;
        bVar16 = false;
        bVar13 = -cVar7 & 0x3f;
        do {
          if (local_c0 < local_b0) {
            if (local_c0 == local_b8) goto LAB_00e785a0;
            plVar14 = (longlong *)((longlong)local_c0 - (ulonglong)(uVar18 >> 3));
            if (plVar14 < local_b8) goto LAB_00e77751;
            uVar25 = uVar18 + (uVar18 >> 3) * -8;
            lVar23 = *plVar14;
          }
          else {
            uVar25 = uVar18 & 7;
            plVar14 = (longlong *)((longlong)local_c0 - (ulonglong)(uVar18 >> 3));
            lVar23 = *plVar14;
          }
          bVar16 = unaff_RDI < (undefined2 *)((longlong)puVar3 - 7U);
          lVar26 = lVar23;
          if (!bVar16) goto LAB_00e7778c;
          puVar5 = param_3 + ((ulonglong)(lVar23 << ((byte)uVar25 & 0x3f)) >> bVar13) + 1;
          *unaff_RDI = (short)*puVar5;
          iVar28 = uVar25 + *(byte *)((longlong)puVar5 + 2);
          puVar27 = (undefined2 *)((longlong)unaff_RDI + (ulonglong)*(byte *)((longlong)puVar5 + 3))
          ;
          puVar5 = param_3 + ((ulonglong)(lVar23 << ((byte)iVar28 & 0x3f)) >> bVar13) + 1;
          *puVar27 = (short)*puVar5;
          iVar28 = iVar28 + (uint)*(byte *)((longlong)puVar5 + 2);
          puVar27 = (undefined2 *)((longlong)puVar27 + (ulonglong)*(byte *)((longlong)puVar5 + 3));
          puVar5 = param_3 + ((ulonglong)(lVar23 << ((byte)iVar28 & 0x3f)) >> bVar13) + 1;
          *puVar27 = (short)*puVar5;
          iVar28 = (uint)*(byte *)((longlong)puVar5 + 2) + iVar28;
          puVar27 = (undefined2 *)((longlong)puVar27 + (ulonglong)*(byte *)((longlong)puVar5 + 3));
          puVar5 = param_3 + ((ulonglong)(lVar23 << ((byte)iVar28 & 0x3f)) >> bVar13) + 1;
          *puVar27 = (short)*puVar5;
          uVar18 = (uint)*(byte *)((longlong)puVar5 + 2) + iVar28;
          unaff_RDI = (undefined2 *)((ulonglong)*(byte *)((longlong)puVar5 + 3) + (longlong)puVar27)
          ;
          local_c0 = plVar14;
        } while (uVar18 < 0x41);
LAB_00e78528:
        local_d0 = lVar23;
        local_c8 = uVar18;
        if ((ulonglong)((longlong)puVar3 - (longlong)unaff_RDI) < 2) goto LAB_00e778ed;
      }
      goto LAB_00e77890;
    }
    if (local_c8 < 0x41) {
      if (local_c0 < local_b0) {
        plVar14 = local_b8;
        if (local_c0 != local_b8) {
          uVar18 = local_c8 >> 3;
          uVar10 = (ulonglong)uVar18;
          if ((longlong *)((longlong)local_c0 - uVar10) < local_b8) {
            uVar18 = (int)local_c0 - iVar17;
            uVar10 = (ulonglong)uVar18;
          }
          plVar14 = (longlong *)((longlong)local_c0 - uVar10);
          lVar26 = *(longlong *)((longlong)local_c0 - uVar10);
          uVar25 = local_c8 + uVar18 * -8;
          goto LAB_00e7778c;
        }
      }
      else {
        plVar14 = (longlong *)((longlong)local_c0 - (ulonglong)(local_c8 >> 3));
        local_d0 = *plVar14;
        local_c8 = local_c8 & 7;
      }
      local_150 = plVar14;
      if ((longlong)puVar3 - (longlong)unaff_RDI < 2) goto LAB_00e778ed;
      goto LAB_00e777b5;
    }
    plVar14 = local_c0;
    if (1 < (longlong)puVar3 - (longlong)unaff_RDI) goto LAB_00e788eb;
    goto LAB_00e778ed;
  }
  goto LAB_00e76fe6;
LAB_00e785a0:
  plVar14 = local_150;
  lVar26 = local_d0;
  uVar25 = local_c8;
  if (bVar16) {
    local_150 = local_b8;
    plVar14 = local_150;
    lVar26 = lVar23;
    uVar25 = uVar18;
  }
LAB_00e7778c:
  local_c8 = uVar25;
  local_d0 = lVar26;
  local_150 = plVar14;
  plVar14 = local_150;
  if (1 < (ulonglong)((longlong)puVar3 - (longlong)unaff_RDI)) {
    lVar23 = local_d0;
    uVar18 = local_c8;
    if (local_c8 < 0x41) {
LAB_00e777b5:
      bVar16 = false;
      lVar23 = local_d0;
      plVar15 = local_150;
      uVar18 = local_c8;
      do {
        if (plVar15 < local_b0) {
          if (plVar15 == local_b8) {
            plVar14 = plVar15;
            if (!bVar16) goto LAB_00e788eb;
            break;
          }
          plVar14 = (longlong *)((longlong)plVar15 - (ulonglong)(uVar18 >> 3));
          if (plVar14 < local_b8) {
            uVar25 = (int)plVar15 - iVar17;
            plVar14 = (longlong *)((longlong)plVar15 - (ulonglong)uVar25);
            lVar23 = *plVar14;
            uVar18 = uVar18 + uVar25 * -8;
            break;
          }
          uVar25 = uVar18 + (uVar18 >> 3) * -8;
          lVar23 = *plVar14;
        }
        else {
          uVar25 = uVar18 & 7;
          plVar14 = (longlong *)((longlong)plVar15 - (ulonglong)(uVar18 >> 3));
          lVar23 = *plVar14;
        }
        bVar16 = unaff_RDI <= puVar3 + -1;
        uVar18 = uVar25;
        if (!bVar16) break;
        puVar5 = param_3 + ((ulonglong)(lVar23 << ((byte)uVar25 & 0x3f)) >> (-cVar7 & 0x3fU)) + 1;
        *unaff_RDI = (short)*puVar5;
        uVar18 = uVar25 + *(byte *)((longlong)puVar5 + 2);
        unaff_RDI = (undefined2 *)((longlong)unaff_RDI + (ulonglong)*(byte *)((longlong)puVar5 + 3))
        ;
        plVar15 = plVar14;
      } while (uVar18 < 0x41);
    }
LAB_00e77890:
    local_c8 = uVar18;
    local_d0 = lVar23;
    if (unaff_RDI <= puVar3 + -1) {
      do {
        puVar5 = param_3 + ((ulonglong)(local_d0 << ((byte)local_c8 & 0x3f)) >> (-cVar7 & 0x3fU)) +
                           1;
        *unaff_RDI = (short)*puVar5;
        local_c8 = local_c8 + *(byte *)((longlong)puVar5 + 2);
        unaff_RDI = (undefined2 *)((longlong)unaff_RDI + (ulonglong)*(byte *)((longlong)puVar5 + 3))
        ;
      } while (unaff_RDI <= puVar3 + -1);
    }
  }
LAB_00e778ed:
  if (unaff_RDI < puVar3) {
    puVar5 = param_3 + ((ulonglong)(local_d0 << ((byte)local_c8 & 0x3f)) >> (-cVar7 & 0x3fU)) + 1;
    *(char *)unaff_RDI = (char)*puVar5;
    if (*(char *)((longlong)puVar5 + 3) == '\x01') {
      local_c8 = *(byte *)((longlong)puVar5 + 2) + local_c8;
    }
    else if ((local_c8 < 0x40) &&
            (local_c8 = *(byte *)((longlong)puVar5 + 2) + local_c8, 0x40 < local_c8)) {
      local_c8 = 0x40;
    }
  }
  iVar17 = (int)local_90;
  plVar15 = local_98;
  if (7 < (longlong)puVar4 - (longlong)puVar29) {
    plVar20 = local_98;
    lVar23 = local_a8;
    uVar18 = local_a0;
    if (uVar19 < 0xc) {
      if (local_a0 < 0x41) {
        bVar16 = false;
        bVar13 = -cVar7 & 0x3f;
        do {
          if (plVar20 < local_88) {
            if (plVar20 == local_90) goto LAB_00e78624;
            plVar15 = (longlong *)((longlong)plVar20 - (ulonglong)(uVar18 >> 3));
            if (plVar15 < local_90) goto LAB_00e77ab7;
            uVar25 = uVar18 + (uVar18 >> 3) * -8;
            lVar23 = *plVar15;
          }
          else {
            uVar25 = uVar18 & 7;
            plVar15 = (longlong *)((longlong)plVar20 - (ulonglong)(uVar18 >> 3));
            lVar23 = *plVar15;
          }
          bVar16 = puVar29 < (undefined2 *)((longlong)puVar4 - 9U);
          lVar26 = lVar23;
          if (!bVar16) goto LAB_00e77aed;
          puVar5 = param_3 + ((ulonglong)(lVar23 << ((byte)uVar25 & 0x3f)) >> bVar13) + 1;
          *puVar29 = (short)*puVar5;
          iVar28 = uVar25 + *(byte *)((longlong)puVar5 + 2);
          puVar29 = (undefined2 *)((longlong)puVar29 + (ulonglong)*(byte *)((longlong)puVar5 + 3));
          puVar5 = param_3 + ((ulonglong)(lVar23 << ((byte)iVar28 & 0x3f)) >> bVar13) + 1;
          *puVar29 = (short)*puVar5;
          iVar28 = iVar28 + (uint)*(byte *)((longlong)puVar5 + 2);
          puVar29 = (undefined2 *)((longlong)puVar29 + (ulonglong)*(byte *)((longlong)puVar5 + 3));
          puVar5 = param_3 + ((ulonglong)(lVar23 << ((byte)iVar28 & 0x3f)) >> bVar13) + 1;
          *puVar29 = (short)*puVar5;
          iVar28 = iVar28 + (uint)*(byte *)((longlong)puVar5 + 2);
          puVar29 = (undefined2 *)((longlong)puVar29 + (ulonglong)*(byte *)((longlong)puVar5 + 3));
          puVar5 = param_3 + ((ulonglong)(lVar23 << ((byte)iVar28 & 0x3f)) >> bVar13) + 1;
          *puVar29 = (short)*puVar5;
          iVar28 = (uint)*(byte *)((longlong)puVar5 + 2) + iVar28;
          puVar29 = (undefined2 *)((longlong)puVar29 + (ulonglong)*(byte *)((longlong)puVar5 + 3));
          puVar5 = param_3 + ((ulonglong)(lVar23 << ((byte)iVar28 & 0x3f)) >> bVar13) + 1;
          *puVar29 = (short)*puVar5;
          uVar18 = (uint)*(byte *)((longlong)puVar5 + 2) + iVar28;
          puVar29 = (undefined2 *)((ulonglong)*(byte *)((longlong)puVar5 + 3) + (longlong)puVar29);
          plVar20 = plVar15;
        } while (uVar18 < 0x41);
        goto LAB_00e78560;
      }
LAB_00e788d0:
      local_98 = plVar15;
      lVar23 = local_a8;
      uVar18 = local_a0;
    }
    else {
      if (0x40 < local_a0) goto LAB_00e788d0;
      bVar16 = false;
      bVar13 = -cVar7 & 0x3f;
      do {
        if (plVar20 < local_88) {
          if (plVar20 == local_90) goto LAB_00e78624;
          plVar15 = (longlong *)((longlong)plVar20 - (ulonglong)(uVar18 >> 3));
          if (plVar15 < local_90) goto LAB_00e77ab7;
          uVar25 = uVar18 + (uVar18 >> 3) * -8;
          lVar23 = *plVar15;
        }
        else {
          uVar25 = uVar18 & 7;
          plVar15 = (longlong *)((longlong)plVar20 - (ulonglong)(uVar18 >> 3));
          lVar23 = *plVar15;
        }
        bVar16 = puVar29 < (undefined2 *)((longlong)puVar4 - 7U);
        lVar26 = lVar23;
        if (!bVar16) goto LAB_00e77aed;
        puVar5 = param_3 + ((ulonglong)(lVar23 << ((byte)uVar25 & 0x3f)) >> bVar13) + 1;
        *puVar29 = (short)*puVar5;
        iVar28 = uVar25 + *(byte *)((longlong)puVar5 + 2);
        puVar29 = (undefined2 *)((longlong)puVar29 + (ulonglong)*(byte *)((longlong)puVar5 + 3));
        puVar5 = param_3 + ((ulonglong)(lVar23 << ((byte)iVar28 & 0x3f)) >> bVar13) + 1;
        *puVar29 = (short)*puVar5;
        iVar28 = iVar28 + (uint)*(byte *)((longlong)puVar5 + 2);
        puVar29 = (undefined2 *)((longlong)puVar29 + (ulonglong)*(byte *)((longlong)puVar5 + 3));
        puVar5 = param_3 + ((ulonglong)(lVar23 << ((byte)iVar28 & 0x3f)) >> bVar13) + 1;
        *puVar29 = (short)*puVar5;
        iVar28 = (uint)*(byte *)((longlong)puVar5 + 2) + iVar28;
        puVar29 = (undefined2 *)((longlong)puVar29 + (ulonglong)*(byte *)((longlong)puVar5 + 3));
        puVar5 = param_3 + ((ulonglong)(lVar23 << ((byte)iVar28 & 0x3f)) >> bVar13) + 1;
        *puVar29 = (short)*puVar5;
        uVar18 = (uint)*(byte *)((longlong)puVar5 + 2) + iVar28;
        puVar29 = (undefined2 *)((ulonglong)*(byte *)((longlong)puVar5 + 3) + (longlong)puVar29);
        plVar20 = plVar15;
      } while (uVar18 < 0x41);
LAB_00e78560:
      local_98 = plVar15;
      local_a8 = lVar23;
      local_a0 = uVar18;
      if ((ulonglong)((longlong)puVar4 - (longlong)puVar29) < 2) goto LAB_00e77c4d;
    }
    goto LAB_00e77bf0;
  }
  if (local_a0 < 0x41) {
    if (local_98 < local_88) {
      plVar15 = local_90;
      if (local_98 != local_90) {
        uVar18 = local_a0 >> 3;
        uVar10 = (ulonglong)uVar18;
        if ((longlong *)((longlong)local_98 - uVar10) < local_90) {
          uVar18 = (int)local_98 - iVar17;
          uVar10 = (ulonglong)uVar18;
        }
        plVar15 = (longlong *)((longlong)local_98 - uVar10);
        lVar26 = *plVar15;
        uVar25 = local_a0 + uVar18 * -8;
        goto LAB_00e77aed;
      }
    }
    else {
      plVar15 = (longlong *)((longlong)local_98 - (ulonglong)(local_a0 >> 3));
      local_a8 = *plVar15;
      local_a0 = local_a0 & 7;
    }
    local_98 = plVar15;
    if ((longlong)puVar4 - (longlong)puVar29 < 2) goto LAB_00e77c4d;
    goto LAB_00e77b19;
  }
  if (1 < (longlong)puVar4 - (longlong)puVar29) goto LAB_00e788d0;
  goto LAB_00e77c4d;
LAB_00e77751:
  uVar25 = (int)local_c0 - iVar17;
  plVar14 = (longlong *)((longlong)local_c0 - (ulonglong)uVar25);
  lVar26 = *plVar14;
  uVar25 = uVar18 + uVar25 * -8;
  goto LAB_00e7778c;
LAB_00e78624:
  plVar15 = local_98;
  lVar26 = local_a8;
  uVar25 = local_a0;
  if (bVar16) {
    plVar15 = local_90;
    lVar26 = lVar23;
    uVar25 = uVar18;
  }
LAB_00e77aed:
  local_a0 = uVar25;
  local_a8 = lVar26;
  local_98 = plVar15;
  if (1 < (ulonglong)((longlong)puVar4 - (longlong)puVar29)) {
    lVar23 = local_a8;
    uVar18 = local_a0;
    if (local_a0 < 0x41) {
LAB_00e77b19:
      bVar16 = false;
      plVar20 = plVar15;
      lVar23 = local_a8;
      uVar18 = local_a0;
      do {
        if (plVar20 < local_88) {
          if (plVar20 == local_90) {
            local_98 = plVar20;
            if (!bVar16) goto LAB_00e788d0;
            break;
          }
          local_98 = (longlong *)((longlong)plVar20 - (ulonglong)(uVar18 >> 3));
          if (local_98 < local_90) {
            uVar25 = (int)plVar20 - iVar17;
            local_98 = (longlong *)((longlong)plVar20 - (ulonglong)uVar25);
            lVar23 = *local_98;
            uVar18 = uVar18 + uVar25 * -8;
            break;
          }
          uVar25 = uVar18 + (uVar18 >> 3) * -8;
          lVar23 = *local_98;
        }
        else {
          uVar25 = uVar18 & 7;
          local_98 = (longlong *)((longlong)plVar20 - (ulonglong)(uVar18 >> 3));
          lVar23 = *local_98;
        }
        bVar16 = puVar29 <= puVar4 + -1;
        uVar18 = uVar25;
        if (!bVar16) break;
        puVar5 = param_3 + ((ulonglong)(lVar23 << ((byte)uVar25 & 0x3f)) >> (-cVar7 & 0x3fU)) + 1;
        *puVar29 = (short)*puVar5;
        uVar18 = uVar25 + *(byte *)((longlong)puVar5 + 2);
        puVar29 = (undefined2 *)((longlong)puVar29 + (ulonglong)*(byte *)((longlong)puVar5 + 3));
        plVar20 = local_98;
      } while (uVar18 < 0x41);
    }
LAB_00e77bf0:
    local_a0 = uVar18;
    local_a8 = lVar23;
    if (puVar29 <= puVar4 + -1) {
      do {
        puVar5 = param_3 + ((ulonglong)(local_a8 << ((byte)local_a0 & 0x3f)) >> (-cVar7 & 0x3fU)) +
                           1;
        *puVar29 = (short)*puVar5;
        local_a0 = local_a0 + *(byte *)((longlong)puVar5 + 2);
        puVar29 = (undefined2 *)((longlong)puVar29 + (ulonglong)*(byte *)((longlong)puVar5 + 3));
      } while (puVar29 <= puVar4 + -1);
    }
  }
LAB_00e77c4d:
  if (puVar29 < puVar4) {
    puVar5 = param_3 + ((ulonglong)(local_a8 << ((byte)local_a0 & 0x3f)) >> (-cVar7 & 0x3fU)) + 1;
    *(char *)puVar29 = (char)*puVar5;
    if (*(char *)((longlong)puVar5 + 3) == '\x01') {
      local_a0 = *(byte *)((longlong)puVar5 + 2) + local_a0;
    }
    else if ((local_a0 < 0x40) &&
            (local_a0 = *(byte *)((longlong)puVar5 + 2) + local_a0, 0x40 < local_a0)) {
      local_a0 = 0x40;
    }
  }
  iVar17 = (int)local_68;
  plVar15 = local_70;
  if (7 < (longlong)puVar11 - (longlong)local_128) {
    plVar20 = local_70;
    lVar23 = local_80;
    uVar18 = local_78;
    if (uVar19 < 0xc) {
      if (local_78 < 0x41) {
        bVar16 = false;
        bVar13 = -cVar7 & 0x3f;
        do {
          if (plVar20 < local_60) {
            if (plVar20 == local_68) goto LAB_00e785f8;
            plVar15 = (longlong *)((longlong)plVar20 - (ulonglong)(uVar18 >> 3));
            if (plVar15 < local_68) goto LAB_00e77e31;
            uVar25 = uVar18 + (uVar18 >> 3) * -8;
            lVar23 = *plVar15;
          }
          else {
            uVar25 = uVar18 & 7;
            plVar15 = (longlong *)((longlong)plVar20 - (ulonglong)(uVar18 >> 3));
            lVar23 = *plVar15;
          }
          bVar16 = local_128 < (undefined2 *)((longlong)puVar11 + -9);
          lVar26 = lVar23;
          if (!bVar16) goto LAB_00e77e61;
          puVar5 = param_3 + ((ulonglong)(lVar23 << ((byte)uVar25 & 0x3f)) >> bVar13) + 1;
          *local_128 = (short)*puVar5;
          iVar28 = uVar25 + *(byte *)((longlong)puVar5 + 2);
          local_128 = (undefined2 *)
                      ((longlong)local_128 + (ulonglong)*(byte *)((longlong)puVar5 + 3));
          puVar5 = param_3 + ((ulonglong)(lVar23 << ((byte)iVar28 & 0x3f)) >> bVar13) + 1;
          *local_128 = (short)*puVar5;
          iVar28 = (uint)*(byte *)((longlong)puVar5 + 2) + iVar28;
          local_128 = (undefined2 *)
                      ((longlong)local_128 + (ulonglong)*(byte *)((longlong)puVar5 + 3));
          puVar5 = param_3 + ((ulonglong)(lVar23 << ((byte)iVar28 & 0x3f)) >> bVar13) + 1;
          *local_128 = (short)*puVar5;
          iVar28 = iVar28 + (uint)*(byte *)((longlong)puVar5 + 2);
          local_128 = (undefined2 *)
                      ((longlong)local_128 + (ulonglong)*(byte *)((longlong)puVar5 + 3));
          puVar5 = param_3 + ((ulonglong)(lVar23 << ((byte)iVar28 & 0x3f)) >> bVar13) + 1;
          *local_128 = (short)*puVar5;
          iVar28 = (uint)*(byte *)((longlong)puVar5 + 2) + iVar28;
          local_128 = (undefined2 *)
                      ((ulonglong)*(byte *)((longlong)puVar5 + 3) + (longlong)local_128);
          puVar5 = param_3 + ((ulonglong)(lVar23 << ((byte)iVar28 & 0x3f)) >> bVar13) + 1;
          *local_128 = (short)*puVar5;
          uVar18 = (uint)*(byte *)((longlong)puVar5 + 2) + iVar28;
          local_128 = (undefined2 *)
                      ((ulonglong)*(byte *)((longlong)puVar5 + 3) + (longlong)local_128);
          plVar20 = plVar15;
        } while (uVar18 < 0x41);
        goto LAB_00e787b4;
      }
LAB_00e788b2:
      local_70 = plVar15;
      lVar23 = local_80;
      uVar18 = local_78;
    }
    else {
      if (0x40 < local_78) goto LAB_00e788b2;
      bVar16 = false;
      bVar13 = -cVar7 & 0x3f;
      do {
        if (plVar20 < local_60) {
          if (plVar20 == local_68) goto LAB_00e785f8;
          plVar15 = (longlong *)((longlong)plVar20 - (ulonglong)(uVar18 >> 3));
          if (plVar15 < local_68) goto LAB_00e77e31;
          uVar25 = uVar18 + (uVar18 >> 3) * -8;
          lVar23 = *plVar15;
        }
        else {
          uVar25 = uVar18 & 7;
          plVar15 = (longlong *)((longlong)plVar20 - (ulonglong)(uVar18 >> 3));
          lVar23 = *plVar15;
        }
        bVar16 = local_128 < (undefined2 *)((longlong)puVar11 + -7);
        lVar26 = lVar23;
        if (!bVar16) goto LAB_00e77e61;
        puVar5 = param_3 + ((ulonglong)(lVar23 << ((byte)uVar25 & 0x3f)) >> bVar13) + 1;
        *local_128 = (short)*puVar5;
        iVar28 = uVar25 + *(byte *)((longlong)puVar5 + 2);
        local_128 = (undefined2 *)((longlong)local_128 + (ulonglong)*(byte *)((longlong)puVar5 + 3))
        ;
        puVar5 = param_3 + ((ulonglong)(lVar23 << ((byte)iVar28 & 0x3f)) >> bVar13) + 1;
        *local_128 = (short)*puVar5;
        iVar28 = (uint)*(byte *)((longlong)puVar5 + 2) + iVar28;
        local_128 = (undefined2 *)((longlong)local_128 + (ulonglong)*(byte *)((longlong)puVar5 + 3))
        ;
        puVar5 = param_3 + ((ulonglong)(lVar23 << ((byte)iVar28 & 0x3f)) >> bVar13) + 1;
        *local_128 = (short)*puVar5;
        iVar28 = (uint)*(byte *)((longlong)puVar5 + 2) + iVar28;
        local_128 = (undefined2 *)((ulonglong)*(byte *)((longlong)puVar5 + 3) + (longlong)local_128)
        ;
        puVar5 = param_3 + ((ulonglong)(lVar23 << ((byte)iVar28 & 0x3f)) >> bVar13) + 1;
        *local_128 = (short)*puVar5;
        uVar18 = (uint)*(byte *)((longlong)puVar5 + 2) + iVar28;
        local_128 = (undefined2 *)((ulonglong)*(byte *)((longlong)puVar5 + 3) + (longlong)local_128)
        ;
        plVar20 = plVar15;
      } while (uVar18 < 0x41);
LAB_00e787b4:
      local_70 = plVar15;
      local_80 = lVar23;
      local_78 = uVar18;
      if ((ulonglong)((longlong)puVar11 - (longlong)local_128) < 2) goto LAB_00e77fdc;
    }
    goto LAB_00e77f78;
  }
  if (local_78 < 0x41) {
    if (local_70 < local_60) {
      plVar15 = local_68;
      if (local_70 != local_68) {
        uVar18 = local_78 >> 3;
        uVar10 = (ulonglong)uVar18;
        if ((longlong *)((longlong)local_70 - uVar10) < local_68) {
          uVar18 = (int)local_70 - iVar17;
          uVar10 = (ulonglong)uVar18;
        }
        plVar15 = (longlong *)((longlong)local_70 - uVar10);
        lVar26 = *plVar15;
        uVar25 = local_78 + uVar18 * -8;
        goto LAB_00e77e61;
      }
    }
    else {
      plVar15 = (longlong *)((longlong)local_70 - (ulonglong)(local_78 >> 3));
      local_80 = *plVar15;
      local_78 = local_78 & 7;
    }
    local_70 = plVar15;
    if ((longlong)puVar11 - (longlong)local_128 < 2) goto LAB_00e77fdc;
    goto LAB_00e77e91;
  }
  if (1 < (longlong)puVar11 - (longlong)local_128) goto LAB_00e788b2;
  goto LAB_00e77fdc;
LAB_00e77ab7:
  uVar25 = (int)plVar20 - iVar17;
  plVar15 = (longlong *)((longlong)plVar20 - (ulonglong)uVar25);
  lVar26 = *plVar15;
  uVar25 = uVar18 + uVar25 * -8;
  goto LAB_00e77aed;
LAB_00e785f8:
  plVar15 = local_70;
  lVar26 = local_80;
  uVar25 = local_78;
  if (bVar16) {
    plVar15 = local_68;
    lVar26 = lVar23;
    uVar25 = uVar18;
  }
LAB_00e77e61:
  local_78 = uVar25;
  local_80 = lVar26;
  local_70 = plVar15;
  if (1 < (ulonglong)((longlong)puVar11 - (longlong)local_128)) {
    lVar23 = local_80;
    uVar18 = local_78;
    if (local_78 < 0x41) {
LAB_00e77e91:
      bVar16 = false;
      plVar20 = plVar15;
      lVar23 = local_80;
      uVar18 = local_78;
      do {
        if (plVar20 < local_60) {
          if (plVar20 == local_68) {
            local_70 = plVar20;
            if (!bVar16) goto LAB_00e788b2;
            break;
          }
          local_70 = (longlong *)((longlong)plVar20 - (ulonglong)(uVar18 >> 3));
          if (local_70 < local_68) {
            uVar25 = (int)plVar20 - iVar17;
            local_70 = (longlong *)((longlong)plVar20 - (ulonglong)uVar25);
            lVar23 = *local_70;
            uVar18 = uVar18 + uVar25 * -8;
            break;
          }
          uVar25 = uVar18 + (uVar18 >> 3) * -8;
          lVar23 = *local_70;
        }
        else {
          uVar25 = uVar18 & 7;
          local_70 = (longlong *)((longlong)plVar20 - (ulonglong)(uVar18 >> 3));
          lVar23 = *local_70;
        }
        bVar16 = local_128 <= puVar11 + -1;
        uVar18 = uVar25;
        if (!bVar16) break;
        puVar5 = param_3 + ((ulonglong)(lVar23 << ((byte)uVar25 & 0x3f)) >> (-cVar7 & 0x3fU)) + 1;
        *local_128 = (short)*puVar5;
        uVar18 = uVar25 + *(byte *)((longlong)puVar5 + 2);
        local_128 = (undefined2 *)((longlong)local_128 + (ulonglong)*(byte *)((longlong)puVar5 + 3))
        ;
        plVar20 = local_70;
      } while (uVar18 < 0x41);
    }
LAB_00e77f78:
    local_78 = uVar18;
    local_80 = lVar23;
    if (local_128 <= puVar11 + -1) {
      do {
        puVar5 = param_3 + ((ulonglong)(local_80 << ((byte)local_78 & 0x3f)) >> (-cVar7 & 0x3fU)) +
                           1;
        *local_128 = (short)*puVar5;
        local_78 = local_78 + *(byte *)((longlong)puVar5 + 2);
        local_128 = (undefined2 *)((longlong)local_128 + (ulonglong)*(byte *)((longlong)puVar5 + 3))
        ;
      } while (local_128 <= puVar11 + -1);
    }
  }
LAB_00e77fdc:
  if (local_128 < puVar11) {
    puVar5 = param_3 + ((ulonglong)(local_80 << ((byte)local_78 & 0x3f)) >> (-cVar7 & 0x3fU)) + 1;
    *(char *)local_128 = (char)*puVar5;
    if (*(char *)((longlong)puVar5 + 3) == '\x01') {
      local_78 = *(byte *)((longlong)puVar5 + 2) + local_78;
    }
    else if ((local_78 < 0x40) &&
            (local_78 = *(byte *)((longlong)puVar5 + 2) + local_78, 0x40 < local_78)) {
      local_78 = 0x40;
    }
  }
  local_160 = local_48;
  iVar17 = (int)local_40;
  plVar15 = local_48;
  lVar23 = local_58;
  uVar18 = local_50;
  if (7 < (ulonglong)((longlong)puVar2 - (longlong)local_120)) {
    if (uVar19 < 0xc) {
      if (local_50 < 0x41) {
        local_168 = -cVar7 & 0x3f;
        bVar16 = false;
        do {
          if (local_48 < local_38) {
            if (local_48 == local_40) goto LAB_00e785cf;
            plVar15 = (longlong *)((longlong)local_48 - (ulonglong)(uVar18 >> 3));
            if (plVar15 < local_40) goto LAB_00e781c4;
            lVar23 = *plVar15;
            uVar19 = uVar18 + (uVar18 >> 3) * -8;
          }
          else {
            uVar19 = uVar18 & 7;
            plVar15 = (longlong *)((longlong)local_48 - (ulonglong)(uVar18 >> 3));
            lVar23 = *plVar15;
          }
          bVar16 = local_120 < (undefined2 *)((longlong)puVar2 - 9U);
          lVar26 = lVar23;
          if (!bVar16) goto LAB_00e781f5;
          puVar5 = param_3 + ((ulonglong)(lVar23 << ((byte)uVar19 & 0x3f)) >> local_168) + 1;
          *local_120 = (short)*puVar5;
          iVar28 = uVar19 + *(byte *)((longlong)puVar5 + 2);
          local_120 = (undefined2 *)
                      ((longlong)local_120 + (ulonglong)*(byte *)((longlong)puVar5 + 3));
          puVar5 = param_3 + ((ulonglong)(lVar23 << ((byte)iVar28 & 0x3f)) >> local_168) + 1;
          *local_120 = (short)*puVar5;
          iVar28 = (uint)*(byte *)((longlong)puVar5 + 2) + iVar28;
          local_120 = (undefined2 *)
                      ((longlong)local_120 + (ulonglong)*(byte *)((longlong)puVar5 + 3));
          puVar5 = param_3 + ((ulonglong)(lVar23 << ((byte)iVar28 & 0x3f)) >> local_168) + 1;
          *local_120 = (short)*puVar5;
          iVar28 = iVar28 + (uint)*(byte *)((longlong)puVar5 + 2);
          local_120 = (undefined2 *)
                      ((longlong)local_120 + (ulonglong)*(byte *)((longlong)puVar5 + 3));
          puVar5 = param_3 + ((ulonglong)(lVar23 << ((byte)iVar28 & 0x3f)) >> local_168) + 1;
          *local_120 = (short)*puVar5;
          iVar28 = (uint)*(byte *)((longlong)puVar5 + 2) + iVar28;
          local_120 = (undefined2 *)
                      ((ulonglong)*(byte *)((longlong)puVar5 + 3) + (longlong)local_120);
          puVar5 = param_3 + ((ulonglong)(lVar23 << ((byte)iVar28 & 0x3f)) >> local_168) + 1;
          *local_120 = (short)*puVar5;
          uVar18 = (uint)*(byte *)((longlong)puVar5 + 2) + iVar28;
          local_120 = (undefined2 *)
                      ((ulonglong)*(byte *)((longlong)puVar5 + 3) + (longlong)local_120);
          local_48 = plVar15;
        } while (uVar18 < 0x41);
LAB_00e787f0:
        local_58 = lVar23;
        local_50 = uVar18;
        if ((ulonglong)((longlong)puVar2 - (longlong)local_120) < 2) goto LAB_00e7837c;
      }
    }
    else if (local_50 < 0x41) {
      local_168 = -cVar7 & 0x3f;
      bVar16 = false;
      do {
        if (local_48 < local_38) {
          if (local_48 == local_40) goto LAB_00e785cf;
          plVar15 = (longlong *)((longlong)local_48 - (ulonglong)(uVar18 >> 3));
          if (plVar15 < local_40) goto LAB_00e781c4;
          lVar23 = *plVar15;
          uVar19 = uVar18 + (uVar18 >> 3) * -8;
        }
        else {
          uVar19 = uVar18 & 7;
          plVar15 = (longlong *)((longlong)local_48 - (ulonglong)(uVar18 >> 3));
          lVar23 = *plVar15;
        }
        bVar16 = local_120 < puVar1;
        lVar26 = lVar23;
        if (!bVar16) goto LAB_00e781f5;
        puVar5 = param_3 + ((ulonglong)(lVar23 << ((byte)uVar19 & 0x3f)) >> local_168) + 1;
        *local_120 = (short)*puVar5;
        iVar28 = uVar19 + *(byte *)((longlong)puVar5 + 2);
        local_120 = (undefined2 *)((longlong)local_120 + (ulonglong)*(byte *)((longlong)puVar5 + 3))
        ;
        puVar5 = param_3 + ((ulonglong)(lVar23 << ((byte)iVar28 & 0x3f)) >> local_168) + 1;
        *local_120 = (short)*puVar5;
        iVar28 = (uint)*(byte *)((longlong)puVar5 + 2) + iVar28;
        local_120 = (undefined2 *)((longlong)local_120 + (ulonglong)*(byte *)((longlong)puVar5 + 3))
        ;
        puVar5 = param_3 + ((ulonglong)(lVar23 << ((byte)iVar28 & 0x3f)) >> local_168) + 1;
        *local_120 = (short)*puVar5;
        iVar28 = (uint)*(byte *)((longlong)puVar5 + 2) + iVar28;
        local_120 = (undefined2 *)((ulonglong)*(byte *)((longlong)puVar5 + 3) + (longlong)local_120)
        ;
        puVar5 = param_3 + ((ulonglong)(lVar23 << ((byte)iVar28 & 0x3f)) >> local_168) + 1;
        *local_120 = (short)*puVar5;
        uVar18 = (uint)*(byte *)((longlong)puVar5 + 2) + iVar28;
        local_120 = (undefined2 *)((ulonglong)*(byte *)((longlong)puVar5 + 3) + (longlong)local_120)
        ;
        local_48 = plVar15;
      } while (uVar18 < 0x41);
      goto LAB_00e787f0;
    }
    goto LAB_00e78310;
  }
  if (local_50 < 0x41) {
    if (local_48 < local_38) {
      plVar15 = local_40;
      if (local_48 != local_40) {
        uVar18 = local_50 >> 3;
        uVar10 = (ulonglong)uVar18;
        if ((longlong *)((longlong)local_48 - uVar10) < local_40) {
          uVar18 = (int)local_48 - iVar17;
          uVar10 = (ulonglong)uVar18;
        }
        plVar15 = (longlong *)((longlong)local_48 - uVar10);
        lVar26 = *(longlong *)((longlong)local_48 - uVar10);
        uVar19 = local_50 + uVar18 * -8;
        goto LAB_00e781f5;
      }
    }
    else {
      plVar15 = (longlong *)((longlong)local_48 - (ulonglong)(local_50 >> 3));
      local_58 = *plVar15;
      local_50 = local_50 & 7;
    }
    local_160 = plVar15;
    if ((ulonglong)((longlong)puVar2 - (longlong)local_120) < 2) goto LAB_00e7837c;
    goto LAB_00e78228;
  }
  if (1 < (ulonglong)((longlong)puVar2 - (longlong)local_120)) goto LAB_00e78310;
  goto LAB_00e7837c;
LAB_00e77e31:
  uVar25 = (int)plVar20 - iVar17;
  plVar15 = (longlong *)((longlong)plVar20 - (ulonglong)uVar25);
  lVar26 = *plVar15;
  uVar25 = uVar18 + uVar25 * -8;
  goto LAB_00e77e61;
LAB_00e781c4:
  uVar19 = (int)local_48 - iVar17;
  plVar15 = (longlong *)((longlong)local_48 - (ulonglong)uVar19);
  lVar26 = *plVar15;
  uVar19 = uVar18 + uVar19 * -8;
  goto LAB_00e781f5;
LAB_00e785cf:
  plVar15 = local_160;
  lVar26 = local_58;
  uVar19 = local_50;
  if (bVar16) {
    local_160 = local_40;
    plVar15 = local_160;
    lVar26 = lVar23;
    uVar19 = uVar18;
  }
LAB_00e781f5:
  local_50 = uVar19;
  local_58 = lVar26;
  local_160 = plVar15;
  plVar15 = local_160;
  if (1 < (ulonglong)((longlong)puVar2 - (longlong)local_120)) {
    lVar23 = local_58;
    uVar18 = local_50;
    if (local_50 < 0x41) {
LAB_00e78228:
      local_168 = -cVar7 & 0x3f;
      bVar16 = false;
      plVar20 = local_160;
      lVar26 = local_58;
      uVar19 = local_50;
      do {
        if (plVar20 < local_38) {
          if (plVar20 == local_40) {
            plVar15 = local_160;
            lVar23 = local_58;
            uVar18 = local_50;
            if (bVar16) {
              plVar15 = plVar20;
              lVar23 = lVar26;
              uVar18 = uVar19;
            }
            break;
          }
          plVar15 = (longlong *)((longlong)plVar20 - (ulonglong)(uVar19 >> 3));
          if (plVar15 < local_40) {
            uVar18 = (int)plVar20 - iVar17;
            plVar15 = (longlong *)((longlong)plVar20 - (ulonglong)uVar18);
            lVar23 = *plVar15;
            uVar18 = uVar19 + uVar18 * -8;
            break;
          }
          uVar18 = uVar19 + (uVar19 >> 3) * -8;
          lVar26 = *plVar15;
        }
        else {
          uVar18 = uVar19 & 7;
          plVar15 = (longlong *)((longlong)plVar20 - (ulonglong)(uVar19 >> 3));
          lVar26 = *plVar15;
        }
        bVar16 = local_120 <= puVar2 + -1;
        lVar23 = lVar26;
        if (!bVar16) break;
        puVar5 = param_3 + ((ulonglong)(lVar26 << ((byte)uVar18 & 0x3f)) >> local_168) + 1;
        *local_120 = (short)*puVar5;
        uVar19 = uVar18 + *(byte *)((longlong)puVar5 + 2);
        local_120 = (undefined2 *)((longlong)local_120 + (ulonglong)*(byte *)((longlong)puVar5 + 3))
        ;
        plVar20 = plVar15;
        uVar18 = uVar19;
      } while (uVar19 < 0x41);
    }
LAB_00e78310:
    local_50 = uVar18;
    local_58 = lVar23;
    if (local_120 <= puVar2 + -1) {
      do {
        puVar5 = param_3 + ((ulonglong)(local_58 << ((byte)local_50 & 0x3f)) >> (-cVar7 & 0x3fU)) +
                           1;
        *local_120 = (short)*puVar5;
        local_50 = local_50 + *(byte *)((longlong)puVar5 + 2);
        local_120 = (undefined2 *)((longlong)local_120 + (ulonglong)*(byte *)((longlong)puVar5 + 3))
        ;
      } while (local_120 <= puVar2 + -1);
    }
  }
LAB_00e7837c:
  if (local_120 < puVar2) {
    param_3 = param_3 + ((ulonglong)(local_58 << ((byte)local_50 & 0x3f)) >> (-cVar7 & 0x3fU)) + 1;
    *(char *)local_120 = (char)*param_3;
    if (*(char *)((longlong)param_3 + 3) == '\x01') {
      local_50 = *(byte *)((longlong)param_3 + 2) + local_50;
    }
    else if ((local_50 < 0x40) &&
            (local_50 = *(byte *)((longlong)param_3 + 2) + local_50, 0x40 < local_50)) {
      local_50 = 0x40;
    }
  }
  if ((((local_70 != local_68) || (plVar15 != local_40)) ||
      (((plVar14 != local_b8 || local_c8 != 0x40) || local_78 != 0x40) ||
       (local_98 != local_90 || local_a0 != 0x40))) || (local_50 != 0x40)) {
LAB_00e76fe6:
    unaff_RSI = 0xffffffffffffffec;
  }
  return unaff_RSI;
}



ulonglong FUN_00e793b0(ulonglong param_1,ushort *param_2,uint *param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  uint *puVar5;
  uint *puVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  uint uVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined2 *puVar17;
  ulonglong unaff_RSI;
  longlong *plVar18;
  longlong *plVar19;
  undefined2 *unaff_RDI;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  undefined2 *puVar23;
  uint uVar24;
  longlong *plVar25;
  undefined2 *puVar26;
  bool bVar27;
  longlong *local_140;
  longlong local_138;
  longlong local_130;
  longlong *local_128;
  undefined2 *local_120;
  longlong *local_118;
  longlong *local_110;
  longlong *local_108;
  longlong local_d0;
  uint local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong local_a8;
  uint local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong local_80;
  uint local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  uint local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  
  if (param_1 < 10) {
    return 0xffffffffffffffec;
  }
  puVar2 = (undefined2 *)((longlong)unaff_RDI + unaff_RSI);
  uVar10 = unaff_RSI + 3 >> 2;
  uVar14 = *param_3;
  puVar3 = (undefined2 *)((longlong)unaff_RDI + uVar10);
  puVar4 = (undefined2 *)((longlong)puVar3 + uVar10);
  puVar11 = (undefined2 *)(uVar10 + (longlong)puVar4);
  bVar27 = param_1 < (((param_1 - 6) - (ulonglong)*param_2) - (ulonglong)param_2[1]) -
                     (ulonglong)param_2[2];
  bVar13 = puVar2 < puVar11 || bVar27;
  if (puVar2 >= puVar11 && !bVar27) {
    uVar10 = FUN_00e6a940();
    if (0xffffffffffffff88 < uVar10) {
      return uVar10;
    }
    uVar10 = FUN_00e6a940();
    if (0xffffffffffffff88 < uVar10) {
      return uVar10;
    }
    uVar10 = FUN_00e6a940();
    if (0xffffffffffffff88 < uVar10) {
      return uVar10;
    }
    uVar10 = FUN_00e6a940();
    if (0xffffffffffffff88 < uVar10) {
      return uVar10;
    }
    uVar14 = uVar14 >> 0x10 & 0xff;
    puVar1 = (undefined2 *)((longlong)puVar2 - 7);
    puVar17 = puVar3;
    puVar26 = puVar11;
    local_120 = puVar4;
    if ((7 < (longlong)puVar2 - (longlong)puVar11) && (puVar11 < puVar1)) {
      bVar7 = false;
      local_138 = local_a8;
      bVar8 = false;
      local_130 = local_80;
      bVar27 = false;
      local_140 = (longlong *)local_58;
      local_118 = local_c0;
      local_110 = local_98;
      local_108 = local_70;
      local_128 = local_48;
      uVar9 = -uVar14 & 0x3f;
      lVar20 = local_d0;
      do {
        puVar5 = param_3 + ((ulonglong)(lVar20 << ((ulonglong)local_c8 & 0x3f)) >> uVar9) + 1;
        *unaff_RDI = (short)*puVar5;
        uVar15 = *(byte *)((longlong)puVar5 + 2) + local_c8;
        puVar23 = (undefined2 *)((longlong)unaff_RDI + (ulonglong)*(byte *)((longlong)puVar5 + 3));
        puVar5 = param_3 + ((ulonglong)(local_138 << ((ulonglong)local_a0 & 0x3f)) >> uVar9) + 1;
        *puVar17 = (short)*puVar5;
        uVar12 = *(byte *)((longlong)puVar5 + 2) + local_a0;
        puVar17 = (undefined2 *)((longlong)puVar17 + (ulonglong)*(byte *)((longlong)puVar5 + 3));
        puVar5 = param_3 + ((ulonglong)(local_130 << ((ulonglong)local_78 & 0x3f)) >> uVar9) + 1;
        *local_120 = (short)*puVar5;
        local_120 = (undefined2 *)((ulonglong)*(byte *)((longlong)puVar5 + 3) + (longlong)local_120)
        ;
        uVar24 = *(byte *)((longlong)puVar5 + 2) + local_78;
        puVar5 = param_3 + ((ulonglong)((longlong)local_140 << ((ulonglong)local_50 & 0x3f)) >>
                           uVar9) + 1;
        *puVar26 = (short)*puVar5;
        uVar22 = local_50 + *(byte *)((longlong)puVar5 + 2);
        puVar26 = (undefined2 *)((longlong)puVar26 + (ulonglong)*(byte *)((longlong)puVar5 + 3));
        puVar5 = param_3 + ((ulonglong)(lVar20 << ((ulonglong)uVar15 & 0x3f)) >> uVar9) + 1;
        *puVar23 = (short)*puVar5;
        uVar15 = *(byte *)((longlong)puVar5 + 2) + uVar15;
        puVar6 = param_3 + ((ulonglong)(local_138 << ((ulonglong)uVar12 & 0x3f)) >> uVar9) + 1;
        puVar23 = (undefined2 *)((ulonglong)*(byte *)((longlong)puVar5 + 3) + (longlong)puVar23);
        *puVar17 = (short)*puVar6;
        uVar12 = *(byte *)((longlong)puVar6 + 2) + uVar12;
        puVar5 = param_3 + ((ulonglong)(local_130 << ((ulonglong)uVar24 & 0x3f)) >> uVar9) + 1;
        puVar17 = (undefined2 *)((ulonglong)*(byte *)((longlong)puVar6 + 3) + (longlong)puVar17);
        *local_120 = (short)*puVar5;
        uVar24 = *(byte *)((longlong)puVar5 + 2) + uVar24;
        local_120 = (undefined2 *)((ulonglong)*(byte *)((longlong)puVar5 + 3) + (longlong)local_120)
        ;
        puVar5 = param_3 + ((ulonglong)((longlong)local_140 << ((ulonglong)uVar22 & 0x3f)) >> uVar9)
                           + 1;
        *puVar26 = (short)*puVar5;
        uVar22 = *(byte *)((longlong)puVar5 + 2) + uVar22;
        puVar6 = param_3 + ((ulonglong)(lVar20 << ((ulonglong)uVar15 & 0x3f)) >> uVar9) + 1;
        puVar26 = (undefined2 *)((ulonglong)*(byte *)((longlong)puVar5 + 3) + (longlong)puVar26);
        *puVar23 = (short)*puVar6;
        uVar15 = *(byte *)((longlong)puVar6 + 2) + uVar15;
        puVar5 = param_3 + ((ulonglong)(local_138 << ((ulonglong)uVar12 & 0x3f)) >> uVar9) + 1;
        puVar23 = (undefined2 *)((ulonglong)*(byte *)((longlong)puVar6 + 3) + (longlong)puVar23);
        *puVar17 = (short)*puVar5;
        uVar12 = *(byte *)((longlong)puVar5 + 2) + uVar12;
        puVar17 = (undefined2 *)((ulonglong)*(byte *)((longlong)puVar5 + 3) + (longlong)puVar17);
        puVar5 = param_3 + ((ulonglong)(local_130 << ((ulonglong)uVar24 & 0x3f)) >> uVar9) + 1;
        *local_120 = (short)*puVar5;
        uVar24 = *(byte *)((longlong)puVar5 + 2) + uVar24;
        puVar6 = param_3 + ((ulonglong)((longlong)local_140 << ((ulonglong)uVar22 & 0x3f)) >> uVar9)
                           + 1;
        local_120 = (undefined2 *)((ulonglong)*(byte *)((longlong)puVar5 + 3) + (longlong)local_120)
        ;
        *puVar26 = (short)*puVar6;
        uVar22 = *(byte *)((longlong)puVar6 + 2) + uVar22;
        puVar5 = param_3 + ((ulonglong)(lVar20 << ((ulonglong)uVar15 & 0x3f)) >> uVar9) + 1;
        puVar26 = (undefined2 *)((ulonglong)*(byte *)((longlong)puVar6 + 3) + (longlong)puVar26);
        *puVar23 = (short)*puVar5;
        unaff_RDI = (undefined2 *)((ulonglong)*(byte *)((longlong)puVar5 + 3) + (longlong)puVar23);
        puVar6 = param_3 + ((ulonglong)(local_138 << ((ulonglong)uVar12 & 0x3f)) >> uVar9) + 1;
        uVar15 = *(byte *)((longlong)puVar5 + 2) + uVar15;
        *puVar17 = (short)*puVar6;
        local_a0 = *(byte *)((longlong)puVar6 + 2) + uVar12;
        puVar17 = (undefined2 *)((ulonglong)*(byte *)((longlong)puVar6 + 3) + (longlong)puVar17);
        puVar5 = param_3 + ((ulonglong)(local_130 << ((ulonglong)uVar24 & 0x3f)) >> uVar9) + 1;
        *local_120 = (short)*puVar5;
        local_78 = *(byte *)((longlong)puVar5 + 2) + uVar24;
        local_120 = (undefined2 *)((longlong)local_120 + (ulonglong)*(byte *)((longlong)puVar5 + 3))
        ;
        puVar5 = param_3 + ((ulonglong)((longlong)local_140 << ((ulonglong)uVar22 & 0x3f)) >> uVar9)
                           + 1;
        *puVar26 = (short)*puVar5;
        uVar22 = *(byte *)((longlong)puVar5 + 2) + uVar22;
        puVar26 = (undefined2 *)((longlong)puVar26 + (ulonglong)*(byte *)((longlong)puVar5 + 3));
        if (local_118 < local_b0) {
          iVar16 = 3;
          local_c8 = uVar15;
        }
        else {
          bVar13 = true;
          local_c8 = uVar15 & 7;
          local_118 = (longlong *)((longlong)local_118 - (ulonglong)(uVar15 >> 3));
          iVar16 = 0;
          lVar20 = *local_118;
        }
        if (local_110 < local_88) {
          iVar16 = 3;
        }
        else {
          bVar7 = true;
          local_110 = (longlong *)((longlong)local_110 - (ulonglong)(local_a0 >> 3));
          local_138 = *local_110;
          local_a0 = local_a0 & 7;
        }
        if (local_108 < local_60) {
          iVar16 = 3;
        }
        else {
          bVar8 = true;
          local_108 = (longlong *)((longlong)local_108 - (ulonglong)(local_78 >> 3));
          local_130 = *local_108;
          local_78 = local_78 & 7;
        }
        if (local_128 < local_38) {
          if (bVar13) {
            local_c0 = local_118;
            local_d0 = lVar20;
          }
          if (bVar7) {
            local_98 = local_110;
            local_a8 = local_138;
          }
          if (bVar8) {
            local_70 = local_108;
            local_80 = local_130;
          }
          local_50 = uVar22;
          if (!bVar27) goto LAB_00e7998f;
          goto LAB_00e7a7a7;
        }
        local_50 = uVar22 & 7;
        local_128 = (longlong *)((longlong)local_128 - (ulonglong)(uVar22 >> 3));
        local_140 = (longlong *)*local_128;
        bVar27 = iVar16 == 0 && puVar26 < puVar1;
      } while (iVar16 == 0 && puVar26 < puVar1);
      if (bVar13) {
        local_c0 = local_118;
        local_d0 = lVar20;
      }
      if (bVar7) {
        local_98 = local_110;
        local_a8 = local_138;
      }
      if (bVar8) {
        local_70 = local_108;
        local_80 = local_130;
      }
LAB_00e7a7a7:
      local_48 = local_128;
      local_58 = (longlong)local_140;
    }
LAB_00e7998f:
    if ((puVar4 < puVar17 || puVar3 < unaff_RDI) || puVar11 < local_120) goto LAB_00e7943a;
    iVar16 = (int)local_b8;
    if (7 < (longlong)puVar3 - (longlong)unaff_RDI) {
      lVar20 = local_d0;
      uVar9 = local_c8;
      if (uVar14 < 0xc) {
        if (local_c8 < 0x41) {
          local_140 = local_c0;
          bVar13 = false;
          uVar12 = -uVar14 & 0x3f;
          do {
            if (local_140 < local_b0) {
              if (local_140 == local_b8) goto LAB_00e7a801;
              plVar25 = (longlong *)((longlong)local_140 - (ulonglong)(uVar9 >> 3));
              if (plVar25 < local_b8) goto LAB_00e79b1d;
              uVar24 = uVar9 + (uVar9 >> 3) * -8;
              lVar20 = *plVar25;
              local_140 = plVar25;
            }
            else {
              uVar24 = uVar9 & 7;
              local_140 = (longlong *)((longlong)local_140 - (ulonglong)(uVar9 >> 3));
              lVar20 = *local_140;
            }
            bVar13 = unaff_RDI < (undefined2 *)((longlong)puVar3 - 9U);
            lVar21 = lVar20;
            if (!bVar13) goto LAB_00e79b5e;
            puVar5 = param_3 + ((ulonglong)(lVar20 << ((ulonglong)uVar24 & 0x3f)) >> uVar12) + 1;
            *unaff_RDI = (short)*puVar5;
            uVar24 = *(byte *)((longlong)puVar5 + 2) + uVar24;
            puVar23 = (undefined2 *)
                      ((ulonglong)*(byte *)((longlong)puVar5 + 3) + (longlong)unaff_RDI);
            puVar5 = param_3 + ((ulonglong)(lVar20 << ((ulonglong)uVar24 & 0x3f)) >> uVar12) + 1;
            *puVar23 = (short)*puVar5;
            uVar24 = *(byte *)((longlong)puVar5 + 2) + uVar24;
            puVar23 = (undefined2 *)((longlong)puVar23 + (ulonglong)*(byte *)((longlong)puVar5 + 3))
            ;
            puVar5 = param_3 + ((ulonglong)(lVar20 << ((ulonglong)uVar24 & 0x3f)) >> uVar12) + 1;
            *puVar23 = (short)*puVar5;
            uVar24 = *(byte *)((longlong)puVar5 + 2) + uVar24;
            puVar23 = (undefined2 *)((longlong)puVar23 + (ulonglong)*(byte *)((longlong)puVar5 + 3))
            ;
            puVar5 = param_3 + ((ulonglong)(lVar20 << ((ulonglong)uVar24 & 0x3f)) >> uVar12) + 1;
            *puVar23 = (short)*puVar5;
            uVar24 = *(byte *)((longlong)puVar5 + 2) + uVar24;
            puVar23 = (undefined2 *)((ulonglong)*(byte *)((longlong)puVar5 + 3) + (longlong)puVar23)
            ;
            puVar5 = param_3 + ((ulonglong)(lVar20 << ((ulonglong)uVar24 & 0x3f)) >> uVar12) + 1;
            *puVar23 = (short)*puVar5;
            uVar9 = *(byte *)((longlong)puVar5 + 2) + uVar24;
            unaff_RDI = (undefined2 *)
                        ((ulonglong)*(byte *)((longlong)puVar5 + 3) + (longlong)puVar23);
          } while (uVar9 < 0x41);
          goto LAB_00e7a9b0;
        }
LAB_00e7a87c:
        local_140 = local_c0;
        lVar20 = local_d0;
        uVar9 = local_c8;
      }
      else {
        if (0x40 < local_c8) goto LAB_00e7a87c;
        local_140 = local_c0;
        bVar13 = false;
        uVar12 = -uVar14 & 0x3f;
        do {
          if (local_140 < local_b0) {
            if (local_140 == local_b8) goto LAB_00e7a801;
            plVar25 = (longlong *)((longlong)local_140 - (ulonglong)(uVar9 >> 3));
            if (plVar25 < local_b8) goto LAB_00e79b1d;
            uVar24 = uVar9 + (uVar9 >> 3) * -8;
            lVar20 = *plVar25;
            local_140 = plVar25;
          }
          else {
            uVar24 = uVar9 & 7;
            local_140 = (longlong *)((longlong)local_140 - (ulonglong)(uVar9 >> 3));
            lVar20 = *local_140;
          }
          bVar13 = unaff_RDI < (undefined2 *)((longlong)puVar3 - 7U);
          lVar21 = lVar20;
          if (!bVar13) goto LAB_00e79b5e;
          puVar5 = param_3 + ((ulonglong)(lVar20 << ((ulonglong)uVar24 & 0x3f)) >> uVar12) + 1;
          *unaff_RDI = (short)*puVar5;
          uVar24 = *(byte *)((longlong)puVar5 + 2) + uVar24;
          puVar23 = (undefined2 *)((ulonglong)*(byte *)((longlong)puVar5 + 3) + (longlong)unaff_RDI)
          ;
          puVar5 = param_3 + ((ulonglong)(lVar20 << ((ulonglong)uVar24 & 0x3f)) >> uVar12) + 1;
          *puVar23 = (short)*puVar5;
          uVar24 = *(byte *)((longlong)puVar5 + 2) + uVar24;
          puVar23 = (undefined2 *)((longlong)puVar23 + (ulonglong)*(byte *)((longlong)puVar5 + 3));
          puVar5 = param_3 + ((ulonglong)(lVar20 << ((ulonglong)uVar24 & 0x3f)) >> uVar12) + 1;
          *puVar23 = (short)*puVar5;
          uVar24 = *(byte *)((longlong)puVar5 + 2) + uVar24;
          puVar23 = (undefined2 *)((ulonglong)*(byte *)((longlong)puVar5 + 3) + (longlong)puVar23);
          puVar5 = param_3 + ((ulonglong)(lVar20 << ((ulonglong)uVar24 & 0x3f)) >> uVar12) + 1;
          *puVar23 = (short)*puVar5;
          uVar9 = *(byte *)((longlong)puVar5 + 2) + uVar24;
          unaff_RDI = (undefined2 *)((ulonglong)*(byte *)((longlong)puVar5 + 3) + (longlong)puVar23)
          ;
        } while (uVar9 < 0x41);
LAB_00e7a9b0:
        local_d0 = lVar20;
        local_c8 = uVar9;
        if ((ulonglong)((longlong)puVar3 - (longlong)unaff_RDI) < 2) goto LAB_00e79cc6;
      }
      goto LAB_00e79c6f;
    }
    if (local_c8 < 0x41) {
      if (local_c0 < local_b0) {
        if (local_c0 != local_b8) {
          uVar9 = local_c8 >> 3;
          uVar10 = (ulonglong)uVar9;
          if ((longlong *)((longlong)local_c0 - uVar10) < local_b8) {
            uVar9 = (int)local_c0 - iVar16;
            uVar10 = (ulonglong)uVar9;
          }
          local_140 = (longlong *)((longlong)local_c0 - uVar10);
          lVar21 = *local_140;
          uVar24 = local_c8 + uVar9 * -8;
          goto LAB_00e79b5e;
        }
        local_140 = local_b8;
      }
      else {
        local_140 = (longlong *)((longlong)local_c0 - (ulonglong)(local_c8 >> 3));
        local_d0 = *local_140;
        local_c8 = local_c8 & 7;
      }
      local_c0 = local_140;
      if ((longlong)puVar3 - (longlong)unaff_RDI < 2) goto LAB_00e79cc6;
      goto LAB_00e79b8c;
    }
    local_140 = local_c0;
    if (1 < (longlong)puVar3 - (longlong)unaff_RDI) goto LAB_00e7a87c;
    goto LAB_00e79cc6;
  }
  goto LAB_00e7943a;
LAB_00e7a801:
  local_140 = local_c0;
  lVar21 = local_d0;
  uVar24 = local_c8;
  if (bVar13) {
    local_140 = local_b8;
    lVar21 = lVar20;
    uVar24 = uVar9;
  }
LAB_00e79b5e:
  local_c8 = uVar24;
  local_d0 = lVar21;
  if (1 < (ulonglong)((longlong)puVar3 - (longlong)unaff_RDI)) {
    local_c0 = local_140;
    lVar20 = local_d0;
    uVar9 = local_c8;
    if (local_c8 < 0x41) {
LAB_00e79b8c:
      bVar13 = false;
      lVar20 = local_d0;
      uVar9 = local_c8;
      local_140 = local_c0;
      do {
        if (local_140 < local_b0) {
          if (local_140 == local_b8) {
            if (!bVar13) goto LAB_00e7a87c;
            break;
          }
          plVar25 = (longlong *)((longlong)local_140 - (ulonglong)(uVar9 >> 3));
          if (plVar25 < local_b8) {
            uVar12 = (int)local_140 - iVar16;
            local_140 = (longlong *)((longlong)local_140 - (ulonglong)uVar12);
            lVar20 = *local_140;
            uVar9 = uVar9 + uVar12 * -8;
            break;
          }
          uVar12 = uVar9 + (uVar9 >> 3) * -8;
          lVar20 = *plVar25;
          local_140 = plVar25;
        }
        else {
          uVar12 = uVar9 & 7;
          local_140 = (longlong *)((longlong)local_140 - (ulonglong)(uVar9 >> 3));
          lVar20 = *local_140;
        }
        bVar13 = unaff_RDI <= puVar3 + -1;
        uVar9 = uVar12;
        if (!bVar13) break;
        puVar5 = param_3 + ((ulonglong)(lVar20 << ((ulonglong)uVar12 & 0x3f)) >> (-uVar14 & 0x3f)) +
                           1;
        *unaff_RDI = (short)*puVar5;
        uVar9 = uVar12 + *(byte *)((longlong)puVar5 + 2);
        unaff_RDI = (undefined2 *)((longlong)unaff_RDI + (ulonglong)*(byte *)((longlong)puVar5 + 3))
        ;
      } while (uVar9 < 0x41);
    }
LAB_00e79c6f:
    local_c8 = uVar9;
    local_d0 = lVar20;
    if (unaff_RDI <= puVar3 + -1) {
      do {
        puVar5 = param_3 + ((ulonglong)(local_d0 << ((ulonglong)local_c8 & 0x3f)) >>
                           (-uVar14 & 0x3f)) + 1;
        *unaff_RDI = (short)*puVar5;
        local_c8 = local_c8 + *(byte *)((longlong)puVar5 + 2);
        unaff_RDI = (undefined2 *)((longlong)unaff_RDI + (ulonglong)*(byte *)((longlong)puVar5 + 3))
        ;
      } while (unaff_RDI <= puVar3 + -1);
    }
  }
LAB_00e79cc6:
  if (unaff_RDI < puVar3) {
    puVar5 = param_3 + ((ulonglong)(local_d0 << ((ulonglong)local_c8 & 0x3f)) >>
                       ((ulonglong)-uVar14 & 0x3f)) + 1;
    *(char *)unaff_RDI = (char)*puVar5;
    if (*(char *)((longlong)puVar5 + 3) == '\x01') {
      local_c8 = *(byte *)((longlong)puVar5 + 2) + local_c8;
    }
    else if ((local_c8 < 0x40) &&
            (local_c8 = *(byte *)((longlong)puVar5 + 2) + local_c8, 0x40 < local_c8)) {
      local_c8 = 0x40;
    }
  }
  iVar16 = (int)local_90;
  plVar25 = local_98;
  if (7 < (longlong)puVar4 - (longlong)puVar17) {
    lVar20 = local_a8;
    plVar18 = local_98;
    uVar9 = local_a0;
    if (uVar14 < 0xc) {
      if (local_a0 < 0x41) {
        bVar13 = false;
        uVar12 = -uVar14 & 0x3f;
        do {
          if (plVar18 < local_88) {
            if (plVar18 == local_90) goto LAB_00e7a828;
            plVar25 = (longlong *)((longlong)plVar18 - (ulonglong)(uVar9 >> 3));
            if (plVar25 < local_90) goto LAB_00e79e77;
            uVar24 = uVar9 + (uVar9 >> 3) * -8;
            lVar20 = *plVar25;
          }
          else {
            uVar24 = uVar9 & 7;
            plVar25 = (longlong *)((longlong)plVar18 - (ulonglong)(uVar9 >> 3));
            lVar20 = *plVar25;
          }
          bVar13 = puVar17 < (undefined2 *)((longlong)puVar4 - 9U);
          lVar21 = lVar20;
          if (!bVar13) goto LAB_00e79ea9;
          puVar5 = param_3 + ((ulonglong)(lVar20 << ((ulonglong)uVar24 & 0x3f)) >> uVar12) + 1;
          *puVar17 = (short)*puVar5;
          uVar24 = *(byte *)((longlong)puVar5 + 2) + uVar24;
          puVar17 = (undefined2 *)((ulonglong)*(byte *)((longlong)puVar5 + 3) + (longlong)puVar17);
          puVar5 = param_3 + ((ulonglong)(lVar20 << ((ulonglong)uVar24 & 0x3f)) >> uVar12) + 1;
          *puVar17 = (short)*puVar5;
          uVar24 = *(byte *)((longlong)puVar5 + 2) + uVar24;
          puVar17 = (undefined2 *)((longlong)puVar17 + (ulonglong)*(byte *)((longlong)puVar5 + 3));
          puVar5 = param_3 + ((ulonglong)(lVar20 << ((ulonglong)uVar24 & 0x3f)) >> uVar12) + 1;
          *puVar17 = (short)*puVar5;
          uVar24 = *(byte *)((longlong)puVar5 + 2) + uVar24;
          puVar17 = (undefined2 *)((longlong)puVar17 + (ulonglong)*(byte *)((longlong)puVar5 + 3));
          puVar5 = param_3 + ((ulonglong)(lVar20 << ((ulonglong)uVar24 & 0x3f)) >> uVar12) + 1;
          *puVar17 = (short)*puVar5;
          uVar24 = *(byte *)((longlong)puVar5 + 2) + uVar24;
          puVar17 = (undefined2 *)((ulonglong)*(byte *)((longlong)puVar5 + 3) + (longlong)puVar17);
          puVar5 = param_3 + ((ulonglong)(lVar20 << ((ulonglong)uVar24 & 0x3f)) >> uVar12) + 1;
          *puVar17 = (short)*puVar5;
          uVar9 = *(byte *)((longlong)puVar5 + 2) + uVar24;
          puVar17 = (undefined2 *)((ulonglong)*(byte *)((longlong)puVar5 + 3) + (longlong)puVar17);
          plVar18 = plVar25;
        } while (uVar9 < 0x41);
        goto LAB_00e7a90c;
      }
LAB_00e7a86c:
      local_98 = plVar25;
      lVar20 = local_a8;
      uVar9 = local_a0;
    }
    else {
      if (0x40 < local_a0) goto LAB_00e7a86c;
      bVar13 = false;
      uVar12 = -uVar14 & 0x3f;
      do {
        if (plVar18 < local_88) {
          if (plVar18 == local_90) goto LAB_00e7a828;
          plVar25 = (longlong *)((longlong)plVar18 - (ulonglong)(uVar9 >> 3));
          if (plVar25 < local_90) goto LAB_00e79e77;
          uVar24 = uVar9 + (uVar9 >> 3) * -8;
          lVar20 = *plVar25;
        }
        else {
          uVar24 = uVar9 & 7;
          plVar25 = (longlong *)((longlong)plVar18 - (ulonglong)(uVar9 >> 3));
          lVar20 = *plVar25;
        }
        bVar13 = puVar17 < (undefined2 *)((longlong)puVar4 - 7U);
        lVar21 = lVar20;
        if (!bVar13) goto LAB_00e79ea9;
        puVar5 = param_3 + ((ulonglong)(lVar20 << ((ulonglong)uVar24 & 0x3f)) >> uVar12) + 1;
        *puVar17 = (short)*puVar5;
        uVar24 = *(byte *)((longlong)puVar5 + 2) + uVar24;
        puVar17 = (undefined2 *)((ulonglong)*(byte *)((longlong)puVar5 + 3) + (longlong)puVar17);
        puVar5 = param_3 + ((ulonglong)(lVar20 << ((ulonglong)uVar24 & 0x3f)) >> uVar12) + 1;
        *puVar17 = (short)*puVar5;
        uVar24 = *(byte *)((longlong)puVar5 + 2) + uVar24;
        puVar17 = (undefined2 *)((longlong)puVar17 + (ulonglong)*(byte *)((longlong)puVar5 + 3));
        puVar5 = param_3 + ((ulonglong)(lVar20 << ((ulonglong)uVar24 & 0x3f)) >> uVar12) + 1;
        *puVar17 = (short)*puVar5;
        uVar24 = *(byte *)((longlong)puVar5 + 2) + uVar24;
        puVar17 = (undefined2 *)((ulonglong)*(byte *)((longlong)puVar5 + 3) + (longlong)puVar17);
        puVar5 = param_3 + ((ulonglong)(lVar20 << ((ulonglong)uVar24 & 0x3f)) >> uVar12) + 1;
        *puVar17 = (short)*puVar5;
        uVar9 = *(byte *)((longlong)puVar5 + 2) + uVar24;
        puVar17 = (undefined2 *)((ulonglong)*(byte *)((longlong)puVar5 + 3) + (longlong)puVar17);
        plVar18 = plVar25;
      } while (uVar9 < 0x41);
LAB_00e7a90c:
      local_98 = plVar25;
      local_a8 = lVar20;
      local_a0 = uVar9;
      if ((ulonglong)((longlong)puVar4 - (longlong)puVar17) < 2) goto LAB_00e79fe5;
    }
    goto LAB_00e79f92;
  }
  if (local_a0 < 0x41) {
    if (local_98 < local_88) {
      plVar25 = local_90;
      if (local_98 != local_90) {
        uVar9 = local_a0 >> 3;
        uVar10 = (ulonglong)uVar9;
        if ((longlong *)((longlong)local_98 - uVar10) < local_90) {
          uVar9 = (int)local_98 - iVar16;
          uVar10 = (ulonglong)uVar9;
        }
        plVar25 = (longlong *)((longlong)local_98 - uVar10);
        lVar21 = *plVar25;
        uVar24 = local_a0 + uVar9 * -8;
        goto LAB_00e79ea9;
      }
    }
    else {
      plVar25 = (longlong *)((longlong)local_98 - (ulonglong)(local_a0 >> 3));
      local_a8 = *plVar25;
      local_a0 = local_a0 & 7;
    }
    local_98 = plVar25;
    if ((longlong)puVar4 - (longlong)puVar17 < 2) goto LAB_00e79fe5;
    goto LAB_00e79ed0;
  }
  if (1 < (longlong)puVar4 - (longlong)puVar17) goto LAB_00e7a86c;
  goto LAB_00e79fe5;
LAB_00e79b1d:
  uVar12 = (int)local_140 - iVar16;
  local_140 = (longlong *)((longlong)local_140 - (ulonglong)uVar12);
  lVar21 = *local_140;
  uVar24 = uVar9 + uVar12 * -8;
  goto LAB_00e79b5e;
LAB_00e7a828:
  plVar25 = local_98;
  lVar21 = local_a8;
  uVar24 = local_a0;
  if (bVar13) {
    plVar25 = local_90;
    lVar21 = lVar20;
    uVar24 = uVar9;
  }
LAB_00e79ea9:
  local_a0 = uVar24;
  local_a8 = lVar21;
  local_98 = plVar25;
  if (1 < (ulonglong)((longlong)puVar4 - (longlong)puVar17)) {
    lVar20 = local_a8;
    uVar9 = local_a0;
    if (local_a0 < 0x41) {
LAB_00e79ed0:
      bVar13 = false;
      lVar20 = local_a8;
      local_98 = plVar25;
      uVar9 = local_a0;
      do {
        if (local_98 < local_88) {
          if (local_98 == local_90) {
            if (!bVar13) goto LAB_00e7a86c;
            break;
          }
          plVar18 = (longlong *)((longlong)local_98 - (ulonglong)(uVar9 >> 3));
          if (plVar18 < local_90) {
            uVar12 = (int)local_98 - iVar16;
            local_98 = (longlong *)((longlong)local_98 - (ulonglong)uVar12);
            lVar20 = *local_98;
            uVar9 = uVar9 + uVar12 * -8;
            break;
          }
          uVar12 = uVar9 + (uVar9 >> 3) * -8;
          lVar20 = *plVar18;
        }
        else {
          uVar12 = uVar9 & 7;
          plVar18 = (longlong *)((longlong)local_98 - (ulonglong)(uVar9 >> 3));
          lVar20 = *plVar18;
        }
        bVar13 = puVar17 <= puVar4 + -1;
        local_98 = plVar18;
        uVar9 = uVar12;
        if (!bVar13) break;
        puVar5 = param_3 + ((ulonglong)(lVar20 << ((ulonglong)uVar12 & 0x3f)) >> (-uVar14 & 0x3f)) +
                           1;
        *puVar17 = (short)*puVar5;
        uVar9 = uVar12 + *(byte *)((longlong)puVar5 + 2);
        puVar17 = (undefined2 *)((longlong)puVar17 + (ulonglong)*(byte *)((longlong)puVar5 + 3));
      } while (uVar9 < 0x41);
    }
LAB_00e79f92:
    local_a0 = uVar9;
    local_a8 = lVar20;
    if (puVar17 <= puVar4 + -1) {
      do {
        puVar5 = param_3 + ((ulonglong)(local_a8 << ((ulonglong)local_a0 & 0x3f)) >>
                           (-uVar14 & 0x3f)) + 1;
        *puVar17 = (short)*puVar5;
        local_a0 = local_a0 + *(byte *)((longlong)puVar5 + 2);
        puVar17 = (undefined2 *)((longlong)puVar17 + (ulonglong)*(byte *)((longlong)puVar5 + 3));
      } while (puVar17 <= puVar4 + -1);
    }
  }
LAB_00e79fe5:
  if (puVar17 < puVar4) {
    puVar5 = param_3 + ((ulonglong)(local_a8 << ((ulonglong)local_a0 & 0x3f)) >>
                       ((ulonglong)-uVar14 & 0x3f)) + 1;
    *(char *)puVar17 = (char)*puVar5;
    if (*(char *)((longlong)puVar5 + 3) == '\x01') {
      local_a0 = *(byte *)((longlong)puVar5 + 2) + local_a0;
    }
    else if ((local_a0 < 0x40) &&
            (local_a0 = *(byte *)((longlong)puVar5 + 2) + local_a0, 0x40 < local_a0)) {
      local_a0 = 0x40;
    }
  }
  iVar16 = (int)local_68;
  if (7 < (longlong)puVar11 - (longlong)local_120) {
    lVar20 = local_80;
    plVar25 = local_70;
    uVar9 = local_78;
    if (uVar14 < 0xc) {
      if (local_78 < 0x41) {
        bVar13 = false;
        uVar12 = -uVar14 & 0x3f;
        do {
          if (plVar25 < local_60) {
            if (plVar25 == local_68) goto LAB_00e7a7da;
            plVar18 = (longlong *)((longlong)plVar25 - (ulonglong)(uVar9 >> 3));
            if (plVar18 < local_68) goto LAB_00e7a1a2;
            uVar24 = uVar9 + (uVar9 >> 3) * -8;
            lVar20 = *plVar18;
          }
          else {
            uVar24 = uVar9 & 7;
            plVar18 = (longlong *)((longlong)plVar25 - (ulonglong)(uVar9 >> 3));
            lVar20 = *plVar18;
          }
          bVar13 = local_120 < (undefined2 *)((longlong)puVar11 + -9);
          lVar21 = lVar20;
          if (!bVar13) goto LAB_00e7a1d0;
          puVar5 = param_3 + ((ulonglong)(lVar20 << ((ulonglong)uVar24 & 0x3f)) >> uVar12) + 1;
          *local_120 = (short)*puVar5;
          uVar24 = uVar24 + *(byte *)((longlong)puVar5 + 2);
          puVar6 = param_3 + ((ulonglong)(lVar20 << ((ulonglong)uVar24 & 0x3f)) >> uVar12) + 1;
          local_120 = (undefined2 *)
                      ((ulonglong)*(byte *)((longlong)puVar5 + 3) + (longlong)local_120);
          *local_120 = (short)*puVar6;
          uVar24 = uVar24 + *(byte *)((longlong)puVar6 + 2);
          local_120 = (undefined2 *)
                      ((longlong)local_120 + (ulonglong)*(byte *)((longlong)puVar6 + 3));
          puVar5 = param_3 + ((ulonglong)(lVar20 << ((ulonglong)uVar24 & 0x3f)) >> uVar12) + 1;
          *local_120 = (short)*puVar5;
          uVar24 = *(byte *)((longlong)puVar5 + 2) + uVar24;
          local_120 = (undefined2 *)
                      ((ulonglong)*(byte *)((longlong)puVar5 + 3) + (longlong)local_120);
          puVar5 = param_3 + ((ulonglong)(lVar20 << ((ulonglong)uVar24 & 0x3f)) >> uVar12) + 1;
          *local_120 = (short)*puVar5;
          uVar24 = *(byte *)((longlong)puVar5 + 2) + uVar24;
          local_120 = (undefined2 *)
                      ((ulonglong)*(byte *)((longlong)puVar5 + 3) + (longlong)local_120);
          puVar5 = param_3 + ((ulonglong)(lVar20 << ((ulonglong)uVar24 & 0x3f)) >> uVar12) + 1;
          *local_120 = (short)*puVar5;
          uVar9 = *(byte *)((longlong)puVar5 + 2) + uVar24;
          local_120 = (undefined2 *)
                      ((longlong)local_120 + (ulonglong)*(byte *)((longlong)puVar5 + 3));
          plVar25 = plVar18;
        } while (uVar9 < 0x41);
        goto LAB_00e7a940;
      }
LAB_00e7a85c:
      plVar25 = local_70;
      lVar20 = local_80;
      uVar9 = local_78;
    }
    else {
      if (0x40 < local_78) goto LAB_00e7a85c;
      bVar13 = false;
      uVar12 = -uVar14 & 0x3f;
      do {
        if (plVar25 < local_60) {
          if (plVar25 == local_68) goto LAB_00e7a7da;
          plVar18 = (longlong *)((longlong)plVar25 - (ulonglong)(uVar9 >> 3));
          if (plVar18 < local_68) goto LAB_00e7a1a2;
          uVar24 = uVar9 + (uVar9 >> 3) * -8;
          lVar20 = *plVar18;
        }
        else {
          uVar24 = uVar9 & 7;
          plVar18 = (longlong *)((longlong)plVar25 - (ulonglong)(uVar9 >> 3));
          lVar20 = *plVar18;
        }
        bVar13 = local_120 < (undefined2 *)((longlong)puVar11 + -7);
        lVar21 = lVar20;
        if (!bVar13) goto LAB_00e7a1d0;
        puVar5 = param_3 + ((ulonglong)(lVar20 << ((ulonglong)uVar24 & 0x3f)) >> uVar12) + 1;
        *local_120 = (short)*puVar5;
        uVar24 = uVar24 + *(byte *)((longlong)puVar5 + 2);
        puVar6 = param_3 + ((ulonglong)(lVar20 << ((ulonglong)uVar24 & 0x3f)) >> uVar12) + 1;
        local_120 = (undefined2 *)((ulonglong)*(byte *)((longlong)puVar5 + 3) + (longlong)local_120)
        ;
        *local_120 = (short)*puVar6;
        uVar24 = uVar24 + *(byte *)((longlong)puVar6 + 2);
        local_120 = (undefined2 *)((ulonglong)*(byte *)((longlong)puVar6 + 3) + (longlong)local_120)
        ;
        puVar5 = param_3 + ((ulonglong)(lVar20 << ((ulonglong)uVar24 & 0x3f)) >> uVar12) + 1;
        *local_120 = (short)*puVar5;
        uVar24 = *(byte *)((longlong)puVar5 + 2) + uVar24;
        local_120 = (undefined2 *)((ulonglong)*(byte *)((longlong)puVar5 + 3) + (longlong)local_120)
        ;
        puVar5 = param_3 + ((ulonglong)(lVar20 << ((ulonglong)uVar24 & 0x3f)) >> uVar12) + 1;
        *local_120 = (short)*puVar5;
        uVar9 = *(byte *)((longlong)puVar5 + 2) + uVar24;
        local_120 = (undefined2 *)((longlong)local_120 + (ulonglong)*(byte *)((longlong)puVar5 + 3))
        ;
        plVar25 = plVar18;
      } while (uVar9 < 0x41);
LAB_00e7a940:
      local_70 = plVar18;
      plVar25 = plVar18;
      local_80 = lVar20;
      local_78 = uVar9;
      if ((ulonglong)((longlong)puVar11 - (longlong)local_120) < 2) goto LAB_00e7a326;
    }
    goto LAB_00e7a2ca;
  }
  if (local_78 < 0x41) {
    if (local_70 < local_60) {
      plVar18 = local_68;
      if (local_70 != local_68) {
        uVar9 = local_78 >> 3;
        uVar10 = (ulonglong)uVar9;
        if ((longlong *)((longlong)local_70 - uVar10) < local_68) {
          uVar9 = (int)local_70 - iVar16;
          uVar10 = (ulonglong)uVar9;
        }
        plVar18 = (longlong *)((longlong)local_70 - uVar10);
        lVar21 = *plVar18;
        uVar24 = local_78 + uVar9 * -8;
        goto LAB_00e7a1d0;
      }
    }
    else {
      plVar18 = (longlong *)((longlong)local_70 - (ulonglong)(local_78 >> 3));
      local_80 = *plVar18;
      local_78 = local_78 & 7;
    }
    local_70 = plVar18;
    if ((longlong)puVar11 - (longlong)local_120 < 2) goto LAB_00e7a326;
    goto LAB_00e7a201;
  }
  if (1 < (longlong)puVar11 - (longlong)local_120) goto LAB_00e7a85c;
  goto LAB_00e7a326;
LAB_00e79e77:
  uVar12 = (int)plVar18 - iVar16;
  plVar25 = (longlong *)((longlong)plVar18 - (ulonglong)uVar12);
  lVar21 = *plVar25;
  uVar24 = uVar9 + uVar12 * -8;
  goto LAB_00e79ea9;
LAB_00e7a1a2:
  uVar12 = (int)plVar25 - iVar16;
  plVar18 = (longlong *)((longlong)plVar25 - (ulonglong)uVar12);
  lVar21 = *plVar18;
  uVar24 = uVar9 + uVar12 * -8;
  goto LAB_00e7a1d0;
LAB_00e7a4df:
  uVar9 = (int)plVar18 - iVar16;
  plVar25 = (longlong *)((longlong)plVar18 - (ulonglong)uVar9);
  lVar20 = *plVar25;
  uVar9 = uVar12 + uVar9 * -8;
  goto LAB_00e7a50c;
LAB_00e7a7da:
  plVar18 = local_70;
  lVar21 = local_80;
  uVar24 = local_78;
  if (bVar13) {
    plVar18 = local_68;
    lVar21 = lVar20;
    uVar24 = uVar9;
  }
LAB_00e7a1d0:
  local_78 = uVar24;
  local_80 = lVar21;
  local_70 = plVar18;
  if (1 < (ulonglong)((longlong)puVar11 - (longlong)local_120)) {
    plVar25 = plVar18;
    lVar20 = local_80;
    uVar9 = local_78;
    if (local_78 < 0x41) {
LAB_00e7a201:
      bVar13 = false;
      lVar20 = local_80;
      plVar25 = plVar18;
      uVar9 = local_78;
      do {
        if (plVar25 < local_60) {
          if (plVar25 == local_68) {
            local_70 = plVar18;
            if (!bVar13) goto LAB_00e7a85c;
            break;
          }
          plVar19 = (longlong *)((longlong)plVar25 - (ulonglong)(uVar9 >> 3));
          if (plVar19 < local_68) {
            uVar12 = (int)plVar25 - iVar16;
            plVar25 = (longlong *)((longlong)plVar25 - (ulonglong)uVar12);
            lVar20 = *plVar25;
            uVar9 = uVar9 + uVar12 * -8;
            break;
          }
          uVar12 = uVar9 + (uVar9 >> 3) * -8;
          lVar20 = *plVar19;
        }
        else {
          uVar12 = uVar9 & 7;
          plVar19 = (longlong *)((longlong)plVar25 - (ulonglong)(uVar9 >> 3));
          lVar20 = *plVar19;
        }
        bVar13 = local_120 <= puVar11 + -1;
        plVar25 = plVar19;
        uVar9 = uVar12;
        if (!bVar13) break;
        puVar5 = param_3 + ((ulonglong)(lVar20 << ((ulonglong)uVar12 & 0x3f)) >> (-uVar14 & 0x3f)) +
                           1;
        *local_120 = (short)*puVar5;
        uVar9 = uVar12 + *(byte *)((longlong)puVar5 + 2);
        local_120 = (undefined2 *)((longlong)local_120 + (ulonglong)*(byte *)((longlong)puVar5 + 3))
        ;
      } while (uVar9 < 0x41);
    }
LAB_00e7a2ca:
    local_78 = uVar9;
    local_80 = lVar20;
    local_70 = plVar25;
    if (local_120 <= puVar11 + -1) {
      do {
        puVar5 = param_3 + ((ulonglong)(local_80 << ((ulonglong)local_78 & 0x3f)) >>
                           (-uVar14 & 0x3f)) + 1;
        *local_120 = (short)*puVar5;
        local_78 = local_78 + *(byte *)((longlong)puVar5 + 2);
        local_120 = (undefined2 *)((longlong)local_120 + (ulonglong)*(byte *)((longlong)puVar5 + 3))
        ;
      } while (local_120 <= puVar11 + -1);
    }
  }
LAB_00e7a326:
  if (local_120 < puVar11) {
    puVar5 = param_3 + ((ulonglong)(local_80 << ((ulonglong)local_78 & 0x3f)) >>
                       ((ulonglong)-uVar14 & 0x3f)) + 1;
    *(char *)local_120 = (char)*puVar5;
    if (*(char *)((longlong)puVar5 + 3) == '\x01') {
      local_78 = *(byte *)((longlong)puVar5 + 2) + local_78;
    }
    else if ((local_78 < 0x40) &&
            (local_78 = *(byte *)((longlong)puVar5 + 2) + local_78, 0x40 < local_78)) {
      local_78 = 0x40;
    }
  }
  iVar16 = (int)local_40;
  if ((ulonglong)((longlong)puVar2 - (longlong)puVar26) < 8) {
    if (local_50 < 0x41) {
      if (local_48 < local_38) {
        plVar25 = local_40;
        if (local_48 == local_40) goto LAB_00e7b3f8;
        uVar9 = local_50 >> 3;
        uVar10 = (ulonglong)uVar9;
        if ((longlong *)((longlong)local_48 - uVar10) < local_40) {
          uVar9 = (int)local_48 - iVar16;
          uVar10 = (ulonglong)uVar9;
        }
        plVar25 = (longlong *)((longlong)local_48 - uVar10);
        lVar20 = *(longlong *)((longlong)local_48 - uVar10);
        uVar9 = local_50 + uVar9 * -8;
LAB_00e7a50c:
        local_50 = uVar9;
        local_58 = lVar20;
        local_48 = plVar25;
        if ((ulonglong)((longlong)puVar2 - (longlong)puVar26) < 2) goto LAB_00e7a63f;
        if (0x40 < local_50) goto LAB_00e7a5e7;
      }
      else {
        plVar25 = (longlong *)((longlong)local_48 - (ulonglong)(local_50 >> 3));
        local_58 = *plVar25;
        local_50 = local_50 & 7;
LAB_00e7b3f8:
        local_48 = plVar25;
        if ((ulonglong)((longlong)puVar2 - (longlong)puVar26) < 2) goto LAB_00e7a63f;
      }
      bVar13 = false;
      plVar18 = plVar25;
      lVar20 = local_58;
      uVar9 = local_50;
      do {
        if (plVar18 < local_38) {
          if (plVar18 == local_40) {
            local_48 = plVar25;
            if (!bVar13) goto LAB_00e7a5e7;
            break;
          }
          plVar19 = (longlong *)((longlong)plVar18 - (ulonglong)(uVar9 >> 3));
          if (plVar19 < local_40) {
            uVar12 = (int)plVar18 - iVar16;
            plVar18 = (longlong *)((longlong)plVar18 - (ulonglong)uVar12);
            lVar20 = *plVar18;
            uVar9 = uVar9 + uVar12 * -8;
            break;
          }
          uVar12 = uVar9 + (uVar9 >> 3) * -8;
          lVar20 = *plVar19;
          plVar18 = plVar19;
        }
        else {
          uVar12 = uVar9 & 7;
          plVar18 = (longlong *)((longlong)plVar18 - (ulonglong)(uVar9 >> 3));
          lVar20 = *plVar18;
        }
        bVar13 = puVar26 <= puVar2 + -1;
        uVar9 = uVar12;
        if (!bVar13) break;
        puVar5 = param_3 + ((ulonglong)(lVar20 << ((ulonglong)uVar12 & 0x3f)) >> (-uVar14 & 0x3f)) +
                           1;
        *puVar26 = (short)*puVar5;
        uVar9 = uVar12 + *(byte *)((longlong)puVar5 + 2);
        puVar26 = (undefined2 *)((longlong)puVar26 + (ulonglong)*(byte *)((longlong)puVar5 + 3));
      } while (uVar9 < 0x41);
      local_48 = plVar18;
      local_58 = lVar20;
      local_50 = uVar9;
      goto LAB_00e7a5e7;
    }
    if (1 < (ulonglong)((longlong)puVar2 - (longlong)puVar26)) goto LAB_00e7a5e7;
  }
  else {
    plVar18 = local_48;
    lVar21 = local_58;
    uVar12 = local_50;
    if (uVar14 < 0xc) {
      if (local_50 < 0x41) {
        bVar13 = false;
        uVar24 = -uVar14 & 0x3f;
        do {
          if (plVar18 < local_38) {
            if (plVar18 == local_40) {
              plVar25 = local_48;
              lVar20 = local_58;
              uVar9 = local_50;
              if (!bVar13) goto LAB_00e7a50c;
              goto LAB_00e7a9fd;
            }
            plVar25 = (longlong *)((longlong)plVar18 - (ulonglong)(uVar12 >> 3));
            if (plVar25 < local_40) goto LAB_00e7a4df;
            uVar9 = uVar12 + (uVar12 >> 3) * -8;
            lVar21 = *plVar25;
          }
          else {
            uVar9 = uVar12 & 7;
            plVar25 = (longlong *)((longlong)plVar18 - (ulonglong)(uVar12 >> 3));
            lVar21 = *plVar25;
          }
          bVar13 = puVar26 < (undefined2 *)((longlong)puVar2 - 9U);
          lVar20 = lVar21;
          if (!bVar13) goto LAB_00e7a50c;
          puVar5 = param_3 + ((ulonglong)(lVar21 << ((ulonglong)uVar9 & 0x3f)) >> uVar24) + 1;
          *puVar26 = (short)*puVar5;
          uVar9 = uVar9 + *(byte *)((longlong)puVar5 + 2);
          puVar26 = (undefined2 *)((longlong)puVar26 + (ulonglong)*(byte *)((longlong)puVar5 + 3));
          puVar5 = param_3 + ((ulonglong)(lVar21 << ((ulonglong)uVar9 & 0x3f)) >> uVar24) + 1;
          *puVar26 = (short)*puVar5;
          uVar9 = *(byte *)((longlong)puVar5 + 2) + uVar9;
          puVar26 = (undefined2 *)((longlong)puVar26 + (ulonglong)*(byte *)((longlong)puVar5 + 3));
          puVar5 = param_3 + ((ulonglong)(lVar21 << ((ulonglong)uVar9 & 0x3f)) >> uVar24) + 1;
          *puVar26 = (short)*puVar5;
          uVar9 = *(byte *)((longlong)puVar5 + 2) + uVar9;
          puVar26 = (undefined2 *)((longlong)puVar26 + (ulonglong)*(byte *)((longlong)puVar5 + 3));
          puVar5 = param_3 + ((ulonglong)(lVar21 << ((ulonglong)uVar9 & 0x3f)) >> uVar24) + 1;
          *puVar26 = (short)*puVar5;
          uVar9 = *(byte *)((longlong)puVar5 + 2) + uVar9;
          puVar26 = (undefined2 *)((longlong)puVar26 + (ulonglong)*(byte *)((longlong)puVar5 + 3));
          puVar5 = param_3 + ((ulonglong)(lVar21 << ((ulonglong)uVar9 & 0x3f)) >> uVar24) + 1;
          *puVar26 = (short)*puVar5;
          uVar12 = *(byte *)((longlong)puVar5 + 2) + uVar9;
          puVar26 = (undefined2 *)((ulonglong)*(byte *)((longlong)puVar5 + 3) + (longlong)puVar26);
          plVar18 = plVar25;
        } while (uVar12 < 0x41);
        goto LAB_00e7a980;
      }
    }
    else if (local_50 < 0x41) {
      bVar13 = false;
      uVar24 = -uVar14 & 0x3f;
      do {
        if (plVar18 < local_38) {
          if (plVar18 == local_40) {
            plVar25 = local_48;
            lVar20 = local_58;
            uVar9 = local_50;
            if (bVar13) {
LAB_00e7a9fd:
              plVar25 = local_40;
              lVar20 = lVar21;
              uVar9 = uVar12;
            }
            goto LAB_00e7a50c;
          }
          plVar25 = (longlong *)((longlong)plVar18 - (ulonglong)(uVar12 >> 3));
          if (plVar25 < local_40) goto LAB_00e7a4df;
          uVar9 = uVar12 + (uVar12 >> 3) * -8;
          lVar21 = *plVar25;
        }
        else {
          uVar9 = uVar12 & 7;
          plVar25 = (longlong *)((longlong)plVar18 - (ulonglong)(uVar12 >> 3));
          lVar21 = *plVar25;
        }
        bVar13 = puVar26 < puVar1;
        lVar20 = lVar21;
        if (!bVar13) goto LAB_00e7a50c;
        puVar5 = param_3 + ((ulonglong)(lVar21 << ((ulonglong)uVar9 & 0x3f)) >> uVar24) + 1;
        *puVar26 = (short)*puVar5;
        uVar9 = *(byte *)((longlong)puVar5 + 2) + uVar9;
        puVar26 = (undefined2 *)((longlong)puVar26 + (ulonglong)*(byte *)((longlong)puVar5 + 3));
        puVar5 = param_3 + ((ulonglong)(lVar21 << ((ulonglong)uVar9 & 0x3f)) >> uVar24) + 1;
        *puVar26 = (short)*puVar5;
        uVar9 = *(byte *)((longlong)puVar5 + 2) + uVar9;
        puVar26 = (undefined2 *)((ulonglong)*(byte *)((longlong)puVar5 + 3) + (longlong)puVar26);
        puVar5 = param_3 + ((ulonglong)(lVar21 << ((ulonglong)uVar9 & 0x3f)) >> uVar24) + 1;
        *puVar26 = (short)*puVar5;
        uVar9 = *(byte *)((longlong)puVar5 + 2) + uVar9;
        puVar26 = (undefined2 *)((longlong)puVar26 + (ulonglong)*(byte *)((longlong)puVar5 + 3));
        puVar5 = param_3 + ((ulonglong)(lVar21 << ((ulonglong)uVar9 & 0x3f)) >> uVar24) + 1;
        *puVar26 = (short)*puVar5;
        uVar12 = *(byte *)((longlong)puVar5 + 2) + uVar9;
        puVar26 = (undefined2 *)((ulonglong)*(byte *)((longlong)puVar5 + 3) + (longlong)puVar26);
        plVar18 = plVar25;
      } while (uVar12 < 0x41);
LAB_00e7a980:
      local_48 = plVar25;
      local_58 = lVar21;
      local_50 = uVar12;
      if ((ulonglong)((longlong)puVar2 - (longlong)puVar26) < 2) goto LAB_00e7a63f;
    }
LAB_00e7a5e7:
    if (puVar26 <= puVar2 + -1) {
      do {
        puVar5 = param_3 + ((ulonglong)(local_58 << ((ulonglong)local_50 & 0x3f)) >>
                           (-uVar14 & 0x3f)) + 1;
        *puVar26 = (short)*puVar5;
        local_50 = local_50 + *(byte *)((longlong)puVar5 + 2);
        puVar26 = (undefined2 *)((longlong)puVar26 + (ulonglong)*(byte *)((longlong)puVar5 + 3));
      } while (puVar26 <= puVar2 + -1);
    }
  }
LAB_00e7a63f:
  if (puVar26 < puVar2) {
    param_3 = param_3 + ((ulonglong)(local_58 << ((ulonglong)local_50 & 0x3f)) >>
                        ((ulonglong)-uVar14 & 0x3f)) + 1;
    *(char *)puVar26 = (char)*param_3;
    if (*(char *)((longlong)param_3 + 3) == '\x01') {
      local_50 = *(byte *)((longlong)param_3 + 2) + local_50;
    }
    else if ((local_50 < 0x40) &&
            (local_50 = *(byte *)((longlong)param_3 + 2) + local_50, 0x40 < local_50)) {
      local_50 = 0x40;
    }
  }
  if ((((local_70 != local_68) || (local_48 != local_40)) ||
      (((local_140 != local_b8 || local_c8 != 0x40) || local_78 != 0x40) ||
       (local_98 != local_90 || local_a0 != 0x40))) || (local_50 != 0x40)) {
LAB_00e7943a:
    unaff_RSI = 0xffffffffffffffec;
  }
  return unaff_RSI;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_00e7b4f0(void)

{
  ulonglong uVar1;
  int unaff_EDI;
  
  if (-1 < unaff_EDI) {
    if (DAT_00ed7058 == 0) {
      DAT_00ed7058 = DAT_00ea6010;
    }
    uVar1 = DAT_00ed7058 + 7 & 0xfffffffffffffff8;
    DAT_00ed7058 = (longlong)unaff_EDI + uVar1;
    if ((DAT_00ea6008 == 0) || (DAT_00ed7058 < DAT_00ea6008)) {
      _DAT_00ed7050 = _DAT_00ed7050 + 1;
      return uVar1;
    }
  }
  return 0;
}



ulonglong FUN_00e7b770(undefined8 param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong unaff_RSI;
  ulonglong uVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *unaff_RDI;
  uint *puVar8;
  uint *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  puVar8 = (uint *)((longlong)unaff_RDI + unaff_RSI);
  lVar2 = param_2 + 0x27d4eb2f165667c5;
  if (0x1f < unaff_RSI) {
    lVar2 = param_2 + 0x60ea27eeadc0b5d6;
    uVar4 = param_2 + 0xc2b2ae3d27d4eb4f;
    uVar13 = param_2 + 0x61c8864e7a143579;
    puVar9 = unaff_RDI;
    do {
      puVar6 = puVar9 + 8;
      uVar11 = *(longlong *)puVar9 * -0x3d4d51c2d82b14b1 + lVar2;
      uVar4 = *(longlong *)(puVar9 + 2) * -0x3d4d51c2d82b14b1 + uVar4;
      uVar12 = uVar11 * 0x80000000 | uVar11 >> 0x21;
      param_2 = *(longlong *)(puVar9 + 4) * -0x3d4d51c2d82b14b1 + param_2;
      uVar5 = uVar4 * 0x80000000 | uVar4 >> 0x21;
      uVar13 = *(longlong *)(puVar9 + 6) * -0x3d4d51c2d82b14b1 + uVar13;
      uVar3 = param_2 * 0x80000000 | param_2 >> 0x21;
      lVar2 = uVar12 * -0x61c8864e7a143579;
      uVar11 = uVar13 * 0x80000000 | uVar13 >> 0x21;
      uVar4 = uVar5 * -0x61c8864e7a143579;
      param_2 = uVar3 * -0x61c8864e7a143579;
      uVar13 = uVar11 * -0x61c8864e7a143579;
      puVar9 = puVar6;
    } while (puVar6 <= puVar8 + -8);
    lVar10 = (unaff_RSI - 0x20 & 0xffffffffffffffe0) + 0x20;
    if ((byte *)((longlong)puVar8 - 0x1fU) < (byte *)((longlong)unaff_RDI + 1U)) {
      lVar10 = 0x20;
    }
    unaff_RDI = (uint *)((longlong)unaff_RDI + lVar10);
    lVar2 = ((uVar11 * -0x784349ab80000000 | uVar11 * -0x210ca4fef0869357 >> 0x21) *
             -0x61c8864e7a143579 ^
            ((uVar3 * -0x784349ab80000000 | uVar3 * -0x210ca4fef0869357 >> 0x21) *
             -0x61c8864e7a143579 ^
            (((uVar12 * 0x3c6ef3630bd7950e | (ulonglong)(lVar2 < 0)) +
              (uVar5 * 0x1bbcd8c2f5e54380 | uVar4 >> 0x39) +
              (uVar3 * 0x779b185ebca87000 | param_2 >> 0x34) +
              (uVar11 * -0x1939e850d5e40000 | uVar13 >> 0x2e) ^
             (uVar12 * -0x784349ab80000000 | uVar12 * -0x210ca4fef0869357 >> 0x21) *
             -0x61c8864e7a143579) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63 ^
            (uVar5 * -0x784349ab80000000 | uVar5 * -0x210ca4fef0869357 >> 0x21) *
            -0x61c8864e7a143579) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63) * -0x61c8864e7a143579 +
            0x85ebca77c2b2ae63) * -0x61c8864e7a143579 + -0x7a1435883d4d519d;
  }
  puVar9 = unaff_RDI + 2;
  uVar4 = lVar2 + unaff_RSI;
  puVar6 = puVar9;
  if (puVar9 <= puVar8) {
    do {
      puVar7 = puVar6 + 2;
      uVar4 = (*(longlong *)(puVar6 + -2) * -0x6c158a5880000000 |
              (ulonglong)(*(longlong *)(puVar6 + -2) * -0x3d4d51c2d82b14b1) >> 0x21) *
              -0x61c8864e7a143579 ^ uVar4;
      uVar4 = (uVar4 << 0x1b | uVar4 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
      puVar6 = puVar7;
    } while (puVar7 <= puVar8);
    unaff_RDI = (uint *)((longlong)puVar9 +
                        ((ulonglong)((longlong)puVar8 + (-8 - (longlong)unaff_RDI)) &
                        0xfffffffffffffff8));
  }
  if (unaff_RDI + 1 <= puVar8) {
    uVar4 = (ulonglong)*unaff_RDI * -0x61c8864e7a143579 ^ uVar4;
    uVar4 = (uVar4 << 0x17 | uVar4 >> 0x29) * -0x3d4d51c2d82b14b1 + 0x165667b19e3779f9;
    unaff_RDI = unaff_RDI + 1;
  }
  if (unaff_RDI < puVar8) {
    do {
      uVar1 = *unaff_RDI;
      unaff_RDI = (uint *)((longlong)unaff_RDI + 1);
      uVar4 = (ulonglong)(byte)uVar1 * 0x27d4eb2f165667c5 ^ uVar4;
      uVar4 = (uVar4 << 0xb | uVar4 >> 0x35) * -0x61c8864e7a143579;
    } while (puVar8 != unaff_RDI);
  }
  uVar4 = (uVar4 >> 0x21 ^ uVar4) * -0x3d4d51c2d82b14b1;
  uVar4 = (uVar4 >> 0x1d ^ uVar4) * 0x165667b19e3779f9;
  return uVar4 >> 0x20 ^ uVar4;
}



undefined8 FUN_00e7beb0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar12;
  
  plVar1 = (longlong *)((longlong)unaff_RSI + param_2);
  if (unaff_RSI == (longlong *)0x0) {
    uVar5 = 0xffffffea;
  }
  else {
    *unaff_RDI = *unaff_RDI + param_2;
    uVar2 = *(uint *)(unaff_RDI + 9);
    uVar6 = (ulonglong)uVar2 + param_2;
    if (uVar6 < 0x20) {
      FUN_00e862a0(uVar6,param_2);
      *(int *)(unaff_RDI + 9) = (int)unaff_RDI[9] + (int)param_2;
    }
    else {
      if (uVar2 != 0) {
        FUN_00e862a0(uVar6,0x20 - uVar2);
        lVar8 = unaff_RDI[9];
        uVar6 = 0x9e3779b185ebca87;
        *(undefined4 *)(unaff_RDI + 9) = 0;
        unaff_RSI = (longlong *)((longlong)unaff_RSI + (ulonglong)(0x20 - (int)lVar8));
        uVar7 = unaff_RDI[5] * -0x3d4d51c2d82b14b1 + unaff_RDI[1];
        unaff_RDI[1] = (uVar7 * 0x80000000 | uVar7 >> 0x21) * -0x61c8864e7a143579;
        uVar7 = unaff_RDI[6] * -0x3d4d51c2d82b14b1 + unaff_RDI[2];
        unaff_RDI[2] = (uVar7 * 0x80000000 | uVar7 >> 0x21) * -0x61c8864e7a143579;
        uVar11 = unaff_RDI[7] * -0x3d4d51c2d82b14b1 + unaff_RDI[3];
        uVar7 = unaff_RDI[8] * -0x3d4d51c2d82b14b1 + unaff_RDI[4];
        unaff_RDI[3] = (uVar11 * 0x80000000 | uVar11 >> 0x21) * -0x61c8864e7a143579;
        unaff_RDI[4] = (uVar7 * 0x80000000 | uVar7 >> 0x21) * -0x61c8864e7a143579;
      }
      if (unaff_RSI + 4 <= plVar1) {
        lVar8 = unaff_RDI[1];
        lVar12 = unaff_RDI[2];
        lVar9 = unaff_RDI[3];
        lVar10 = unaff_RDI[4];
        uVar6 = 0x9e3779b185ebca87;
        plVar3 = unaff_RSI;
        do {
          plVar4 = plVar3 + 4;
          uVar7 = *plVar3 * -0x3d4d51c2d82b14b1 + lVar8;
          lVar8 = (uVar7 * 0x80000000 | uVar7 >> 0x21) * -0x61c8864e7a143579;
          uVar7 = plVar3[1] * -0x3d4d51c2d82b14b1 + lVar12;
          lVar12 = (uVar7 * 0x80000000 | uVar7 >> 0x21) * -0x61c8864e7a143579;
          uVar7 = plVar3[2] * -0x3d4d51c2d82b14b1 + lVar9;
          lVar9 = (uVar7 * 0x80000000 | uVar7 >> 0x21) * -0x61c8864e7a143579;
          uVar7 = plVar3[3] * -0x3d4d51c2d82b14b1 + lVar10;
          lVar10 = (uVar7 * 0x80000000 | uVar7 >> 0x21) * -0x61c8864e7a143579;
          plVar3 = plVar4;
        } while (plVar4 <= plVar1 + -4);
        unaff_RDI[1] = lVar8;
        unaff_RDI[2] = lVar12;
        unaff_RDI[3] = lVar9;
        unaff_RSI = (longlong *)
                    ((longlong)unaff_RSI +
                    ((longlong)(plVar1 + -4) - (longlong)unaff_RSI & 0xffffffffffffffe0U) + 0x20);
        unaff_RDI[4] = lVar10;
      }
      if (unaff_RSI < plVar1) {
        FUN_00e862a0(uVar6,(longlong)plVar1 - (longlong)unaff_RSI);
        *(int *)(unaff_RDI + 9) = (int)((longlong)plVar1 - (longlong)unaff_RSI);
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}



ulonglong FUN_00e7c0a0(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong *unaff_RDI;
  ulonglong *puVar9;
  
  puVar6 = unaff_RDI + 5;
  uVar8 = unaff_RDI[3];
  puVar9 = (ulonglong *)((ulonglong)(uint)unaff_RDI[9] + (longlong)puVar6);
  lVar7 = uVar8 + 0x27d4eb2f165667c5;
  if (0x1f < *unaff_RDI) {
    uVar2 = unaff_RDI[2];
    uVar3 = unaff_RDI[1];
    uVar4 = unaff_RDI[4];
    lVar7 = ((uVar4 * -0x6c158a5880000000 | uVar4 * -0x3d4d51c2d82b14b1 >> 0x21) *
             -0x61c8864e7a143579 ^
            ((uVar8 * -0x6c158a5880000000 | uVar8 * -0x3d4d51c2d82b14b1 >> 0x21) *
             -0x61c8864e7a143579 ^
            (((uVar3 << 1 | (ulonglong)((longlong)uVar3 < 0)) + (uVar2 << 7 | uVar2 >> 0x39) +
              (uVar8 << 0xc | uVar8 >> 0x34) + (uVar4 << 0x12 | uVar4 >> 0x2e) ^
             (uVar3 * -0x6c158a5880000000 | uVar3 * -0x3d4d51c2d82b14b1 >> 0x21) *
             -0x61c8864e7a143579) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63 ^
            (uVar2 * -0x6c158a5880000000 | uVar2 * -0x3d4d51c2d82b14b1 >> 0x21) *
            -0x61c8864e7a143579) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63) * -0x61c8864e7a143579 +
            0x85ebca77c2b2ae63) * -0x61c8864e7a143579 + -0x7a1435883d4d519d;
  }
  puVar1 = unaff_RDI + 6;
  uVar8 = lVar7 + *unaff_RDI;
  puVar5 = puVar1;
  if (puVar1 <= puVar9) {
    do {
      puVar6 = puVar5 + 1;
      uVar8 = (puVar5[-1] * -0x6c158a5880000000 | puVar5[-1] * -0x3d4d51c2d82b14b1 >> 0x21) *
              -0x61c8864e7a143579 ^ uVar8;
      uVar8 = (uVar8 << 0x1b | uVar8 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
      puVar5 = puVar6;
    } while (puVar6 <= puVar9);
    puVar6 = (ulonglong *)
             (((ulonglong)((longlong)puVar9 + (-0x30 - (longlong)unaff_RDI)) & 0xfffffffffffffff8) +
             (longlong)puVar1);
  }
  if ((ulonglong *)((longlong)puVar6 + 4U) <= puVar9) {
    uVar8 = (ulonglong)(uint)*puVar6 * -0x61c8864e7a143579 ^ uVar8;
    uVar8 = (uVar8 << 0x17 | uVar8 >> 0x29) * -0x3d4d51c2d82b14b1 + 0x165667b19e3779f9;
    puVar6 = (ulonglong *)((longlong)puVar6 + 4U);
  }
  if (puVar6 < puVar9) {
    do {
      uVar2 = *puVar6;
      puVar6 = (ulonglong *)((longlong)puVar6 + 1);
      uVar8 = (ulonglong)(byte)uVar2 * 0x27d4eb2f165667c5 ^ uVar8;
      uVar8 = (uVar8 << 0xb | uVar8 >> 0x35) * -0x61c8864e7a143579;
    } while (puVar9 != puVar6);
  }
  uVar8 = (uVar8 >> 0x21 ^ uVar8) * -0x3d4d51c2d82b14b1;
  uVar8 = (uVar8 >> 0x1d ^ uVar8) * 0x165667b19e3779f9;
  return uVar8 >> 0x20 ^ uVar8;
}



ulonglong FUN_00e7d110(int *param_1,undefined8 param_2,ulonglong param_3,int param_4)

{
  undefined1 uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  char cVar14;
  undefined1 uVar15;
  uint uVar16;
  int iVar17;
  uint *unaff_RDI;
  uint uVar18;
  undefined1 *puVar19;
  longlong lVar20;
  byte *pbVar21;
  ulonglong uVar22;
  uint uVar23;
  int iVar24;
  uint local_40;
  uint local_3c [3];
  
  local_40 = 0;
  local_3c[0] = 0;
  if (param_3 < 0x5d0) {
    return 0xffffffffffffffd4;
  }
  if (param_4 == 0) {
    uVar5 = FUN_00e73100(local_3c,param_1,&local_40);
  }
  else {
    uVar5 = FUN_00e72390(local_3c,param_1,&local_40);
  }
  if (0xffffffffffffff88 < uVar5) {
    return uVar5;
  }
  uVar3 = *unaff_RDI;
  uVar18 = (uVar3 & 0xff) + 1;
  uVar16 = 0xb;
  if (uVar18 < 0xc) {
    uVar16 = uVar18;
  }
  uVar10 = local_40;
  if ((local_40 <= uVar16) && (uVar10 = uVar16, local_40 < uVar16)) {
    uVar23 = uVar16 - local_40;
    piVar7 = param_1 + 0x134;
    if (local_3c[0] != 0) {
      do {
        cVar14 = (char)*piVar7;
        if (cVar14 != '\0') {
          cVar14 = cVar14 + (char)uVar23;
        }
        piVar6 = (int *)((longlong)piVar7 + 1);
        *(char *)piVar7 = cVar14;
        piVar7 = piVar6;
      } while (piVar6 != (int *)((longlong)param_1 + (ulonglong)local_3c[0] + 0x4d0));
    }
    piVar7 = param_1 + uVar16;
    if (uVar23 < uVar16) {
      do {
        *piVar7 = param_1[local_40];
        local_40 = local_40 - 1;
        piVar7 = piVar7 + -1;
      } while (local_40 != 0);
    }
    piVar7 = param_1 + uVar23;
    piVar6 = param_1 + (ulonglong)uVar23 + (-1 - (ulonglong)(uVar23 - 1));
    if (((int)piVar7 - (int)piVar6 & 4U) != 0) {
      *piVar7 = 0;
      piVar7 = piVar7 + -1;
      if (piVar7 == piVar6) goto LAB_00e7d278;
    }
    do {
      *piVar7 = 0;
      piVar8 = piVar7 + -2;
      piVar7[-1] = 0;
      piVar7 = piVar8;
    } while (piVar8 != piVar6);
  }
LAB_00e7d278:
  if (uVar18 < uVar10) {
    return 0xffffffffffffffd4;
  }
  lVar9 = 0;
  *unaff_RDI = uVar3 & 0xff0000ff | (uVar10 & 0xff) << 0x10;
  iVar17 = 0;
  do {
    piVar7 = param_1 + lVar9;
    param_1[lVar9 + 0xd] = iVar17;
    lVar9 = lVar9 + 1;
    iVar17 = iVar17 + *piVar7;
  } while ((int)lVar9 <= (int)uVar10);
  if ((int)(local_3c[0] - 3) < 1) {
    iVar17 = 0;
  }
  else {
    iVar17 = 0;
    piVar7 = param_1;
    do {
      lVar9 = 0;
      do {
        uVar22 = (ulonglong)*(byte *)((longlong)piVar7 + lVar9 + 0x4d0);
        uVar3 = param_1[uVar22 + 0xd];
        param_1[uVar22 + 0xd] = uVar3 + 1;
        cVar14 = (char)lVar9;
        lVar9 = lVar9 + 1;
        *(char *)((longlong)param_1 + (ulonglong)uVar3 + 0x3d0) = cVar14 + (char)iVar17;
      } while (lVar9 != 4);
      iVar17 = iVar17 + 4;
      piVar7 = piVar7 + 1;
    } while (iVar17 < (int)(local_3c[0] - 3));
    iVar17 = (local_3c[0] - 4 & 0xfffffffc) + 4;
  }
  lVar9 = (longlong)iVar17;
  while (iVar17 < (int)local_3c[0]) {
    uVar22 = (ulonglong)*(byte *)((longlong)param_1 + lVar9 + 0x4d0);
    uVar3 = param_1[uVar22 + 0xd];
    param_1[uVar22 + 0xd] = uVar3 + 1;
    *(char *)((longlong)param_1 + (ulonglong)uVar3 + 0x3d0) = (char)lVar9;
    lVar9 = lVar9 + 1;
    iVar17 = (int)lVar9;
  }
  iVar17 = *param_1;
  lVar9 = 1;
  iVar24 = 0;
  do {
    uVar3 = param_1[lVar9];
    iVar4 = (1 << ((byte)lVar9 & 0x1f)) >> 1;
    uVar16 = (uint)(byte)((char)uVar10 + 1) - (int)lVar9;
    if (iVar4 == 4) {
      if (0 < (int)uVar3) {
        uVar22 = 0;
        do {
          lVar20 = (longlong)
                   (int)((uint)*(byte *)((longlong)param_1 + uVar22 + (longlong)iVar17 + 0x3d0) *
                         0x100 + (uVar16 & 0xff)) * 0x10001;
          *(longlong *)((longlong)unaff_RDI + uVar22 * 8 + (longlong)iVar24 * 2 + 4) =
               lVar20 + (lVar20 << 0x20);
          uVar22 = uVar22 + 1;
        } while (uVar3 != uVar22);
      }
    }
    else {
      uVar15 = (undefined1)uVar16;
      if (iVar4 < 5) {
        if (iVar4 == 1) {
          if (0 < (int)uVar3) {
            uVar22 = 0;
            do {
              *(ushort *)((longlong)unaff_RDI + uVar22 * 2 + (longlong)iVar24 * 2 + 4) =
                   CONCAT11(*(undefined1 *)((longlong)param_1 + uVar22 + 0x3d0 + (longlong)iVar17),
                            uVar15);
              uVar22 = uVar22 + 1;
            } while (uVar3 != uVar22);
          }
        }
        else {
          if (iVar4 != 2) goto LAB_00e7d4e0;
          if (0 < (int)uVar3) {
            puVar19 = (undefined1 *)((longlong)param_1 + (longlong)iVar17 + 0x3d0);
            lVar20 = (longlong)unaff_RDI + (longlong)iVar24 * 2;
            do {
              uVar1 = *puVar19;
              puVar19 = puVar19 + 1;
              *(undefined1 *)(lVar20 + 4) = uVar15;
              *(undefined1 *)(lVar20 + 6) = uVar15;
              *(undefined1 *)(lVar20 + 5) = uVar1;
              *(undefined1 *)(lVar20 + 7) = uVar1;
              lVar20 = lVar20 + 4;
            } while ((undefined1 *)
                     ((longlong)param_1 + (ulonglong)(uVar3 - 1) + (longlong)iVar17 + 0x3d1) !=
                     puVar19);
          }
        }
      }
      else if (iVar4 == 8) {
        if (0 < (int)uVar3) {
          pbVar21 = (byte *)((longlong)param_1 + (longlong)iVar17 + 0x3d0);
          lVar20 = (longlong)unaff_RDI + (longlong)iVar24 * 2;
          do {
            bVar2 = *pbVar21;
            pbVar21 = pbVar21 + 1;
            lVar11 = (longlong)(int)((uint)bVar2 * 0x100 + (uVar16 & 0xff)) * 0x10001;
            lVar11 = lVar11 + (lVar11 << 0x20);
            *(longlong *)(lVar20 + 4) = lVar11;
            *(longlong *)(lVar20 + 0xc) = lVar11;
            lVar20 = lVar20 + 0x10;
          } while ((byte *)((longlong)param_1 + (ulonglong)(uVar3 - 1) + (longlong)iVar17 + 0x3d1)
                   != pbVar21);
        }
      }
      else {
LAB_00e7d4e0:
        if (0 < (int)uVar3) {
          lVar20 = (longlong)iVar24;
          pbVar21 = (byte *)((longlong)param_1 + (longlong)iVar17 + 0x3d0);
          do {
            lVar11 = (longlong)(int)((uint)*pbVar21 * 0x100 + (uVar16 & 0xff)) * 0x10001;
            lVar11 = lVar11 + (lVar11 << 0x20);
            lVar12 = (longlong)unaff_RDI + lVar20 * 2;
            do {
              *(longlong *)(lVar12 + 4) = lVar11;
              lVar13 = lVar12 + 0x20;
              *(longlong *)(lVar12 + 0xc) = lVar11;
              *(longlong *)(lVar12 + 0x14) = lVar11;
              *(longlong *)(lVar12 + 0x1c) = lVar11;
              lVar12 = lVar13;
            } while ((longlong)unaff_RDI + (lVar20 + (ulonglong)(iVar4 - 1U >> 4) * 0x10) * 2 + 0x20
                     != lVar13);
            pbVar21 = pbVar21 + 1;
            lVar20 = lVar20 + iVar4;
          } while ((byte *)((longlong)param_1 + (ulonglong)(uVar3 - 1) + (longlong)iVar17 + 0x3d1)
                   != pbVar21);
        }
      }
    }
    lVar9 = lVar9 + 1;
    iVar17 = iVar17 + uVar3;
    iVar24 = iVar24 + iVar4 * uVar3;
    if (uVar10 + 1 <= (uint)lVar9) {
      return uVar5;
    }
  } while( true );
}



ulonglong FUN_00e7d7a0(int *param_1,undefined8 param_2,ulonglong param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  uint uVar17;
  int *piVar18;
  longlong lVar19;
  uint uVar20;
  uint *unaff_RDI;
  undefined8 *puVar21;
  int iVar22;
  longlong lVar23;
  uint uVar24;
  int iVar25;
  uint local_d4;
  ulonglong local_80;
  int local_74;
  uint local_70;
  byte local_49;
  uint local_40;
  uint local_3c [3];
  
  uVar2 = *unaff_RDI;
  if (param_3 < 0x848) {
    return 0xffffffffffffffff;
  }
  local_d4 = uVar2 & 0xff;
  piVar5 = param_1 + 0x9c;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  puVar21 = (undefined8 *)((ulonglong)(param_1 + 0x9e) & 0xfffffffffffffff8);
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  uVar14 = (ulonglong)(((int)piVar5 - (int)puVar21) + 0x34U >> 3);
  for (; uVar14 != 0; uVar14 = uVar14 - 1) {
    *puVar21 = 0;
    puVar21 = puVar21 + 1;
  }
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  puVar21 = (undefined8 *)((ulonglong)(param_1 + 0xab) & 0xfffffffffffffff8);
  for (uVar14 = (ulonglong)
                (((int)param_1 -
                 (int)(undefined8 *)((ulonglong)(param_1 + 0xab) & 0xfffffffffffffff8)) + 0x2e0U >>
                3); uVar14 != 0; uVar14 = uVar14 - 1) {
    *puVar21 = 0;
    puVar21 = puVar21 + 1;
  }
  local_49 = (byte)uVar2;
  if (0xc < local_49) {
    return 0xffffffffffffffd4;
  }
  if (param_4 == 0) {
    local_80 = FUN_00e73100(local_3c,piVar5,&local_40);
  }
  else {
    local_80 = FUN_00e72390(local_3c,piVar5,&local_40);
  }
  if (0xffffffffffffff88 < local_80) {
    return local_80;
  }
  if (local_d4 < local_40) {
    return 0xffffffffffffffd4;
  }
  if ((local_d4 == 0xc) && (local_40 != 0xc)) {
    local_49 = 0xb;
    iVar10 = 0xc;
    local_d4 = 0xb;
  }
  else {
    iVar10 = local_d4 + 1;
  }
  uVar24 = local_40 + 1;
  if (param_1[(ulonglong)local_40 + 0x9c] == 0) {
    uVar14 = (ulonglong)local_40;
    do {
      uVar17 = (uint)uVar14;
      uVar3 = uVar17 - 1;
      uVar14 = (ulonglong)uVar3;
    } while (param_1[uVar14 + 0x9c] == 0);
    local_70 = uVar24 - uVar3;
    uVar20 = (iVar10 - uVar24) + uVar3;
  }
  else {
    local_70 = 1;
    uVar17 = uVar24;
    uVar3 = local_40;
    uVar20 = local_d4;
  }
  if (uVar17 < 2) {
    param_1[0xaa] = 0;
    param_1[(ulonglong)uVar17 + 0xaa] = 0;
    if (local_3c[0] != 0) goto LAB_00e7d988;
    param_1[0xaa] = 0;
  }
  else {
    piVar5 = param_1 + 0x9d;
    iVar10 = 0;
    do {
      piVar18 = piVar5 + 1;
      iVar9 = iVar10 + *piVar5;
      piVar5[0xe] = iVar10;
      piVar5 = piVar18;
      iVar10 = iVar9;
    } while (param_1 + 0x9e + (uVar17 - 2) != piVar18);
    param_1[0xaa] = iVar9;
    param_1[(ulonglong)uVar17 + 0xaa] = iVar9;
    if (local_3c[0] == 0) {
      param_1[0xaa] = 0;
    }
    else {
LAB_00e7d988:
      uVar14 = 0;
      do {
        uVar11 = param_1[(ulonglong)*(byte *)((longlong)param_1 + uVar14 + 0x3e0) + 0xaa];
        param_1[(ulonglong)*(byte *)((longlong)param_1 + uVar14 + 0x3e0) + 0xaa] = uVar11 + 1;
        *(char *)((longlong)param_1 + (ulonglong)uVar11 + 0x2e0) = (char)uVar14;
        uVar14 = uVar14 + 1;
      } while (local_3c[0] != uVar14);
      param_1[0xaa] = 0;
      if (uVar17 < 2) goto LAB_00e7d9fe;
    }
    iVar10 = local_d4 - local_40;
    iVar9 = iVar10 + -1;
    iVar22 = 0;
    piVar5 = param_1 + 0x9d;
    do {
      piVar5[-0x9c] = iVar22;
      bVar8 = (byte)iVar10;
      iVar10 = iVar10 + 1;
      iVar22 = iVar22 + (*piVar5 << (bVar8 & 0x1f));
      piVar5 = piVar5 + 1;
    } while (iVar9 + uVar17 != iVar10);
  }
LAB_00e7d9fe:
  if (local_70 < uVar20) {
    uVar14 = (ulonglong)local_70;
    piVar5 = param_1 + uVar14 * 0xd;
    do {
      if (1 < uVar17) goto LAB_00e7da30;
      uVar11 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar11;
      piVar5 = piVar5 + 0xd;
    } while (uVar11 != uVar20);
  }
LAB_00e7da59:
  if (1 < (int)(uVar3 + 1)) {
    iVar10 = (local_40 + uVar24) - local_d4;
    uVar24 = (local_d4 - uVar24) + 1;
    local_74 = local_40 * 2 + 1;
    uVar20 = uVar3 + uVar24;
    iVar9 = local_40 * 2 - uVar3;
    uVar17 = local_40;
    piVar5 = param_1;
    do {
      lVar23 = (longlong)piVar5[0xaa];
      iVar22 = piVar5[0xab];
      iVar13 = piVar5[1];
      if (uVar24 < local_70) {
        FUN_00e69f30(uVar17,(longlong)param_1 + (longlong)iVar22 + 0x2e0,local_d4,0);
      }
      else {
        iVar12 = 1;
        if (0 < iVar10) {
          iVar12 = iVar10;
        }
        if (piVar5[0xaa] != iVar22) {
          lVar19 = (longlong)iVar12;
          if (iVar10 < 2) {
            iVar12 = 1;
          }
          do {
            puVar1 = unaff_RDI + (longlong)iVar13 + 1;
            uVar11 = (uint)*(byte *)((longlong)param_1 + lVar23 + 0x2e0);
            piVar18 = param_1 + iVar12;
            iVar4 = local_74 - iVar12;
            if (iVar10 < 2) {
LAB_00e7dca0:
              do {
                iVar25 = iVar4 + -1;
                FUN_00e69f30(iVar4,(longlong)param_1 + (longlong)piVar18[0xaa] + 0x2e0,local_d4,
                             uVar11);
                piVar18 = piVar18 + 1;
                iVar4 = iVar25;
              } while (iVar9 != iVar25);
            }
            else {
              iVar4 = uVar17 * 0x10000 + 0x1000000 + uVar11;
              uVar16 = CONCAT44(iVar4,iVar4);
              iVar4 = param_1[(ulonglong)uVar17 * 0xd + lVar19];
              if ((uVar24 & 0x1f) == 1) {
                *(undefined8 *)puVar1 = uVar16;
              }
              else if ((uVar24 & 0x1f) == 2) {
                *(undefined8 *)puVar1 = uVar16;
                *(undefined8 *)(puVar1 + 2) = uVar16;
              }
              else if (0 < iVar4) {
                puVar6 = puVar1;
                do {
                  *(undefined8 *)puVar6 = uVar16;
                  puVar7 = puVar6 + 8;
                  *(undefined8 *)(puVar6 + 2) = uVar16;
                  *(undefined8 *)(puVar6 + 4) = uVar16;
                  *(undefined8 *)(puVar6 + 6) = uVar16;
                  puVar6 = puVar7;
                } while (puVar1 + (ulonglong)((iVar4 - 1U >> 3) + 1) * 8 != puVar7);
              }
              iVar4 = local_74 - iVar12;
              if (iVar12 < (int)(uVar3 + 1)) goto LAB_00e7dca0;
            }
            lVar23 = lVar23 + 1;
            iVar13 = iVar13 + (1 << ((byte)uVar24 & 0x1f));
          } while (iVar22 != (int)lVar23);
        }
      }
      local_74 = local_74 + -1;
      uVar24 = uVar24 + 1;
      uVar17 = uVar17 - 1;
      iVar10 = iVar10 + -1;
      iVar9 = iVar9 + -1;
      piVar5 = piVar5 + 1;
    } while (uVar20 != uVar24);
  }
  *unaff_RDI = CONCAT22((ushort)((uVar2 & 0xff00ffff) >> 0x10) | (ushort)local_49,
                        CONCAT11(1,(char)(uVar2 & 0xff00ffff)));
  return local_80;
LAB_00e7da30:
  do {
    uVar15 = 1;
    do {
      piVar5[uVar15] = (uint)param_1[uVar15] >> ((byte)uVar14 & 0x1f);
      uVar15 = uVar15 + 1;
    } while (uVar17 != uVar15);
    uVar11 = (int)uVar14 + 1;
    uVar14 = (ulonglong)uVar11;
    piVar5 = piVar5 + 0xd;
  } while (uVar11 != uVar20);
  goto LAB_00e7da59;
}



bool FUN_00e7dfd0(void)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong unaff_RSI;
  int iVar7;
  ulonglong unaff_RDI;
  
  if (unaff_RSI < unaff_RDI) {
    lVar3 = ((unaff_RSI << 4) / unaff_RDI & 0xffffffff) * 0x10;
    iVar7 = *(int *)(&DAT_00e95fc0 + lVar3);
    iVar5 = *(int *)(&DAT_00e95fc4 + lVar3);
    iVar6 = *(int *)(&DAT_00e95fc8 + lVar3);
    iVar1 = *(int *)(&DAT_00e95fcc + lVar3);
  }
  else {
    iVar1 = 0xca;
    iVar6 = 0x69f;
    iVar5 = 0xb9;
    iVar7 = 0x584;
  }
  iVar4 = (int)(unaff_RDI >> 8);
  uVar2 = iVar1 * iVar4 + iVar6;
  return uVar2 + (uVar2 >> 5) < (uint)(iVar5 * iVar4 + iVar7);
}



void FUN_00e7e250(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  if (*(char *)(param_3 + 1) == '\0') {
    if (param_4 == 0) {
      FUN_00e6bf40();
      return;
    }
    FUN_00e6bc60();
    return;
  }
  if (param_4 == 0) {
    FUN_00e6c240();
    return;
  }
  FUN_00e6c8f0();
  return;
}



ulonglong FUN_00e7e290(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 local_res8;
  undefined4 local_res10;
  
  uVar1 = FUN_00e7d110(param_4,param_3,local_res8,local_res10);
  if (uVar1 < 0xffffffffffffff89) {
    if (uVar1 < param_3) {
      if (local_res10 == 0) {
        uVar1 = FUN_00e6bf40();
        return uVar1;
      }
      uVar1 = FUN_00e6bc60(param_3 - uVar1,param_1 + uVar1);
      return uVar1;
    }
    uVar1 = 0xffffffffffffffb8;
  }
  return uVar1;
}



void FUN_00e7e340(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  if (*(char *)(param_3 + 1) == '\0') {
    if (param_4 == 0) {
      FUN_00e74ac0();
      return;
    }
    FUN_00e75da0();
    return;
  }
  if (param_4 == 0) {
    FUN_00e76f60();
    return;
  }
  FUN_00e793b0();
  return;
}



ulonglong FUN_00e7e380(longlong param_1,longlong param_2,ulonglong param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 local_res8;
  int local_res10;
  
  if (param_2 == 0) {
    return 0xffffffffffffffba;
  }
  if (param_3 == 0) {
    return 0xffffffffffffffec;
  }
  iVar1 = FUN_00e7dfd0(param_1,param_2,local_res8);
  if (iVar1 == 0) {
    uVar2 = FUN_00e7d110(param_4,param_3);
    if (0xffffffffffffff88 < uVar2) {
      return uVar2;
    }
    if (uVar2 < param_3) {
      if (local_res10 != 0) {
        uVar2 = FUN_00e75da0(param_3 - uVar2,param_1 + uVar2);
        return uVar2;
      }
      uVar2 = FUN_00e74ac0();
      return uVar2;
    }
  }
  else {
    uVar2 = FUN_00e7d7a0(param_4,param_3);
    if (0xffffffffffffff88 < uVar2) {
      return uVar2;
    }
    if (uVar2 < param_3) {
      if (local_res10 != 0) {
        uVar2 = FUN_00e793b0(param_3 - uVar2,param_1 + uVar2);
        return uVar2;
      }
      uVar2 = FUN_00e76f60();
      return uVar2;
    }
  }
  return 0xffffffffffffffb8;
}



undefined8 FUN_00e7e600(void)

{
  code *pcVar1;
  longlong *unaff_RDI;
  
  if (unaff_RDI == (longlong *)0x0) {
    return 0;
  }
  pcVar1 = (code *)unaff_RDI[0xd59];
  if (*unaff_RDI == 0) {
    if (pcVar1 == (code *)0x0) {
      return 0;
    }
  }
  else {
    if (pcVar1 == (code *)0x0) {
      return 0;
    }
    (*pcVar1)();
  }
  (*pcVar1)();
  return 0;
}



void FUN_00e7e660(undefined8 param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong unaff_RDI;
  
  iVar2 = *(int *)(&DAT_00007504 + unaff_RDI);
  lVar6 = (*(longlong **)(&DAT_000075f8 + unaff_RDI))[1];
  lVar4 = **(longlong **)(&DAT_000075f8 + unaff_RDI);
  uVar5 = FUN_00e7b770(param_1,0);
  uVar1 = lVar6 - 1;
  uVar5 = uVar5 & uVar1;
  lVar6 = *(longlong *)(lVar4 + uVar5 * 8);
  if (lVar6 != 0) {
    while ((7 < *(ulonglong *)(lVar6 + 0x10) && (**(int **)(lVar6 + 8) == -0x13cf5bc9))) {
      iVar3 = (*(int **)(lVar6 + 8))[1];
      if ((iVar3 == 0) || (iVar2 == iVar3)) break;
      uVar5 = (uVar5 & uVar1) + 1;
      lVar6 = *(longlong *)(lVar4 + uVar5 * 8);
      if (lVar6 == 0) {
        return;
      }
    }
    FUN_00e7e600();
    *(undefined8 *)(&DAT_000075d8 + unaff_RDI) = 0;
    *(longlong *)(&DAT_000075e0 + unaff_RDI) = lVar6;
    *(undefined4 *)(&DAT_000075e8 + unaff_RDI) = *(undefined4 *)(&DAT_00007504 + unaff_RDI);
    *(undefined4 *)(&DAT_000075f0 + unaff_RDI) = 0xffffffff;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00e7eb25)
// WARNING: Removing unreachable block (ram,0x00e7ea69)

undefined8 FUN_00e7ea40(void)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined *unaff_RSI;
  byte unaff_DIL;
  undefined7 unaff_00000039;
  
  if (((unaff_DIL & 7) == 0) && (&UNK_000176c7 < unaff_RSI)) {
    *(undefined8 *)(&DAT_000075e0 + CONCAT71(unaff_00000039,unaff_DIL)) = 0;
    puVar1 = (uint *)cpuid_basic_info(0);
    uVar3 = *puVar1;
    *(undefined8 *)(&DAT_000075d8 + CONCAT71(unaff_00000039,unaff_DIL)) = 0;
    uVar4 = 0;
    *(undefined8 *)(&DAT_000074d8 + CONCAT71(unaff_00000039,unaff_DIL)) = 0;
    *(undefined8 *)(&DAT_000075ec + CONCAT71(unaff_00000039,unaff_DIL)) = 0;
    *(undefined8 *)(&DAT_00007610 + CONCAT71(unaff_00000039,unaff_DIL)) = 0;
    *(undefined8 *)(&DAT_00007630 + CONCAT71(unaff_00000039,unaff_DIL)) = 0;
    *(undefined4 *)(&DAT_00007604 + CONCAT71(unaff_00000039,unaff_DIL)) = 0;
    *(undefined4 *)(&DAT_00007654 + CONCAT71(unaff_00000039,unaff_DIL)) = 0;
    *(undefined8 *)(&DAT_000176c0 + CONCAT71(unaff_00000039,unaff_DIL)) = 0;
    if (6 < uVar3) {
      lVar2 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar4 = (uint)((~*(uint *)(lVar2 + 4) & 0x108) == 0);
    }
    *(uint *)(&DAT_000075d0 + CONCAT71(unaff_00000039,unaff_DIL)) = uVar4;
    *(undefined **)(&DAT_00007608 + CONCAT71(unaff_00000039,unaff_DIL)) =
         &UNK_000176c8 + CONCAT71(unaff_00000039,unaff_DIL);
    *(undefined8 *)(&DAT_000075f8 + CONCAT71(unaff_00000039,unaff_DIL)) = 0;
    *(undefined8 *)(&DAT_00007620 + CONCAT71(unaff_00000039,unaff_DIL)) = 0x8000001;
    *(undefined4 *)(&DAT_00007658 + CONCAT71(unaff_00000039,unaff_DIL)) = 0;
    *(undefined8 *)(&DAT_00007588 + CONCAT71(unaff_00000039,unaff_DIL)) = 0;
    *(undefined4 *)(&DAT_00007600 + CONCAT71(unaff_00000039,unaff_DIL)) = 0;
    *(undefined **)(&DAT_000075c8 + CONCAT71(unaff_00000039,unaff_DIL)) = unaff_RSI;
    return CONCAT71(unaff_00000039,unaff_DIL);
  }
  return 0;
}



ulonglong FUN_00e7edd0(int param_1,ulonglong param_2)

{
  byte *pbVar1;
  byte bVar2;
  ulonglong uVar3;
  byte bVar4;
  ulonglong uVar5;
  byte bVar6;
  uint *unaff_RSI;
  uint uVar7;
  ulonglong *unaff_RDI;
  ulonglong uVar8;
  
  *unaff_RDI = 0;
  unaff_RDI[1] = 0;
  unaff_RDI[2] = 0;
  uVar8 = (ulonglong)(-(uint)(param_1 == 0) & 4) + 1;
  unaff_RDI[3] = 0;
  unaff_RDI[4] = 0;
  if (param_2 < uVar8) {
    return uVar8;
  }
  if (unaff_RSI == (uint *)0x0) {
    return 0xffffffffffffffff;
  }
  if ((param_1 != 1) && (*unaff_RSI != 0xfd2fb528)) {
    if ((*unaff_RSI & 0xfffffff0) != 0x184d2a50) {
      return 0xfffffffffffffff6;
    }
    if (7 < param_2) {
      uVar7 = unaff_RSI[1];
      *(undefined4 *)((longlong)unaff_RDI + 0x14) = 1;
      *unaff_RDI = (ulonglong)uVar7;
      return 0;
    }
    return 8;
  }
  uVar3 = FUN_00e6a220();
  if (param_2 < uVar3) {
    return uVar3;
  }
  *(int *)(unaff_RDI + 3) = (int)uVar3;
  bVar2 = *(byte *)((longlong)unaff_RSI + (uVar8 - 1));
  bVar6 = bVar2 >> 5 & 1;
  if ((bVar2 & 8) != 0) {
    return 0xfffffffffffffff2;
  }
  if (bVar6 == 0) {
    pbVar1 = (byte *)((longlong)unaff_RSI + uVar8);
    uVar8 = uVar8 + 1;
    bVar4 = (*pbVar1 >> 3) + 10;
    if (0x1f < bVar4) {
      return 0xfffffffffffffff0;
    }
    uVar3 = 1L << bVar4;
    uVar3 = (uVar3 >> 3) * (ulonglong)(*pbVar1 & 7) + uVar3;
  }
  else {
    uVar3 = 0;
  }
  bVar4 = bVar2 & 3;
  if (bVar4 == 2) {
    uVar7 = (uint)*(ushort *)((longlong)unaff_RSI + uVar8);
    uVar8 = uVar8 + 2;
  }
  else if (bVar4 == 3) {
    uVar7 = *(uint *)((longlong)unaff_RSI + uVar8);
    uVar8 = uVar8 + 4;
  }
  else {
    uVar7 = 0;
    if (bVar4 == 1) {
      uVar7 = (uint)*(byte *)((longlong)unaff_RSI + uVar8);
      uVar8 = uVar8 + 1;
    }
  }
  bVar4 = bVar2 >> 6;
  if (bVar4 == 2) {
    uVar5 = (ulonglong)*(uint *)((longlong)unaff_RSI + uVar8);
  }
  else if (bVar4 == 3) {
    uVar5 = *(ulonglong *)((longlong)unaff_RSI + uVar8);
  }
  else {
    if (bVar4 != 1) {
      uVar5 = 0xffffffffffffffff;
      if (bVar6 != 0) {
        uVar5 = (ulonglong)*(byte *)((longlong)unaff_RSI + uVar8);
        uVar3 = uVar5;
      }
      goto LAB_00e7ef30;
    }
    uVar5 = (ulonglong)*(ushort *)((longlong)unaff_RSI + uVar8) + 0x100;
  }
  if (bVar6 != 0) {
    uVar3 = uVar5;
  }
LAB_00e7ef30:
  *unaff_RDI = uVar5;
  unaff_RDI[1] = uVar3;
  if (0x20000 < uVar3) {
    uVar3 = 0x20000;
  }
  *(uint *)((longlong)unaff_RDI + 0x1c) = uVar7;
  *(int *)(unaff_RDI + 2) = (int)uVar3;
  *(uint *)(unaff_RDI + 4) = bVar2 >> 2 & 1;
  return 0;
}



ulonglong FUN_00e7f010(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = FUN_00e7edd0(*(undefined4 *)(&DAT_00007588 + unaff_RDI));
  if (uVar1 < 0xffffffffffffff89) {
    if (uVar1 != 0) {
      return 0xffffffffffffffb8;
    }
    if (((*(int *)(&DAT_00007600 + unaff_RDI) == 1) &&
        (*(longlong *)(&DAT_000075f8 + unaff_RDI) != 0)) &&
       (*(longlong *)(&DAT_000075e0 + unaff_RDI) != 0)) {
      FUN_00e7e660();
    }
    if ((*(int *)(&DAT_00007504 + unaff_RDI) == 0) ||
       (*(int *)(&DAT_00007504 + unaff_RDI) == *(int *)(&DAT_000075e8 + unaff_RDI))) {
      if ((*(int *)(&DAT_00007508 + unaff_RDI) == 0) || (*(int *)(&DAT_0000758c + unaff_RDI) != 0))
      {
        *(undefined4 *)(&DAT_00007590 + unaff_RDI) = 0;
      }
      else {
        *(undefined4 *)(&DAT_00007590 + unaff_RDI) = 1;
        *(undefined8 *)(&DAT_00007538 + unaff_RDI) = 0x60ea27eeadc0b5d6;
        *(undefined8 *)(&DAT_00007540 + unaff_RDI) = 0xc2b2ae3d27d4eb4f;
        *(undefined8 *)(&DAT_00007530 + unaff_RDI) = 0;
        *(undefined8 *)(&DAT_00007548 + unaff_RDI) = 0;
        *(undefined8 *)(&DAT_00007550 + unaff_RDI) = 0x61c8864e7a143579;
        *(undefined8 *)(&DAT_00007558 + unaff_RDI) = 0;
        *(undefined8 *)(&DAT_00007560 + unaff_RDI) = 0;
        *(undefined8 *)(&DAT_00007568 + unaff_RDI) = 0;
        *(undefined8 *)(&DAT_00007570 + unaff_RDI) = 0;
        *(undefined8 *)(&DAT_00007578 + unaff_RDI) = 0;
      }
      *(longlong *)(&DAT_00007510 + unaff_RDI) = *(longlong *)(&DAT_00007510 + unaff_RDI) + param_2;
    }
    else {
      uVar1 = 0xffffffffffffffe0;
    }
  }
  return uVar1;
}



ulonglong FUN_00e7f160(void)

{
  ushort uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong unaff_RSI;
  uint uVar5;
  uint *unaff_RDI;
  ulonglong uVar6;
  ushort *puVar7;
  uint local_20;
  int local_18;
  
  if ((7 < unaff_RSI) && ((*unaff_RDI & 0xfffffff0) == 0x184d2a50)) {
    uVar2 = 0xfffffffffffffff2;
    if ((unaff_RDI[1] < 0xfffffff8) && (uVar2 = (ulonglong)unaff_RDI[1] + 8, unaff_RSI < uVar2)) {
      uVar2 = 0xffffffffffffffb8;
    }
    return uVar2;
  }
  uVar2 = FUN_00e7edd0(0);
  if (0xffffffffffffff88 < uVar2) {
    return uVar2;
  }
  if (uVar2 == 0) {
    uVar2 = unaff_RSI - local_20;
    puVar7 = (ushort *)((longlong)unaff_RDI + (ulonglong)local_20);
    do {
      if (uVar2 < 3) goto LAB_00e7f20e;
      uVar1 = *puVar7;
      uVar3 = (uint)(byte)puVar7[1] * 0x10000 + (uint)uVar1;
      uVar5 = uVar3 >> 1 & 3;
      if (uVar5 == 1) {
        uVar6 = 4;
        uVar4 = 1;
      }
      else {
        if (uVar5 == 3) {
          return 0xffffffffffffffec;
        }
        uVar4 = (ulonglong)(uVar3 >> 3);
        uVar6 = uVar4 + 3;
      }
      if (uVar2 < uVar6) goto LAB_00e7f20e;
      puVar7 = (ushort *)((longlong)puVar7 + uVar6);
      uVar2 = (uVar2 - 3) - uVar4;
    } while ((uVar1 & 1) == 0);
    if (local_18 != 0) {
      if (uVar2 < 4) goto LAB_00e7f20e;
      puVar7 = puVar7 + 2;
    }
    uVar2 = (longlong)puVar7 - (longlong)unaff_RDI;
  }
  else {
LAB_00e7f20e:
    uVar2 = 0xffffffffffffffb8;
  }
  return uVar2;
}



longlong FUN_00e7f640(undefined8 param_1,ulonglong param_2)

{
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong lVar7;
  undefined *puVar8;
  uint local_a8 [30];
  
  if (param_2 < 9) {
    return -0x1e;
  }
  uVar3 = FUN_00e7d7a0();
  if (uVar3 < 0xffffffffffffff89) {
    puVar5 = (uint *)(param_2 + unaff_RSI);
    lVar7 = unaff_RSI + 8 + uVar3;
    uVar3 = FUN_00e6b370(lVar7,local_a8,(longlong)puVar5 - lVar7);
    if ((uVar3 < 0xffffffffffffff89) && (local_a8[0] < 9)) {
      puVar8 = &UNK_00006828 + unaff_RDI;
      FUN_00e6b070(&DAT_00e95ea0,0x1f,&DAT_00e95e80,local_a8[0],puVar8);
      lVar7 = lVar7 + uVar3;
      uVar3 = FUN_00e6b370(lVar7,local_a8,(longlong)puVar5 - lVar7);
      if ((uVar3 < 0xffffffffffffff89) && (local_a8[0] < 10)) {
        FUN_00e6b070(&DAT_00e95da0,0x34,&DAT_00e960c0,local_a8[0],puVar8);
        lVar7 = lVar7 + uVar3;
        uVar3 = FUN_00e6b370(lVar7,local_a8,(longlong)puVar5 - lVar7);
        if ((uVar3 < 0xffffffffffffff89) && (local_a8[0] < 10)) {
          FUN_00e6b070(&DAT_00e95f20,0x23,&DAT_00e96100,local_a8[0],puVar8);
          puVar4 = (uint *)(lVar7 + uVar3);
          puVar1 = puVar4 + 3;
          if (puVar1 <= puVar5) {
            puVar6 = (uint *)(&DAT_0000681c + unaff_RDI);
            while( true ) {
              uVar2 = *puVar4;
              puVar4 = puVar4 + 1;
              if ((uVar2 == 0) ||
                 ((ulonglong)((longlong)puVar5 - (longlong)puVar1) < (ulonglong)uVar2)) break;
              *puVar6 = uVar2;
              puVar6 = puVar6 + 1;
              if (puVar1 == puVar4) {
                return (longlong)puVar1 - unaff_RSI;
              }
            }
          }
        }
      }
    }
  }
  return -0x1e;
}



undefined8 FUN_00e7fc40(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int *unaff_RSI;
  longlong *unaff_RDI;
  
  unaff_RDI[0xea2] = 0;
  unaff_RDI[0xea3] = 0;
  unaff_RDI[0xe98] = 0;
  unaff_RDI[0xe99] = 0;
  unaff_RDI[0xe9c] = (ulonglong)(-(uint)((int)unaff_RDI[0xeb1] == 0) & 4) + 1;
  *(undefined8 *)((longlong)unaff_RDI + 0x683c) = 0x400000001;
  unaff_RDI[0xe9a] = 0;
  unaff_RDI[0xe9b] = 0;
  *(undefined4 *)(unaff_RDI + 0x507) = 0xc00000c;
  *(undefined4 *)(unaff_RDI + 0xebd) = 0;
  unaff_RDI[0xea4] = 3;
  unaff_RDI[0xea5] = 0;
  *(undefined4 *)((longlong)unaff_RDI + 0x6844) = 8;
  unaff_RDI[1] = (longlong)(unaff_RDI + 0x306);
  unaff_RDI[2] = (longlong)(unaff_RDI + 0x205);
  *unaff_RDI = (longlong)(unaff_RDI + 4);
  unaff_RDI[3] = (longlong)(unaff_RDI + 0x507);
  if ((unaff_RSI != (int *)0x0) && (param_2 != 0)) {
    if ((param_2 < 8) || (*unaff_RSI != -0x13cf5bc9)) {
      unaff_RDI[0xe9a] = (longlong)unaff_RSI;
      unaff_RDI[0xe99] = (longlong)unaff_RSI;
      unaff_RDI[0xe98] = (longlong)unaff_RSI + param_2;
    }
    else {
      *(int *)(unaff_RDI + 0xebd) = unaff_RSI[1];
      uVar2 = FUN_00e7f640();
      if (0xffffffffffffff88 < uVar2) {
        return 0xffffffffffffffe2;
      }
      unaff_RDI[0xea5] = 0x100000001;
      unaff_RDI[0xe9b] = unaff_RDI[0xe98];
      lVar1 = unaff_RDI[0xe99];
      unaff_RDI[0xe99] = (longlong)unaff_RSI + uVar2;
      unaff_RDI[0xe9a] = ((longlong)unaff_RSI + uVar2) - (unaff_RDI[0xe98] - lVar1);
      unaff_RDI[0xe98] = (longlong)unaff_RSI + param_2;
    }
  }
  return 0;
}



undefined8 FUN_00e7fde0(void)

{
  longlong lVar1;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  
  if (unaff_RSI != 0) {
    *(uint *)((longlong)unaff_RDI + 0x75ec) =
         (uint)(unaff_RDI[0xe9b] != *(longlong *)(unaff_RSI + 0x10) + *(longlong *)(unaff_RSI + 8));
  }
  unaff_RDI[0xea2] = 0;
  unaff_RDI[0xea3] = 0;
  unaff_RDI[0xe98] = 0;
  unaff_RDI[0xe99] = 0;
  unaff_RDI[0xe9c] = (ulonglong)(-(uint)((int)unaff_RDI[0xeb1] == 0) & 4) + 1;
  *unaff_RDI = (longlong)(unaff_RDI + 4);
  unaff_RDI[1] = (longlong)(unaff_RDI + 0x306);
  unaff_RDI[2] = (longlong)(unaff_RDI + 0x205);
  unaff_RDI[0xe9a] = 0;
  unaff_RDI[0xe9b] = 0;
  *(undefined4 *)(unaff_RDI + 0x507) = 0xc00000c;
  *(undefined4 *)(unaff_RDI + 0xebd) = 0;
  unaff_RDI[0xea4] = 3;
  unaff_RDI[0xea5] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x683c) = 0x400000001;
  *(undefined4 *)((longlong)unaff_RDI + 0x6844) = 8;
  unaff_RDI[3] = (longlong)(unaff_RDI + 0x507);
  if (unaff_RSI != 0) {
    *(undefined4 *)(unaff_RDI + 0xebd) = *(undefined4 *)(&DAT_00006ab4 + unaff_RSI);
    lVar1 = *(longlong *)(unaff_RSI + 8);
    unaff_RDI[0xe99] = lVar1;
    unaff_RDI[0xe9a] = lVar1;
    lVar1 = *(longlong *)(unaff_RSI + 0x10) + *(longlong *)(unaff_RSI + 8);
    unaff_RDI[0xe9b] = lVar1;
    unaff_RDI[0xe98] = lVar1;
    if (*(int *)(&DAT_00006ab8 + unaff_RSI) != 0) {
      *unaff_RDI = unaff_RSI + 0x18;
      unaff_RDI[1] = (longlong)(&UNK_00001828 + unaff_RSI);
      unaff_RDI[2] = (longlong)(&UNK_00001020 + unaff_RSI);
      unaff_RDI[0xea5] = 0x100000001;
      unaff_RDI[3] = (longlong)(&UNK_00002830 + unaff_RSI);
      *(undefined4 *)((longlong)unaff_RDI + 0x683c) = *(undefined4 *)(&DAT_00006834 + unaff_RSI);
      *(undefined4 *)(unaff_RDI + 0xd08) = *(undefined4 *)(&DAT_00006838 + unaff_RSI);
      *(undefined4 *)((longlong)unaff_RDI + 0x6844) = *(undefined4 *)(&DAT_0000683c + unaff_RSI);
    }
  }
  return 0;
}



undefined * FUN_00e80b60(longlong param_1,undefined *param_2,undefined *param_3,int param_4)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  undefined *puVar6;
  ulonglong uVar7;
  char *pcVar8;
  int iVar9;
  byte bVar10;
  undefined *puVar11;
  uint *unaff_RSI;
  undefined *puVar12;
  longlong unaff_RDI;
  uint uVar13;
  undefined *puVar14;
  
  if (param_2 < (undefined *)0x3) {
    return (undefined *)0xffffffffffffffec;
  }
  bVar2 = (byte)*unaff_RSI;
  bVar10 = bVar2 & 3;
  if (bVar10 != 2) {
    if (bVar10 != 3) {
      if (bVar10 != 1) {
        bVar10 = bVar2 >> 2 & 3;
        puVar12 = (undefined *)0x20000;
        if (param_3 < &UNK_00020001) {
          puVar12 = param_3;
        }
        if (bVar10 == 1) {
          lVar5 = 2;
          puVar11 = (undefined *)(ulonglong)(ushort)((ushort)*unaff_RSI >> 4);
        }
        else if (bVar10 == 3) {
          lVar5 = 3;
          puVar11 = (undefined *)
                    (ulonglong)
                    ((uint)*(byte *)((longlong)unaff_RSI + 2) * 0x10000 + (uint)(ushort)*unaff_RSI
                    >> 4);
        }
        else {
          puVar11 = (undefined *)(ulonglong)(bVar2 >> 3);
          lVar5 = 1;
        }
        if (puVar11 != (undefined *)0x0 && param_1 == 0) {
          return (undefined *)0xffffffffffffffba;
        }
        if (puVar12 < puVar11) {
          return (undefined *)0xffffffffffffffba;
        }
        if ((param_4 == 0) && (&UNK_00020040 + (longlong)puVar11 < param_3)) {
          puVar12 = &UNK_00020020 + param_1;
          iVar9 = 1;
          puVar6 = puVar12 + (longlong)puVar11;
        }
        else if (puVar11 < &UNK_00010001) {
          puVar12 = &DAT_0000768c + unaff_RDI;
          iVar9 = 0;
          puVar6 = puVar12 + (longlong)puVar11;
        }
        else {
          puVar12 = puVar12 + (param_1 - (longlong)puVar11) + 0xffe0;
          iVar9 = 2;
          puVar6 = puVar12 + -0x10000 + (longlong)puVar11;
        }
        puVar14 = puVar11 + lVar5;
        *(undefined **)(&DAT_00007680 + unaff_RDI) = puVar6;
        *(undefined **)(&DAT_00007678 + unaff_RDI) = puVar12;
        *(int *)(&DAT_00007688 + unaff_RDI) = iVar9;
        if (puVar14 + 0x20 <= param_2) {
          *(undefined **)(&DAT_000075b8 + unaff_RDI) = puVar11;
          *(byte **)(&DAT_00007598 + unaff_RDI) = (byte *)(lVar5 + (longlong)unaff_RSI);
          *(byte **)(&DAT_00007680 + unaff_RDI) =
               (byte *)(lVar5 + (longlong)unaff_RSI) + (longlong)puVar11;
          *(undefined4 *)(&DAT_00007688 + unaff_RDI) = 0;
          return puVar14;
        }
        if (param_2 < puVar14) {
          return (undefined *)0xffffffffffffffec;
        }
        if (iVar9 == 2) {
          FUN_00e862a0(2,puVar11 + -0x10000);
          FUN_00e862a0();
        }
        else {
          FUN_00e862a0(iVar9,puVar11);
        }
        goto LAB_00e80c5b;
      }
      bVar10 = bVar2 >> 2 & 3;
      puVar12 = (undefined *)0x20000;
      if (param_3 < &UNK_00020001) {
        puVar12 = param_3;
      }
      if (bVar10 == 1) {
        puVar11 = (undefined *)(ulonglong)(ushort)((ushort)*unaff_RSI >> 4);
        if ((puVar11 != (undefined *)0x0) && (param_1 == 0)) {
          return (undefined *)0xffffffffffffffba;
        }
        if (puVar12 < puVar11) {
          return (undefined *)0xffffffffffffffba;
        }
        puVar14 = (undefined *)0x3;
joined_r0x00e810cf:
        if ((param_4 == 0) && (&UNK_00020040 + (longlong)puVar11 < param_3)) goto LAB_00e80ec8;
LAB_00e810d5:
        puVar12 = &DAT_0000768c + unaff_RDI;
        uVar3 = 0;
        puVar6 = puVar12 + (longlong)puVar11;
      }
      else {
        if (bVar10 != 3) {
          puVar11 = (undefined *)(ulonglong)(bVar2 >> 3);
          if ((puVar11 != (undefined *)0x0) && (param_1 == 0)) {
            return (undefined *)0xffffffffffffffba;
          }
          if (puVar12 < puVar11) {
            return (undefined *)0xffffffffffffffba;
          }
          puVar14 = (undefined *)0x2;
          goto joined_r0x00e810cf;
        }
        uVar4 = (uint)*(byte *)((longlong)unaff_RSI + 2) * 0x10000 + (uint)(ushort)*unaff_RSI >> 4;
        puVar11 = (undefined *)(ulonglong)uVar4;
        if (param_2 == (undefined *)0x3) {
          return (undefined *)0xffffffffffffffec;
        }
        if ((puVar11 != (undefined *)0x0) && (param_1 == 0)) {
          return (undefined *)0xffffffffffffffba;
        }
        if (0x20000 < uVar4) {
          return (undefined *)0xffffffffffffffec;
        }
        if (puVar12 < puVar11) {
          return (undefined *)0xffffffffffffffba;
        }
        if ((param_4 != 0) || (param_3 <= &UNK_00020040 + (longlong)puVar11)) {
          if (0x10000 < uVar4) {
            *(undefined4 *)(&DAT_00007688 + unaff_RDI) = 2;
            puVar14 = (undefined *)0x4;
            *(undefined **)(&DAT_00007678 + unaff_RDI) =
                 puVar12 + param_1 + (0xffe0 - (longlong)puVar11);
            *(undefined **)(&DAT_00007680 + unaff_RDI) =
                 puVar11 + (longlong)(puVar12 + param_1 + (0xffe0 - (longlong)puVar11) + -0x10000);
            FUN_00e86200();
            FUN_00e86200();
            goto LAB_00e80c5b;
          }
          puVar14 = (undefined *)0x4;
          goto LAB_00e810d5;
        }
        puVar14 = (undefined *)0x4;
LAB_00e80ec8:
        puVar12 = &UNK_00020020 + param_1;
        uVar3 = 1;
        puVar6 = puVar12 + (longlong)puVar11;
      }
      *(undefined4 *)(&DAT_00007688 + unaff_RDI) = uVar3;
      *(undefined **)(&DAT_00007678 + unaff_RDI) = puVar12;
      *(undefined **)(&DAT_00007680 + unaff_RDI) = puVar6;
      FUN_00e86200(puVar6,puVar11);
LAB_00e80c5b:
      *(undefined **)(&DAT_000075b8 + unaff_RDI) = puVar11;
      *(undefined8 *)(&DAT_00007598 + unaff_RDI) = *(undefined8 *)(&DAT_00007678 + unaff_RDI);
      return puVar14;
    }
    if (*(int *)(&DAT_00007528 + unaff_RDI) == 0) {
      return (undefined *)0xffffffffffffffe2;
    }
  }
  if (param_2 < (undefined *)0x5) {
    return (undefined *)0xffffffffffffffec;
  }
  uVar4 = *unaff_RSI;
  bVar2 = bVar2 >> 2 & 3;
  uVar13 = uVar4 >> 4;
  if (bVar2 == 2) {
    uVar4 = uVar4 >> 0x12;
    bVar2 = 0;
    lVar5 = 4;
    uVar13 = uVar13 & 0x3fff;
LAB_00e80d28:
    puVar12 = (undefined *)(ulonglong)uVar13;
    uVar7 = (ulonglong)uVar4;
    if ((puVar12 != (undefined *)0x0) && (param_1 == 0)) {
      return (undefined *)0xffffffffffffffba;
    }
  }
  else {
    if (bVar2 != 3) {
      bVar2 = bVar2 ^ 1;
      lVar5 = 3;
      uVar13 = uVar13 & 0x3ff;
      uVar4 = uVar4 >> 0xe & 0x3ff;
      goto LAB_00e80d28;
    }
    puVar12 = (undefined *)(ulonglong)(uVar13 & 0x3ffff);
    if ((puVar12 != (undefined *)0x0) && (param_1 == 0)) {
      return (undefined *)0xffffffffffffffba;
    }
    if (0x20000 < (uVar13 & 0x3ffff)) {
      return (undefined *)0xffffffffffffffec;
    }
    bVar2 = 0;
    lVar5 = 5;
    uVar7 = (ulonglong)(uVar4 >> 0x16) + (ulonglong)(byte)unaff_RSI[1] * 0x400;
  }
  puVar11 = (undefined *)(lVar5 + uVar7);
  if (param_2 < puVar11) {
    return (undefined *)0xffffffffffffffec;
  }
  puVar6 = (undefined *)0x20000;
  if (param_3 < &UNK_00020001) {
    puVar6 = param_3;
  }
  if (puVar6 < puVar12) {
    return (undefined *)0xffffffffffffffba;
  }
  if ((param_4 == 0) && (&UNK_00020040 + (longlong)puVar12 < param_3)) {
    puVar6 = &UNK_00020020 + param_1;
    uVar3 = 1;
LAB_00e80d88:
    *(undefined **)(&DAT_00007678 + unaff_RDI) = puVar6;
    *(undefined **)(&DAT_00007680 + unaff_RDI) = puVar6 + (longlong)puVar12;
    *(undefined4 *)(&DAT_00007688 + unaff_RDI) = uVar3;
    if ((*(int *)(&DAT_000075ec + unaff_RDI) == 0) || (puVar12 < (undefined *)0x301))
    goto LAB_00e80db5;
  }
  else {
    if (puVar12 < &UNK_00010001) {
      puVar6 = &DAT_0000768c + unaff_RDI;
      uVar3 = 0;
      goto LAB_00e80d88;
    }
    *(undefined4 *)(&DAT_00007688 + unaff_RDI) = 2;
    *(undefined **)(&DAT_00007680 + unaff_RDI) = puVar6 + param_1;
    *(undefined **)(&DAT_00007678 + unaff_RDI) = puVar6 + (param_1 - (longlong)puVar12);
    if (*(int *)(&DAT_000075ec + unaff_RDI) == 0) goto LAB_00e80db5;
  }
  pcVar8 = (char *)(*(longlong *)(unaff_RDI + 0x18) + 0x40);
  do {
    pcVar8 = pcVar8 + 0x80;
  } while (pcVar8 != "This kernel requires an %s CPU, " + *(longlong *)(unaff_RDI + 0x18) + 0x13);
LAB_00e80db5:
  pbVar1 = (byte *)((longlong)unaff_RSI + lVar5);
  if (bVar10 == 3) {
    if (bVar2 == 0) {
      uVar7 = FUN_00e7e340(uVar7,pbVar1,*(undefined8 *)(unaff_RDI + 0x18));
    }
    else {
      uVar7 = FUN_00e7e250();
    }
  }
  else if (bVar2 == 0) {
    uVar7 = FUN_00e7e380(pbVar1,puVar12,uVar7,&UNK_00006abc + unaff_RDI);
  }
  else {
    uVar7 = FUN_00e7e290(pbVar1,puVar12,uVar7,&UNK_00006abc + unaff_RDI);
  }
  if (*(int *)(&DAT_00007688 + unaff_RDI) == 2) {
    FUN_00e862a0();
    FUN_00e86250();
    *(longlong *)(&DAT_00007680 + unaff_RDI) = *(longlong *)(&DAT_00007680 + unaff_RDI) + -0x20;
    *(longlong *)(&DAT_00007678 + unaff_RDI) = *(longlong *)(&DAT_00007678 + unaff_RDI) + 0xffe0;
  }
  if (0xffffffffffffff88 < uVar7) {
    return (undefined *)0xffffffffffffffec;
  }
  *(undefined **)(&DAT_000075b8 + unaff_RDI) = puVar12;
  *(undefined4 *)(&DAT_00007528 + unaff_RDI) = 1;
  *(undefined8 *)(&DAT_00007598 + unaff_RDI) = *(undefined8 *)(&DAT_00007678 + unaff_RDI);
  if (bVar10 == 2) {
    *(undefined **)(unaff_RDI + 0x18) = &DAT_00002838 + unaff_RDI;
    return puVar11;
  }
  return puVar11;
}



byte * FUN_00e812f0(longlong param_1,byte *param_2)

{
  byte *pbVar1;
  undefined *puVar2;
  byte bVar3;
  byte *pbVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint *unaff_RSI;
  longlong unaff_RDI;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  
  if (param_1 == 0) {
    return (byte *)0xffffffffffffffb8;
  }
  bVar3 = *param_2;
  uVar9 = (uint)bVar3;
  if (bVar3 == 0) {
    *unaff_RSI = 0;
    if (param_1 != 1) {
      return (byte *)0xffffffffffffffb8;
    }
    return (byte *)0x1;
  }
  pbVar1 = param_2 + param_1;
  pbVar4 = param_2 + 1;
  uVar8 = (uint)bVar3;
  if (0x7f < uVar8) {
    if (uVar8 == 0xff) {
      pbVar4 = param_2 + 3;
      if (pbVar1 < pbVar4) {
        return (byte *)0xffffffffffffffb8;
      }
      uVar9 = *(ushort *)(param_2 + 1) + 0x7f00;
    }
    else {
      if (pbVar1 <= pbVar4) {
        return (byte *)0xffffffffffffffb8;
      }
      pbVar4 = param_2 + 2;
      uVar9 = (uVar8 - 0x80) * 0x100 + (uint)param_2[1];
    }
  }
  pbVar7 = pbVar4 + 1;
  *unaff_RSI = uVar9;
  if (pbVar1 < pbVar7) {
    return (byte *)0xffffffffffffffb8;
  }
  bVar3 = *pbVar4;
  puVar2 = &UNK_00006abc + unaff_RDI;
  uVar5 = FUN_00e6b9b0(0x23,bVar3 >> 6,9,pbVar7,*(undefined4 *)(&DAT_0000752c + unaff_RDI),
                       *(undefined4 *)(&DAT_000075ec + unaff_RDI),uVar9,puVar2,
                       *(undefined4 *)(&DAT_000075d0 + unaff_RDI));
  if (0xffffffffffffff88 < uVar5) {
    return (byte *)0xffffffffffffffec;
  }
  pbVar7 = pbVar7 + uVar5;
  uVar5 = FUN_00e6b9b0(0x1f,bVar3 >> 4 & 3,8,pbVar7,*(undefined4 *)(&DAT_0000752c + unaff_RDI),
                       *(undefined4 *)(&DAT_000075ec + unaff_RDI),uVar9,puVar2,
                       *(undefined4 *)(&DAT_000075d0 + unaff_RDI));
  if (0xffffffffffffff88 < uVar5) {
    return (byte *)0xffffffffffffffec;
  }
  uVar6 = FUN_00e6b9b0(0x34,bVar3 >> 2 & 3,9,pbVar7 + uVar5,
                       *(undefined4 *)(&DAT_0000752c + unaff_RDI),
                       *(undefined4 *)(&DAT_000075ec + unaff_RDI),uVar9,puVar2,
                       *(undefined4 *)(&DAT_000075d0 + unaff_RDI));
  if (0xffffffffffffff88 < uVar6) {
    return (byte *)0xffffffffffffffec;
  }
  return pbVar7 + uVar5 + (uVar6 - (longlong)param_2);
}



undefined1 * FUN_00e81560(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  byte bVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  byte bVar19;
  byte bVar20;
  longlong lVar21;
  ulonglong *puVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  ulonglong uVar29;
  undefined8 *unaff_RSI;
  undefined8 *puVar30;
  undefined8 **ppuVar31;
  longlong unaff_RDI;
  undefined8 *puVar32;
  undefined8 **ppuVar33;
  longlong lVar34;
  longlong lVar35;
  uint uVar36;
  longlong lVar37;
  undefined8 *puVar38;
  undefined8 *puStack_1b8;
  ulonglong uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *local_188;
  longlong local_178;
  undefined8 *local_170;
  longlong local_168;
  undefined1 *local_160;
  int local_130;
  int local_128;
  int local_10c;
  ulonglong local_f0;
  ulonglong local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  ulonglong local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  ulonglong local_b8;
  undefined8 *local_b0;
  ulonglong local_a8;
  uint local_a0 [2];
  ulonglong *local_98;
  ulonglong *local_90;
  ulonglong *local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined8 *local_50 [4];
  
  puStack_1a0 = (undefined8 *)0xe815a0;
  puVar10 = (undefined1 *)FUN_00e80b60();
  if ((undefined1 *)0xffffffffffffff88 < puVar10) {
    return puVar10;
  }
  iVar23 = *(int *)(&DAT_000075ec + unaff_RDI);
  puStack_1a0 = (undefined8 *)0xe815ea;
  puVar11 = (undefined1 *)FUN_00e812f0(param_3 - (longlong)puVar10);
  if ((undefined1 *)0xffffffffffffff88 < puVar11) {
    return puVar11;
  }
  lVar37 = (param_3 - (longlong)puVar10) - (longlong)puVar11;
  puVar10 = puVar10 + param_1 + (longlong)puVar11;
  if (unaff_RSI == (undefined8 *)0x0) {
    if (0 < local_10c) {
      return (undefined1 *)0xffffffffffffffba;
    }
    if (iVar23 == 0) goto LAB_00e81700;
  }
  else if (iVar23 == 0) {
    if (((param_4 == 0) || (0x1000000 < *(ulonglong *)(&DAT_000074f0 + unaff_RDI))) &&
       (8 < local_10c)) {
      lVar35 = *(longlong *)(unaff_RDI + 0x10);
      uVar36 = *(uint *)(lVar35 + 4);
      puVar11 = (undefined1 *)(ulonglong)uVar36;
      iVar23 = 1 << ((byte)uVar36 & 0x1f);
      if (iVar23 == 0) goto LAB_00e81700;
      pbVar12 = (byte *)(lVar35 + 10);
      iVar24 = 0;
      do {
        iVar24 = (iVar24 + 1) - (uint)(*pbVar12 < 0x17);
        pbVar12 = pbVar12 + 8;
      } while (pbVar12 != (byte *)(lVar35 + 0x12 + (ulonglong)(iVar23 - 1) * 8));
      *(undefined4 *)(&DAT_000075ec + unaff_RDI) = 0;
      puVar11 = (undefined1 *)(ulonglong)(8 - uVar36);
      if (6 < (uint)(iVar24 << ((byte)(8 - uVar36) & 0x1f))) goto LAB_00e816be;
    }
    else {
LAB_00e81700:
      *(undefined4 *)(&DAT_000075ec + unaff_RDI) = 0;
    }
    if (*(int *)(&DAT_00007688 + unaff_RDI) != 2) {
      if (*(int *)(&DAT_000075d0 + unaff_RDI) != 0) {
        puVar10 = (undefined1 *)FUN_00e6cf40(puVar10,param_2,lVar37,local_10c);
        return puVar10;
      }
      if (*(int *)(&DAT_00007688 + unaff_RDI) == 0) {
        local_160 = (undefined1 *)((longlong)unaff_RSI + param_2);
      }
      else {
        local_160 = *(undefined1 **)(&DAT_00007678 + unaff_RDI);
      }
      local_d8 = *(undefined8 **)(&DAT_00007598 + unaff_RDI);
      puVar26 = (undefined8 *)(*(longlong *)(&DAT_000075b8 + unaff_RDI) + (longlong)local_d8);
      puVar8 = *(undefined8 **)(&DAT_000074c8 + unaff_RDI);
      lVar35 = *(longlong *)(&DAT_000074d0 + unaff_RDI);
      puVar10 = *(undefined1 **)(&DAT_000074d8 + unaff_RDI);
      puVar30 = unaff_RSI;
      if (local_10c != 0) {
        local_50[0] = (undefined8 *)(ulonglong)*(uint *)(&DAT_0000683c + unaff_RDI);
        *(undefined4 *)(&DAT_0000752c + unaff_RDI) = 1;
        local_50[1] = (undefined8 *)(ulonglong)*(uint *)(&DAT_00006840 + unaff_RDI);
        local_50[2] = (undefined8 *)(ulonglong)*(uint *)(&DAT_00006844 + unaff_RDI);
        puStack_1a0 = (undefined8 *)0xe817e8;
        uVar13 = FUN_00e6a940(puVar11,lVar37);
        if (0xffffffffffffff88 < uVar13) {
          return (undefined1 *)0xffffffffffffffec;
        }
        puStack_1a0 = (undefined8 *)0xe81805;
        FUN_00e6bba0();
        puStack_1a0 = (undefined8 *)0xe81819;
        FUN_00e6bba0();
        puStack_1a0 = (undefined8 *)0xe8182d;
        FUN_00e6bba0();
        local_128 = local_10c;
        local_178 = local_80;
        lVar37 = local_70;
        lVar34 = local_60;
LAB_00e818e0:
        puVar1 = (ushort *)(local_78 + local_178 * 8);
        bVar6 = (byte)puVar1[1];
        puVar2 = (ushort *)(local_58 + lVar34 * 8);
        bVar20 = (byte)puVar2[1];
        uVar13 = (ulonglong)*(uint *)(puVar2 + 2);
        puVar3 = (ushort *)(local_68 + lVar37 * 8);
        uVar36 = *(uint *)(puVar1 + 2);
        puVar16 = (undefined8 *)(ulonglong)uVar36;
        bVar7 = (byte)puVar3[1];
        bVar19 = (byte)local_a0[0];
        if (bVar7 < 2) {
          if (bVar7 == 1) {
            local_a0[0] = local_a0[0] + 1;
            lVar37 = (ulonglong)((uint)(uVar36 == 0) + *(uint *)(puVar3 + 2)) -
                     ((longlong)(local_a8 << (bVar19 & 0x3f)) >> 0x3f);
            local_170 = local_50[0];
            if (lVar37 == 3) {
              puVar38 = (undefined8 *)
                        ((undefined1 *)((longlong)local_50[0] + -1) +
                        ((undefined1 *)((longlong)local_50[0] + -1) == (undefined1 *)0x0));
            }
            else {
              puVar38 = (undefined8 *)
                        ((longlong)local_50[lVar37] +
                        (ulonglong)(local_50[lVar37] == (undefined8 *)0x0));
              if (lVar37 == 1) goto LAB_00e81991;
            }
            local_50[2] = local_50[1];
          }
          else {
            puVar38 = local_50[uVar36 == 0];
            local_170 = *(undefined8 **)(local_a0 + (0xb - (ulonglong)(uVar36 == 0)) * 2);
          }
        }
        else {
          local_a0[0] = local_a0[0] + bVar7;
          puVar38 = (undefined8 *)
                    ((ulonglong)*(uint *)(puVar3 + 2) +
                    ((local_a8 << (bVar19 & 0x3f)) >> (-bVar7 & 0x3f)));
          local_50[2] = local_50[1];
          local_170 = local_50[0];
        }
LAB_00e81991:
        local_50[0] = puVar38;
        local_50[1] = local_170;
        uVar36 = local_a0[0];
        if (bVar20 != 0) {
          uVar36 = local_a0[0] + bVar20;
          uVar13 = uVar13 + ((local_a8 << ((byte)local_a0[0] & 0x3f)) >> (-bVar20 & 0x3f));
        }
        if ((0x1e < (byte)(bVar6 + bVar20 + bVar7)) && (uVar36 < 0x41)) {
          if (local_98 < local_88) {
            if (local_98 != local_90) {
              uVar25 = uVar36 >> 3;
              puVar22 = (ulonglong *)((longlong)local_98 - (ulonglong)uVar25);
              if (puVar22 < local_90) {
                uVar25 = (int)local_98 - (int)local_90;
                puVar22 = (ulonglong *)((longlong)local_98 - (ulonglong)uVar25);
              }
              local_98 = puVar22;
              local_a8 = *puVar22;
              uVar36 = uVar36 + uVar25 * -8;
            }
          }
          else {
            local_98 = (ulonglong *)((longlong)local_98 - (ulonglong)(uVar36 >> 3));
            local_a8 = *local_98;
            uVar36 = uVar36 & 7;
          }
        }
        uVar25 = uVar36;
        if (bVar6 != 0) {
          uVar25 = uVar36 + bVar6;
          puVar16 = (undefined8 *)
                    ((longlong)puVar16 + ((local_a8 << ((byte)uVar36 & 0x3f)) >> (-bVar6 & 0x3f)));
        }
        iVar23 = uVar25 + *(byte *)((longlong)puVar1 + 3);
        puVar11 = (undefined1 *)((longlong)puVar16 + uVar13);
        iVar24 = iVar23 + (uint)*(byte *)((longlong)puVar2 + 3);
        uVar36 = iVar24 + (uint)*(byte *)((longlong)puVar3 + 3);
        local_178 = (local_a8 >> (-(char)iVar23 & 0x3fU) &
                    ~(-1L << (*(byte *)((longlong)puVar1 + 3) & 0x3f))) + (ulonglong)*puVar1;
        local_a0[0] = uVar36;
        local_80 = local_178;
        lVar34 = (~(-1L << (*(byte *)((longlong)puVar2 + 3) & 0x3f)) &
                 local_a8 >> (-(char)iVar24 & 0x3fU)) + (ulonglong)*puVar2;
        puVar32 = (undefined8 *)((longlong)puVar30 + (longlong)puVar16);
        local_60 = lVar34;
        lVar37 = (local_a8 >> (-(char)uVar36 & 0x3fU) &
                 ~(-1L << (*(byte *)((longlong)puVar3 + 3) & 0x3f))) + (ulonglong)*puVar3;
        local_70 = lVar37;
        puVar27 = (undefined8 *)((longlong)puVar32 - (longlong)puVar38);
        if ((local_160 + -0x20 < (undefined1 *)((longlong)puVar30 + (longlong)puVar11)) ||
           (puVar26 < (undefined8 *)((longlong)local_d8 + (longlong)puVar16))) {
          puStack_1b8 = puVar16;
          uStack_1b0 = uVar13;
          puStack_1a8 = puVar38;
          puStack_1a0 = (undefined8 *)puVar10;
          local_c0 = puVar16;
          local_b8 = uVar13;
          local_b0 = puVar38;
          puVar11 = (undefined1 *)FUN_00e6aba0(puVar26,&local_d8,puVar8,lVar35);
        }
        else {
          uVar9 = local_d8[1];
          *puVar30 = *local_d8;
          puVar30[1] = uVar9;
          if ((undefined8 *)0x10 < puVar16) {
            uVar9 = local_d8[3];
            puVar30[2] = local_d8[2];
            puVar30[3] = uVar9;
            if (0x10 < (longlong)(puVar16 + -2)) {
              puVar17 = puVar30 + 4;
              puVar28 = local_d8;
              do {
                uVar9 = puVar28[5];
                puVar18 = puVar17 + 4;
                *puVar17 = puVar28[4];
                puVar17[1] = uVar9;
                uVar9 = puVar28[7];
                puVar17[2] = puVar28[6];
                puVar17[3] = uVar9;
                puVar17 = puVar18;
                puVar28 = puVar28 + 4;
              } while (puVar18 < puVar32);
            }
          }
          local_d8 = (undefined8 *)((longlong)local_d8 + (longlong)puVar16);
          if ((undefined8 *)((longlong)puVar32 - (longlong)puVar8) < puVar38) {
            if ((undefined8 *)((longlong)puVar32 - lVar35) < puVar38) {
              return (undefined1 *)0xffffffffffffffec;
            }
            if ((undefined1 *)
                ((longlong)puVar27 + (longlong)(puVar10 + (uVar13 - (longlong)puVar8))) <= puVar10)
            {
              puStack_1a0 = (undefined8 *)0xe8276e;
              FUN_00e86250(puVar10,uVar13);
              goto LAB_00e81b7c;
            }
            lVar21 = (longlong)puVar8 - (longlong)puVar27;
            puStack_1a0 = (undefined8 *)0xe81b11;
            lVar14 = FUN_00e86250(lVar21,lVar21);
            puVar32 = (undefined8 *)(lVar14 + lVar21);
            uVar13 = uVar13 - lVar21;
            puVar27 = puVar8;
          }
          if (puVar38 < (undefined8 *)0x10) {
            if (puVar38 < (undefined8 *)0x8) {
              *(undefined1 *)puVar32 = *(undefined1 *)puVar27;
              *(undefined1 *)((longlong)puVar32 + 1) = *(undefined1 *)((longlong)puVar27 + 1);
              *(undefined1 *)((longlong)puVar32 + 2) = *(undefined1 *)((longlong)puVar27 + 2);
              *(undefined1 *)((longlong)puVar32 + 3) = *(undefined1 *)((longlong)puVar27 + 3);
              uVar25 = *(uint *)(&DAT_00e957e0 + (longlong)puVar38 * 4);
              *(undefined4 *)((longlong)puVar32 + 4) =
                   *(undefined4 *)((ulonglong)uVar25 + (longlong)puVar27);
              puVar27 = (undefined8 *)
                        ((longlong)((ulonglong)uVar25 + (longlong)puVar27) -
                        (longlong)*(int *)(&DAT_00e95800 + (longlong)puVar38 * 4));
            }
            else {
              *puVar32 = *puVar27;
            }
            if (8 < uVar13) {
              if ((longlong)puVar32 - (longlong)puVar27 < 0x10) {
                puVar16 = puVar32 + 1;
                do {
                  puVar27 = puVar27 + 1;
                  puVar28 = puVar16 + 1;
                  *puVar16 = *puVar27;
                  puVar16 = puVar28;
                } while (puVar28 < (undefined8 *)((longlong)puVar32 + uVar13));
              }
              else {
                uVar9 = puVar27[2];
                puVar32[1] = puVar27[1];
                puVar32[2] = uVar9;
                if (0x18 < (longlong)uVar13) {
                  puVar16 = puVar27 + 3;
                  puVar27 = puVar32 + 3;
                  do {
                    uVar9 = puVar16[1];
                    puVar28 = puVar27 + 4;
                    *puVar27 = *puVar16;
                    puVar27[1] = uVar9;
                    uVar9 = puVar16[3];
                    puVar27[2] = puVar16[2];
                    puVar27[3] = uVar9;
                    puVar16 = puVar16 + 4;
                    puVar27 = puVar28;
                  } while (puVar28 < (undefined8 *)((longlong)puVar32 + uVar13));
                }
              }
            }
          }
          else {
            uVar9 = puVar27[1];
            *puVar32 = *puVar27;
            puVar32[1] = uVar9;
            if (0x10 < (longlong)uVar13) {
              puVar16 = puVar27 + 2;
              puVar27 = puVar32 + 2;
              do {
                uVar9 = puVar16[1];
                puVar28 = puVar27 + 4;
                *puVar27 = *puVar16;
                puVar27[1] = uVar9;
                uVar9 = puVar16[3];
                puVar27[2] = puVar16[2];
                puVar27[3] = uVar9;
                puVar16 = puVar16 + 4;
                puVar27 = puVar28;
              } while (puVar28 < (undefined8 *)(uVar13 + (longlong)puVar32));
            }
          }
        }
LAB_00e81b7c:
        if ((undefined1 *)0xffffffffffffff88 < puVar11) {
          return puVar11;
        }
        puVar30 = (undefined8 *)((longlong)puVar30 + (longlong)puVar11);
        local_128 = local_128 + -1;
        if (local_128 != 0) {
          local_a0[0] = uVar36;
          if (uVar36 < 0x41) {
            if (local_98 < local_88) {
              if (local_98 != local_90) {
                uVar25 = uVar36 >> 3;
                puVar22 = (ulonglong *)((longlong)local_98 - (ulonglong)uVar25);
                if (puVar22 < local_90) {
                  uVar25 = (int)local_98 - (int)local_90;
                  puVar22 = (ulonglong *)((longlong)local_98 - (ulonglong)uVar25);
                }
                local_98 = puVar22;
                local_a0[0] = uVar36 + uVar25 * -8;
                local_a8 = *puVar22;
              }
            }
            else {
              local_a0[0] = uVar36 & 7;
              local_98 = (ulonglong *)((longlong)local_98 - (ulonglong)(uVar36 >> 3));
              local_a8 = *local_98;
            }
          }
          goto LAB_00e818e0;
        }
        if (uVar36 < 0x41) {
          if (local_88 <= local_98) {
            return (undefined1 *)0xffffffffffffffec;
          }
          if (local_90 != local_98) {
            return (undefined1 *)0xffffffffffffffec;
          }
          if (uVar36 != 0x40) {
            return (undefined1 *)0xffffffffffffffec;
          }
        }
        *(undefined4 *)(&DAT_00006840 + unaff_RDI) = local_170._0_4_;
        *(int *)(&DAT_0000683c + unaff_RDI) = (int)puVar38;
        *(int *)(&DAT_00006844 + unaff_RDI) = (int)local_50[2];
      }
      uVar13 = (longlong)puVar26 - (longlong)local_d8;
      if ((ulonglong)((longlong)local_160 - (longlong)puVar30) < uVar13) {
        return (undefined1 *)0xffffffffffffffba;
      }
      if (puVar30 != (undefined8 *)0x0) {
        puStack_1a0 = (undefined8 *)0xe825ad;
        FUN_00e862a0(0xffffffffffffffba,uVar13);
        puVar30 = (undefined8 *)((longlong)puVar30 + uVar13);
      }
      goto LAB_00e825bd;
    }
    if (*(int *)(&DAT_000075d0 + unaff_RDI) != 0) {
      puVar10 = (undefined1 *)FUN_00e732f0(puVar10,param_2,lVar37,local_10c);
      return puVar10;
    }
    puVar5 = (undefined *)((longlong)unaff_RSI + param_2);
    local_188 = *(undefined8 **)(&DAT_00007680 + unaff_RDI);
    puVar8 = *(undefined8 **)(&DAT_000074c8 + unaff_RDI);
    local_c0 = *(undefined8 **)(&DAT_00007598 + unaff_RDI);
    uVar13 = *(ulonglong *)(&DAT_000074d0 + unaff_RDI);
    puVar26 = *(undefined8 **)(&DAT_000074d8 + unaff_RDI);
    puVar30 = unaff_RSI;
    if (local_10c == 0) {
LAB_00e82643:
      if ((ulonglong)((longlong)puVar5 - (longlong)puVar30) <
          (ulonglong)((longlong)local_188 - (longlong)local_c0)) {
        return (undefined1 *)0xffffffffffffffba;
      }
      if (puVar30 == (undefined8 *)0x0) {
        *(undefined4 *)(&DAT_00007688 + unaff_RDI) = 0;
        if (puVar5 < &DAT_00010000) {
          return (undefined1 *)0xffffffffffffffba;
        }
LAB_00e8275f:
        puVar30 = (undefined8 *)0x0;
        goto LAB_00e825bd;
      }
      puVar30 = (undefined8 *)((longlong)puVar30 + ((longlong)local_188 - (longlong)local_c0));
      puStack_1a0 = (undefined8 *)0xe82676;
      FUN_00e86250();
      local_c0 = (undefined8 *)(&DAT_0000768c + unaff_RDI);
      *(undefined4 *)(&DAT_00007688 + unaff_RDI) = 0;
      uVar13 = 0x10000;
      if ((ulonglong)((longlong)puVar5 - (longlong)puVar30) < 0x10000) {
        return (undefined1 *)0xffffffffffffffba;
      }
    }
    else {
      *(undefined4 *)(&DAT_0000752c + unaff_RDI) = 1;
      puVar16 = (undefined8 *)(ulonglong)*(uint *)(&DAT_0000683c + unaff_RDI);
      puVar38 = (undefined8 *)(ulonglong)*(uint *)(&DAT_00006840 + unaff_RDI);
      local_50[2] = (undefined8 *)(ulonglong)*(uint *)(&DAT_00006844 + unaff_RDI);
      puStack_1a0 = (undefined8 *)0xe81d22;
      local_50[0] = puVar16;
      local_50[1] = puVar38;
      uVar15 = FUN_00e6a940(puVar11,lVar37);
      if (0xffffffffffffff88 < uVar15) {
        return (undefined1 *)0xffffffffffffffec;
      }
      puStack_1a0 = (undefined8 *)0xe81d3f;
      FUN_00e6bba0();
      puStack_1a0 = (undefined8 *)0xe81d53;
      FUN_00e6bba0();
      puStack_1a0 = (undefined8 *)0xe81d67;
      FUN_00e6bba0();
      puVar1 = (ushort *)(local_78 + local_80 * 8);
      bVar6 = (byte)puVar1[1];
      uVar36 = *(uint *)(puVar1 + 2);
      uVar15 = (ulonglong)uVar36;
      puVar2 = (ushort *)(local_58 + local_60 * 8);
      bVar20 = (byte)puVar2[1];
      puVar3 = (ushort *)(local_68 + local_70 * 8);
      local_160 = (undefined1 *)(ulonglong)*(uint *)(puVar2 + 2);
      bVar7 = (byte)puVar3[1];
      bVar19 = (byte)local_a0[0];
      if (bVar7 < 2) {
        if (bVar7 == 1) {
          local_a0[0] = local_a0[0] + 1;
          lVar37 = (ulonglong)((uint)(uVar36 == 0) + *(uint *)(puVar3 + 2)) -
                   ((longlong)(local_a8 << (bVar19 & 0x3f)) >> 0x3f);
          if (lVar37 == 3) {
            puVar32 = (undefined8 *)
                      ((undefined1 *)((longlong)puVar16 + -1) +
                      ((undefined1 *)((longlong)puVar16 + -1) == (undefined1 *)0x0));
          }
          else {
            puVar32 = (undefined8 *)
                      ((longlong)local_50[lVar37] +
                      (ulonglong)(local_50[lVar37] == (undefined8 *)0x0));
            if (lVar37 == 1) goto LAB_00e81e45;
          }
          local_50[2] = puVar38;
        }
        else {
          puVar32 = local_50[uVar36 == 0];
          puVar16 = *(undefined8 **)(local_a0 + (0xb - (ulonglong)(uVar36 == 0)) * 2);
        }
      }
      else {
        local_50[2] = puVar38;
        local_a0[0] = local_a0[0] + bVar7;
        puVar32 = (undefined8 *)
                  ((ulonglong)*(uint *)(puVar3 + 2) +
                  ((local_a8 << (bVar19 & 0x3f)) >> (-bVar7 & 0x3f)));
      }
LAB_00e81e45:
      local_50[1] = puVar16;
      local_50[0] = puVar32;
      uVar36 = local_a0[0];
      if (bVar20 != 0) {
        uVar36 = local_a0[0] + bVar20;
        local_160 = (undefined1 *)
                    ((longlong)local_160 +
                    ((local_a8 << ((byte)local_a0[0] & 0x3f)) >> (-bVar20 & 0x3f)));
      }
      uVar25 = uVar36;
      if ((0x1e < (byte)(bVar6 + bVar20 + bVar7)) && (uVar36 < 0x41)) {
        if (local_98 < local_88) {
          if (local_98 != local_90) {
            uVar25 = uVar36 >> 3;
            uVar29 = (ulonglong)uVar25;
            if ((ulonglong *)((longlong)local_98 - uVar29) < local_90) {
              uVar25 = (int)local_98 - (int)local_90;
              uVar29 = (ulonglong)uVar25;
            }
            local_98 = (ulonglong *)((longlong)local_98 - uVar29);
            uVar25 = uVar36 + uVar25 * -8;
            local_a8 = *local_98;
          }
        }
        else {
          uVar25 = uVar36 & 7;
          local_98 = (ulonglong *)((longlong)local_98 - (ulonglong)(uVar36 >> 3));
          local_a8 = *local_98;
        }
      }
      if (bVar6 != 0) {
        bVar20 = (byte)uVar25;
        uVar25 = uVar25 + bVar6;
        uVar15 = uVar15 + ((local_a8 << (bVar20 & 0x3f)) >> (-bVar6 & 0x3f));
      }
      iVar23 = *(byte *)((longlong)puVar1 + 3) + uVar25;
      iVar24 = iVar23 + (uint)*(byte *)((longlong)puVar2 + 3);
      local_80 = (~(-1L << (*(byte *)((longlong)puVar1 + 3) & 0x3f)) &
                 local_a8 >> (-(char)iVar23 & 0x3fU)) + (ulonglong)*puVar1;
      local_60 = (~(-1L << (*(byte *)((longlong)puVar2 + 3) & 0x3f)) &
                 local_a8 >> (-(char)iVar24 & 0x3fU)) + (ulonglong)*puVar2;
      local_a0[0] = (uint)*(byte *)((longlong)puVar3 + 3) + iVar24;
      local_70 = (ulonglong)*puVar3 +
                 (local_a8 >> (-(char)local_a0[0] & 0x3fU) &
                 ~(-1L << (*(byte *)((longlong)puVar3 + 3) & 0x3f)));
      puVar16 = (undefined8 *)((longlong)local_c0 + uVar15);
      if (puVar16 <= *(undefined8 **)(&DAT_00007680 + unaff_RDI)) {
        do {
          puVar38 = (undefined8 *)((longlong)puVar30 + uVar15);
          puVar10 = (undefined1 *)(uVar15 + (longlong)local_160);
          puVar4 = (undefined *)((longlong)local_c0 + (uVar15 - 0x20));
          puVar27 = (undefined8 *)((longlong)puVar38 - (longlong)puVar32);
          local_50[0] = puVar32;
          if ((puVar4 < (undefined *)((longlong)puVar30 + (longlong)puVar10)) ||
             (local_188 < puVar16)) {
            puStack_1b8 = puVar32;
            uStack_1b0 = uVar13;
            puStack_1a8 = puVar26;
            puVar10 = (undefined1 *)FUN_00e6aa80(&local_c0,puVar4,local_188,puVar8);
          }
          else {
            uVar9 = local_c0[1];
            *puVar30 = *local_c0;
            puVar30[1] = uVar9;
            if (0x10 < uVar15) {
              uVar9 = local_c0[3];
              puVar30[2] = local_c0[2];
              puVar30[3] = uVar9;
              if (0x10 < (longlong)(uVar15 - 0x10)) {
                puVar28 = puVar30 + 4;
                do {
                  uVar9 = local_c0[5];
                  puVar17 = puVar28 + 4;
                  *puVar28 = local_c0[4];
                  puVar28[1] = uVar9;
                  uVar9 = local_c0[7];
                  puVar28[2] = local_c0[6];
                  puVar28[3] = uVar9;
                  puVar28 = puVar17;
                  local_c0 = local_c0 + 4;
                } while (puVar17 < puVar38);
              }
            }
            local_c0 = puVar16;
            if ((undefined8 *)((longlong)puVar38 - (longlong)puVar8) < puVar32) {
              if ((undefined8 *)((longlong)puVar38 - uVar13) < puVar32) {
                return (undefined1 *)0xffffffffffffffec;
              }
              if ((undefined8 *)
                  ((longlong)puVar27 +
                  (longlong)((longlong)puVar26 + ((longlong)local_160 - (longlong)puVar8))) <=
                  puVar26) {
                puStack_1a0 = (undefined8 *)0xe82a11;
                FUN_00e86250(puVar26,local_160);
                goto LAB_00e820a4;
              }
              lVar35 = (longlong)puVar8 - (longlong)puVar27;
              local_160 = (undefined1 *)((longlong)local_160 - lVar35);
              puStack_1a0 = (undefined8 *)0xe8203f;
              lVar37 = FUN_00e86250(puVar26,lVar35);
              puVar38 = (undefined8 *)(lVar37 + lVar35);
              puVar27 = puVar8;
            }
            if (puVar32 < (undefined8 *)0x10) {
              if (puVar32 < (undefined8 *)0x8) {
                *(undefined1 *)puVar38 = *(undefined1 *)puVar27;
                *(undefined1 *)((longlong)puVar38 + 1) = *(undefined1 *)((longlong)puVar27 + 1);
                *(undefined1 *)((longlong)puVar38 + 2) = *(undefined1 *)((longlong)puVar27 + 2);
                *(undefined1 *)((longlong)puVar38 + 3) = *(undefined1 *)((longlong)puVar27 + 3);
                uVar36 = *(uint *)(&DAT_00e957e0 + (longlong)puVar32 * 4);
                *(undefined4 *)((longlong)puVar38 + 4) =
                     *(undefined4 *)((longlong)puVar27 + (ulonglong)uVar36);
                puVar27 = (undefined8 *)
                          ((longlong)((longlong)puVar27 + (ulonglong)uVar36) -
                          (longlong)*(int *)(&DAT_00e95800 + (longlong)puVar32 * 4));
              }
              else {
                *puVar38 = *puVar27;
              }
              if (8 < local_160) {
                if ((longlong)puVar38 - (longlong)puVar27 < 0x10) {
                  puVar16 = puVar38 + 1;
                  do {
                    puVar27 = puVar27 + 1;
                    puVar32 = puVar16 + 1;
                    *puVar16 = *puVar27;
                    puVar16 = puVar32;
                  } while (puVar32 < (undefined8 *)((longlong)puVar38 + (longlong)local_160));
                }
                else {
                  uVar9 = puVar27[2];
                  puVar38[1] = puVar27[1];
                  puVar38[2] = uVar9;
                  if (0x18 < (longlong)local_160) {
                    puVar16 = puVar27 + 3;
                    puVar32 = puVar38 + 3;
                    do {
                      uVar9 = puVar16[1];
                      puVar27 = puVar32 + 4;
                      *puVar32 = *puVar16;
                      puVar32[1] = uVar9;
                      uVar9 = puVar16[3];
                      puVar32[2] = puVar16[2];
                      puVar32[3] = uVar9;
                      puVar16 = puVar16 + 4;
                      puVar32 = puVar27;
                    } while (puVar27 < (undefined8 *)((longlong)puVar38 + (longlong)local_160));
                  }
                }
              }
            }
            else {
              uVar9 = puVar27[1];
              *puVar38 = *puVar27;
              puVar38[1] = uVar9;
              if (0x10 < (longlong)local_160) {
                puVar16 = puVar27 + 2;
                puVar32 = puVar38 + 2;
                do {
                  uVar9 = puVar16[1];
                  puVar27 = puVar32 + 4;
                  *puVar32 = *puVar16;
                  puVar32[1] = uVar9;
                  uVar9 = puVar16[3];
                  puVar32[2] = puVar16[2];
                  puVar32[3] = uVar9;
                  puVar16 = puVar16 + 4;
                  puVar32 = puVar27;
                } while (puVar27 < (undefined8 *)((longlong)puVar38 + (longlong)local_160));
              }
            }
          }
LAB_00e820a4:
          if ((undefined1 *)0xffffffffffffff88 < puVar10) {
            return puVar10;
          }
          puVar30 = (undefined8 *)((longlong)puVar30 + (longlong)puVar10);
          local_10c = local_10c + -1;
          if (local_10c == 0) goto LAB_00e824c4;
          uVar36 = local_a0[0];
          if (local_a0[0] < 0x41) {
            if (local_98 < local_88) {
              if (local_98 != local_90) {
                uVar36 = local_a0[0] >> 3;
                puVar22 = (ulonglong *)((longlong)local_98 - (ulonglong)uVar36);
                if (puVar22 < local_90) {
                  uVar36 = (int)local_98 - (int)local_90;
                  puVar22 = (ulonglong *)((longlong)local_98 - (ulonglong)uVar36);
                }
                local_98 = puVar22;
                uVar36 = local_a0[0] + uVar36 * -8;
                local_a0[0] = uVar36;
                local_a8 = *puVar22;
              }
            }
            else {
              uVar36 = local_a0[0] & 7;
              uVar25 = local_a0[0] >> 3;
              local_a0[0] = uVar36;
              local_98 = (ulonglong *)((longlong)local_98 - (ulonglong)uVar25);
              local_a8 = *local_98;
            }
          }
          puVar1 = (ushort *)(local_78 + local_80 * 8);
          uVar25 = *(uint *)(puVar1 + 2);
          uVar15 = (ulonglong)uVar25;
          puVar2 = (ushort *)(local_58 + local_60 * 8);
          bVar6 = (byte)puVar2[1];
          local_160 = (undefined1 *)(ulonglong)*(uint *)(puVar2 + 2);
          puVar3 = (ushort *)(local_68 + local_70 * 8);
          bVar20 = (byte)puVar1[1];
          bVar7 = (byte)puVar3[1];
          bVar19 = (byte)uVar36;
          if (bVar7 < 2) {
            if (bVar7 == 1) {
              uVar36 = uVar36 + 1;
              local_a0[0] = uVar36;
              lVar37 = (ulonglong)(*(uint *)(puVar3 + 2) + (uint)(uVar25 == 0)) -
                       ((longlong)(local_a8 << (bVar19 & 0x3f)) >> 0x3f);
              if (lVar37 == 3) {
                puVar32 = (undefined8 *)
                          ((undefined1 *)((longlong)local_50[0] + -1) +
                          ((undefined1 *)((longlong)local_50[0] + -1) == (undefined1 *)0x0));
              }
              else {
                puVar32 = (undefined8 *)
                          ((longlong)local_50[lVar37] +
                          (ulonglong)(local_50[lVar37] == (undefined8 *)0x0));
                if (lVar37 == 1) goto LAB_00e821fa;
              }
              local_50[2] = local_50[1];
            }
            else {
              puVar32 = local_50[uVar25 == 0];
              local_50[0] = *(undefined8 **)(local_a0 + (0xb - (ulonglong)(uVar25 == 0)) * 2);
            }
          }
          else {
            uVar36 = uVar36 + bVar7;
            puVar32 = (undefined8 *)
                      ((ulonglong)*(uint *)(puVar3 + 2) +
                      ((local_a8 << (bVar19 & 0x3f)) >> (-bVar7 & 0x3f)));
            local_50[2] = local_50[1];
          }
LAB_00e821fa:
          local_50[1] = local_50[0];
          local_50[0] = puVar32;
          uVar25 = uVar36;
          if (bVar6 != 0) {
            uVar25 = uVar36 + bVar6;
            local_160 = (undefined1 *)
                        ((longlong)local_160 +
                        ((local_a8 << ((byte)uVar36 & 0x3f)) >> (-bVar6 & 0x3f)));
          }
          if ((0x1e < (byte)(bVar20 + bVar6 + bVar7)) && (uVar25 < 0x41)) {
            if (local_98 < local_88) {
              if (local_98 != local_90) {
                uVar36 = uVar25 >> 3;
                uVar29 = (ulonglong)uVar36;
                if ((ulonglong *)((longlong)local_98 - uVar29) < local_90) {
                  uVar36 = (int)local_98 - (int)local_90;
                  uVar29 = (ulonglong)uVar36;
                }
                local_98 = (ulonglong *)((longlong)local_98 - uVar29);
                local_a8 = *local_98;
                uVar25 = uVar25 + uVar36 * -8;
              }
            }
            else {
              local_98 = (ulonglong *)((longlong)local_98 - (ulonglong)(uVar25 >> 3));
              local_a8 = *local_98;
              uVar25 = uVar25 & 7;
            }
          }
          uVar36 = uVar25;
          if (bVar20 != 0) {
            uVar36 = uVar25 + bVar20;
            uVar15 = uVar15 + ((local_a8 << ((byte)uVar25 & 0x3f)) >> (-bVar20 & 0x3f));
          }
          iVar23 = uVar36 + *(byte *)((longlong)puVar1 + 3);
          iVar24 = iVar23 + (uint)*(byte *)((longlong)puVar2 + 3);
          local_80 = (~(-1L << (*(byte *)((longlong)puVar1 + 3) & 0x3f)) &
                     local_a8 >> (-(char)iVar23 & 0x3fU)) + (ulonglong)*puVar1;
          local_60 = (~(-1L << (*(byte *)((longlong)puVar2 + 3) & 0x3f)) &
                     local_a8 >> (-(char)iVar24 & 0x3fU)) + (ulonglong)*puVar2;
          local_a0[0] = (uint)*(byte *)((longlong)puVar3 + 3) + iVar24;
          local_70 = (local_a8 >> (-(char)local_a0[0] & 0x3fU) &
                     ~(-1L << (*(byte *)((longlong)puVar3 + 3) & 0x3f))) + (ulonglong)*puVar3;
          puVar16 = (undefined8 *)((longlong)local_c0 + uVar15);
        } while (puVar16 <= *(undefined8 **)(&DAT_00007680 + unaff_RDI));
      }
      if (local_10c < 1) {
        return (undefined1 *)0xffffffffffffffec;
      }
      uVar29 = *(longlong *)(&DAT_00007680 + unaff_RDI) - (longlong)local_c0;
      local_50[0] = puVar32;
      if (uVar29 != 0) {
        if ((ulonglong)((longlong)puVar5 - (longlong)puVar30) < uVar29) {
          return (undefined1 *)0xffffffffffffffba;
        }
        uVar15 = uVar15 - uVar29;
        puVar30 = (undefined8 *)((longlong)puVar30 + uVar29);
        puStack_1a0 = (undefined8 *)0xe82337;
        FUN_00e6a4e0(0xffffffffffffffba,uVar29);
      }
      puVar16 = (undefined8 *)((longlong)puVar30 + uVar15);
      puVar10 = (undefined1 *)(uVar15 + (longlong)local_160);
      *(undefined4 *)(&DAT_00007688 + unaff_RDI) = 0;
      local_c0 = (undefined8 *)(&DAT_0000768c + unaff_RDI);
      local_188 = (undefined8 *)(&UNK_0001768c + unaff_RDI);
      puVar38 = (undefined8 *)((longlong)(&DAT_0000768c + unaff_RDI) + uVar15);
      puVar27 = (undefined8 *)((longlong)puVar16 - (longlong)puVar32);
      if ((puVar5 + -0x20 < (undefined *)((longlong)puVar30 + (longlong)puVar10)) ||
         (local_188 < puVar38)) {
        local_f0 = uVar15;
        local_e8 = (ulonglong)local_160;
        local_e0 = puVar32;
        puVar22 = &local_f0;
        ppuVar31 = &puStack_1b8;
        puStack_1a0 = puVar26;
        for (lVar37 = 6; lVar37 != 0; lVar37 = lVar37 + -1) {
          *(int *)ppuVar31 = (int)*puVar22;
          puVar22 = (ulonglong *)((longlong)puVar22 + 4);
          ppuVar31 = (undefined8 **)((longlong)ppuVar31 + 4);
        }
        puVar10 = (undefined1 *)FUN_00e6aba0(local_188,&local_c0,puVar8,uVar13);
      }
      else {
        uVar9 = *(undefined8 *)(&DAT_0000768c + unaff_RDI);
        puVar30[1] = *(undefined8 *)(&DAT_00007694 + unaff_RDI);
        *puVar30 = uVar9;
        if (0x10 < uVar15) {
          uVar9 = *(undefined8 *)(&DAT_000076a4 + unaff_RDI);
          puVar30[2] = *(undefined8 *)(&DAT_0000769c + unaff_RDI);
          puVar30[3] = uVar9;
          if (0x10 < (longlong)(uVar15 - 0x10)) {
            puVar28 = puVar30 + 4;
            puVar17 = (undefined8 *)(&DAT_000076ac + unaff_RDI);
            do {
              uVar9 = puVar17[1];
              puVar18 = puVar28 + 4;
              *puVar28 = *puVar17;
              puVar28[1] = uVar9;
              uVar9 = puVar17[3];
              puVar28[2] = puVar17[2];
              puVar28[3] = uVar9;
              puVar28 = puVar18;
              puVar17 = puVar17 + 4;
            } while (puVar18 < puVar16);
          }
        }
        local_c0 = puVar38;
        if ((undefined8 *)((longlong)puVar16 - (longlong)puVar8) < puVar32) {
          if ((undefined8 *)((longlong)puVar16 - uVar13) < puVar32) {
            return (undefined1 *)0xffffffffffffffec;
          }
          if ((undefined8 *)
              ((longlong)puVar27 +
              (longlong)((longlong)puVar26 + ((longlong)local_160 - (longlong)puVar8))) <= puVar26)
          {
            puStack_1a0 = (undefined8 *)0xe83714;
            FUN_00e86250(puVar10,local_160);
            goto LAB_00e824a1;
          }
          lVar35 = (longlong)puVar8 - (longlong)puVar27;
          puStack_1a0 = (undefined8 *)0xe8242c;
          lVar37 = FUN_00e86250(puVar10,lVar35);
          local_160 = (undefined1 *)((longlong)local_160 - lVar35);
          puVar16 = (undefined8 *)(lVar37 + lVar35);
          puVar27 = puVar8;
        }
        if (puVar32 < (undefined8 *)0x10) {
          if (puVar32 < (undefined8 *)0x8) {
            *(undefined1 *)puVar16 = *(undefined1 *)puVar27;
            *(undefined1 *)((longlong)puVar16 + 1) = *(undefined1 *)((longlong)puVar27 + 1);
            *(undefined1 *)((longlong)puVar16 + 2) = *(undefined1 *)((longlong)puVar27 + 2);
            *(undefined1 *)((longlong)puVar16 + 3) = *(undefined1 *)((longlong)puVar27 + 3);
            uVar36 = *(uint *)(&DAT_00e957e0 + (longlong)puVar32 * 4);
            *(undefined4 *)((longlong)puVar16 + 4) =
                 *(undefined4 *)((longlong)puVar27 + (ulonglong)uVar36);
            puVar27 = (undefined8 *)
                      ((longlong)((longlong)puVar27 + (ulonglong)uVar36) -
                      (longlong)*(int *)(&DAT_00e95800 + (longlong)puVar32 * 4));
          }
          else {
            *puVar16 = *puVar27;
          }
          if (8 < local_160) {
            if ((longlong)puVar16 - (longlong)puVar27 < 0x10) {
              lVar37 = 8;
              do {
                *(undefined8 *)((longlong)puVar16 + lVar37) =
                     *(undefined8 *)((longlong)puVar27 + lVar37);
                lVar37 = lVar37 + 8;
              } while ((undefined8 *)((longlong)puVar16 + lVar37) <
                       (undefined8 *)((longlong)puVar16 + (longlong)local_160));
            }
            else {
              uVar9 = puVar27[2];
              puVar16[1] = puVar27[1];
              puVar16[2] = uVar9;
              if (0x18 < (longlong)local_160) {
                puVar38 = puVar27 + 3;
                puVar32 = puVar16 + 3;
                do {
                  uVar9 = puVar38[1];
                  puVar27 = puVar32 + 4;
                  *puVar32 = *puVar38;
                  puVar32[1] = uVar9;
                  uVar9 = puVar38[3];
                  puVar32[2] = puVar38[2];
                  puVar32[3] = uVar9;
                  puVar38 = puVar38 + 4;
                  puVar32 = puVar27;
                } while (puVar27 < (undefined8 *)((longlong)puVar16 + (longlong)local_160));
              }
            }
          }
        }
        else {
          uVar9 = puVar27[1];
          *puVar16 = *puVar27;
          puVar16[1] = uVar9;
          if (0x10 < (longlong)local_160) {
            puVar38 = puVar27 + 2;
            puVar32 = puVar16 + 2;
            do {
              uVar9 = puVar38[1];
              puVar27 = puVar32 + 4;
              *puVar32 = *puVar38;
              puVar32[1] = uVar9;
              uVar9 = puVar38[3];
              puVar32[2] = puVar38[2];
              puVar32[3] = uVar9;
              puVar38 = puVar38 + 4;
              puVar32 = puVar27;
            } while (puVar27 < (undefined8 *)((longlong)local_160 + (longlong)puVar16));
          }
        }
      }
LAB_00e824a1:
      if ((undefined1 *)0xffffffffffffff88 < puVar10) {
        return puVar10;
      }
      puVar30 = (undefined8 *)((longlong)puVar30 + (longlong)puVar10);
      local_130 = local_10c + -1;
      if (local_130 != 0) {
        if (local_a0[0] < 0x41) {
          if (local_98 < local_88) {
            if (local_98 != local_90) {
              uVar36 = local_a0[0] >> 3;
              uVar15 = (ulonglong)uVar36;
              if ((ulonglong *)((longlong)local_98 - uVar15) < local_90) {
                uVar36 = (int)local_98 - (int)local_90;
                uVar15 = (ulonglong)uVar36;
              }
              local_98 = (ulonglong *)((longlong)local_98 - uVar15);
              local_a0[0] = local_a0[0] + uVar36 * -8;
              local_a8 = *local_98;
            }
          }
          else {
            uVar36 = local_a0[0] >> 3;
            local_a0[0] = local_a0[0] & 7;
            local_98 = (ulonglong *)((longlong)local_98 - (ulonglong)uVar36);
            local_a8 = *local_98;
          }
        }
        local_168 = local_80;
        lVar37 = local_70;
        lVar35 = local_60;
LAB_00e82f6f:
        puVar1 = (ushort *)(local_78 + local_168 * 8);
        bVar6 = (byte)puVar1[1];
        puVar2 = (ushort *)(local_58 + lVar35 * 8);
        bVar20 = (byte)puVar2[1];
        uVar15 = (ulonglong)*(uint *)(puVar2 + 2);
        puVar3 = (ushort *)(local_68 + lVar37 * 8);
        uVar36 = *(uint *)(puVar1 + 2);
        puVar16 = (undefined8 *)(ulonglong)uVar36;
        bVar7 = (byte)puVar3[1];
        bVar19 = (byte)local_a0[0];
        if (bVar7 < 2) {
          if (bVar7 == 1) {
            local_a0[0] = local_a0[0] + 1;
            lVar37 = (ulonglong)(*(uint *)(puVar3 + 2) + (uint)(uVar36 == 0)) -
                     ((longlong)(local_a8 << (bVar19 & 0x3f)) >> 0x3f);
            if (lVar37 == 3) {
              puVar38 = (undefined8 *)
                        ((undefined1 *)((longlong)local_50[0] + -1) +
                        ((undefined1 *)((longlong)local_50[0] + -1) == (undefined1 *)0x0));
            }
            else {
              puVar38 = (undefined8 *)
                        ((longlong)local_50[lVar37] +
                        (ulonglong)(local_50[lVar37] == (undefined8 *)0x0));
              if (lVar37 == 1) goto LAB_00e8301f;
            }
            local_50[2] = local_50[1];
          }
          else {
            puVar38 = local_50[uVar36 == 0];
            local_50[0] = *(undefined8 **)(local_a0 + (0xb - (ulonglong)(uVar36 == 0)) * 2);
          }
        }
        else {
          local_a0[0] = local_a0[0] + bVar7;
          local_50[2] = local_50[1];
          puVar38 = (undefined8 *)
                    (((local_a8 << (bVar19 & 0x3f)) >> (-bVar7 & 0x3f)) +
                    (ulonglong)*(uint *)(puVar3 + 2));
        }
LAB_00e8301f:
        local_50[1] = local_50[0];
        local_50[0] = puVar38;
        uVar36 = local_a0[0];
        if (bVar20 != 0) {
          uVar36 = local_a0[0] + bVar20;
          uVar15 = uVar15 + ((local_a8 << ((byte)local_a0[0] & 0x3f)) >> (-bVar20 & 0x3f));
        }
        uVar25 = uVar36;
        if ((0x1e < (byte)(bVar6 + bVar20 + bVar7)) && (uVar36 < 0x41)) {
          if (local_98 < local_88) {
            if (local_98 != local_90) {
              uVar25 = uVar36 >> 3;
              uVar29 = (ulonglong)uVar25;
              if ((ulonglong *)((longlong)local_98 - uVar29) < local_90) {
                uVar25 = (int)local_98 - (int)local_90;
                uVar29 = (ulonglong)uVar25;
              }
              local_98 = (ulonglong *)((longlong)local_98 - uVar29);
              uVar25 = uVar36 + uVar25 * -8;
              local_a8 = *local_98;
            }
          }
          else {
            uVar25 = uVar36 & 7;
            local_98 = (ulonglong *)((longlong)local_98 - (ulonglong)(uVar36 >> 3));
            local_a8 = *local_98;
          }
        }
        uVar36 = uVar25;
        if (bVar6 != 0) {
          uVar36 = uVar25 + bVar6;
          puVar16 = (undefined8 *)
                    ((longlong)puVar16 + ((local_a8 << ((byte)uVar25 & 0x3f)) >> (-bVar6 & 0x3f)));
        }
        iVar23 = uVar36 + *(byte *)((longlong)puVar1 + 3);
        iVar24 = iVar23 + (uint)*(byte *)((longlong)puVar2 + 3);
        puVar32 = (undefined8 *)((longlong)puVar30 + (longlong)puVar16);
        local_168 = (local_a8 >> (-(char)iVar23 & 0x3fU) &
                    ~(-1L << (*(byte *)((longlong)puVar1 + 3) & 0x3f))) + (ulonglong)*puVar1;
        uVar36 = iVar24 + (uint)*(byte *)((longlong)puVar3 + 3);
        local_80 = local_168;
        local_a0[0] = uVar36;
        lVar35 = (local_a8 >> (-(char)iVar24 & 0x3fU) &
                 ~(-1L << (*(byte *)((longlong)puVar2 + 3) & 0x3f))) + (ulonglong)*puVar2;
        puVar10 = (undefined1 *)((longlong)puVar16 + uVar15);
        local_60 = lVar35;
        lVar37 = (local_a8 >> (-(char)uVar36 & 0x3fU) &
                 ~(-1L << (*(byte *)((longlong)puVar3 + 3) & 0x3f))) + (ulonglong)*puVar3;
        local_70 = lVar37;
        puVar27 = (undefined8 *)((longlong)puVar32 - (longlong)puVar38);
        if ((puVar5 + -0x20 < (undefined *)((longlong)puVar30 + (longlong)puVar10)) ||
           (local_188 < (undefined8 *)((longlong)local_c0 + (longlong)puVar16))) {
          local_d8 = puVar16;
          local_d0 = uVar15;
          local_c8 = puVar38;
          ppuVar31 = &local_d8;
          ppuVar33 = &puStack_1b8;
          puStack_1a0 = puVar26;
          for (lVar34 = 6; lVar34 != 0; lVar34 = lVar34 + -1) {
            *(undefined4 *)ppuVar33 = *(undefined4 *)ppuVar31;
            ppuVar31 = (undefined8 **)((longlong)ppuVar31 + 4);
            ppuVar33 = (undefined8 **)((longlong)ppuVar33 + 4);
          }
          puVar10 = (undefined1 *)FUN_00e6aba0(local_188,&local_c0,puVar8,uVar13);
        }
        else {
          uVar9 = local_c0[1];
          *puVar30 = *local_c0;
          puVar30[1] = uVar9;
          if ((undefined8 *)0x10 < puVar16) {
            uVar9 = local_c0[3];
            puVar30[2] = local_c0[2];
            puVar30[3] = uVar9;
            if (0x10 < (longlong)(puVar16 + -2)) {
              puVar17 = puVar30 + 4;
              puVar28 = local_c0;
              do {
                uVar9 = puVar28[5];
                puVar18 = puVar17 + 4;
                *puVar17 = puVar28[4];
                puVar17[1] = uVar9;
                uVar9 = puVar28[7];
                puVar17[2] = puVar28[6];
                puVar17[3] = uVar9;
                puVar17 = puVar18;
                puVar28 = puVar28 + 4;
              } while (puVar18 < puVar32);
            }
          }
          local_c0 = (undefined8 *)((longlong)local_c0 + (longlong)puVar16);
          if ((undefined8 *)((longlong)puVar32 - (longlong)puVar8) < puVar38) {
            if ((undefined8 *)((longlong)puVar32 - uVar13) < puVar38) {
              return (undefined1 *)0xffffffffffffffec;
            }
            if ((undefined8 *)
                ((longlong)puVar27 + (longlong)((longlong)puVar26 + (uVar15 - (longlong)puVar8))) <=
                puVar26) {
              puStack_1a0 = (undefined8 *)0xe83336;
              FUN_00e86250(puVar10,uVar15);
              goto LAB_00e83221;
            }
            lVar14 = (longlong)puVar8 - (longlong)puVar27;
            puStack_1a0 = (undefined8 *)0xe831a6;
            lVar34 = FUN_00e86250(puVar10,lVar14);
            puVar32 = (undefined8 *)(lVar34 + lVar14);
            uVar15 = uVar15 - lVar14;
            puVar27 = puVar8;
          }
          if (puVar38 < (undefined8 *)0x10) {
            if (puVar38 < (undefined8 *)0x8) {
              *(undefined1 *)puVar32 = *(undefined1 *)puVar27;
              *(undefined1 *)((longlong)puVar32 + 1) = *(undefined1 *)((longlong)puVar27 + 1);
              *(undefined1 *)((longlong)puVar32 + 2) = *(undefined1 *)((longlong)puVar27 + 2);
              *(undefined1 *)((longlong)puVar32 + 3) = *(undefined1 *)((longlong)puVar27 + 3);
              uVar25 = *(uint *)(&DAT_00e957e0 + (longlong)puVar38 * 4);
              *(undefined4 *)((longlong)puVar32 + 4) =
                   *(undefined4 *)((ulonglong)uVar25 + (longlong)puVar27);
              puVar27 = (undefined8 *)
                        ((longlong)((ulonglong)uVar25 + (longlong)puVar27) -
                        (longlong)*(int *)(&DAT_00e95800 + (longlong)puVar38 * 4));
            }
            else {
              *puVar32 = *puVar27;
            }
            if (8 < uVar15) {
              if ((longlong)puVar32 - (longlong)puVar27 < 0x10) {
                puVar16 = puVar32 + 1;
                do {
                  puVar27 = puVar27 + 1;
                  puVar38 = puVar16 + 1;
                  *puVar16 = *puVar27;
                  puVar16 = puVar38;
                } while (puVar38 < (undefined8 *)((longlong)puVar32 + uVar15));
              }
              else {
                uVar9 = puVar27[2];
                puVar32[1] = puVar27[1];
                puVar32[2] = uVar9;
                if (0x18 < (longlong)uVar15) {
                  puVar16 = puVar32 + 3;
                  puVar38 = puVar27 + 3;
                  do {
                    uVar9 = puVar38[1];
                    puVar27 = puVar16 + 4;
                    *puVar16 = *puVar38;
                    puVar16[1] = uVar9;
                    uVar9 = puVar38[3];
                    puVar16[2] = puVar38[2];
                    puVar16[3] = uVar9;
                    puVar16 = puVar27;
                    puVar38 = puVar38 + 4;
                  } while (puVar27 < (undefined8 *)((longlong)puVar32 + uVar15));
                }
              }
            }
          }
          else {
            uVar9 = puVar27[1];
            *puVar32 = *puVar27;
            puVar32[1] = uVar9;
            if (0x10 < (longlong)uVar15) {
              puVar16 = puVar27 + 2;
              puVar38 = puVar32 + 2;
              do {
                uVar9 = puVar16[1];
                puVar27 = puVar38 + 4;
                *puVar38 = *puVar16;
                puVar38[1] = uVar9;
                uVar9 = puVar16[3];
                puVar38[2] = puVar16[2];
                puVar38[3] = uVar9;
                puVar16 = puVar16 + 4;
                puVar38 = puVar27;
              } while (puVar27 < (undefined8 *)(uVar15 + (longlong)puVar32));
            }
          }
        }
LAB_00e83221:
        if ((undefined1 *)0xffffffffffffff88 < puVar10) {
          return puVar10;
        }
        puVar30 = (undefined8 *)((longlong)puVar30 + (longlong)puVar10);
        local_130 = local_130 + -1;
        if (local_130 != 0) {
          local_a0[0] = uVar36;
          if (uVar36 < 0x41) {
            if (local_98 < local_88) {
              if (local_98 != local_90) {
                uVar25 = uVar36 >> 3;
                puVar22 = (ulonglong *)((longlong)local_98 - (ulonglong)uVar25);
                if (puVar22 < local_90) {
                  uVar25 = (int)local_98 - (int)local_90;
                  puVar22 = (ulonglong *)((longlong)local_98 - (ulonglong)uVar25);
                }
                local_98 = puVar22;
                local_a0[0] = uVar36 + uVar25 * -8;
                local_a8 = *puVar22;
              }
            }
            else {
              local_a0[0] = uVar36 & 7;
              local_98 = (ulonglong *)((longlong)local_98 - (ulonglong)(uVar36 >> 3));
              local_a8 = *local_98;
            }
          }
          goto LAB_00e82f6f;
        }
      }
LAB_00e824c4:
      if ((local_a0[0] < 0x41) &&
         (((local_88 <= local_98 || (local_90 != local_98)) || (local_a0[0] != 0x40)))) {
        return (undefined1 *)0xffffffffffffffec;
      }
      *(int *)(&DAT_0000683c + unaff_RDI) = (int)local_50[0];
      *(int *)(&DAT_00006840 + unaff_RDI) = (int)local_50[1];
      *(int *)(&DAT_00006844 + unaff_RDI) = (int)local_50[2];
      uVar13 = (longlong)local_188 - (longlong)local_c0;
      if (*(int *)(&DAT_00007688 + unaff_RDI) == 2) goto LAB_00e82643;
      if ((ulonglong)((longlong)puVar5 - (longlong)puVar30) < uVar13) {
        return (undefined1 *)0xffffffffffffffba;
      }
      if (puVar30 == (undefined8 *)0x0) goto LAB_00e8275f;
    }
    puStack_1a0 = (undefined8 *)0xe826bb;
    FUN_00e862a0();
    puVar30 = (undefined8 *)((longlong)puVar30 + uVar13);
LAB_00e825bd:
    return (undefined1 *)((longlong)puVar30 - (longlong)unaff_RSI);
  }
  *(undefined4 *)(&DAT_000075ec + unaff_RDI) = 0;
LAB_00e816be:
  if (*(int *)(&DAT_000075d0 + unaff_RDI) != 0) {
    puVar10 = (undefined1 *)FUN_00e6d8e0(puVar10,param_2,lVar37,local_10c);
    return puVar10;
  }
  puVar10 = (undefined1 *)FUN_00e6f8e0();
  return puVar10;
}



ulonglong FUN_00e83970(uint *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong local_res10;
  uint local_6c;
  
  local_6c = 0;
  iVar8 = *(int *)(&DAT_00007588 + unaff_RDI);
  uVar7 = unaff_RSI;
LAB_00e839d8:
  for (; (ulonglong)(-(uint)(iVar8 == 0) & 4) + 1 <= param_3; param_3 = param_3 - uVar5) {
    if ((*param_1 & 0xfffffff0) != 0x184d2a50) {
      if (local_res10 == 0) {
        uVar5 = FUN_00e7fc40();
        if (0xffffffffffffff88 < uVar5) {
          return uVar5;
        }
        uVar5 = *(ulonglong *)(&DAT_000074c0 + unaff_RDI);
        iVar8 = *(int *)(&DAT_00007588 + unaff_RDI);
        if (uVar7 == uVar5) goto LAB_00e83cf9;
LAB_00e83a3c:
        uVar11 = uVar7;
        if (param_2 != 0) {
          *(ulonglong *)(&DAT_000074d8 + unaff_RDI) = uVar5;
          lVar2 = *(longlong *)(&DAT_000074c8 + unaff_RDI);
          *(ulonglong *)(&DAT_000074c8 + unaff_RDI) = uVar7;
          *(ulonglong *)(&DAT_000074d0 + unaff_RDI) = uVar7 - (uVar5 - lVar2);
          *(ulonglong *)(&DAT_000074c0 + unaff_RDI) = uVar7;
LAB_00e83a6e:
          uVar11 = uVar7 + param_2;
        }
      }
      else {
        uVar5 = FUN_00e7fde0();
        if (0xffffffffffffff88 < uVar5) {
          return uVar5;
        }
        uVar5 = *(ulonglong *)(&DAT_000074c0 + unaff_RDI);
        if (uVar7 != uVar5) goto LAB_00e83a3c;
LAB_00e83cf9:
        uVar11 = uVar5;
        if (param_2 != 0) goto LAB_00e83a6e;
      }
      if (iVar8 == 0) {
        if (param_3 < 9) goto LAB_00e83c50;
      }
      else if (param_3 < 5) goto LAB_00e83c50;
      uVar6 = FUN_00e6a220();
      uVar5 = uVar6;
      if (0xffffffffffffff88 < uVar6) goto LAB_00e83d10;
      if (uVar6 + 3 <= param_3) {
        uVar5 = FUN_00e7f010();
        if (0xffffffffffffff88 < uVar5) {
          iVar8 = -(int)uVar5;
          goto LAB_00e83d18;
        }
        param_3 = param_3 - uVar6;
        param_1 = (uint *)((longlong)param_1 + uVar6);
        uVar6 = uVar7;
        if (2 < param_3) {
          do {
            uVar3 = (uint)*(byte *)((longlong)param_1 + 2) * 0x10000 + (uint)(ushort)*param_1;
            uVar4 = uVar3 >> 1 & 3;
            if (uVar4 == 1) {
              uVar9 = 1;
            }
            else {
              if (uVar4 == 3) {
                return 0xffffffffffffffec;
              }
              uVar9 = (ulonglong)(uVar3 >> 3);
            }
            uVar1 = (longlong)param_1 + 3;
            if (param_3 - 3 < uVar9) break;
            if ((uVar1 < uVar6) || (uVar11 <= uVar1)) {
              uVar10 = uVar11;
              uVar5 = uVar11;
              if (uVar4 == 1) goto LAB_00e83d4c;
LAB_00e83b5c:
              if (uVar4 == 2) {
                if (0x1ffff < uVar9) break;
                uVar5 = FUN_00e81560(uVar1,uVar5 - uVar6,uVar9,1);
                if (uVar5 < 0xffffffffffffff89) goto LAB_00e83c1c;
                iVar8 = -(int)uVar5;
                goto LAB_00e83d18;
              }
              if (uVar11 - uVar6 < uVar9) {
                return 0xffffffffffffffba;
              }
              if (uVar6 != 0) {
                FUN_00e86250(param_1,uVar9);
                iVar8 = *(int *)(&DAT_00007590 + unaff_RDI);
                uVar5 = uVar9;
                goto joined_r0x00e83ba2;
              }
              if (uVar9 != 0) {
                return 0xffffffffffffffb6;
              }
LAB_00e83dbc:
              if (*(int *)(&DAT_00007590 + unaff_RDI) != 0) {
                uVar6 = 0;
                uVar5 = 0;
                goto LAB_00e83bb0;
              }
            }
            else {
              uVar10 = uVar1;
              uVar5 = uVar1;
              if (uVar4 != 1) goto LAB_00e83b5c;
LAB_00e83d4c:
              uVar5 = (ulonglong)(uVar3 >> 3);
              if (uVar10 - uVar6 < uVar5) {
                return 0xffffffffffffffba;
              }
              if (uVar6 == 0) {
                if (uVar3 >> 3 != 0) {
                  return 0xffffffffffffffb6;
                }
                goto LAB_00e83dbc;
              }
              FUN_00e86200();
LAB_00e83c1c:
              iVar8 = *(int *)(&DAT_00007590 + unaff_RDI);
joined_r0x00e83ba2:
              uVar6 = uVar6 + uVar5;
              if (iVar8 != 0) {
LAB_00e83bb0:
                FUN_00e7beb0(uVar6,uVar5);
              }
            }
            param_1 = (uint *)(uVar1 + uVar9);
            param_3 = (param_3 - 3) - uVar9;
            if ((uVar3 & 1) != 0) goto LAB_00e83e38;
            if (param_3 < 3) break;
          } while( true );
        }
      }
      goto LAB_00e83c50;
    }
    if (param_3 < 8) goto LAB_00e83c50;
    if (0xfffffff7 < param_1[1]) {
      return 0xfffffffffffffff2;
    }
    uVar5 = (ulonglong)param_1[1] + 8;
    if (param_3 < uVar5) goto LAB_00e83c50;
    param_1 = (uint *)((longlong)param_1 + uVar5);
  }
  if (param_3 == 0) {
    uVar7 = uVar7 - unaff_RSI;
  }
  else {
LAB_00e83c50:
    uVar7 = 0xffffffffffffffb8;
  }
  return uVar7;
LAB_00e83e38:
  if ((*(longlong *)(&DAT_000074e8 + unaff_RDI) != -1) &&
     (*(longlong *)(&DAT_000074e8 + unaff_RDI) != uVar6 - uVar7)) {
    return 0xffffffffffffffec;
  }
  if (*(int *)(&DAT_00007508 + unaff_RDI) != 0) {
    if ((param_3 < 4) ||
       ((*(int *)(&DAT_0000758c + unaff_RDI) == 0 && (uVar4 = FUN_00e7c0a0(), *param_1 != uVar4))))
    {
      return 0xffffffffffffffea;
    }
    param_1 = param_1 + 1;
    param_3 = param_3 - 4;
  }
  uVar5 = uVar6 - uVar7;
  if (0xffffffffffffff88 < uVar5) {
LAB_00e83d10:
    iVar8 = -(int)uVar5;
LAB_00e83d18:
    if (iVar8 != 10) {
      return uVar5;
    }
    if (local_6c != 1) {
      return 0xfffffffffffffff6;
    }
    goto LAB_00e83c50;
  }
  iVar8 = *(int *)(&DAT_00007588 + unaff_RDI);
  param_2 = param_2 - uVar5;
  uVar7 = uVar6;
  local_6c = uVar3 & 1;
  goto LAB_00e839d8;
}



void FUN_00e83f30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  
  if (*(int *)(&DAT_000075f0 + unaff_RDI) != -1) {
    if (*(int *)(&DAT_000075f0 + unaff_RDI) == 1) {
      *(undefined4 *)(&DAT_000075f0 + unaff_RDI) = 0;
    }
    else {
      FUN_00e7e600();
      *(undefined8 *)(&DAT_000075d8 + unaff_RDI) = 0;
      *(undefined8 *)(&DAT_000075e0 + unaff_RDI) = 0;
      *(undefined4 *)(&DAT_000075f0 + unaff_RDI) = 0;
    }
  }
  FUN_00e83970(param_1,param_2,param_3,0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00e854c0(void)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  char cVar5;
  char *pcVar6;
  byte bVar7;
  uint uVar8;
  char *unaff_RDI;
  
  if (_DAT_00ea0258 != 0) {
    cVar5 = *unaff_RDI;
    pcVar6 = unaff_RDI;
    while (cVar5 != '\0') {
      if (cVar5 == '\n') {
        FUN_00e6a630();
      }
      pcVar6 = pcVar6 + 1;
      FUN_00e6a630();
      cVar5 = *pcVar6;
    }
  }
  if ((DAT_00ea0254 == 0) || (DAT_00ea0250 == 0)) {
    return;
  }
  cVar5 = *unaff_RDI;
  pcVar6 = unaff_RDI + 1;
  bVar3 = *DAT_00ea6038;
  uVar4 = (uint)bVar3;
  bVar7 = DAT_00ea6038[1];
  uVar8 = (uint)bVar7;
  if (cVar5 != '\0') {
LAB_00e8555f:
    do {
      iVar1 = DAT_00ea0250;
      if (cVar5 == '\n') {
LAB_00e85586:
        if (DAT_00ea0254 <= (int)(uVar8 + 1)) {
          FUN_00e6acd0();
          cVar5 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          uVar4 = 0;
          if (cVar5 == '\0') break;
          goto LAB_00e8555f;
        }
        uVar4 = 0;
        uVar8 = uVar8 + 1;
      }
      else {
        iVar2 = DAT_00ea0250 * uVar8 + uVar4;
        uVar4 = uVar4 + 1;
        *(char *)(DAT_00ed7048 + iVar2 * 2) = cVar5;
        if (iVar1 <= (int)uVar4) goto LAB_00e85586;
      }
      cVar5 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar5 != '\0');
    bVar3 = (byte)uVar4;
    bVar7 = (byte)uVar8;
  }
  *DAT_00ea6038 = bVar3;
  DAT_00ea6038[1] = bVar7;
  (*DAT_00ea6028)();
  (*DAT_00ea6028)();
  (*DAT_00ea6028)();
                    // WARNING: Could not recover jumptable at 0x00e85621. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_00ea6028)();
  return;
}



// WARNING: Removing unreachable block (ram,0x00e8571b)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_00e856c0(undefined8 param_1,code *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int *piVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  int *piVar9;
  short local_40;
  
  if (DAT_00ea6010 == (undefined *)0x0) {
    DAT_00ea6010 = &DAT_00ea7040;
    DAT_00ea6008 = &DAT_00ed7040;
  }
  lVar4 = FUN_00e7b4f0(param_1,param_2,&DAT_00e64ac6);
  if (lVar4 == 0) {
    (*param_2)();
  }
  else {
    lVar4 = FUN_00e7ea40();
    if (lVar4 == 0) {
      (*param_2)();
      _DAT_00ed7050 = _DAT_00ed7050 + -1;
      if (_DAT_00ed7050 != 0) {
        return -1;
      }
      DAT_00ed7058 = DAT_00ea6010;
      return -1;
    }
    uVar5 = FUN_00e7f160();
    iVar3 = FUN_00e6a5c0();
    if (iVar3 == 0) {
      FUN_00e83f30(&DAT_000052cc,0x3fa2690,uVar5);
      iVar3 = FUN_00e6a5c0();
      if (iVar3 == 0) {
        _DAT_00ed7050 = _DAT_00ed7050 + -1;
        if (_DAT_00ed7050 == 0) {
          DAT_00ed7058 = DAT_00ea6010;
        }
        goto LAB_00e85785;
      }
    }
    _DAT_00ed7050 = _DAT_00ed7050 + -1;
    if (_DAT_00ed7050 == 0) {
      DAT_00ed7058 = DAT_00ea6010;
    }
    if (-1 < iVar3) {
LAB_00e85785:
      lVar4 = unaff_RDI[3];
      uVar2 = unaff_RDI[7];
      if ((int)*unaff_RDI != 0x464c457f) {
                    // WARNING: Subroutine does not return
        FUN_00e865c0();
      }
      local_40 = (short)uVar2;
      piVar6 = (int *)FUN_00e7b4f0();
      if (piVar6 == (int *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_00e865c0();
      }
      FUN_00e862a0();
      if (local_40 != 0) {
        piVar9 = piVar6 + (uVar2 & 0xffff) * 0xe;
        do {
          while (*piVar6 != 1) {
            piVar6 = piVar6 + 0xe;
            if (piVar9 == piVar6) goto LAB_00e85869;
          }
          if ((piVar6[0xc] & 0x1fffffU) != 0) {
                    // WARNING: Subroutine does not return
            FUN_00e865c0();
          }
          piVar6 = piVar6 + 0xe;
          FUN_00e86250();
        } while (piVar9 != piVar6);
      }
LAB_00e85869:
      _DAT_00ed7050 = _DAT_00ed7050 + -1;
      if (_DAT_00ed7050 == 0) {
        DAT_00ed7058 = DAT_00ea6010;
      }
      lVar8 = unaff_RSI + -0x1000000;
      if (lVar8 != 0) {
        piVar6 = (int *)((longlong)unaff_RDI + 0x3fa268c);
        plVar1 = unaff_RDI + 0x5f2800;
        iVar3 = *piVar6;
        while( true ) {
          if (iVar3 == 0) {
            iVar3 = piVar6[-1];
            while( true ) {
              if (iVar3 == 0) {
                iVar3 = piVar6[-2];
                piVar6 = piVar6 + -2;
                while( true ) {
                  if (iVar3 == 0) {
                    return lVar4 + -0x1000000;
                  }
                  plVar7 = (longlong *)((longlong)unaff_RDI + (longlong)iVar3 + 0x7f000000);
                  if ((plVar7 < unaff_RDI) || (plVar1 < plVar7)) break;
                  piVar6 = piVar6 + -1;
                  *plVar7 = *plVar7 + lVar8;
                  iVar3 = *piVar6;
                }
                    // WARNING: Subroutine does not return
                FUN_00e865c0();
              }
              plVar7 = (longlong *)((longlong)unaff_RDI + (longlong)iVar3 + 0x7f000000);
              if ((plVar7 < unaff_RDI) || (plVar1 < plVar7)) break;
              *(int *)plVar7 = (int)*plVar7 - (int)lVar8;
              iVar3 = piVar6[-2];
              piVar6 = piVar6 + -1;
            }
                    // WARNING: Subroutine does not return
            FUN_00e865c0();
          }
          plVar7 = (longlong *)((longlong)unaff_RDI + (longlong)iVar3 + 0x7f000000);
          if ((plVar7 < unaff_RDI) || (plVar1 < plVar7)) break;
          piVar6 = piVar6 + -1;
          *(int *)plVar7 = (int)*plVar7 + (int)lVar8;
          iVar3 = *piVar6;
        }
                    // WARNING: Subroutine does not return
        FUN_00e865c0();
      }
      return lVar4 + -0x1000000;
    }
  }
  return -1;
}



bool FUN_00e85d40(undefined8 param_1,longlong param_2)

{
  char *unaff_RSI;
  char *unaff_RDI;
  undefined1 in_ZF;
  
  do {
    if (param_2 == 0) break;
    param_2 = param_2 + -1;
    in_ZF = *unaff_RSI == *unaff_RDI;
    unaff_RSI = unaff_RSI + 1;
    unaff_RDI = unaff_RDI + 1;
  } while ((bool)in_ZF);
  return !(bool)in_ZF;
}



int FUN_00e85d60(void)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  longlong lVar4;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  lVar4 = 0;
  do {
    pbVar1 = (byte *)(unaff_RDI + lVar4);
    pbVar2 = (byte *)(unaff_RSI + lVar4);
    if (*pbVar1 == 0 && *pbVar2 == 0) {
      return 0;
    }
    lVar4 = lVar4 + 1;
    iVar3 = (uint)*pbVar1 - (uint)*pbVar2;
  } while (iVar3 == 0);
  return iVar3;
}



uint FUN_00e85d90(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      bVar1 = *(byte *)(unaff_RDI + lVar2);
      if (bVar1 != *(byte *)(unaff_RSI + lVar2)) {
        return -(uint)(bVar1 < *(byte *)(unaff_RSI + lVar2)) | 1;
      }
    } while ((bVar1 != 0) && (lVar2 = lVar2 + 1, lVar2 != param_2));
  }
  return 0;
}



longlong FUN_00e85dd0(void)

{
  char *pcVar1;
  longlong unaff_RSI;
  char *unaff_RDI;
  
  if ((*unaff_RDI == '\0') || (pcVar1 = unaff_RDI, unaff_RSI == 0)) {
    return 0;
  }
  do {
    pcVar1 = pcVar1 + 1;
    if (unaff_RDI + (unaff_RSI - (longlong)pcVar1) == (char *)0x0) break;
  } while (*pcVar1 != '\0');
  return (longlong)pcVar1 - (longlong)unaff_RDI;
}



longlong FUN_00e85e40(undefined8 param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 *unaff_RSI;
  byte *unaff_RDI;
  byte *pbVar5;
  
  pbVar5 = unaff_RDI;
  if (param_2 == 0) {
    param_2 = 10;
    if (*unaff_RDI != 0x30) goto LAB_00e85e5f;
    bVar2 = unaff_RDI[1];
    param_2 = 8;
    if ((((bVar2 | 0x20) != 0x78) || (0x36 < (byte)(unaff_RDI[2] - 0x30))) ||
       ((0x7e0000007e03ffU >> ((ulonglong)(unaff_RDI[2] - 0x30) & 0x3f) & 1) == 0))
    goto LAB_00e85e5f;
  }
  else {
    if ((param_2 != 0x10) || (*unaff_RDI != 0x30)) goto LAB_00e85e5f;
    bVar2 = unaff_RDI[1];
  }
  param_2 = 0x10;
  pbVar5 = unaff_RDI + 2;
  if ((bVar2 | 0x20) != 0x78) {
    pbVar5 = unaff_RDI;
  }
LAB_00e85e5f:
  lVar3 = 0;
  while( true ) {
    bVar2 = *pbVar5;
    uVar4 = (int)(char)bVar2 - 0x30;
    uVar1 = (int)(char)bVar2 - 0x30;
    if ((0x36 < (byte)uVar1) || ((0x7e0000007e03ffU >> ((ulonglong)uVar1 & 0x3f) & 1) == 0)) break;
    if (9 < uVar4) {
      uVar4 = (uint)(char)((bVar2 | 0x20) + 0xa9);
    }
    if (param_2 <= uVar4) break;
    pbVar5 = pbVar5 + 1;
    lVar3 = lVar3 * (ulonglong)param_2 + (ulonglong)uVar4;
  }
  if (unaff_RSI != (undefined8 *)0x0) {
    *unaff_RSI = pbVar5;
  }
  return lVar3;
}



longlong FUN_00e85f40(void)

{
  char *pcVar1;
  char *unaff_RDI;
  
  pcVar1 = unaff_RDI;
  if (*unaff_RDI == '\0') {
    return 0;
  }
  do {
    pcVar1 = pcVar1 + 1;
  } while (*pcVar1 != '\0');
  return (longlong)pcVar1 - (longlong)unaff_RDI;
}



char * FUN_00e85f70(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char *pcVar3;
  ulonglong uVar4;
  char *unaff_RSI;
  char *unaff_RDI;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  
  pcVar3 = unaff_RSI;
  if (*unaff_RSI == '\0') {
    return unaff_RDI;
  }
  do {
    pcVar3 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  uVar4 = (longlong)pcVar3 - (longlong)unaff_RSI;
  if (uVar4 != 0) {
    pcVar3 = unaff_RDI;
    if (*unaff_RDI != '\0') {
      do {
        pcVar3 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      uVar1 = (longlong)pcVar3 - (longlong)unaff_RDI;
      bVar7 = uVar1 == uVar4;
      uVar2 = uVar4;
      pcVar3 = unaff_RSI;
      pcVar5 = unaff_RDI;
      if (uVar4 <= uVar1) {
        do {
          if (uVar2 == 0) break;
          bVar7 = *pcVar3 == *pcVar5;
          uVar2 = uVar2 - 1;
          pcVar3 = pcVar3 + 1;
          pcVar5 = pcVar5 + 1;
        } while (bVar7);
        if (bVar7) {
          return unaff_RDI;
        }
        pcVar3 = unaff_RDI + 1;
        while (pcVar5 = pcVar3, pcVar5 != unaff_RDI + 1 + (uVar1 - uVar4)) {
          bVar7 = false;
          uVar2 = uVar4;
          pcVar3 = unaff_RSI;
          pcVar6 = pcVar5;
          do {
            if (uVar2 == 0) break;
            uVar2 = uVar2 - 1;
            bVar7 = *pcVar3 == *pcVar6;
            pcVar3 = pcVar3 + 1;
            pcVar6 = pcVar6 + 1;
          } while (bVar7);
          pcVar3 = pcVar5 + 1;
          if (bVar7) {
            return pcVar5;
          }
        }
      }
    }
    unaff_RDI = (char *)0x0;
  }
  return unaff_RDI;
}



undefined8 FUN_00e86040(undefined8 param_1,ulonglong *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  byte *pbVar5;
  uint unaff_ESI;
  ulonglong uVar6;
  byte *unaff_RDI;
  byte *pbVar7;
  uint uVar8;
  ulonglong uVar9;
  
  bVar1 = *unaff_RDI;
  if (bVar1 == 0x2b) {
    bVar1 = unaff_RDI[1];
    unaff_RDI = unaff_RDI + 1;
  }
  pbVar5 = unaff_RDI;
  if (unaff_ESI == 0) {
    unaff_ESI = 10;
    if (bVar1 != 0x30) goto LAB_00e8607b;
    bVar1 = unaff_RDI[1];
    unaff_ESI = 8;
    if ((((bVar1 | 0x20) != 0x78) || (0x36 < (byte)(unaff_RDI[2] - 0x30))) ||
       ((0x7e0000007e03ffU >> ((ulonglong)(unaff_RDI[2] - 0x30) & 0x3f) & 1) == 0))
    goto LAB_00e8607b;
  }
  else {
    if ((unaff_ESI != 0x10) || (bVar1 != 0x30)) goto LAB_00e8607b;
    bVar1 = unaff_RDI[1];
  }
  unaff_ESI = 0x10;
  pbVar5 = unaff_RDI + 2;
  if ((bVar1 | 0x20) != 0x78) {
    pbVar5 = unaff_RDI;
  }
LAB_00e8607b:
  uVar9 = 0;
  uVar6 = 0;
  pbVar7 = pbVar5;
  do {
    uVar2 = (int)(char)*pbVar7 - 0x30;
    uVar8 = (uint)uVar9;
    if (9 < uVar2) {
      iVar4 = (int)(char)(*pbVar7 | 0x20);
      if (5 < iVar4 - 0x61U) {
LAB_00e86120:
        if ((int)uVar8 < 0) {
          uVar3 = 0xffffffde;
        }
        else {
          if (uVar8 != 0) {
            bVar1 = pbVar5[uVar9];
            if (bVar1 == 10) {
              bVar1 = (pbVar5 + uVar9)[1];
            }
            if (bVar1 == 0) {
              *param_2 = uVar6;
              return 0;
            }
          }
          uVar3 = 0xffffffea;
        }
        return uVar3;
      }
      uVar2 = iVar4 - 0x57;
    }
    if (unaff_ESI <= uVar2) goto LAB_00e86120;
    if ((0xfffffffffffffff < uVar6) &&
       ((0xffffffff / (ulonglong)unaff_ESI << 0x20 |
        (0xffffffffU % (ulonglong)unaff_ESI << 0x20 | (ulonglong)~uVar2) / (ulonglong)unaff_ESI &
        0xffffffff) < uVar6)) {
      uVar9 = (ulonglong)(uVar8 | 0x80000000);
    }
    uVar9 = (ulonglong)((int)uVar9 + 1);
    pbVar7 = pbVar7 + 1;
    uVar6 = uVar6 * unaff_ESI + (ulonglong)uVar2;
  } while( true );
}



void thunk_FUN_00e86040(void)

{
  FUN_00e86040();
  return;
}



void FUN_00e86200(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 unaff_SIL;
  undefined1 *unaff_RDI;
  
  puVar1 = unaff_RDI + param_2;
  if (param_2 != 0) {
    puVar2 = unaff_RDI;
    if (((int)puVar1 - (int)unaff_RDI & 1U) != 0) {
      *unaff_RDI = unaff_SIL;
      puVar2 = unaff_RDI + 1;
      if (unaff_RDI + 1 == puVar1) {
        return;
      }
    }
    do {
      *puVar2 = unaff_SIL;
      puVar3 = puVar2 + 2;
      puVar2[1] = unaff_SIL;
      puVar2 = puVar3;
    } while (puVar3 != puVar1);
  }
  return;
}



void FUN_00e86250(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  
  if ((unaff_RSI < unaff_RDI) && ((ulonglong)((longlong)unaff_RDI - (longlong)unaff_RSI) < param_2))
  {
    do {
      param_2 = param_2 - 1;
      *(undefined1 *)((longlong)unaff_RDI + param_2) =
           *(undefined1 *)((longlong)unaff_RSI + param_2);
    } while (param_2 != 0);
    return;
  }
  uVar1 = (ulonglong)((uint)param_2 & 7);
  for (param_2 = param_2 >> 3; param_2 != 0; param_2 = param_2 - 1) {
    *unaff_RDI = *unaff_RSI;
    unaff_RSI = unaff_RSI + 1;
    unaff_RDI = unaff_RDI + 1;
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)unaff_RDI = *(undefined1 *)unaff_RSI;
    unaff_RSI = (undefined8 *)((longlong)unaff_RSI + 1);
    unaff_RDI = (undefined8 *)((longlong)unaff_RDI + 1);
  }
  return;
}



void FUN_00e862a0(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  
  if ((unaff_RSI < unaff_RDI) && ((ulonglong)((longlong)unaff_RDI - (longlong)unaff_RSI) < param_2))
  {
    FUN_00e86580();
    FUN_00e86250();
    return;
  }
  uVar1 = (ulonglong)((uint)param_2 & 7);
  for (param_2 = param_2 >> 3; param_2 != 0; param_2 = param_2 - 1) {
    *unaff_RDI = *unaff_RSI;
    unaff_RSI = unaff_RSI + 1;
    unaff_RDI = unaff_RDI + 1;
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)unaff_RDI = *(undefined1 *)unaff_RSI;
    unaff_RSI = (undefined8 *)((longlong)unaff_RSI + 1);
    unaff_RDI = (undefined8 *)((longlong)unaff_RDI + 1);
  }
  return;
}



int FUN_00e86310(int param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  byte *unaff_RSI;
  byte *unaff_RDI;
  ulonglong uVar4;
  int iVar5;
  byte *pbVar6;
  
  if (unaff_RDI == (byte *)0x0) {
    return -1;
  }
  uVar4 = (ulonglong)unaff_RDI & 0xfffffffffffffff0;
  bVar3 = 0;
  pbVar6 = (byte *)0x0;
  iVar5 = -1;
  pbVar2 = param_2;
  do {
    bVar1 = *unaff_RDI;
    if (bVar1 == 0) break;
    if (bVar3 == 2) {
      bVar3 = (0x20 < bVar1) * '\x02';
    }
    else if (bVar3 < 3) {
      if (bVar3 == 0) {
        if (0x20 < bVar1) {
          pbVar6 = unaff_RSI;
          if (bVar1 != 0x3d) {
            bVar3 = *unaff_RSI;
            goto LAB_00e863d1;
          }
          goto LAB_00e863f3;
        }
      }
      else {
        if (bVar1 == 0x3d) {
LAB_00e863f3:
          bVar3 = *pbVar6;
          if (bVar3 == 0) {
            bVar3 = 3;
            iVar5 = 0;
            pbVar2 = param_2;
            goto joined_r0x00e86367;
          }
        }
        else {
          bVar3 = 0;
          if (bVar1 < 0x21) goto joined_r0x00e86367;
          bVar3 = *pbVar6;
        }
LAB_00e863d1:
        pbVar6 = pbVar6 + 1;
        bVar3 = (bVar3 != bVar1) + 1;
      }
    }
    else if (bVar3 == 3) {
      if (bVar1 < 0x21) {
        bVar3 = 0;
      }
      else {
        if (iVar5 < param_1 + -1) {
          *pbVar2 = bVar1;
          pbVar2 = pbVar2 + 1;
        }
        iVar5 = iVar5 + 1;
      }
    }
joined_r0x00e86367:
    unaff_RDI = unaff_RDI + 1;
  } while ((byte *)(uVar4 + 0x10000) != unaff_RDI);
  if (param_1 != 0) {
    *pbVar2 = 0;
  }
  return iVar5;
}



void FUN_00e86520(undefined8 param_1,undefined4 param_2)

{
  FUN_00e86310(param_2);
  return;
}



void FUN_00e86580(void)

{
  FUN_00e854c0();
  FUN_00e854c0();
  FUN_00e854c0();
  return;
}



void FUN_00e865c0(void)

{
  FUN_00e86580();
  FUN_00e854c0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00e865f0(void)

{
  int iVar1;
  undefined1 local_res8 [32];
  undefined4 local_50 [2];
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 local_38 [8];
  
  local_48 = local_res8;
  local_40 = local_38;
  local_50[0] = 8;
  iVar1 = FUN_00e91758(local_50);
  if ((iVar1 != 0) && ((&DAT_00ed7060)[iVar1 + -1] == '\n')) {
    (&DAT_00ed7060)[iVar1 + -1] = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_00e865c0();
}



// WARNING: Removing unreachable block (ram,0x00e867ce)
// WARNING: Removing unreachable block (ram,0x00e867b9)
// WARNING: Removing unreachable block (ram,0x00e867a8)
// WARNING: Removing unreachable block (ram,0x00e86760)
// WARNING: Removing unreachable block (ram,0x00e86739)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_00e866b0(void)

{
  uint *puVar1;
  uint *puVar2;
  longlong lVar3;
  int *piVar4;
  uint uVar5;
  ulonglong in_RAX;
  uint uVar6;
  ulonglong uVar7;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong uVar8;
  
  uVar5 = _DAT_00ed748c;
  if (DAT_00ed74e4 == '\0') {
    DAT_00ed74e4 = 1;
    _DAT_00ed748c = _DAT_00ed748c | 1;
    uVar8 = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
            (ulonglong)(in_TF & 1) * 0x100 | 0x40 | (ulonglong)(in_AF & 1) * 0x10 | 4 |
            (ulonglong)((uVar5 & 1) != 0) | (ulonglong)(in_ID & 1) * 0x200000 |
            (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
            (ulonglong)(in_AC & 1) * 0x40000;
    uVar7 = uVar8 ^ 0x200000;
    uVar8 = uVar8 ^ ((ulonglong)((uVar7 & 0x4000) != 0) * 0x4000 |
                     (ulonglong)((uVar7 & 0x200) != 0) * 0x200 |
                     (ulonglong)((uVar7 & 0x100) != 0) * 0x100 |
                     (ulonglong)((uVar7 & 0x40) != 0) * 0x40 |
                     (ulonglong)((uVar7 & 0x10) != 0) * 0x10 | (ulonglong)((uVar7 & 4) != 0) * 4 |
                     (ulonglong)((uVar7 & 1) != 0) | (ulonglong)((uVar7 & 0x200000) != 0) * 0x200000
                    | (ulonglong)((uVar7 & 0x40000) != 0) * 0x40000);
    if ((uVar8 & 0x200000) != 0) {
      puVar1 = (uint *)cpuid_basic_info(0);
      _DAT_00ed7460 = puVar1[1];
      _DAT_00ed7464 = puVar1[2];
      _DAT_00ed7468 = puVar1[3];
      if (*puVar1 - 1 < 0xffff) {
        puVar2 = (uint *)cpuid_Version_info(1);
        uVar5 = *puVar2;
        _DAT_00ed748c = puVar2[2];
        _DAT_00ed749c = puVar2[3];
        uVar6 = uVar5 >> 8;
        _DAT_00ed7480 = CONCAT44(uVar6,uVar6) & 0xf0000000f;
        _DAT_00ed7488 = uVar5 >> 4 & 0xf;
        if (5 < (uVar6 & 0xf)) {
          _DAT_00ed7488 = (uVar5 >> 0xc & 0xf0) + _DAT_00ed7488;
        }
      }
      if (6 < *puVar1) {
        lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
        _DAT_00ed74cc = *(undefined4 *)(lVar3 + 0xc);
      }
      piVar4 = (int *)cpuid(0x80000000);
      uVar8 = (ulonglong)(*piVar4 + 0x7fffffffU);
      if (*piVar4 + 0x7fffffffU < 0xffff) {
        puVar1 = (uint *)cpuid(0x80000001);
        uVar8 = (ulonglong)*puVar1;
        _DAT_00ed7490 = puVar1[2];
        _DAT_00ed74a4 = puVar1[3];
      }
    }
    return uVar8;
  }
  return in_RAX;
}



bool FUN_00e86810(void)

{
  uint unaff_EDI;
  
  FUN_00e866b0();
  return ((byte)(&DAT_00ed748c)[(longlong)(int)unaff_EDI >> 3] >> (unaff_EDI & 7) & 1) != 0;
}



longlong FUN_00e87040(void)

{
  undefined1 auVar1 [16];
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  bool bVar14;
  
  uVar13 = 0;
  ppuVar7 = (undefined **)&DAT_00e96360;
  do {
    ppuVar8 = ppuVar7 + 1;
    uVar13 = (uVar13 >> 7 | uVar13 << 0x39) ^ (ulonglong)*ppuVar7;
    ppuVar7 = ppuVar8;
  } while (ppuVar8 != &PTR_DAT_00e96430);
  puVar9 = DAT_00ea6038;
  do {
    puVar10 = puVar9 + 1;
    uVar13 = (uVar13 >> 7 | uVar13 << 0x39) ^ *puVar9;
    puVar9 = puVar10;
  } while (DAT_00ea6038 + 0x200 != puVar10);
  cVar2 = FUN_00e86810();
  if (cVar2 != '\0') {
    iVar4 = 10;
    do {
      uVar12 = rdrand();
      bVar14 = (bool)rdrandIsValid();
      if (bVar14) {
        uVar13 = uVar13 ^ uVar12;
        uVar11 = FUN_00e86810();
        if ((char)uVar11 == '\0') goto LAB_00e870d1;
        goto LAB_00e870c5;
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  uVar11 = FUN_00e86810();
  if ((char)uVar11 == '\0') {
    do {
      (*DAT_00ea6028)();
      uVar5 = (*DAT_00ea6020)();
      bVar3 = (*DAT_00ea6020)();
      uVar6 = (*DAT_00ea6020)();
    } while ((uVar5 & 0x40) != 0);
    uVar13 = uVar13 ^ ((uVar6 & 0xff) << 8 | (uint)bVar3);
  }
  else {
LAB_00e870c5:
    uVar12 = rdtsc();
    uVar13 = uVar13 ^ (uVar12 & 0xffffffff00000000 |
                      CONCAT44((int)((ulonglong)uVar11 >> 0x20),(int)uVar12));
  }
LAB_00e870d1:
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar13;
  return SUB168(auVar1 * ZEXT816(0x5d6008cbf3848dd3),0) +
         SUB168(auVar1 * ZEXT816(0x5d6008cbf3848dd3),8);
}



void FUN_00e87160(void)

{
  byte *pbVar1;
  byte bVar2;
  byte *unaff_RDI;
  
  bVar2 = (&DAT_00e96260)[*unaff_RDI];
  while ((bVar2 & 0x20) != 0) {
    pbVar1 = unaff_RDI + 1;
    unaff_RDI = unaff_RDI + 1;
    bVar2 = (&DAT_00e96260)[*pbVar1];
  }
  return;
}



bool FUN_00e873d0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  char *unaff_RDI;
  
  if (*unaff_RDI == '\0') {
    return false;
  }
  do {
    uVar3 = FUN_00e85f40();
    iVar2 = FUN_00e85d90(param_1,uVar3);
    if (iVar2 != 0) goto LAB_00e8740c;
    lVar4 = FUN_00e85f40();
    unaff_RDI = unaff_RDI + lVar4;
    cVar1 = *unaff_RDI;
    if (cVar1 == '\0' || cVar1 == ',') {
      return cVar1 == '\0' || cVar1 == ',';
    }
    do {
      unaff_RDI = unaff_RDI + 1;
LAB_00e8740c:
      cVar1 = *unaff_RDI;
    } while ((cVar1 != '\0') && (cVar1 != ','));
    unaff_RDI = unaff_RDI + (cVar1 == ',');
  } while (*unaff_RDI != '\0');
  return false;
}



void FUN_00e87460(undefined8 param_1,undefined8 *param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar4;
  bool bVar5;
  byte bVar6;
  undefined8 *unaff_RSI;
  ulonglong uVar7;
  byte *unaff_RDI;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
  ulonglong uVar3;
  
  bVar6 = *unaff_RDI;
  bVar10 = bVar6 == 0x22;
  if (bVar10) {
    bVar6 = unaff_RDI[1];
    unaff_RDI = unaff_RDI + 1;
  }
  if ((bVar6 == 0) || ((((&DAT_00e96260)[bVar6] & 0x20) != 0 && (!bVar10)))) {
    *unaff_RSI = unaff_RDI;
    uVar2 = 0;
    *param_2 = 0;
    pbVar4 = unaff_RDI;
  }
  else {
    uVar3 = 0;
    uVar8 = 0;
    bVar5 = bVar10;
    do {
      uVar7 = uVar3;
      if ((((int)uVar8 != 0) || (uVar9 = uVar7, bVar6 != 0x3d)) && (uVar9 = uVar8, bVar6 == 0x22)) {
        bVar5 = (bool)(bVar5 ^ 1);
      }
      uVar2 = (int)uVar7 + 1;
      uVar3 = (ulonglong)uVar2;
      pbVar4 = unaff_RDI + uVar3;
      bVar6 = *pbVar4;
    } while ((bVar6 != 0) && ((uVar8 = uVar9, ((&DAT_00e96260)[bVar6] & 0x20) == 0 || (bVar5))));
    *unaff_RSI = unaff_RDI;
    if ((int)uVar9 == 0) {
      *param_2 = 0;
    }
    else {
      pbVar1 = unaff_RDI + uVar9 + 1;
      unaff_RDI[uVar9] = 0;
      *param_2 = pbVar1;
      if (*pbVar1 == 0x22) {
        *param_2 = pbVar1 + 1;
        if (unaff_RDI[uVar7] == 0x22) {
          unaff_RDI[uVar7] = 0;
        }
        goto LAB_00e8752f;
      }
    }
    if ((uVar2 != 0 && bVar10) && (unaff_RDI[uVar7] == 0x22)) {
      unaff_RDI[uVar7] = 0;
    }
  }
LAB_00e8752f:
  if (*pbVar4 != 0) {
    *pbVar4 = 0;
    pbVar4 = unaff_RDI + (uVar2 + 1);
    bVar6 = (&DAT_00e96260)[*pbVar4];
    while ((bVar6 & 0x20) != 0) {
      pbVar1 = pbVar4 + 1;
      pbVar4 = pbVar4 + 1;
      bVar6 = (&DAT_00e96260)[*pbVar1];
    }
  }
  return;
}



undefined8 FUN_00e88230(undefined8 param_1,ulonglong param_2)

{
  undefined1 *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong unaff_RSI;
  ulonglong uVar7;
  ulonglong unaff_RDI;
  undefined1 *puVar8;
  
  puVar2 = DAT_00ed7c58;
  if (DAT_00ea0398 != 0) {
    puVar2 = (ulonglong *)
             ((*DAT_00ed7c58 & DAT_00ea0260 & 0xfffffffffffff000) +
             ((ulonglong)(DAT_00ea0390 - 1) & unaff_RDI >> 0x27) * 8);
  }
  uVar6 = DAT_00ea0260 & 0xfffffffffffff000;
  uVar4 = *(ulonglong *)((*puVar2 & uVar6) + (ulonglong)((uint)(unaff_RDI >> 0x1e) & 0x1ff) * 8);
  uVar7 = DAT_00ea0260 & 0xffffffffc0000000;
  if ((uVar4 & 0x80) == 0) {
    uVar7 = uVar6;
  }
  puVar2 = (ulonglong *)((uVar4 & uVar7) + (ulonglong)((uint)(unaff_RDI >> 0x12) & 0xff8));
  uVar4 = *puVar2;
  if (((uVar4 & 0x80) == 0) || (uVar6 = DAT_00ea0260 & 0xffffffffffe00000, (uVar4 & 0x80) == 0)) {
    puVar3 = (ulonglong *)((uVar4 & uVar6) + (ulonglong)((uint)(unaff_RDI >> 9) & 0xff8));
    if (puVar3 == (ulonglong *)0x0) {
      return 0xfffffff4;
    }
    uVar4 = (unaff_RSI | param_2) & DAT_00ea0268;
  }
  else {
    puVar3 = (ulonglong *)(*DAT_00ed7c20)();
    if (puVar3 == (ulonglong *)0x0) {
      return 0xfffffff4;
    }
    uVar7 = DAT_00ed7c38 & 0xffffffffffffff7f;
    puVar5 = puVar3;
    uVar4 = unaff_RDI & 0xffffffffffe00000;
    do {
      uVar6 = uVar4 + 0x1000;
      *puVar5 = uVar4 | uVar7;
      puVar5 = puVar5 + 1;
      uVar4 = uVar6;
    } while (uVar6 != (unaff_RDI & 0xffffffffffe00000) + 0x200000);
    *puVar2 = DAT_00ed7c50 | (ulonglong)puVar3;
    puVar3 = (ulonglong *)((longlong)puVar3 + (ulonglong)((uint)(unaff_RDI >> 9) & 0xff8));
    uVar4 = (unaff_RSI | param_2) & DAT_00ea0268;
  }
  if (uVar4 != 0) {
    puVar8 = (undefined1 *)(unaff_RDI & 0xfffffffffffff000);
    puVar1 = puVar8 + 0x1000;
    do {
      clflush(*puVar8);
      clflush(puVar8[0x40]);
      puVar8 = puVar8 + 0x80;
    } while (puVar8 != puVar1);
    if (param_2 != 0) {
      FUN_00e8b4f0();
    }
  }
  *puVar3 = ~param_2 & (*puVar3 | unaff_RSI);
  if ((unaff_RSI & DAT_00ea0268) != 0) {
    FUN_00e8b470();
  }
  return 0;
}



void FUN_00e88ad0(undefined8 param_1)

{
  FUN_00e88230(param_1,DAT_00ea0268);
  return;
}



// WARNING: Removing unreachable block (ram,0x00e88f64)
// WARNING: Removing unreachable block (ram,0x00e88f56)

uint FUN_00e88f50(void)

{
  uint *puVar1;
  ulonglong uVar2;
  
  puVar1 = (uint *)cpuid(0x80000000);
  if (0x8000001e < *puVar1) {
    puVar1 = (uint *)cpuid(0x8000001f);
    if (((*puVar1 >> 1 & 1) != 0) && (uVar2 = rdmsr(0xc0010131), (uVar2 & 1) != 0)) {
      return puVar1[1] & 0x3f;
    }
  }
  return 0;
}



undefined8 FUN_00e88f90(undefined8 param_1,undefined4 param_2)

{
  ulonglong uVar1;
  int in_EAX;
  undefined8 uVar2;
  
  wrmsr(0xc0010130,CONCAT44(param_2,in_EAX << 0x1e) | 4);
  vmgexit();
  uVar1 = rdmsr(0xc0010130);
  if (((uVar1 & 0x3ffff000) == 0) && (((uint)uVar1 & 0xfff) == 5)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



void FUN_00e89080(int param_1,int param_2)

{
  uint in_EAX;
  uint *puVar1;
  
  puVar1 = (uint *)(ulonglong)(uint)(param_1 + param_2 * 8);
  *puVar1 = in_EAX & 0xffff | 0x80000;
  puVar1[1] = in_EAX & 0xffff0000 | 0x8e00;
  return;
}



void FUN_00e890b0(void)

{
  FUN_00e89080(0xea0280,0x1d);
  DAT_00ea0380._2_4_ = 0xea0280;
  InterruptDescriptorTableRegister
            (CONCAT26(DAT_00ea0380._6_2_,CONCAT42(0xea0280,(undefined2)DAT_00ea0380)));
  return;
}



// WARNING: Removing unreachable block (ram,0x00e89122)

void FUN_00e890e0(void)

{
  bool bVar1;
  
  if ((int)DAT_00ea0270 != 0) {
    do {
      DAT_00ea0278 = rdrand();
      bVar1 = (bool)rdrandIsValid();
    } while (!bVar1);
    do {
      DAT_00ea027c = rdrand();
      bVar1 = (bool)rdrandIsValid();
    } while (!bVar1);
  }
  return;
}



void FUN_00e894e0(void)

{
  ulonglong uVar1;
  uint unaff_ESI;
  uint unaff_EDI;
  
  uVar1 = (ulonglong)unaff_EDI << 0xc | (ulonglong)unaff_ESI << 0x10;
  wrmsr(0xc0010130,uVar1 & 0xffffffff00000000 | uVar1 & 0xffffffff | 0x100);
  vmgexit();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_00e89510(void)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = FUN_00e88ad0();
  if (iVar2 != 0) {
    return 0;
  }
  FUN_00e86200();
  _DAT_00eda4a0 = &PTR_DAT_00e96780;
  _DAT_00eda4c0 = &PTR_DAT_00e96760;
  _DAT_00eda4e0 = &DAT_00e968e0;
  _DAT_00eda500 = &DAT_00e968c0;
  _DAT_00eda520 = &DAT_00e968a0;
  _DAT_00eda540 = &DAT_00e96880;
  _DAT_00eda560 = &DAT_00e96860;
  _DAT_00eda578 = &DAT_00e96840;
  _DAT_00eda580 = &DAT_00e96820;
  _DAT_00eda590 = &DAT_00e96800;
  _DAT_00eda5c0 = &DAT_00e96600;
  _DAT_00eda5e0 = &PTR_DAT_00e96540;
  _DAT_00eda600 = &DAT_00e96520;
  _DAT_00eda610 = &DAT_00e96500;
  _DAT_00eda620 = &DAT_00e96740;
  _DAT_00eda628 = &DAT_00e96720;
  _DAT_00eda640 = &DAT_00e96700;
  _DAT_00eda648 = &DAT_00e966e0;
  _DAT_00eda660 = &DAT_00e966c0;
  _DAT_00eda898 = &DAT_00e9a500;
  DAT_00eda000 = &DAT_00edb000;
  _DAT_00eda840 = &DAT_00e9d100;
  _DAT_00eda848 = &DAT_00e9cd00;
  _DAT_00eda850 = &DAT_00e9c900;
  _DAT_00eda858 = &DAT_00e9c500;
  _DAT_00eda860 = &DAT_00e9c100;
  _DAT_00eda868 = &DAT_00e9bd00;
  _DAT_00eda870 = &DAT_00e9b900;
  _DAT_00eda878 = &DAT_00e9b500;
  _DAT_00eda880 = &DAT_00e9b100;
  _DAT_00eda888 = &DAT_00e9ad00;
  _DAT_00eda890 = &DAT_00e9a900;
  _DAT_00eda668 = &DAT_00e966a0;
  _DAT_00eda6c0 = &DAT_00e96680;
  _DAT_00eda6c8 = &DAT_00e96660;
  _DAT_00eda6d0 = &DAT_00e96640;
  _DAT_00eda098 = &DAT_00e9a500;
  _DAT_00eda6d8 = &DAT_00e96620;
  _DAT_00eda0a0 = &DAT_00e9a100;
  _DAT_00eda720 = &DAT_00e967e0;
  _DAT_00eda0a8 = &DAT_00e99d00;
  _DAT_00eda728 = &DAT_00e967c0;
  _DAT_00eda0b0 = &DAT_00e99900;
  _DAT_00eda730 = &DAT_00e967a0;
  _DAT_00eda0b8 = &DAT_00e99500;
  _DAT_00eda740 = &DAT_00e965c0;
  _DAT_00eda0c0 = &DAT_00e99100;
  _DAT_00eda748 = &DAT_00e965a0;
  _DAT_00eda0c8 = &DAT_00e98d00;
  _DAT_00eda760 = &DAT_00e96580;
  _DAT_00eda0d0 = &DAT_00e98900;
  _DAT_00eda768 = &DAT_00e96560;
  _DAT_00eda0d8 = &DAT_00e98500;
  _DAT_00eda780 = &DAT_00e965e0;
  _DAT_00eda040 = &DAT_00e9d100;
  _DAT_00eda048 = &DAT_00e9cd00;
  _DAT_00eda050 = &DAT_00e9c900;
  _DAT_00eda058 = &DAT_00e9c500;
  _DAT_00eda060 = &DAT_00e9c100;
  _DAT_00eda068 = &DAT_00e9bd00;
  _DAT_00eda070 = &DAT_00e9b900;
  _DAT_00eda078 = &DAT_00e9b500;
  _DAT_00eda080 = &DAT_00e9b100;
  _DAT_00eda088 = &DAT_00e9ad00;
  _DAT_00eda090 = &DAT_00e9a900;
  _DAT_00eda0e0 = &DAT_00e98100;
  _DAT_00eda0e8 = &DAT_00e97d00;
  _DAT_00eda0f0 = &DAT_00e97900;
  _DAT_00eda0f8 = &DAT_00e97500;
  _DAT_00eda100 = &DAT_00e97100;
  _DAT_00eda110 = &DAT_00e96d00;
  _DAT_00eda118 = &DAT_00e96900;
  if (((byte)DAT_00ea0270 & 4) != 0) {
    wrmsr(0xc0010130,0xedb012);
    vmgexit();
    uVar1 = rdmsr(0xc0010130);
    if ((((uint)uVar1 & 0xfff) != 0x13) || (uVar1 >> 0xc != 0xedb)) {
                    // WARNING: Subroutine does not return
      FUN_00e894e0();
    }
  }
  return 1;
}



ulonglong FUN_00e89950(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined2 uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  uVar2 = DAT_00ea1010;
  *(undefined4 *)(unaff_RDI + 0xffc) = 0;
  *(undefined2 *)(unaff_RDI + 0xffa) = uVar2;
  *(byte *)(unaff_RDI + 0x3fe) = *(byte *)(unaff_RDI + 0x3fe) | 4;
  *(undefined8 *)(unaff_RDI + 0x390) = param_2;
  *(byte *)(unaff_RDI + 0x3fe) = *(byte *)(unaff_RDI + 0x3fe) | 8;
  *(undefined8 *)(unaff_RDI + 0x398) = param_1;
  *(byte *)(unaff_RDI + 0x3fe) = *(byte *)(unaff_RDI + 0x3fe) | 0x10;
  *(undefined8 *)(unaff_RDI + 0x3a0) = param_3;
  wrmsr(0xc0010130,unaff_RDI);
  vmgexit();
  iVar4 = (int)*(ulonglong *)(unaff_RDI + 0x398);
  uVar3 = *(ulonglong *)(unaff_RDI + 0x398) & 0xffffffff;
  if ((((iVar4 != 0) && (uVar3 = 2, iVar4 == 1)) &&
      (uVar1 = *(ulonglong *)(unaff_RDI + 0x3a0), 0x7fffffff < uVar1)) &&
     ((((char)uVar1 == '\r' || ((uVar1 & 0xff) == 6)) && (uVar3 = 2, ((uint)uVar1 & 0x700) == 0x300)
      ))) {
    *(ulonglong *)(unaff_RSI + 0x78) = uVar1 & 0xff;
    if ((uVar1 & 0x800) != 0) {
      *(ulonglong *)(unaff_RSI + 0x80) = uVar1 >> 0x20;
    }
    uVar3 = 4;
  }
  return uVar3;
}



undefined8 FUN_00e89a30(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined2 uVar9;
  char *pcVar10;
  longlong lVar11;
  undefined8 *unaff_RDI;
  char *pcVar12;
  char *pcVar13;
  
  pcVar10 = DAT_00eda000;
  if (DAT_00eda000 == (char *)0x0) {
    do {
      uVar8 = rdmsr(0xc0010130);
      wrmsr(0xc0010130,0x16);
      uVar2 = unaff_RDI[1];
      uVar3 = unaff_RDI[2];
      uVar4 = unaff_RDI[3];
      uVar5 = unaff_RDI[4];
      uVar7 = unaff_RDI[5];
      *(undefined1 *)*unaff_RDI = 1;
      vmgexit();
      LOCK();
      cVar1 = *(char *)*unaff_RDI;
      *(char *)*unaff_RDI = '\0';
      UNLOCK();
      unaff_RDI[7] = uVar3;
      unaff_RDI[6] = uVar2;
      unaff_RDI[8] = uVar4;
      unaff_RDI[9] = uVar5;
      unaff_RDI[10] = uVar7;
      uVar6 = rdmsr(0xc0010130);
      wrmsr(0xc0010130,uVar8);
      if (cVar1 != '\0') {
        return 0xffffffea;
      }
      if (((uint)uVar6 & 0xfff) != 0x17) {
        return 0xffffffea;
      }
      if (uVar6 >> 0x20 != 0) {
        return 0xffffffea;
      }
      lVar11 = unaff_RDI[6];
    } while ((lVar11 == 0x80000000) || (lVar11 == 0x80000007));
  }
  else {
    pcVar13 = DAT_00eda000 + 0x3f0;
    pcVar12 = DAT_00eda000;
    do {
      uVar9 = DAT_00ea1010;
      pcVar12[0x390] = '\0';
      pcVar12[0x391] = '\0';
      pcVar12[0x392] = '\0';
      pcVar12[0x393] = '\0';
      pcVar12[0x394] = '\0';
      pcVar12[0x395] = '\0';
      pcVar12[0x396] = '\0';
      pcVar12[0x397] = '\0';
      pcVar13[0] = '\0';
      pcVar13[1] = '\0';
      pcVar13[2] = '\0';
      pcVar13[3] = '\0';
      pcVar13[4] = '\0';
      pcVar13[5] = '\0';
      pcVar13[6] = '\0';
      pcVar13[7] = '\0';
      pcVar13[8] = '\0';
      pcVar13[9] = '\0';
      pcVar13[10] = '\0';
      pcVar13[0xb] = '\0';
      pcVar13[0xc] = '\0';
      pcVar13[0xd] = '\0';
      pcVar13[0xe] = '\0';
      pcVar13[0xf] = '\0';
      *(undefined2 *)(pcVar12 + 0xffa) = uVar9;
      pcVar12[0xffc] = '\0';
      pcVar12[0xffd] = '\0';
      pcVar12[0xffe] = '\0';
      pcVar12[0xfff] = '\0';
      pcVar13[0xe] = pcVar13[0xe] | 4;
      pcVar12[0x390] = '\x18';
      pcVar12[0x391] = '\0';
      pcVar12[0x392] = '\0';
      pcVar12[0x393] = -0x80;
      pcVar12[0x394] = '\0';
      pcVar12[0x395] = '\0';
      pcVar12[0x396] = '\0';
      pcVar12[0x397] = '\0';
      pcVar13[0xe] = pcVar13[0xe] | 8;
      pcVar12[0x398] = '\0';
      pcVar12[0x399] = '\0';
      pcVar12[0x39a] = '\0';
      pcVar12[0x39b] = '\0';
      pcVar12[0x39c] = '\0';
      pcVar12[0x39d] = '\0';
      pcVar12[0x39e] = '\0';
      pcVar12[0x39f] = '\0';
      pcVar13[0xe] = pcVar13[0xe] | 0x10;
      pcVar12[0x3a0] = '\0';
      pcVar12[0x3a1] = '\0';
      pcVar12[0x3a2] = '\0';
      pcVar12[0x3a3] = '\0';
      pcVar12[0x3a4] = '\0';
      pcVar12[0x3a5] = '\0';
      pcVar12[0x3a6] = '\0';
      pcVar12[0x3a7] = '\0';
      wrmsr(0xc0010130,(ulonglong)pcVar10 & 0xffffffff00000000 | (ulonglong)pcVar12 & 0xffffffff);
      lVar11 = unaff_RDI[1];
      uVar2 = unaff_RDI[2];
      uVar3 = unaff_RDI[3];
      uVar4 = unaff_RDI[4];
      uVar5 = unaff_RDI[5];
      *(undefined1 *)*unaff_RDI = 1;
      vmgexit();
      LOCK();
      cVar1 = *(char *)*unaff_RDI;
      *(char *)*unaff_RDI = '\0';
      UNLOCK();
      unaff_RDI[6] = lVar11;
      unaff_RDI[7] = uVar2;
      unaff_RDI[8] = uVar3;
      unaff_RDI[9] = uVar4;
      unaff_RDI[10] = uVar5;
      if (cVar1 != '\0') {
        return 0xffffffea;
      }
      if ((int)*(undefined8 *)(pcVar12 + 0x398) != 0) {
        if ((int)*(undefined8 *)(pcVar12 + 0x398) != 1) {
          return 0xffffffea;
        }
        uVar6 = *(ulonglong *)(pcVar12 + 0x3a0);
        if (uVar6 < 0x80000000) {
          return 0xffffffea;
        }
        if (((char)uVar6 != '\r') && ((uVar6 & 0xff) != 6)) {
          return 0xffffffea;
        }
        if (((uint)uVar6 & 0x700) != 0x300) {
          return 0xffffffea;
        }
        pcVar12 = "SNP: Hypervisor requested exception\n";
        lVar11 = FUN_00e865f0();
      }
    } while ((lVar11 == 0x80000000) || (lVar11 == 0x80000007));
  }
  if (lVar11 != 0) {
    return 0xffffffea;
  }
  return 0;
}



void FUN_00e89c90(undefined8 param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  ulonglong unaff_RSI;
  undefined8 unaff_RDI;
  longlong *plVar5;
  byte in_IF;
  longlong local_60 [11];
  
  lVar2 = DAT_00ea1020;
  if (DAT_00ea1028 == '\0') {
    iVar3 = pvalidate(unaff_RDI,0,param_2);
    rmpFlags(iVar3);
    if (iVar3 != 0) {
LAB_00e89d48:
                    // WARNING: Subroutine does not return
      FUN_00e894e0();
    }
  }
  else {
    plVar5 = local_60;
    for (lVar4 = 0xb; lVar4 != 0; lVar4 = lVar4 + -1) {
      *plVar5 = 0;
      plVar5 = plVar5 + 1;
    }
    local_60[1] = 1;
    puVar1 = (undefined8 *)(DAT_00ea1020 + 0x10);
    local_60[2] = DAT_00ea1018 + 8;
    *(undefined4 *)(DAT_00ea1020 + 8) = 1;
    local_60[0] = lVar2;
    *(ulonglong *)(lVar2 + 0x10) =
         unaff_RSI & 0xfffffffffffff000 | (param_2 & 3) << 2 | (ulonglong)((uint)*puVar1 & 0xff0);
    iVar3 = FUN_00e89a30();
    if (iVar3 != 0) goto LAB_00e89d48;
    if ((in_IF & 1) != 0) {
      return;
    }
  }
  return;
}



uint FUN_00e8b450(void)

{
  return (uint)(DAT_00ea0270 >> 2) & 1;
}



void FUN_00e8b470(void)

{
  ulonglong uVar1;
  ulonglong unaff_RDI;
  
  if (((byte)DAT_00ea0270 & 4) == 0) {
    return;
  }
  wrmsr(0xc0010130,unaff_RDI & 0xffffffffff000 | 0x10000000000014);
  vmgexit();
  uVar1 = rdmsr(0xc0010130);
  if ((((uint)uVar1 & 0xfff) == 0x15) && (uVar1 >> 0x20 == 0)) {
    FUN_00e89c90(0xc0010130,1);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00e894e0();
}



void FUN_00e8b4f0(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong unaff_RDI;
  
  if (((byte)DAT_00ea0270 & 4) == 0) {
    return;
  }
  FUN_00e89c90(param_1,0);
  wrmsr(0xc0010130,unaff_RDI & 0xffffffffff000 | 0x20000000000014);
  vmgexit();
  uVar1 = rdmsr(0xc0010130);
  if ((((uint)uVar1 & 0xfff) == 0x15) && (uVar1 >> 0x20 == 0)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_00e894e0();
}



void FUN_00e8b570(void)

{
  ushort uVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong *puVar13;
  ushort uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  byte bVar18;
  uint uVar19;
  ulonglong unaff_RSI;
  ulonglong uVar20;
  byte bVar21;
  ulonglong unaff_RDI;
  longlong *plVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  byte in_IF;
  uint local_4cc;
  longlong local_498 [6];
  longlong local_468;
  ulonglong local_440 [64];
  undefined8 local_240;
  undefined8 local_238;
  
  puVar10 = &local_240;
  for (lVar12 = 0x41; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  if ((DAT_00eda000 == 0) && (cVar5 = FUN_00e89510(), cVar5 == '\0')) {
LAB_00e8bb51:
                    // WARNING: Subroutine does not return
    FUN_00e894e0();
  }
  do {
    if (unaff_RSI <= unaff_RDI) {
      return;
    }
    FUN_00e86200();
    if (unaff_RDI < unaff_RSI) {
      puVar10 = &local_238;
      uVar11 = 0;
      do {
        uVar19 = uVar11;
        puVar8 = puVar10;
        uVar16 = unaff_RDI >> 0xc & 0xffffffffff;
        iVar7 = (int)(unaff_RDI >> 0xc);
        *(byte *)((longlong)puVar8 + 1) = *(byte *)((longlong)puVar8 + 1) & 0xf | (byte)(iVar7 << 4)
        ;
        *(char *)((longlong)puVar8 + 2) = (char)(uVar16 >> 4);
        *(char *)((longlong)puVar8 + 3) = (char)(uVar16 >> 0xc);
        *(char *)((longlong)puVar8 + 4) = (char)(uVar16 >> 0x14);
        *(char *)((longlong)puVar8 + 5) = (char)(uVar16 >> 0x1c);
        uVar15 = (uint)(uVar16 >> 0x20);
        *(byte *)((longlong)puVar8 + 6) = (byte)(uVar15 >> 4) | 0x10;
        if (((unaff_RDI & 0x1fffff) == 0) && (0x1fffff < unaff_RSI - unaff_RDI)) {
          unaff_RDI = unaff_RDI + 0x200000;
          bVar21 = 1;
        }
        else {
          unaff_RDI = unaff_RDI + 0x1000;
          bVar21 = 0;
        }
        *(byte *)((longlong)puVar8 + 7) = *(byte *)((longlong)puVar8 + 7) & 0xfe | bVar21;
        uVar11 = uVar19 + 1;
      } while ((uVar11 < 0x40) && (puVar10 = puVar8 + 1, unaff_RDI < unaff_RSI));
      local_240._2_2_ = (ushort)uVar19;
      *(byte *)((longlong)puVar8 + 1) = *(byte *)((longlong)puVar8 + 1) & 0xf | (byte)(iVar7 << 4);
      *(char *)((longlong)puVar8 + 2) = (char)(uVar16 >> 4);
      *(char *)((longlong)puVar8 + 3) = (char)(uVar16 >> 0xc);
      *(char *)((longlong)puVar8 + 4) = (char)(uVar16 >> 0x14);
      *(char *)((longlong)puVar8 + 5) = (char)(uVar16 >> 0x1c);
      *(byte *)((longlong)puVar8 + 6) = (byte)(uVar15 >> 4) | *(byte *)((longlong)puVar8 + 6) & 0xf0
      ;
    }
    lVar4 = DAT_00eda000;
    lVar12 = DAT_00eda000 + 0x800;
    *(undefined8 *)(DAT_00eda000 + 0x390) = 0;
    *(undefined8 *)(lVar4 + 0x3f0) = 0;
    *(undefined8 *)(lVar4 + 0x3f8) = 0;
    FUN_00e862a0();
    uVar9 = (ulonglong)*(ushort *)(lVar4 + 0x800);
    uVar1 = *(ushort *)(lVar4 + 0x802);
    uVar16 = uVar9;
    uVar14 = uVar1;
    while (lVar3 = DAT_00ea1020, (ushort)uVar9 <= uVar14) {
      *(byte *)(lVar4 + 0x3fe) = *(byte *)(lVar4 + 0x3fe) | 0x20;
      *(longlong *)(lVar4 + 0x3a8) = lVar12;
      iVar7 = FUN_00e89950(0,0x80000010,0);
      if ((((iVar7 != 0) || (*(longlong *)(lVar4 + 0x3a0) != 0)) || (*(int *)(lVar4 + 0x804) != 0))
         || ((uVar14 = *(ushort *)(lVar4 + 0x802), uVar1 < uVar14 ||
             (uVar9 = (ulonglong)*(ushort *)(lVar4 + 0x800),
             *(ushort *)(lVar4 + 0x800) < (ushort)uVar16)))) goto LAB_00e8bb51;
    }
    if (DAT_00ea1028 == '\0') {
      uVar16 = 0;
      do {
        uVar20 = ((ulonglong)(&local_238)[uVar16] >> 0xc & 0xffffffffff) * 0x1000;
        uVar9 = (ulonglong)((*(byte *)((longlong)&local_238 + uVar16 * 8 + 6) & 0xf0) == 0x10);
        uVar11 = *(byte *)((longlong)&local_238 + uVar16 * 8 + 7) & 1;
        iVar7 = pvalidate(uVar20,(ulonglong)uVar11,uVar9);
        rmpFlags(iVar7);
        if (iVar7 != 0) {
          if ((iVar7 != 6) || ((char)uVar11 == '\0')) {
LAB_00e8b94c:
                    // WARNING: Subroutine does not return
            FUN_00e894e0();
          }
          uVar23 = uVar20 + 0x200000;
          bVar2 = false;
          do {
            iVar7 = pvalidate(uVar20,0,uVar9);
            rmpFlags(iVar7);
            if ((iVar7 != 0) || (bVar2)) goto LAB_00e8b94c;
            uVar20 = uVar20 + 0x1000;
            bVar2 = true;
          } while (uVar20 < uVar23);
        }
        uVar11 = (int)uVar16 + 1;
        uVar16 = (ulonglong)uVar11;
      } while (uVar11 <= local_240._2_2_);
    }
    else {
      plVar22 = local_498;
      for (lVar12 = 0xb; lVar12 != 0; lVar12 = lVar12 + -1) {
        *plVar22 = 0;
        plVar22 = plVar22 + 1;
      }
      bVar21 = in_IF & 1;
      in_IF = 0;
      local_498[1] = 1;
      local_4cc = 0;
      local_498[2] = DAT_00ea1018 + 8;
      local_498[0] = DAT_00ea1020;
      puVar17 = (ulonglong *)(DAT_00ea1020 + 0x10);
      uVar11 = 0;
LAB_00e8b840:
      uVar15 = (uint)local_240._2_2_;
      if (uVar11 <= local_240._2_2_) {
        do {
          *(undefined4 *)(lVar3 + 8) = 0;
          puVar10 = &local_240 + (uVar11 + 1);
          puVar13 = puVar17;
          while (uVar11 <= uVar15) {
            uVar16 = *puVar13;
            bVar18 = *(byte *)((longlong)puVar10 + 7) & 1;
            *(byte *)puVar13 = (byte)uVar16 & 0xfc | bVar18;
            uVar11 = uVar11 + 1;
            *(byte *)puVar13 =
                 (byte)uVar16 & 0xf0 | bVar18 |
                 ((*(byte *)((longlong)puVar10 + 6) & 0xf0) == 0x10) << 2;
            *puVar13 = ((ulonglong)(*(byte *)((longlong)puVar10 + 6) & 0xf) << 0x24 |
                       (ulonglong)*(byte *)((longlong)puVar10 + 5) << 0x1c |
                       (ulonglong)*(byte *)((longlong)puVar10 + 4) << 0x14 |
                       (ulonglong)*(byte *)((longlong)puVar10 + 3) << 0xc |
                       (ulonglong)*(byte *)((longlong)puVar10 + 2) << 4 |
                       (ulonglong)(*(byte *)((longlong)puVar10 + 1) >> 4)) << 0xc |
                       (ulonglong)((uint)*puVar13 & 0xfff);
            sVar6 = *(short *)(lVar3 + 8) + 1;
            *(short *)(lVar3 + 8) = sVar6;
            if (sVar6 == 0x1fe) break;
            puVar10 = puVar10 + 1;
            puVar13 = puVar13 + 1;
            uVar15 = (uint)local_240._2_2_;
          }
LAB_00e8b930:
          do {
            iVar7 = FUN_00e89a30();
            if (iVar7 == 0) goto LAB_00e8b840;
            if (local_468 != 0x80001006) {
LAB_00e8b947:
              if (iVar7 != -0xb) goto LAB_00e8b94c;
              goto LAB_00e8b930;
            }
            uVar1 = *(ushort *)(lVar3 + 10);
            if ((*(byte *)(lVar3 + 0x10 + (ulonglong)uVar1 * 8) & 3) != 1) goto LAB_00e8b947;
            local_440[local_4cc] = *(ulonglong *)(lVar3 + 0x10 + (ulonglong)uVar1 * 8);
            local_4cc = local_4cc + 1;
            *(ushort *)(lVar3 + 10) = uVar1 + 1;
          } while ((ushort)(uVar1 + 1) < *(ushort *)(lVar3 + 8));
          uVar15 = (uint)local_240._2_2_;
        } while (uVar11 <= uVar15);
      }
      uVar16 = 0;
      if (local_4cc != 0) {
        do {
          uVar20 = local_440[uVar16];
          uVar23 = local_440[uVar16] >> 0xc;
          uVar9 = uVar23 + 0x200;
          do {
            *(undefined4 *)(lVar3 + 8) = 0;
            puVar17 = (ulonglong *)(lVar3 + 0x10);
            uVar24 = uVar23;
            do {
              uVar23 = uVar24 + 1;
              *puVar17 = uVar24 << 0xc | (ulonglong)((byte)uVar20 & 4) |
                         (ulonglong)((uint)*puVar17 & 0xff0);
              sVar6 = *(short *)(lVar3 + 8) + 1;
              *(short *)(lVar3 + 8) = sVar6;
              if (sVar6 == 0x1fe) break;
              puVar17 = puVar17 + 1;
              uVar24 = uVar23;
            } while (uVar9 != uVar23);
            iVar7 = FUN_00e89a30();
            if (iVar7 != 0) goto LAB_00e8b94c;
          } while (uVar23 < uVar9);
          uVar11 = (int)uVar16 + 1;
          uVar16 = (ulonglong)uVar11;
        } while (uVar11 != local_4cc);
      }
      if (bVar21 != 0) {
        in_IF = 1;
      }
    }
  } while( true );
}



ulonglong FUN_00e8c4c0(void)

{
  ulonglong uVar1;
  ulonglong unaff_RDI;
  
  uVar1 = (ulonglong)((uint)unaff_RDI & 4);
  if ((unaff_RDI & 4) != 0) {
    uVar1 = unaff_RDI & 0xfffffffffffdbc78;
  }
  return uVar1;
}



// WARNING: Removing unreachable block (ram,0x00e8c923)
// WARNING: Removing unreachable block (ram,0x00e8c911)
// WARNING: Removing unreachable block (ram,0x00e8c8eb)
// WARNING: Removing unreachable block (ram,0x00e8c7fd)
// WARNING: Removing unreachable block (ram,0x00e8c7e9)
// WARNING: Removing unreachable block (ram,0x00e8c8b9)
// WARNING: Removing unreachable block (ram,0x00e8c8a9)
// WARNING: Removing unreachable block (ram,0x00e8c605)
// WARNING: Removing unreachable block (ram,0x00e8c5f1)
// WARNING: Removing unreachable block (ram,0x00e8c903)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00e8c5c0(void)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  int *piVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  byte bVar16;
  undefined4 unaff_EBP;
  longlong unaff_RDI;
  undefined4 unaff_R12D;
  undefined4 unaff_R13D;
  undefined4 local_44 [5];
  
  if (unaff_RDI == 0) {
    puVar5 = (uint *)cpuid(0x80000000);
    if (*puVar5 < 0x8000001f) {
      return;
    }
    puVar5 = (uint *)cpuid(0x8000001f);
    if ((*puVar5 & 2) == 0) {
      return;
    }
    puVar5 = (uint *)cpuid(0x80000000);
    if (*puVar5 < 0x8000001f) {
      return;
    }
    puVar5 = (uint *)cpuid(0x8000001f);
    bVar16 = (byte)puVar5[1];
    if ((*puVar5 & 2) == 0) {
      return;
    }
    bVar8 = false;
  }
  else {
    *(undefined4 *)(unaff_RDI + 0x13c) = 0;
    puVar5 = (uint *)cpuid(0x80000000);
    if (*puVar5 < 0x8000001f) {
      return;
    }
    puVar5 = (uint *)cpuid(0x8000001f);
    if ((*puVar5 & 2) == 0) {
      return;
    }
    iVar12 = FUN_00e8d520(puVar5[3],local_44);
    if ((iVar12 == 0) &&
       (piVar13 = (int *)FUN_00e8d620(0x44c5cf26067b1f5f,local_44[0]), piVar13 != (int *)0x0)) {
LAB_00e8c657:
      if (*piVar13 != 0x45444d41) goto LAB_00e8c96c;
      if (((*(int **)(piVar13 + 6) == (int *)0x0) || ((uint)piVar13[8] < 0x1000)) ||
         (0x3f < **(int **)(piVar13 + 6) - 1U)) {
                    // WARNING: Subroutine does not return
        FUN_00e894e0();
      }
      FUN_00e862a0();
      if (DAT_00ea0400 != 0) {
        puVar14 = &DAT_00ea0400;
        bVar8 = false;
        bVar10 = false;
        bVar11 = false;
        do {
          while (bVar9 = bVar11, iVar12 = puVar14[4], iVar12 == 0) {
            unaff_EBP = puVar14[10];
            bVar10 = true;
LAB_00e8c6c8:
            puVar14 = puVar14 + 0xc;
            bVar11 = bVar9;
            if (&DAT_00ea0400 + (ulonglong)DAT_00ea0400 * 0xc == puVar14) goto LAB_00e8c700;
          }
          if (iVar12 == 0x40000000) {
            unaff_R12D = puVar14[10];
            bVar8 = true;
            goto LAB_00e8c6c8;
          }
          if (iVar12 != -0x80000000) goto LAB_00e8c6c8;
          unaff_R13D = puVar14[10];
          puVar14 = puVar14 + 0xc;
          bVar9 = true;
          bVar11 = true;
        } while (&DAT_00ea0400 + (ulonglong)DAT_00ea0400 * 0xc != puVar14);
LAB_00e8c700:
        if (bVar9) {
          _DAT_00ea03e0 = unaff_R13D;
        }
        if (bVar8) {
          _DAT_00ea03e4 = unaff_R12D;
        }
        if (bVar10) {
          _DAT_00ea03e8 = unaff_EBP;
        }
      }
      iVar12 = rmpadjust(0xedb000,0,1);
      rmpFlags(iVar12);
      if (iVar12 != 0) {
        lVar2 = *(longlong *)(piVar13 + 2);
        if ((lVar2 == 0) || (piVar13[4] != 0x1000)) {
                    // WARNING: Subroutine does not return
          FUN_00e894e0();
        }
        if (*(longlong *)(lVar2 + 0x148) == 0) {
                    // WARNING: Subroutine does not return
          FUN_00e894e0();
        }
        cVar1 = *(char *)(lVar2 + 0x15c);
        if (cVar1 == '\0') {
                    // WARNING: Subroutine does not return
          FUN_00e894e0();
        }
        uVar3 = *(ulonglong *)(lVar2 + 0x150);
        DAT_00ea1028 = cVar1;
        if ((uVar3 & 0xfff) != 0) {
                    // WARNING: Subroutine does not return
          FUN_00e894e0();
        }
        uVar15 = (ulonglong)DAT_00ea0400;
        DAT_00ea1018 = uVar3;
        DAT_00ea1020 = uVar3;
        if (DAT_00ea0400 != 0) {
          puVar14 = &DAT_00ea0400;
          do {
            if (puVar14[4] == -0x7fffffe1) {
              puVar14[10] = puVar14[10] | 0x10000000;
            }
            puVar14 = puVar14 + 0xc;
          } while (&DAT_00ea0400 + uVar15 * 0xc != puVar14);
        }
      }
      *(int *)(unaff_RDI + 0x13c) = (int)piVar13;
      puVar5 = (uint *)cpuid(0x80000000);
      uVar6 = puVar5[2];
      uVar7 = puVar5[3];
      if (*puVar5 < 0x8000001f) {
LAB_00e8ca40:
                    // WARNING: Subroutine does not return
        FUN_00e865c0(uVar7,uVar6);
      }
      puVar5 = (uint *)cpuid(0x8000001f);
      bVar16 = (byte)puVar5[1];
      uVar6 = puVar5[2];
      uVar7 = puVar5[3];
      if ((*puVar5 & 2) == 0) goto LAB_00e8ca40;
      bVar8 = true;
    }
    else {
      for (puVar4 = *(undefined8 **)(unaff_RDI + 0x250); puVar4 != (undefined8 *)0x0;
          puVar4 = (undefined8 *)*puVar4) {
        if (*(int *)(puVar4 + 1) == 7) {
          piVar13 = (int *)(ulonglong)*(uint *)(puVar4 + 2);
          if (piVar13 != (int *)0x0) goto LAB_00e8c657;
          break;
        }
      }
      puVar5 = (uint *)cpuid(0x80000000);
      if (*puVar5 < 0x8000001f) {
        return;
      }
      puVar5 = (uint *)cpuid(0x8000001f);
      bVar16 = (byte)puVar5[1];
      if ((*puVar5 & 2) == 0) {
        return;
      }
      bVar8 = false;
    }
  }
  DAT_00ea0270 = rdmsr(0xc0010131);
  if ((DAT_00ea0270 & 1) != 0) {
    if ((DAT_00ea0270 & 2) != 0) {
      wrmsr(0xc0010130,2);
      vmgexit();
      uVar3 = rdmsr(0xc0010130);
      if (((uint)uVar3 & 0xfff) != 1) {
LAB_00e8ca32:
                    // WARNING: Subroutine does not return
        FUN_00e894e0();
      }
      if ((uVar3 >> 0x30 == 0) || (2 < (ushort)(uVar3 >> 0x20))) goto LAB_00e8ca32;
      DAT_00ea1010 = (ushort)(uVar3 >> 0x30);
      if (2 < uVar3 >> 0x30) {
        DAT_00ea1010 = 2;
      }
    }
    if ((DAT_00ea0270 & 4) == 0) {
      if (bVar8) {
LAB_00e8ca26:
                    // WARNING: Subroutine does not return
        FUN_00e865c0();
      }
    }
    else {
      if (DAT_00ea1010 < 2) {
LAB_00e8c96c:
                    // WARNING: Subroutine does not return
        FUN_00e894e0();
      }
      wrmsr(0xc0010130,0x80);
      vmgexit();
      uVar3 = rdmsr(0xc0010130);
      if ((((uint)uVar3 & 0xfff) != 0x81) || ((uVar3 & 0x1000) == 0)) goto LAB_00e8c96c;
      iVar12 = rmpadjust(0xedb000,0,1);
      rmpFlags(iVar12);
      if ((iVar12 != 0) && ((DAT_00ea1028 == '\0' || ((uVar3 >> 0xc & 0x20) == 0)))) {
                    // WARNING: Subroutine does not return
        FUN_00e894e0();
      }
      if ((bVar8) && ((DAT_00ea0270 & 4) == 0)) goto LAB_00e8ca26;
    }
    DAT_00ea0268 = 1L << (bVar16 & 0x3f);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00e8cace)
// WARNING: Removing unreachable block (ram,0x00e8cabe)

undefined8 FUN_00e8cab0(void)

{
  uint *puVar1;
  undefined8 uVar2;
  
  puVar1 = (uint *)cpuid(0x80000000);
  if ((0x8000001e < *puVar1) && (puVar1 = (uint *)cpuid(0x8000001f), (*puVar1 & 2) != 0)) {
    uVar2 = rdmsr(0xc0010131);
    return uVar2;
  }
  return 0;
}



undefined8 FUN_00e8d170(void)

{
  longlong lVar1;
  ulonglong unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong local_98 [13];
  
  if (unaff_RSI <= unaff_RDI) {
    return 1;
  }
  do {
    puVar2 = local_98;
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    uVar3 = unaff_RSI - unaff_RDI;
    uVar4 = (ulonglong)((uint)unaff_RDI & 0x3fffffff);
    if ((unaff_RDI & 0x3fffffff) == 0) {
      if (uVar3 < 0x40000000) {
        puVar2 = local_98;
        for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
          *puVar2 = uVar4;
          puVar2 = puVar2 + 1;
        }
        if (0x1fffff < uVar3) goto LAB_00e8d264;
LAB_00e8d2a0:
        puVar2 = local_98;
        for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
          *puVar2 = 0;
          puVar2 = puVar2 + 1;
        }
        goto LAB_00e8d2ad;
      }
      lVar1 = FUN_00e95320();
      if (lVar1 == 0) {
        lVar1 = 0x40000000;
        goto LAB_00e8d1e0;
      }
      puVar2 = local_98;
      for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar2 = uVar4;
        puVar2 = puVar2 + 1;
      }
LAB_00e8d264:
      lVar1 = FUN_00e95320();
      if (lVar1 != 0) goto LAB_00e8d2a0;
      unaff_RDI = unaff_RDI + 0x200000;
    }
    else {
      if ((unaff_RDI & 0x1fffff) == 0) {
        if (0x1fffff < uVar3) {
          puVar2 = local_98;
          for (lVar1 = 0x18; lVar1 != 0; lVar1 = lVar1 + -1) {
            *(undefined4 *)puVar2 = 0;
            puVar2 = (ulonglong *)((longlong)puVar2 + 4);
          }
          goto LAB_00e8d264;
        }
        puVar2 = local_98;
        for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
          *puVar2 = (ulonglong)((uint)unaff_RDI & 0x1fffff);
          puVar2 = puVar2 + 1;
        }
      }
      else {
        puVar2 = local_98;
        for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
          *puVar2 = 0;
          puVar2 = puVar2 + 1;
        }
        if ((unaff_RDI & 0xfff) != 0) {
          return 0;
        }
      }
LAB_00e8d2ad:
      if ((uVar3 < 0x1000) || (lVar1 = FUN_00e95320(), lVar1 != 0)) {
        return 0;
      }
      lVar1 = 0x1000;
LAB_00e8d1e0:
      unaff_RDI = unaff_RDI + lVar1;
    }
    if (unaff_RSI <= unaff_RDI) {
      return 1;
    }
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x00e8d39f)

void FUN_00e8d330(void)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  
  if (DAT_00ee4001 == '\0') {
    lVar1 = cpuid(0x21);
    iVar3 = FUN_00e85d40(*(undefined4 *)(lVar1 + 0xc),0xc);
    DAT_00ee4001 = '\x01';
    DAT_00ee4000 = iVar3 == 0;
  }
  if (DAT_00ee4000 == '\0') {
    cVar2 = FUN_00e8b450();
    if (cVar2 != '\0') {
      FUN_00e8b570();
      return;
    }
  }
  else {
    cVar2 = FUN_00e8d170();
    if (cVar2 != '\0') {
      return;
    }
    FUN_00e865f0();
  }
                    // WARNING: Subroutine does not return
  FUN_00e865c0();
}



int FUN_00e8d4a0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00e85d90(param_1,4);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00e85d90(param_1,4);
  return 2 - (uint)(iVar1 == 0);
}



undefined8 FUN_00e8d520(undefined8 param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong *unaff_RSI;
  longlong unaff_RDI;
  
  if (unaff_RSI == (ulonglong *)0x0) {
    return 0xffffffea;
  }
  if ((param_2 == (undefined4 *)0x0) ||
     (lVar4 = CONCAT44(*(undefined4 *)(unaff_RDI + 0x1d8),*(undefined4 *)(unaff_RDI + 0x1c4)),
     lVar4 == 0)) {
    return 0xffffffea;
  }
  iVar2 = FUN_00e85d90(param_1,4);
  if (iVar2 == 0) {
    for (puVar1 = *(undefined8 **)(unaff_RDI + 0x250); puVar1 != (undefined8 *)0x0;
        puVar1 = (undefined8 *)*puVar1) {
      if (*(int *)(puVar1 + 1) == 4) {
        if ((puVar1 != (undefined8 *)0xfffffffffffffff0) && (uVar5 = puVar1[4], uVar5 != 0))
        goto LAB_00e8d5b9;
        break;
      }
    }
    uVar5 = *(ulonglong *)(lVar4 + 0x70);
LAB_00e8d5b9:
    *unaff_RSI = uVar5;
    uVar3 = *(undefined4 *)(lVar4 + 0x68);
  }
  else {
    iVar2 = FUN_00e85d90(param_1,4);
    if (iVar2 != 0) {
      return 0xffffffea;
    }
    *unaff_RSI = (ulonglong)*(uint *)(lVar4 + 0x44);
    uVar3 = *(undefined4 *)(lVar4 + 0x40);
  }
  *param_2 = uVar3;
  return 0;
}



ulonglong FUN_00e8d620(undefined8 param_1,uint param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong unaff_RSI;
  ulonglong uVar4;
  longlong lVar5;
  
  bVar2 = false;
  iVar3 = FUN_00e85d90(param_1,4);
  if (iVar3 != 0) {
    bVar2 = true;
    iVar3 = FUN_00e85d90();
    if (iVar3 != 0) {
      return 0;
    }
  }
  if (param_2 != 0) {
    lVar1 = unaff_RSI + (ulonglong)param_2 * 0x14;
    lVar5 = unaff_RSI;
    do {
      if (bVar2) {
        uVar4 = (ulonglong)*(uint *)(lVar5 + 0x10);
      }
      else {
        uVar4 = *(ulonglong *)(unaff_RSI + 0x10);
      }
      iVar3 = FUN_00e85d40();
      if (iVar3 == 0) {
        return uVar4;
      }
      lVar5 = lVar5 + 0x14;
      unaff_RSI = unaff_RSI + 0x18;
    } while (lVar5 != lVar1);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00e8d760(void)

{
  GlobalDescriptorTableRegister();
  InterruptDescriptorTableRegister();
  InterruptDescriptorTableRegister(_DAT_00ea03aa);
  GlobalDescriptorTableRegister(_DAT_00ea03a0);
  return;
}



// WARNING: Type propagation algorithm not settling

ulonglong FUN_00e8da05(undefined8 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  code *pcVar8;
  undefined8 unaff_RSI;
  int *piVar9;
  undefined8 unaff_RDI;
  undefined1 *puVar10;
  longlong lVar11;
  undefined8 uStackY_f8;
  longlong local_98;
  longlong local_90 [3];
  undefined1 *local_78;
  undefined8 local_70;
  int local_62 [2];
  undefined2 uStack_5a;
  undefined2 uStack_58;
  undefined2 uStack_56;
  undefined2 uStack_54;
  undefined2 uStack_52;
  undefined1 local_50 [32];
  
  cVar3 = DAT_00ea03c8;
  iVar1 = *(int *)(&DAT_00e9d928 + (ulonglong)param_2 * 0x40);
  local_90[1] = 0x42be7455607f766c;
  local_90[2] = 0xf72b26dd7e40b93;
  local_98 = 0;
  if (DAT_00ea03c8 == '\0') {
    FUN_00e8d760(&local_98,0,local_50);
  }
  else {
    (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x140))(local_90 + 1,0,&local_98);
  }
  if (local_98 == 0) {
    local_78 = (undefined1 *)0x41a672f496751a3d;
    local_70 = 0x6bae670e5ded94a7;
    local_90[0] = 0;
    if (cVar3 == '\0') {
      FUN_00e8d760(local_90,0,local_50);
    }
    else {
      (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x140))(&local_78,0,local_90);
    }
    if (local_90[0] == 0) {
      return 0x8000000000000003;
    }
    local_62[0] = iVar1 + 0x1a;
    uStack_56 = 0;
    uStack_54 = 6;
    uStack_52 = 0;
    local_62[1] = 0xe;
    uStack_5a = 1;
    uStack_58 = 0;
    if (cVar3 == '\0') {
      uVar4 = FUN_00e8d760(&uStack_58,*(undefined4 *)(&DAT_00e9d920 + (ulonglong)param_2 * 0x40),
                           local_50);
      uVar5 = (ulonglong)(uVar4 & 0x7fffffff) | (ulonglong)((int)uVar4 < 0) << 0x3f;
    }
    else {
      uVar5 = (**(code **)(local_90[0] + 0x18))
                        (local_90[0],*(undefined4 *)(&DAT_00e9d920 + (ulonglong)param_2 * 0x40),
                         &uStack_58);
    }
    lVar11 = local_90[0];
    if (uVar5 != 0) goto LAB_00e8dd56;
  }
  else {
    local_62[0] = iVar1 + 0x1a;
    local_62[1] = 0xe;
    uStack_5a = 1;
    uStack_58 = (undefined2)*(undefined4 *)(&DAT_00e9d920 + (ulonglong)param_2 * 0x40);
    uStack_56 = (undefined2)
                ((uint)*(undefined4 *)(&DAT_00e9d920 + (ulonglong)param_2 * 0x40) >> 0x10);
    uStack_54 = 6;
    uStack_52 = 0;
    lVar11 = local_98;
  }
  if (cVar3 == '\0') {
    pcVar8 = (code *)(ulonglong)*(uint *)(lVar11 + 8);
    local_78 = (undefined1 *)((ulonglong)local_78 & 0xffffffff);
    uVar4 = FUN_00e8d760(&local_78,iVar1 + 0x1a,local_50);
    uVar5 = (ulonglong)(uVar4 & 0x7fffffff) | (ulonglong)((int)uVar4 < 0) << 0x3f;
  }
  else {
    pcVar8 = *(code **)(lVar11 + 0x10);
    uVar5 = (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x40))
                      (2,(longlong)(iVar1 + 0x1a),&local_78);
  }
  if (uVar5 == 0) {
    piVar9 = local_62;
    puVar10 = local_78;
    for (lVar7 = 0x12; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar10 = (char)*piVar9;
      piVar9 = (int *)((longlong)piVar9 + 1);
      puVar10 = puVar10 + 1;
    }
    uVar2 = *(undefined4 *)(&DAT_00e9d924 + (ulonglong)param_2 * 0x40);
    *(int *)(local_78 + 0x16) = iVar1;
    *(undefined4 *)(local_78 + 0x12) = uVar2;
    uVar6 = FUN_00e862a0(0,iVar1);
    if (cVar3 == '\0') {
      uVar4 = FUN_00e8d760(0,0,unaff_RDI,0);
      uVar5 = (ulonglong)(uVar4 & 0x7fffffff) | (ulonglong)((int)uVar4 < 0) << 0x3f;
      FUN_00e8d760();
    }
    else {
      uVar5 = (*pcVar8)(lVar11,0,unaff_RDI,unaff_RSI,local_78,uVar6);
      (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x48))(local_78,uStackY_f8);
    }
    if (uVar5 == 0) {
      return 0;
    }
  }
LAB_00e8dd56:
  FUN_00e91139();
  return uVar5;
}



uint FUN_00e8dd80(void)

{
  undefined8 in_RAX;
  
  return (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),DAT_00ee400e) ^ 1;
}



ulonglong FUN_00e8dd8e(void)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  char *pcVar8;
  longlong unaff_RDI;
  undefined4 local_50;
  undefined4 uStack_4c;
  longlong local_40 [3];
  
  if (unaff_RDI != 0) {
    lVar6 = FUN_00e85dd0();
    cVar1 = DAT_00ea03c8;
    if (DAT_00ea03c8 == '\0') {
      uStack_4c = 0;
      uVar4 = FUN_00e8d760(&local_50,lVar6 + 1,local_40);
      uVar7 = (ulonglong)(uVar4 & 0x7fffffff) | (ulonglong)((int)uVar4 < 0) << 0x3f;
    }
    else {
      uVar7 = (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x40))(2,lVar6 + 1,&local_50);
    }
    if (uVar7 == 0) {
      FUN_00e862a0();
      *(undefined1 *)(CONCAT44(uStack_4c,local_50) + lVar6) = 0;
      pcVar8 = (char *)FUN_00e87160();
      while ((*pcVar8 != '\0' &&
             ((pcVar8 = (char *)FUN_00e87460(), local_40[0] != 0 ||
              (iVar5 = FUN_00e85d60(), iVar5 != 0))))) {
        iVar5 = FUN_00e85d60();
        if (iVar5 == 0) {
          DAT_00ee4009 = 1;
        }
        else {
          iVar5 = FUN_00e85d60();
          if (iVar5 == 0) {
            DAT_00ea03cc = 3;
          }
          else {
            iVar5 = FUN_00e85d60();
            if (iVar5 == 0) {
              DAT_00ee400f = 1;
            }
            else {
              iVar5 = FUN_00e85d60();
              if (iVar5 == 0) {
                DAT_00ee4040 = 1;
              }
              else {
                iVar5 = FUN_00e85d60();
                if ((iVar5 == 0) && (local_40[0] != 0)) {
                  cVar2 = FUN_00e873d0();
                  if (cVar2 == '\0') {
                    cVar2 = FUN_00e873d0();
                    if (cVar2 != '\0') {
                      DAT_00ee4004 = 0xffffffff;
                    }
                  }
                  else {
                    DAT_00ee4004 = 1;
                  }
                }
                else {
                  iVar5 = FUN_00e85d60();
                  if ((iVar5 == 0) && (local_40[0] != 0)) {
                    DAT_00ee400a = FUN_00e873d0();
                    bVar3 = FUN_00e873d0();
                    DAT_00ee4008 = DAT_00ee4008 | bVar3;
                    DAT_00ee400e = FUN_00e873d0();
                    cVar2 = FUN_00e873d0();
                    if (cVar2 != '\0') {
                      DAT_00ee400d = 1;
                    }
                    cVar2 = FUN_00e873d0();
                    if (cVar2 != '\0') {
                      DAT_00ee400d = 0;
                    }
                    cVar2 = FUN_00e873d0();
                    if (cVar2 != '\0') {
                      DAT_00ea03cc = 10;
                    }
                  }
                  else {
                    iVar5 = FUN_00e85d60();
                    if ((iVar5 == 0) && (local_40[0] != 0)) {
                      FUN_00e85f40();
                      iVar5 = FUN_00e85d90();
                      if (iVar5 == 0) {
                        FUN_00e85f40();
                        FUN_00e8f860();
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (cVar1 == '\0') {
        FUN_00e8d760(CONCAT44(uStack_4c,local_50),local_40);
      }
      else {
        (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x48))();
      }
      uVar7 = 0;
    }
    return uVar7;
  }
  return 0;
}



undefined8 FUN_00e8e0df(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  short sVar3;
  uint *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint *unaff_RSI;
  undefined8 *unaff_RDI;
  
  puVar4 = (uint *)*unaff_RDI;
  if (((puVar4 != (uint *)0x0) && (5 < *unaff_RSI)) && ((*puVar4 & 0xffffe0f6) == 0)) {
    pbVar7 = (byte *)((longlong)puVar4 + 6);
    uVar5 = (ulonglong)*unaff_RSI - 6;
    do {
      if (uVar5 < 2) {
        return param_2;
      }
      sVar3 = *(short *)pbVar7;
      uVar5 = uVar5 - 2;
      pbVar7 = pbVar7 + 2;
      pbVar8 = pbVar7;
    } while (sVar3 != 0);
    do {
      if (uVar5 < 4) {
        return param_2;
      }
      uVar6 = (ulonglong)*(ushort *)(pbVar8 + 2);
      bVar2 = *pbVar8;
      pbVar1 = pbVar8 + 1;
      if (*(ushort *)(pbVar8 + 2) < 4) {
        return param_2;
      }
      if (uVar5 < uVar6) {
        return param_2;
      }
      pbVar8 = pbVar8 + uVar6;
      uVar5 = uVar5 - uVar6;
    } while (((~bVar2 & 0x7f) != 0) || (*pbVar1 != 0xff));
    if (pbVar8 == pbVar7 + (ushort)puVar4[1]) {
      if (uVar5 == 0) {
        pbVar8 = (byte *)0x0;
      }
      if (DAT_00ee400c == '\0') {
        DAT_00ee400c = '\x01';
        FUN_00e91139();
      }
      if (DAT_00ee400b == '\0') {
        DAT_00ee400b = '\x01';
        FUN_00e91139();
      }
      *unaff_RDI = pbVar8;
      *unaff_RSI = (uint)uVar5;
    }
  }
  return param_2;
}



ulonglong FUN_00e8e1d2(void)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ushort *puVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  int *unaff_RSI;
  longlong unaff_RDI;
  ushort *puVar10;
  ushort *puVar11;
  int iVar12;
  ulonglong local_48;
  undefined1 local_40 [24];
  
  cVar3 = DAT_00ea03c8;
  if (DAT_00ea03c8 == '\0') {
    puVar5 = (ushort *)(ulonglong)*(uint *)(unaff_RDI + 0x1c);
    uVar9 = *(uint *)(unaff_RDI + 0x18);
  }
  else {
    puVar5 = *(ushort **)(unaff_RDI + 0x38);
    uVar9 = *(uint *)(unaff_RDI + 0x30);
  }
  local_48 = 0;
  if (uVar9 != 0) {
    FUN_00e8da05();
  }
  iVar12 = 0;
  FUN_00e8e0df();
  iVar4 = iVar12;
  if ((puVar5 != (ushort *)0x0) && (uVar9 = uVar9 >> 1, iVar4 = 0, uVar9 != 0)) {
    bVar2 = false;
    iVar4 = 0;
    puVar10 = puVar5;
    do {
      uVar7 = uVar9 - 1;
      uVar1 = *puVar10;
      puVar11 = puVar10 + 1;
      if (uVar1 < 0x80) {
        if ((uVar1 == 0) || (uVar1 == 10)) break;
        if (uVar1 == 0x22) {
          bVar2 = (bool)(bVar2 ^ 1);
        }
        else if ((!bVar2) && (((&DAT_00e96260)[uVar1] & 0x20) != 0)) {
          iVar12 = iVar4;
        }
        iVar4 = iVar4 + 1;
LAB_00e8e2de:
        puVar10 = puVar11;
        uVar9 = uVar7;
        if (0x7ff < iVar4) {
          FUN_00e91139();
          iVar4 = iVar12;
          break;
        }
      }
      else {
        iVar4 = (iVar4 + 3) - (uint)(uVar1 < 0x800);
        if ((uVar1 & 0xfc00) != 0xd800) goto LAB_00e8e2de;
        if (uVar7 != 0) {
          if ((puVar10[1] & 0xfc00) == 0xdc00) {
            iVar4 = iVar4 + 1;
            uVar7 = uVar9 - 2;
            puVar11 = puVar10 + 2;
          }
          goto LAB_00e8e2de;
        }
        iVar4 = iVar4 + -3;
        puVar10 = puVar11;
        uVar9 = uVar7;
      }
    } while (uVar9 != 0);
  }
  iVar12 = iVar4 + 1;
  if (cVar3 == '\0') {
    local_48 = local_48 & 0xffffffff;
    uVar9 = FUN_00e8d760(&local_48,iVar12,local_40);
    uVar6 = (ulonglong)(uVar9 & 0x7fffffff) | (ulonglong)((int)uVar9 < 0) << 0x3f;
  }
  else {
    uVar6 = (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x40))(2,(longlong)iVar12,&local_48);
  }
  uVar8 = 0;
  if (uVar6 == 0) {
    FUN_00e91fa2(iVar4,"%.*ls",puVar5);
    *unaff_RSI = iVar12;
    uVar8 = local_48;
  }
  return uVar8;
}



ulonglong FUN_00e8e3a7(undefined8 param_1,code *param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 in_R11;
  undefined8 *local_48;
  undefined1 local_40 [24];
  
  if (DAT_00ee400d != '\0') {
    FUN_00e909d5();
  }
  uVar3 = FUN_00e90605();
  if (uVar3 == 0) {
    uVar3 = (*param_2)();
    cVar1 = DAT_00ea03c8;
    if (uVar3 == 0) {
      if (DAT_00ea03c8 == '\0') {
        uVar2 = FUN_00e8d760(local_40,local_48[3]);
        uVar3 = (ulonglong)(uVar2 & 0x7fffffff) | (ulonglong)((int)uVar2 < 0) << 0x3f;
      }
      else {
        uVar3 = (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0xe8))();
      }
      if (uVar3 == 0x8000000000000002) {
        *local_48 = local_48[4];
        if (cVar1 == '\0') {
          *(undefined4 *)((longlong)local_48 + 0xc) = 0;
          *(undefined4 *)((longlong)local_48 + 0x1c) = 0;
          uVar2 = FUN_00e8d760(local_48 + 3,local_48 + 5,local_48 + 1,local_48 + 2);
          uVar3 = (ulonglong)(uVar2 & 0x7fffffff) | (ulonglong)((int)uVar2 < 0) << 0x3f;
        }
        else {
          uVar3 = (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x38))
                            (local_48,local_48 + 5,local_48 + 3,local_48 + 1,local_48 + 2,in_R11);
        }
        if ((uVar3 == 0) && (uVar3 = (*param_2)(), uVar3 == 0)) {
          if (cVar1 == '\0') {
            uVar2 = FUN_00e8d760(local_40,local_48[3]);
            uVar3 = (ulonglong)(uVar2 & 0x7fffffff) | (ulonglong)((int)uVar2 < 0) << 0x3f;
          }
          else {
            uVar3 = (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0xe8))();
          }
        }
      }
    }
    else if (DAT_00ea03c8 == '\0') {
      FUN_00e8d760(local_48,local_40);
    }
    else {
      (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x48))();
    }
  }
  return uVar3;
}



ulonglong FUN_00e8e580(undefined8 param_1)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  if (DAT_00ea03c8 == '\0') {
    uVar2 = (ulonglong)*(uint *)(DAT_00ee4058 + 0x44);
    iVar4 = *(int *)(DAT_00ee4058 + 0x40);
  }
  else {
    uVar2 = *(ulonglong *)(DAT_00ee4058 + 0x70);
    iVar4 = *(int *)(DAT_00ee4058 + 0x68);
  }
  bVar5 = DAT_00ea03c8 == '\0';
  iVar3 = 0;
  while( true ) {
    if (iVar4 <= iVar3) {
      return 0;
    }
    iVar1 = FUN_00e85d40(param_1,0x10);
    if (iVar1 == 0) break;
    uVar2 = uVar2 + (-(ulonglong)bVar5 & 0xfffffffffffffffc) + 0x18;
    iVar3 = iVar3 + 1;
  }
  if (DAT_00ea03c8 != '\0') {
    return *(ulonglong *)(uVar2 + 0x10);
  }
  return (ulonglong)*(uint *)(uVar2 + 0x10);
}



ulonglong FUN_00e8e63d(undefined8 *param_1)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong unaff_RDI;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_60;
  ulonglong local_58;
  undefined1 local_50 [32];
  
  cVar1 = DAT_00ea03c8;
  local_88 = 0x4f3d68fc5568e427;
  local_80 = 0x68cc315255ca74ac;
  if (DAT_00ee400f == '\0') {
    local_78 = (undefined8 *)&DAT_403efcb34006c0c1;
    local_70 = 0x6de024876c4a6d99;
    local_a0 = &DAT_00e9d900;
    if (DAT_00ea03c8 == '\0') {
      uStack_8c = 0;
      uVar2 = FUN_00e8d760(&local_90,&local_a0);
      if (uVar2 == 0) {
        uStack_94 = 0;
        uVar2 = FUN_00e8d760(&local_98,&local_78,local_50);
        uVar3 = (ulonglong)(uVar2 & 0x7fffffff) | (ulonglong)((int)uVar2 < 0) << 0x3f;
        goto LAB_00e8e79c;
      }
      uVar3 = (ulonglong)(uVar2 & 0x7fffffff) | (ulonglong)((int)uVar2 < 0) << 0x3f;
LAB_00e8e8e8:
      if (uVar3 == 0x800000000000000e) {
        if (((unaff_RDI == 0) || (uVar3 = FUN_00e8ee6b(), uVar3 == 0x8000000000000003)) ||
           (uVar3 == 0x8000000000000006)) goto LAB_00e8ea68;
        if (uVar3 == 0) {
LAB_00e8e963:
          FUN_00e91139();
LAB_00e8e968:
          if (cVar1 == '\0') {
            local_78 = (undefined8 *)((ulonglong)local_78 & 0xffffffff);
            uVar2 = FUN_00e8d760(&local_78,0x10,local_50);
            uVar3 = (ulonglong)(uVar2 & 0x7fffffff) | (ulonglong)((int)uVar2 < 0) << 0x3f;
          }
          else {
            uVar3 = (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x40))(2,0x10,&local_78);
          }
          if (uVar3 == 0) {
            *local_78 = local_60;
            lVar4 = DAT_00ee4058;
            local_78[1] = local_58;
            if (cVar1 == '\0') {
              uVar2 = FUN_00e8d760(local_50);
              if (uVar2 == 0) goto LAB_00e8ea15;
              uVar3 = (ulonglong)(uVar2 & 0x7fffffff) | (ulonglong)((int)uVar2 < 0) << 0x3f;
              FUN_00e8d760();
            }
            else {
              uVar3 = (**(code **)(*(longlong *)(lVar4 + 0x60) + 0xc0))(&local_88);
              if (uVar3 == 0) {
LAB_00e8ea15:
                if (param_1 != (undefined8 *)0x0) {
                  *param_1 = local_78;
                }
                goto LAB_00e8ea68;
              }
              (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x48))(local_78);
            }
          }
          FUN_00e90975();
        }
      }
    }
    else {
      uVar3 = (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0xb8))
                        (&local_78,&local_a0,&local_90);
      if (uVar3 != 0) goto LAB_00e8e8e8;
      uVar3 = (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x98))
                        (CONCAT44(uStack_8c,local_90),&local_78);
LAB_00e8e79c:
      if (uVar3 != 0) goto LAB_00e8e8e8;
      local_58 = 0;
      if (cVar1 == '\0') {
        uVar2 = FUN_00e8d760(0,local_a0,&local_58,0);
        uVar3 = (ulonglong)(uVar2 & 0x7fffffff) | (ulonglong)((int)uVar2 < 0) << 0x3f;
      }
      else {
        uVar3 = (**(code **)CONCAT44(uStack_94,local_98))();
      }
      if (uVar3 == 0x8000000000000005) {
        uVar3 = FUN_00e908ca();
        if (uVar3 != 0) goto LAB_00e8e8e8;
        if (cVar1 == '\0') {
          local_58 = local_58 & 0xffffffff;
          uVar2 = FUN_00e8d760(0,local_a0,&local_58);
          uVar3 = (ulonglong)(uVar2 & 0x7fffffff) | (ulonglong)((int)uVar2 < 0) << 0x3f;
        }
        else {
          uVar3 = (**(code **)CONCAT44(uStack_94,local_98))
                            ((undefined8 *)CONCAT44(uStack_94,local_98),local_a0,0,&local_58,
                             local_60,0);
        }
        if (uVar3 != 0) {
          FUN_00e90975();
          goto LAB_00e8e80d;
        }
        FUN_00e91139();
        if ((local_58 != 0) && (lVar4 = FUN_00e8da05(), lVar4 == 0)) goto LAB_00e8e963;
        goto LAB_00e8e968;
      }
LAB_00e8e80d:
      uVar3 = 0x8000000000000001;
    }
    FUN_00e91139();
  }
  else {
LAB_00e8ea68:
    uVar3 = 0;
  }
  return uVar3;
}



ulonglong FUN_00e8eabd(void)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_RDI;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [32];
  
  cVar1 = DAT_00ea03c8;
  if (DAT_00ea03c8 == '\0') {
    uVar4 = (ulonglong)*(uint *)(DAT_00ee4058 + 0x24);
    if (*(uint *)(DAT_00ee4058 + 0x24) == 0) {
      return 0x8000000000000003;
    }
    uStack_6c = 0;
    local_60 = CONCAT44(local_60._4_4_,*(undefined4 *)(uVar4 + 8));
    uVar2 = FUN_00e8d760(0,0,0,&local_70);
    if (uVar2 != 0) {
      return (ulonglong)(uVar2 & 0x7fffffff) | (ulonglong)((int)uVar2 < 0) << 0x3f;
    }
    uVar2 = FUN_00e8d760((int)unaff_RDI * 10,2,(ulonglong)(unaff_RDI * 10) >> 0x20,local_50);
    uVar3 = (ulonglong)(uVar2 & 0x7fffffff) | (ulonglong)((int)uVar2 < 0) << 0x3f;
  }
  else {
    uVar4 = *(ulonglong *)(DAT_00ee4058 + 0x30);
    if (uVar4 == 0) {
      return 0x8000000000000003;
    }
    local_60 = *(undefined8 *)(uVar4 + 0x10);
    uVar3 = (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x50))(0x80000000,0,0,0,&local_70);
    if (uVar3 != 0) {
      return uVar3;
    }
    uVar3 = (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x58))
                      (CONCAT44(uStack_6c,local_70),2,unaff_RDI * 10);
  }
  if (uVar3 != 0) {
    return uVar3;
  }
  if (cVar1 == '\0') {
    local_60 = CONCAT44(local_70,(undefined4)local_60);
    uStack_64 = 0;
    uVar2 = FUN_00e8d760(&local_68,&local_60,local_50);
    if (uVar2 == 0) goto LAB_00e8ec3d;
LAB_00e8ecd1:
    uVar3 = (ulonglong)(uVar2 & 0x7fffffff) | (ulonglong)((int)uVar2 < 0) << 0x3f;
LAB_00e8ecd6:
    FUN_00e8d760();
  }
  else {
    local_58 = CONCAT44(uStack_6c,local_70);
    uVar3 = (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x60))(2,&local_60,&local_68);
    if (uVar3 == 0) {
LAB_00e8ec3d:
      if (CONCAT44(uStack_64,local_68) == 0) {
        if (cVar1 == '\0') {
          uVar2 = FUN_00e8d760(local_50);
          goto LAB_00e8ecd1;
        }
        uVar3 = (**(code **)(uVar4 + 8))(uVar4);
      }
      else {
        uVar3 = 0x8000000000000012;
        if (cVar1 == '\0') goto LAB_00e8ecd6;
      }
    }
    (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x70))(CONCAT44(uStack_6c,local_70));
  }
  return uVar3;
}



ulonglong FUN_00e8ee6b(ulonglong param_1,int param_2,ulonglong param_3,longlong *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  short sVar3;
  ushort uVar4;
  longlong lVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ushort *puVar13;
  ulonglong uVar14;
  longlong unaff_RDI;
  longlong *plVar15;
  longlong lVar16;
  bool bVar17;
  longlong *local_res8;
  ulonglong local_350;
  uint local_2fc;
  ulonglong local_2f8;
  ulonglong local_2f0;
  longlong local_2e8;
  char *local_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  ulonglong local_2c8 [5];
  longlong local_2a0 [3];
  longlong local_288;
  ulonglong local_280;
  ushort local_238 [260];
  
  cVar6 = DAT_00ea03c8;
  if (DAT_00ea03c8 == '\0') {
    uVar14 = (ulonglong)*(uint *)(unaff_RDI + 0x1c);
    local_2fc = *(uint *)(unaff_RDI + 0x18);
  }
  else {
    uVar14 = *(ulonglong *)(unaff_RDI + 0x38);
    local_2fc = *(uint *)(unaff_RDI + 0x30);
  }
  local_2f0 = 0;
  if ((param_4 == (longlong *)0x0) || (local_res8 == (longlong *)0x0)) {
    uVar14 = 0x8000000000000002;
  }
  else {
    plVar15 = param_4;
    FUN_00e8e0df();
    local_2fc = local_2fc >> 1;
    local_2e8 = 0;
    uVar2 = (-(ulonglong)(DAT_00ee400a == '\0') & 0x100001) - 1;
    iVar9 = param_2 / 2;
    local_2f8 = uVar14;
    lVar16 = 0;
    do {
      while( true ) {
        if ((int)local_2fc <= iVar9) goto LAB_00e8f73d;
        iVar8 = FUN_00e85d40(uVar14,(longlong)param_2);
        uVar14 = uVar14 + 2;
        if (iVar8 == 0) break;
        iVar9 = iVar9 + 1;
      }
      lVar11 = (longlong)iVar9;
      do {
        iVar9 = (int)lVar11;
        if ((int)local_2fc <= iVar9) break;
        sVar3 = *(short *)(local_2f8 + lVar11 * 2);
        lVar11 = lVar11 + 1;
      } while ((sVar3 == 0x2f) || (sVar3 == 0x5c));
      lVar11 = (longlong)iVar9;
      puVar13 = local_238;
      while( true ) {
        iVar8 = (int)lVar11;
        if ((iVar9 + 0xff == iVar8) || ((int)local_2fc <= iVar8)) goto LAB_00e8efed;
        uVar4 = *(ushort *)(local_2f8 + lVar11 * 2);
        if ((uVar4 < 0x21) && ((0x100000401U >> ((ulonglong)uVar4 & 0x3f) & 1) != 0)) break;
        *puVar13 = uVar4;
        puVar13 = puVar13 + 1;
        lVar11 = lVar11 + 1;
      }
      iVar8 = iVar8 + 1;
LAB_00e8efed:
      *puVar13 = 0;
      if (iVar8 == 0) break;
      uVar14 = local_2f8 + (longlong)iVar8 * 2;
      local_2fc = local_2fc - iVar8;
      local_2c8[0] = 0x4ad2c70f05c99a21;
      local_2c8[1] = 0x1ef54333df355f8a;
      local_2c8[2] = 0x11d26459964e5b22;
      local_2c8[3] = 0x3b7269c9a000398e;
      if (CONCAT44(DAT_00ee4010._4_4_,(undefined4)DAT_00ee4010) == 0) {
        if (cVar6 == '\0') {
          DAT_00ee4010._4_4_ = 0;
          iVar9 = FUN_00e8d760(&DAT_00ee4010,0);
          bVar17 = iVar9 == 0;
        }
        else {
          lVar11 = (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x140))(local_2c8,0);
          bVar17 = lVar11 == 0;
        }
        uVar12 = 0x8000000000000003;
        if (bVar17) goto LAB_00e8f061;
      }
      else {
LAB_00e8f061:
        cVar7 = DAT_00ea03c8;
        if (DAT_00ea03c8 == '\0') {
          local_2e0 = (char *)FUN_00e8d760(local_238,local_2a0);
          uStack_2cc = 0;
          uVar10 = FUN_00e8d760(&local_2d0,&local_2e0);
          uVar12 = (ulonglong)(uVar10 & 0x7fffffff) | (ulonglong)((int)uVar10 < 0) << 0x3f;
        }
        else {
          local_2e0 = (char *)(**(code **)(CONCAT44(DAT_00ee4010._4_4_,(undefined4)DAT_00ee4010) + 8
                                          ))();
          uVar12 = (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0xb8))(local_2c8 + 2);
        }
        if (uVar12 == 0) {
          if (cVar7 == '\0') {
            uStack_2d4 = 0;
            iVar9 = FUN_00e8d760(&local_2d8,local_2c8 + 2);
            bVar17 = iVar9 == 0;
          }
          else {
            lVar11 = (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x98))
                               (CONCAT44(uStack_2cc,local_2d0));
            bVar17 = lVar11 == 0;
          }
          if (bVar17) {
            if ((*local_2e0 == '\x04') && (local_2e0[1] == '\x04')) {
              uVar12 = (ulonglong)*(ushort *)(local_2e0 + 2) - 4;
              if (0x200 < uVar12) {
                uVar12 = 0x200;
              }
              FUN_00e862a0(0x200,uVar12);
              if (cVar7 == '\0') {
                local_2f0 = local_2f0 & 0xffffffff;
                uVar10 = FUN_00e8d760(local_2a0,&local_2f0);
                uVar12 = (ulonglong)(uVar10 & 0x7fffffff) | (ulonglong)((int)uVar10 < 0) << 0x3f;
              }
              else {
                uVar12 = (**(code **)(CONCAT44(uStack_2d4,local_2d8) + 8))
                                   (CONCAT44(uStack_2d4,local_2d8));
              }
              if (uVar12 != 0) {
                FUN_00e91139();
              }
            }
            else {
              uVar12 = 0x8000000000000001;
              FUN_00e91139();
            }
            goto LAB_00e8f2b4;
          }
        }
        uVar12 = 0x800000000000000e;
      }
LAB_00e8f2b4:
      if ((uVar12 == 0x8000000000000003) || (uVar12 == 0x800000000000000e)) {
        local_2c8[2] = 0x11d26459964e5b22;
        local_2c8[3] = 0x3b7269c9a000398e;
        if (cVar6 == '\0') {
          plVar15 = (longlong *)(ulonglong)*(uint *)(unaff_RDI + 0xc);
          local_2c8[0] = local_2c8[0] & 0xffffffff;
          uVar10 = FUN_00e8d760(local_2c8,local_2c8 + 2);
          uVar12 = (ulonglong)(uVar10 & 0x7fffffff) | (ulonglong)((int)uVar10 < 0) << 0x3f;
        }
        else {
          uVar12 = (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x98))
                             (*(undefined8 *)(unaff_RDI + 0x18));
        }
        if (uVar12 == 0) {
          if (cVar6 == '\0') {
            local_2f0 = local_2f0 & 0xffffffff;
            uVar10 = FUN_00e8d760(local_2a0,&local_2f0);
            uVar12 = (ulonglong)(uVar10 & 0x7fffffff) | (ulonglong)((int)uVar10 < 0) << 0x3f;
          }
          else {
            uVar12 = (**(code **)(local_2c8[0] + 8))(local_2c8[0]);
          }
          if (uVar12 == 0) goto LAB_00e8f3d4;
        }
        FUN_00e91139();
        goto LAB_00e8f7b6;
      }
      if (uVar12 != 0) goto LAB_00e8f7b6;
LAB_00e8f3d4:
      local_2c8[2] = 0x11d26d3f09576e92;
      local_2c8[3] = 0x3b7269c9a000398e;
      for (puVar13 = local_238; *puVar13 != 0; puVar13 = puVar13 + 1) {
        if (*puVar13 == 0x2f) {
          *puVar13 = 0x5c;
        }
      }
      if (cVar6 == '\0') {
        uStack_2cc = 0;
        uVar10 = FUN_00e8d760(local_238,&local_2d0,1,0);
        uVar12 = (ulonglong)(uVar10 & 0x7fffffff) | (ulonglong)((int)uVar10 < 0) << 0x3f;
      }
      else {
        uVar12 = (**(code **)(local_2f0 + 8))(local_2f0,&local_2d0,local_238,1,0,plVar15);
      }
      if (uVar12 != 0) {
        FUN_00e91139();
LAB_00e8f78a:
        if (cVar6 == '\0') {
          FUN_00e8d760();
        }
        else {
          (**(code **)(local_2f0 + 0x10))(local_2f0);
        }
LAB_00e8f7b6:
        FUN_00e90975();
        return uVar12;
      }
      local_2c8[0] = 0x250;
      plVar15 = &local_288;
      if (cVar6 == '\0') {
        plVar15 = local_2a0;
        uVar10 = FUN_00e8d760(local_2c8,local_2c8 + 2);
        uVar12 = (ulonglong)(uVar10 & 0x7fffffff) | (ulonglong)((int)uVar10 < 0) << 0x3f;
      }
      else {
        uVar12 = (**(code **)(CONCAT44(uStack_2cc,local_2d0) + 0x40))
                           (CONCAT44(uStack_2cc,local_2d0),local_2c8 + 2,local_2c8);
      }
      lVar11 = local_2e8;
      if (uVar12 != 0) {
        FUN_00e91139();
        if (cVar6 == '\0') {
LAB_00e8f783:
          FUN_00e8d760();
        }
        else {
          (**(code **)(CONCAT44(uStack_2cc,local_2d0) + 0x10))(CONCAT44(uStack_2cc,local_2d0));
        }
        goto LAB_00e8f78a;
      }
      lVar5 = CONCAT44(uStack_2cc,local_2d0);
      lVar1 = lVar16 + local_280;
      local_350 = local_280;
      if ((lVar16 - 1U | 0xfff) + 1 < (lVar1 - 1U | 0xfff) + 1) {
        if ((param_3 <= param_1) ||
           (uVar12 = FUN_00e908ca(param_3,param_1), uVar12 == 0x8000000000000009)) {
          uVar12 = FUN_00e908ca();
        }
        if (uVar12 != 0) {
          FUN_00e91139();
LAB_00e8f72a:
          if (cVar6 == '\0') goto LAB_00e8f783;
          (**(code **)(lVar5 + 0x10))(lVar5);
          goto LAB_00e8f78a;
        }
        if (lVar11 != 0) {
          FUN_00e862a0();
          FUN_00e90975();
        }
      }
      lVar16 = lVar16 + local_2e8;
      for (; local_350 != 0; local_350 = local_350 - local_2c8[2]) {
        local_2c8[2] = local_350;
        if (uVar2 <= local_350) {
          local_2c8[2] = uVar2;
        }
        if (cVar6 == '\0') {
          uVar10 = FUN_00e8d760(lVar16,local_2c8 + 2,local_2a0);
          uVar12 = (ulonglong)(uVar10 & 0x7fffffff) | (ulonglong)((int)uVar10 < 0) << 0x3f;
        }
        else {
          uVar12 = (**(code **)(lVar5 + 0x20))(lVar5,local_2c8 + 2,lVar16);
        }
        if (uVar12 != 0) {
          FUN_00e91139();
          goto LAB_00e8f72a;
        }
        lVar16 = lVar16 + local_2c8[2];
      }
      if (cVar6 == '\0') {
        FUN_00e8d760();
        FUN_00e8d760();
      }
      else {
        (**(code **)(lVar5 + 0x10))(lVar5);
        (**(code **)(local_2f0 + 0x10))(local_2f0);
      }
      lVar16 = lVar1;
      iVar9 = param_2 / 2;
      local_2f8 = uVar14;
    } while (0 < iVar8);
LAB_00e8f73d:
    uVar14 = 0x8000000000000006;
    *param_4 = local_2e8;
    *local_res8 = lVar16;
    if (lVar16 != 0) {
      uVar14 = 0;
    }
  }
  return uVar14;
}



bool FUN_00e8f7e4(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = FUN_00e85f40();
  iVar2 = FUN_00e85d90(param_1,uVar1);
  return iVar2 == 0;
}



int FUN_00e8f814(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  int unaff_EDI;
  
  iVar2 = 0x20;
  if (unaff_EDI == 2) {
    iVar2 = 0;
    uVar3 = (uint)unaff_RSI | (uint)((ulonglong)unaff_RSI >> 0x20) | (uint)param_2 |
            (uint)((ulonglong)param_2 >> 0x20);
    if (uVar3 != 0) {
      uVar4 = (ulonglong)uVar3;
      lVar1 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar2 = 0;
      for (; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x8000000000000000) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = ((int)lVar1 + 1) - iVar2;
    }
  }
  return iVar2;
}



void FUN_00e8f840(undefined8 param_1,char *param_2)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  char *unaff_RSI;
  uint unaff_EDI;
  
  if (unaff_EDI == 0) {
    *param_2 = '\0';
    *unaff_RSI = '\0';
    return;
  }
  cVar2 = '\0';
  for (uVar3 = (ulonglong)unaff_EDI; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x8000000000000000) {
    cVar2 = cVar2 + '\x01';
  }
  lVar1 = 0x3f;
  if ((ulonglong)unaff_EDI != 0) {
    for (; unaff_EDI >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  *unaff_RSI = cVar2;
  *param_2 = ((char)lVar1 + '\x01') - cVar2;
  return;
}



void FUN_00e8f860(void)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  char *pcVar6;
  undefined4 uVar7;
  char *unaff_RDI;
  char *local_40;
  
LAB_00e8f87c:
  do {
    if (*unaff_RDI == '\0') {
      return;
    }
    cVar1 = FUN_00e8f7e4();
    if (cVar1 != '\0') {
      lVar5 = FUN_00e85f40();
      pcVar6 = unaff_RDI + lVar5;
      uVar3 = FUN_00e85e40();
      local_40 = pcVar6;
      if ((*pcVar6 == '\0') || (local_40 = pcVar6 + 1, *pcVar6 == ',')) {
        DAT_00ee4020 = 1;
        unaff_RDI = local_40;
        DAT_00ee4024 = uVar3;
        goto LAB_00e8f87c;
      }
    }
    if ((int)*unaff_RDI - 0x30U < 10) {
      uVar3 = FUN_00e85e40();
      local_40 = unaff_RDI + 1;
      if ((*unaff_RDI != 'x') || (9 < (int)unaff_RDI[1] - 0x30U)) goto LAB_00e8f924;
      uVar4 = FUN_00e85e40();
      uVar7 = 0xffffffff;
      if (*local_40 == '-') {
        local_40 = unaff_RDI + 2;
        cVar1 = FUN_00e8f7e4();
        if (cVar1 != '\0') {
          lVar5 = FUN_00e85f40();
          uVar7 = 0;
          local_40 = local_40 + lVar5;
          goto LAB_00e8f9ea;
        }
        cVar1 = FUN_00e8f7e4();
        if (cVar1 != '\0') {
          lVar5 = FUN_00e85f40();
          uVar7 = 1;
          local_40 = local_40 + lVar5;
          goto LAB_00e8f9ea;
        }
        if (9 < (int)*local_40 - 0x30U) goto LAB_00e8f924;
        uVar2 = FUN_00e85e40();
        uVar7 = 0xffffffff;
      }
      else {
LAB_00e8f9ea:
        uVar2 = 0;
      }
      if ((*local_40 != '\0') && (cVar1 = *local_40, local_40 = local_40 + 1, cVar1 != ','))
      goto LAB_00e8f924;
      DAT_00ee4020 = 2;
      unaff_RDI = local_40;
      DAT_00ee4024 = uVar3;
      DAT_00ee4028 = uVar4;
      DAT_00ee402c = uVar7;
      DAT_00ee4030 = uVar2;
    }
    else {
LAB_00e8f924:
      cVar1 = FUN_00e8f7e4();
      if (cVar1 == '\0') {
LAB_00e8fa5b:
        cVar1 = FUN_00e8f7e4();
        if (cVar1 == '\0') {
LAB_00e8faa7:
          do {
            cVar1 = *unaff_RDI;
            if (cVar1 == '\0') break;
            unaff_RDI = unaff_RDI + 1;
          } while (cVar1 != ',');
        }
        else {
          lVar5 = FUN_00e85f40();
          pcVar6 = unaff_RDI + lVar5;
          if (*pcVar6 != '\0') {
            if (*pcVar6 != ',') goto LAB_00e8faa7;
            pcVar6 = pcVar6 + 1;
          }
          DAT_00ee4020 = 4;
          unaff_RDI = pcVar6;
        }
      }
      else {
        lVar5 = FUN_00e85f40();
        pcVar6 = unaff_RDI + lVar5;
        if (*pcVar6 != '\0') {
          if (*pcVar6 != ',') goto LAB_00e8fa5b;
          pcVar6 = pcVar6 + 1;
        }
        DAT_00ee4020 = 3;
        unaff_RDI = pcVar6;
      }
    }
  } while( true );
}



ulonglong FUN_00e8fac1(undefined8 param_1,ulonglong param_2)

{
  int iVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 uVar16;
  int iVar17;
  undefined8 uVar18;
  uint uVar19;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  char cVar20;
  undefined8 *puVar21;
  ulonglong *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  uint local_a4;
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  ulonglong local_70;
  ulonglong local_68 [3];
  undefined1 local_50 [32];
  
  cVar2 = DAT_00ea03c8;
  local_80 = 0;
  if (DAT_00ea03c8 == '\0') {
    uVar6 = FUN_00e8d760(&local_80,param_2);
    if (uVar6 != 0) {
      return (ulonglong)(uVar6 & 0x7fffffff) | (ulonglong)((int)uVar6 < 0) << 0x3f;
    }
    uVar6 = FUN_00e8d760();
    if (uVar6 == 0) goto LAB_00e8fb9b;
    uVar10 = (ulonglong)(uVar6 & 0x7fffffff) | (ulonglong)((int)uVar6 < 0) << 0x3f;
LAB_00e905ad:
    FUN_00e8d760();
  }
  else {
    uVar10 = (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x40))(2,param_2);
    if (uVar10 != 0) {
      return uVar10;
    }
    uVar10 = (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0xb0))();
    if (uVar10 == 0) {
LAB_00e8fb9b:
      lVar15 = local_80;
      puVar21 = (undefined8 *)0x0;
      param_2 = param_2 / ((-(ulonglong)(cVar2 == '\0') & 0xfffffffffffffffc) + 8);
      for (uVar10 = 0; param_2 != uVar10; uVar10 = uVar10 + 1) {
        if (cVar2 == '\0') {
          uVar14 = (ulonglong)*(uint *)(lVar15 + uVar10 * 4);
        }
        else {
          uVar14 = *(ulonglong *)(lVar15 + uVar10 * 8);
        }
        local_68[0] = 0x11d4d551d3b36f2c;
        local_68[1] = 0x4dc13f279000469a;
        local_70 = 0;
        if (cVar2 == '\0') {
          uStack_74 = 0;
          iVar8 = FUN_00e8d760(&local_78,unaff_RSI);
          if (iVar8 == 0) {
            uVar12 = (ulonglong)
                     *(uint *)((ulonglong)*(uint *)(CONCAT44(uStack_74,local_78) + 0xc) + 8);
            goto LAB_00e8fc7c;
          }
        }
        else {
          lVar11 = (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x98))(uVar14,unaff_RSI);
          if (lVar11 == 0) {
            uVar12 = *(ulonglong *)(*(longlong *)(CONCAT44(uStack_74,local_78) + 0x18) + 8);
LAB_00e8fc7c:
            if (*(int *)(uVar12 + 0xc) < 3) {
              if (cVar2 == '\0') {
                local_70 = local_70 & 0xffffffff;
                uVar6 = FUN_00e8d760(&local_70,local_68);
                uVar14 = (ulonglong)(uVar6 & 0x7fffffff) | (ulonglong)((int)uVar6 < 0) << 0x3f;
              }
              else {
                uVar14 = (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x98))(uVar14);
              }
              if (uVar14 == 0) {
                puVar21 = (undefined8 *)CONCAT44(uStack_74,local_78);
                break;
              }
              if (puVar21 == (undefined8 *)0x0) {
                puVar21 = (undefined8 *)CONCAT44(uStack_74,local_78);
              }
            }
          }
        }
      }
      uVar10 = 0x800000000000000e;
      if (puVar21 != (undefined8 *)0x0) {
        if (DAT_00ee4020 == 3) {
          if (cVar2 == '\0') {
            puVar13 = (uint *)(ulonglong)*(uint *)((longlong)puVar21 + 0xc);
            uVar6 = puVar13[1];
            local_a4 = *puVar13;
            local_70 = (ulonglong)puVar13[2];
          }
          else {
            puVar13 = (uint *)puVar21[3];
            uVar6 = puVar13[1];
            local_a4 = *puVar13;
            local_70 = *(ulonglong *)(puVar13 + 2);
          }
          uVar10 = (ulonglong)uVar6;
          uVar6 = 0;
          uVar23 = *(undefined8 *)(local_70 + 0x18);
          uVar19 = *(int *)(local_70 + 4) * *(int *)(local_70 + 8);
          bVar4 = FUN_00e8f814();
          uVar9 = (uint)uVar10;
          for (; uVar6 != local_a4; uVar6 = uVar6 + 1) {
            if (uVar6 != (uint)uVar10) {
              if (cVar2 == '\0') {
                local_70 = local_70 & 0xffffffff;
                local_68[0] = local_68[0] & 0xffffffff;
                uVar7 = FUN_00e8d760(local_68,uVar6,&local_70,local_50,uVar23);
                uVar14 = (ulonglong)(uVar7 & 0x7fffffff) | (ulonglong)((int)uVar7 < 0) << 0x3f;
              }
              else {
                uVar14 = (*(code *)*puVar21)(puVar21,uVar6,local_68,&local_70);
              }
              if (uVar14 == 0) {
                iVar8 = *(int *)(local_70 + 0xc);
                uVar23 = *(undefined8 *)(local_70 + 0x18);
                iVar17 = *(int *)(local_70 + 4);
                iVar1 = *(int *)(local_70 + 8);
                if (cVar2 == '\0') {
                  FUN_00e8d760(local_70,local_50);
                }
                else {
                  (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x48))();
                }
                if (((iVar8 < 3) && (uVar7 = iVar17 * iVar1, uVar19 <= uVar7)) &&
                   ((bVar5 = FUN_00e8f814(uVar7,uVar23), uVar19 < uVar7 || (bVar4 < bVar5)))) {
                  uVar19 = uVar7;
                  uVar9 = uVar6;
                  bVar4 = bVar5;
                }
              }
            }
          }
LAB_00e9042a:
          if (cVar2 == '\0') {
LAB_00e90447:
            if ((*(uint *)((ulonglong)*(uint *)((longlong)puVar21 + 0xc) + 4) != uVar9) &&
               (iVar8 = FUN_00e8d760(local_50,uVar9), iVar8 != 0)) goto LAB_00e9046e;
            goto LAB_00e90481;
          }
LAB_00e9042f:
          if ((*(uint *)(puVar21[3] + 4) != uVar9) &&
             (lVar15 = (*(code *)puVar21[1])(puVar21,uVar9), lVar15 != 0)) {
LAB_00e9046e:
            FUN_00e91139();
            goto LAB_00e9047c;
          }
LAB_00e9043d:
          uVar10 = puVar21[3];
          uVar14 = *(ulonglong *)(uVar10 + 8);
        }
        else {
          if (DAT_00ee4020 < 4) {
            if (DAT_00ee4020 == 1) {
              if (cVar2 == '\0') {
                puVar13 = (uint *)(ulonglong)*(uint *)((longlong)puVar21 + 0xc);
              }
              else {
                puVar13 = (uint *)puVar21[3];
              }
              uVar6 = puVar13[1];
              uVar9 = uVar6;
              if (DAT_00ee4024 != uVar6) {
                if (cVar2 == '\0') {
                  if (DAT_00ee4024 < *puVar13) {
                    local_70 = local_70 & 0xffffffff;
                    local_68[0] = local_68[0] & 0xffffffff;
                    uVar9 = FUN_00e8d760(local_68,DAT_00ee4024,&local_70,local_50);
                    uVar10 = (ulonglong)(uVar9 & 0x7fffffff) | (ulonglong)((int)uVar9 < 0) << 0x3f;
                    goto LAB_00e8fe16;
                  }
                }
                else if (DAT_00ee4024 < *puVar13) {
                  uVar10 = (*(code *)*puVar21)(puVar21,DAT_00ee4024,local_68,&local_70);
LAB_00e8fe16:
                  if (uVar10 == 0) {
                    iVar8 = *(int *)(local_70 + 0xc);
                    if (cVar2 == '\0') {
                      FUN_00e8d760(local_70,local_50);
                    }
                    else {
                      (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x48))();
                    }
                    uVar9 = DAT_00ee4024;
                    if (iVar8 < 3) goto LAB_00e9042a;
                  }
                }
                FUN_00e91139();
                uVar9 = uVar6;
              }
            }
            else {
              if (DAT_00ee4020 != 2) goto LAB_00e9047c;
              if (cVar2 == '\0') {
                puVar13 = (uint *)(ulonglong)*(uint *)((longlong)puVar21 + 0xc);
                uVar6 = puVar13[1];
                local_70 = (ulonglong)puVar13[2];
              }
              else {
                puVar13 = (uint *)puVar21[3];
                uVar6 = puVar13[1];
                local_70 = *(ulonglong *)(puVar13 + 2);
              }
              uVar9 = uVar6;
              if ((((*(uint *)(local_70 + 4) != DAT_00ee4024) ||
                   (*(int *)(local_70 + 8) != DAT_00ee4028)) ||
                  ((-1 < DAT_00ee402c && (*(int *)(local_70 + 0xc) != DAT_00ee402c)))) ||
                 ((DAT_00ee4030 != '\0' &&
                  (cVar20 = DAT_00ee4030,
                  cVar3 = FUN_00e8f814(puVar13,*(undefined8 *)(local_70 + 0x18)), cVar20 != cVar3)))
                 ) {
                uVar19 = *puVar13;
                puVar22 = &local_70;
                for (uVar9 = 0; uVar9 != uVar19; uVar9 = uVar9 + 1) {
                  if (uVar9 != uVar6) {
                    if (cVar2 == '\0') {
                      local_70 = local_70 & 0xffffffff;
                      local_68[0] = local_68[0] & 0xffffffff;
                      uVar7 = FUN_00e8d760(local_68,uVar9,puVar22,local_50);
                      uVar10 = (ulonglong)(uVar7 & 0x7fffffff) | (ulonglong)((int)uVar7 < 0) << 0x3f
                      ;
                    }
                    else {
                      uVar10 = (*(code *)*puVar21)(puVar21,uVar9,local_68,puVar22);
                    }
                    if (uVar10 == 0) {
                      iVar8 = *(int *)(local_70 + 0xc);
                      uVar23 = *(undefined8 *)(local_70 + 0x18);
                      uVar7 = *(uint *)(local_70 + 4);
                      iVar17 = *(int *)(local_70 + 8);
                      if (cVar2 == '\0') {
                        FUN_00e8d760(local_70,local_50);
                      }
                      else {
                        (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x48))();
                      }
                      if (((((iVar8 < 3) && (uVar7 == DAT_00ee4024)) && (iVar17 == DAT_00ee4028)) &&
                          ((DAT_00ee402c < 0 || (iVar8 == DAT_00ee402c)))) &&
                         ((DAT_00ee4030 == '\0' ||
                          (cVar20 = DAT_00ee4030, cVar3 = FUN_00e8f814(DAT_00ee4030,uVar23),
                          cVar20 == cVar3)))) goto LAB_00e9042a;
                    }
                  }
                }
                FUN_00e91139();
                uVar9 = uVar6;
              }
            }
            goto LAB_00e9042a;
          }
          if (DAT_00ee4020 == 4) {
            if (cVar2 == '\0') {
              puVar13 = (uint *)(ulonglong)*(uint *)((longlong)puVar21 + 0xc);
            }
            else {
              puVar13 = (uint *)puVar21[3];
            }
            uVar19 = *puVar13;
            uVar9 = puVar13[1];
            FUN_00e91139();
            FUN_00e91015();
            for (uVar6 = 0; uVar19 != uVar6; uVar6 = uVar6 + 1) {
              if (cVar2 == '\0') {
                local_70 = local_70 & 0xffffffff;
                local_68[0] = local_68[0] & 0xffffffff;
                uVar7 = FUN_00e8d760(local_68,uVar6,&local_70,local_50);
                uVar10 = (ulonglong)(uVar7 & 0x7fffffff) | (ulonglong)((int)uVar7 < 0) << 0x3f;
              }
              else {
                uVar10 = (*(code *)*puVar21)(puVar21,uVar6,local_68,&local_70);
              }
              if (uVar10 == 0) {
                uVar23 = *(undefined8 *)(local_70 + 0x10);
                iVar8 = *(int *)(local_70 + 0xc);
                uVar24 = *(undefined8 *)(local_70 + 0x18);
                uVar10 = (ulonglong)*(uint *)(local_70 + 4);
                uVar14 = (ulonglong)*(uint *)(local_70 + 8);
                if (cVar2 == '\0') {
                  FUN_00e8d760(local_70,local_50);
                }
                else {
                  (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x48))();
                }
                if (iVar8 == 2) {
                  FUN_00e8f814();
                }
                uVar16 = 0x2d;
                if (iVar8 < 3) {
                  uVar16 = 0x20;
                }
                uVar18 = 0x20;
                if (uVar6 == uVar9) {
                  uVar18 = 0x2a;
                }
                FUN_00e91139(uVar16,uVar18,uVar10 & 0xffffffff,uVar14 & 0xffffffff,uVar10,uVar14,
                             uVar23,uVar24);
              }
            }
            FUN_00e91015();
            lVar15 = FUN_00e8eabd();
            if ((lVar15 == 0) || (lVar15 == -0x7fffffffffffffee)) goto LAB_00e9042a;
            FUN_00e91139();
            if (cVar2 == '\0') {
              FUN_00e8d760();
              goto LAB_00e90447;
            }
            (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0xf8))(&UNK_00989680);
            goto LAB_00e9042f;
          }
LAB_00e9047c:
          if (cVar2 != '\0') goto LAB_00e9043d;
LAB_00e90481:
          uVar10 = (ulonglong)*(uint *)((longlong)puVar21 + 0xc);
          uVar14 = (ulonglong)*(uint *)(uVar10 + 8);
        }
        *(undefined1 *)(unaff_RDI + 0xf) = 0x70;
        *(short *)(unaff_RDI + 0x12) = (short)*(undefined4 *)(uVar14 + 4);
        uVar6 = *(uint *)(uVar14 + 8);
        *(short *)(unaff_RDI + 0x14) = (short)uVar6;
        if (cVar2 == '\0') {
          uVar10 = *(ulonglong *)(uVar10 + 0x10);
        }
        else {
          uVar10 = *(ulonglong *)(uVar10 + 0x18);
        }
        *(int *)(unaff_RDI + 0x18) = (int)uVar10;
        *(int *)(unaff_RDI + 0x3a) = (int)(uVar10 >> 0x20);
        if (uVar10 >> 0x20 != 0) {
          *(uint *)(unaff_RDI + 0x36) = *(uint *)(unaff_RDI + 0x36) | 2;
        }
        *(undefined2 *)(unaff_RDI + 0x32) = 1;
        iVar8 = *(int *)(uVar14 + 0x20);
        if (*(int *)(uVar14 + 0xc) == 2) {
          FUN_00e8f840(uVar6,unaff_RDI + 0x26,iVar8,*(undefined4 *)(uVar14 + 0x1c));
          FUN_00e8f840();
          FUN_00e8f840();
          FUN_00e8f840();
          iVar17 = (uint)*(byte *)(unaff_RDI + 0x26) + (uint)*(byte *)(unaff_RDI + 0x28) +
                   (uint)*(byte *)(unaff_RDI + 0x2a) + (uint)*(byte *)(unaff_RDI + 0x2c);
          uVar9 = (uint)(iVar17 * iVar8) >> 3;
        }
        else {
          if (*(int *)(uVar14 + 0xc) == 0) {
            *(undefined1 *)(unaff_RDI + 0x27) = 0;
            *(undefined1 *)(unaff_RDI + 0x2b) = 0x10;
          }
          else {
            *(undefined1 *)(unaff_RDI + 0x2b) = 0;
            *(undefined1 *)(unaff_RDI + 0x27) = 0x10;
          }
          *(undefined2 *)(unaff_RDI + 0x2c) = 0x1808;
          uVar9 = iVar8 * 4;
          iVar17 = 0x20;
          *(undefined2 *)(unaff_RDI + 0x28) = 0x808;
          *(undefined1 *)(unaff_RDI + 0x2a) = 8;
          *(undefined1 *)(unaff_RDI + 0x26) = 8;
        }
        *(short *)(unaff_RDI + 0x24) = (short)uVar9;
        uVar10 = 0;
        *(uint *)(unaff_RDI + 0x36) = *(uint *)(unaff_RDI + 0x36) | 1;
        *(short *)(unaff_RDI + 0x16) = (short)iVar17;
        *(uint *)(unaff_RDI + 0x1c) = (uVar6 & 0xffff) * (uVar9 & 0xffff);
      }
      if (cVar2 == '\0') goto LAB_00e905ad;
    }
    (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x48))(local_80);
  }
  return uVar10;
}



ulonglong FUN_00e90605(void)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  char unaff_SIL;
  undefined8 *unaff_RDI;
  int iVar7;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [24];
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined1 local_50 [8];
  undefined1 local_48 [4];
  undefined4 local_44;
  
  cVar2 = DAT_00ea03c8;
  local_88 = 0x423ad08b800f683f;
  local_60 = 0;
  iVar7 = (-(uint)(unaff_SIL == '\0') & 0xfffffff9) + 9;
  local_80 = 0xb4e26f3c5c9693a2;
  if (DAT_00ea03c8 == '\0') {
    uStack_54 = 0;
    local_44 = 0;
    uVar4 = FUN_00e8d760(local_48,0);
    uVar5 = (ulonglong)(uVar4 & 0x7fffffff) | (ulonglong)((int)uVar4 < 0) << 0x3f;
  }
  else {
    uVar5 = (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x38))
                      (&local_60,0,local_48,&local_58,local_50);
  }
  if (uVar5 != 0x8000000000000005) {
    return 0x8000000000000001;
  }
  lVar6 = CONCAT44(uStack_54,local_58) * 0x10 + local_60;
  if (cVar2 == '\0') {
    uStack_8c = 0;
    uVar4 = FUN_00e8d760(&local_90,lVar6 + 0x28,local_78);
    uVar5 = (ulonglong)(uVar4 & 0x7fffffff) | (ulonglong)((int)uVar4 < 0) << 0x3f;
  }
  else {
    uVar5 = (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x40))(iVar7,lVar6 + 0x28,&local_90);
  }
  if (uVar5 != 0) {
    return uVar5;
  }
  if (unaff_SIL != '\0') {
    if (cVar2 == '\0') {
      uVar4 = FUN_00e8d760(local_78,CONCAT44(uStack_8c,local_90));
      if (uVar4 != 0) {
        uVar5 = (ulonglong)(uVar4 & 0x7fffffff) | (ulonglong)((int)uVar4 < 0) << 0x3f;
        goto LAB_00e9089a;
      }
    }
    else {
      uVar5 = (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0xc0))(&local_88);
      if (uVar5 != 0) goto LAB_00e9087d;
    }
  }
  *(longlong *)CONCAT44(uStack_8c,local_90) = lVar6;
  lVar3 = DAT_00ee4058;
  lVar1 = CONCAT44(uStack_8c,local_90);
  *(longlong *)(lVar1 + 0x20) = lVar6;
  if (cVar2 == '\0') {
    *(undefined4 *)(lVar1 + 0xc) = 0;
    *(undefined4 *)(lVar1 + 0x1c) = 0;
    uVar4 = FUN_00e8d760(lVar1 + 0x18,lVar1 + 0x28);
    uVar5 = (ulonglong)(uVar4 & 0x7fffffff) | (ulonglong)((int)uVar4 < 0) << 0x3f;
  }
  else {
    uVar5 = (**(code **)(*(longlong *)(lVar3 + 0x60) + 0x38))
                      (lVar1,lVar1 + 0x28,lVar1 + 0x18,lVar1 + 8,lVar1 + 0x10,iVar7);
  }
  if (uVar5 == 0) {
    *unaff_RDI = CONCAT44(uStack_8c,local_90);
    return 0;
  }
  if (unaff_SIL == '\0') {
    if (cVar2 == '\0') {
LAB_00e9089a:
      FUN_00e8d760();
      return uVar5;
    }
  }
  else {
    if (cVar2 == '\0') {
      FUN_00e8d760(local_78,0);
      goto LAB_00e9089a;
    }
    (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0xc0))(&local_88,0);
  }
LAB_00e9087d:
  (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x48))(CONCAT44(uStack_8c,local_90));
  return uVar5;
}



void FUN_00e908ca(undefined8 param_1,ulonglong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_28;
  undefined1 local_20 [24];
  
  uVar2 = 0xffffffff;
  if (DAT_00ea03c8 != '\0') {
    uVar2 = 0xffffffffffffffff;
  }
  if (param_2 < uVar2) {
    uVar2 = param_2;
  }
  uVar3 = unaff_RDI + 0xfffU >> 0xc;
  local_28 = (uVar2 + 1 & 0xfffffffffffff000) - 1;
  if (DAT_00ea03c8 == '\0') {
    uVar1 = FUN_00e8d760(uVar3,2,&local_28,local_20);
    uVar2 = (ulonglong)(uVar1 & 0x7fffffff) | (ulonglong)((int)uVar1 < 0) << 0x3f;
  }
  else {
    uVar2 = (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x28))(1,2,uVar3,&local_28);
  }
  if (uVar2 == 0) {
    *unaff_RSI = local_28;
  }
  return;
}



void FUN_00e90975(void)

{
  longlong unaff_RDI;
  undefined1 local_20 [32];
  
  if (unaff_RDI != 0) {
    if (DAT_00ea03c8 == '\0') {
      FUN_00e8d760((unaff_RDI - 1U | 0xfff) + 1 >> 0xc,0,local_20);
    }
    else {
      (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x30))();
    }
    return;
  }
  return;
}



void FUN_00e909d5(void)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint *puVar9;
  ulonglong uVar10;
  undefined *unaff_RDI;
  undefined8 in_R11;
  short local_a2;
  ulonglong local_a0;
  ulonglong local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined1 local_88 [4];
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  uint local_78 [3];
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_50 [32];
  
  cVar2 = DAT_00ea03c8;
  local_68 = 0x4ca568b84cf5b200;
  local_60 = 0x9a02503f3eb2ec9e;
  local_a0 = 0;
  local_98 = 0;
  if (DAT_00ea03c8 == '\0') {
    uVar4 = FUN_00e8d760(0,&local_68,&local_a0,0);
    if (uVar4 == 0x80000005) {
      local_98 = local_98 & 0xffffffff;
      iVar3 = FUN_00e8d760(&local_98,local_a0);
      if (iVar3 == 0) {
        unaff_RDI = (undefined *)
                    (ulonglong)*(uint *)((ulonglong)*(uint *)(DAT_00ee4058 + 0x3c) + 100);
        uVar4 = FUN_00e8d760(0,&local_68,&local_a0,local_98);
        uVar5 = (ulonglong)(uVar4 & 0x7fffffff) | (ulonglong)((int)uVar4 < 0) << 0x3f;
        goto LAB_00e90ba2;
      }
      goto LAB_00e90af9;
    }
    uVar5 = (ulonglong)(uVar4 & 0x7fffffff) | (ulonglong)((int)uVar4 < 0) << 0x3f;
  }
  else {
    uVar5 = (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0xb0))
                      (2,&local_68,0,&local_a0,0,&local_68);
    if (uVar5 == 0x8000000000000005) {
      lVar6 = (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x40))(2,local_a0,&local_98);
      if (lVar6 == 0) {
        uVar5 = (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0xb0))
                          (2,&local_68,0,&local_a0,local_98,in_R11);
LAB_00e90ba2:
        if (uVar5 == 0) {
          uVar5 = (-(ulonglong)(cVar2 == '\0') & 0xfffffffffffffffc) + 8;
          for (uVar10 = 0; uVar10 < local_a0 / uVar5; uVar10 = uVar10 + 1) {
            if (cVar2 == '\0') {
              uVar8 = (ulonglong)*(uint *)(local_98 + uVar10 * 4);
              uStack_8c = 0;
              unaff_RDI = (undefined *)
                          (ulonglong)*(uint *)((ulonglong)*(uint *)(DAT_00ee4058 + 0x3c) + 0x58);
              uVar4 = FUN_00e8d760(&local_90,&local_68,local_50);
              uVar7 = (ulonglong)(uVar4 & 0x7fffffff) | (ulonglong)((int)uVar4 < 0) << 0x3f;
            }
            else {
              uVar8 = *(ulonglong *)(local_98 + uVar10 * 8);
              uVar7 = (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x98))
                                (uVar8,&local_68,&local_90);
            }
            if (uVar7 == 0) {
              lVar6 = CONCAT44(uStack_8c,local_90);
              if (cVar2 == '\0') {
                uStack_6c = 0;
                local_78[1] = 0;
                unaff_RDI = (undefined *)(ulonglong)*(uint *)(lVar6 + 0x38);
                uStack_7c = 0;
                local_84 = 0;
                uVar4 = FUN_00e8d760(&local_80,local_88,local_78,local_78 + 2);
                uVar7 = (ulonglong)(uVar4 & 0x7fffffff) | (ulonglong)((int)uVar4 < 0) << 0x3f;
              }
              else {
                uVar7 = (**(code **)(lVar6 + 0x70))
                                  (lVar6,local_88,&local_80,local_78,local_78 + 2,unaff_RDI);
              }
              if ((uVar7 == 0) && (CONCAT44(uStack_7c,local_80) != 0)) {
                lVar6 = CONCAT44(uStack_8c,local_90);
                if (cVar2 == '\0') {
                  unaff_RDI = (undefined *)(ulonglong)*(uint *)(lVar6 + 0x18);
                  uVar4 = FUN_00e8d760(10,1,1);
                  uVar7 = (ulonglong)(uVar4 & 0x7fffffff) | (ulonglong)((int)uVar4 < 0) << 0x3f;
                }
                else {
                  uVar7 = (**(code **)(lVar6 + 0x30))(lVar6,1,10,1,&local_a2,in_R11);
                }
                if ((uVar7 == 0) && (local_a2 != 0x300)) {
                  if (cVar2 == '\0') {
                    unaff_RDI = (undefined *)
                                (ulonglong)
                                *(uint *)((ulonglong)*(uint *)(DAT_00ee4058 + 0x3c) + 0x94);
                    FUN_00e8d760(0,0,local_50);
                  }
                  else {
                    (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x110))(uVar8,0,0);
                  }
                }
              }
            }
          }
          puVar1 = local_78 + 2;
          for (uVar10 = 0; uVar10 < local_a0 / uVar5; uVar10 = uVar10 + 1) {
            if (cVar2 == '\0') {
              uStack_6c = 0;
              unaff_RDI = (undefined *)
                          (ulonglong)*(uint *)((ulonglong)*(uint *)(DAT_00ee4058 + 0x3c) + 0x58);
              puVar9 = puVar1;
              uVar4 = FUN_00e8d760(puVar1,&local_68,local_50);
              uVar8 = (ulonglong)(uVar4 & 0x7fffffff) | (ulonglong)((int)uVar4 < 0) << 0x3f;
            }
            else {
              puVar9 = *(uint **)(local_98 + uVar10 * 8);
              uVar8 = (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x98))
                                (puVar9,&local_68,puVar1);
            }
            if ((uVar8 == 0) && (lVar6 = CONCAT44(uStack_6c,local_78[2]), lVar6 != 0)) {
              if (cVar2 == '\0') {
                unaff_RDI = (undefined *)(ulonglong)*(uint *)(lVar6 + 0x18);
                uVar4 = FUN_00e8d760(10,1);
                uVar8 = (ulonglong)(uVar4 & 0x7fffffff) | (ulonglong)((int)uVar4 < 0) << 0x3f;
              }
              else {
                uVar8 = (**(code **)(lVar6 + 0x30))(lVar6,1,10,1,&local_a2,puVar9);
              }
              if ((uVar8 == 0) && (local_a2 == 0x604)) {
                lVar6 = CONCAT44(uStack_6c,local_78[2]);
                if (cVar2 == '\0') {
                  unaff_RDI = (undefined *)(ulonglong)*(uint *)(lVar6 + 0x18);
                  uVar4 = FUN_00e8d760(4,1,1,local_78);
                  uVar8 = (ulonglong)(uVar4 & 0x7fffffff) | (ulonglong)((int)uVar4 < 0) << 0x3f;
                }
                else {
                  uVar8 = (**(code **)(lVar6 + 0x30))(lVar6,1,4,1,local_78,in_R11);
                }
                if ((uVar8 == 0) && ((local_78[0] & 4) != 0)) {
                  lVar6 = CONCAT44(uStack_6c,local_78[2]);
                  local_78[0] = local_78[0] & 0xfffffffb;
                  if (cVar2 == '\0') {
                    unaff_RDI = (undefined *)(ulonglong)*(uint *)(lVar6 + 0x1c);
                    uVar4 = FUN_00e8d760(4,1,1,local_78);
                    uVar8 = (ulonglong)(uVar4 & 0x7fffffff) | (ulonglong)((int)uVar4 < 0) << 0x3f;
                  }
                  else {
                    uVar8 = (**(code **)(lVar6 + 0x38))(lVar6,1,4,1,local_78,unaff_RDI);
                  }
                  if (uVar8 != 0) {
                    unaff_RDI = &DAT_00e9ed26;
                    FUN_00e91139();
                  }
                }
              }
            }
          }
        }
        else {
          FUN_00e91139();
        }
        if (cVar2 != '\0') {
          (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x48))();
          return;
        }
        FUN_00e8d760(local_98,local_50);
        return;
      }
      goto LAB_00e90af9;
    }
  }
  if (uVar5 == 0) {
    return;
  }
  if (uVar5 == 0x800000000000000e) {
    return;
  }
LAB_00e90af9:
  FUN_00e91139();
  return;
}



void FUN_00e90fcf(void)

{
  undefined1 local_20 [32];
  
  if (DAT_00ea03c8 == '\0') {
    FUN_00e8d760(local_20);
  }
  else {
    (**(code **)(*(longlong *)(DAT_00ee4058 + 0x40) + 8))(*(longlong *)(DAT_00ee4058 + 0x40));
  }
  return;
}



void FUN_00e91015(void)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  byte *pbVar8;
  ulonglong uVar9;
  byte *unaff_RDI;
  ulonglong uVar10;
  short local_118 [132];
  
  uVar9 = 0;
  do {
    bVar2 = *unaff_RDI;
    if (bVar2 == 0) {
      return;
    }
    if (bVar2 == 10) {
      local_118[uVar9] = 0xd;
      uVar9 = uVar9 + 1;
    }
    pbVar8 = unaff_RDI + 1;
    lVar7 = 0;
    for (bVar3 = bVar2; (char)bVar3 < '\0'; bVar3 = bVar3 * '\x02') {
      lVar7 = lVar7 + 1;
    }
    if (lVar7 - 2U < 3) {
      uVar10 = 0;
      uVar6 = (int)(uint)bVar3 >> ((byte)lVar7 & 0x1f);
      do {
        uVar4 = uVar6;
        lVar1 = uVar10 + 1;
        if (0x3f < (byte)(unaff_RDI[lVar1] + 0x80)) goto LAB_00e910d2;
        uVar5 = uVar4 << 6;
        uVar10 = uVar10 + 1;
        uVar6 = uVar5 | (byte)(unaff_RDI[lVar1] + 0x80);
      } while (uVar10 < lVar7 - 1U);
      lVar1 = uVar9 + 1;
      if (((0x10ffff < uVar6) || ((uVar5 & 0xf800) == 0xd800)) ||
         (lVar7 - 1U !=
          (longlong)(int)((uint)(0x7f < uVar6) + (uint)(0x7ff < uVar6) + (uint)(0xffff < uVar6))))
      goto LAB_00e910d2;
      pbVar8 = unaff_RDI + lVar7;
      if (uVar6 < 0x10000) goto LAB_00e910e3;
      local_118[uVar9] = (short)((uVar4 & 0x3ffffff) >> 4) + -0x2840;
      uVar9 = uVar9 + 2;
      local_118[lVar1] = ((ushort)uVar6 & 0x3ff) + 0xdc00;
    }
    else {
LAB_00e910d2:
      uVar6 = (uint)bVar2;
LAB_00e910e3:
      local_118[uVar9] = (short)uVar6;
      uVar9 = uVar9 + 1;
    }
    unaff_RDI = pbVar8;
    if ((*pbVar8 == 0) || (0x7d < uVar9)) {
      local_118[uVar9] = 0;
      FUN_00e90fcf();
      uVar9 = 0;
    }
  } while( true );
}



uint FUN_00e91139(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *unaff_RDI;
  undefined1 local_res8 [32];
  undefined4 local_160 [2];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_48 [8];
  
  iVar3 = 0;
  iVar4 = 0;
  if ((*unaff_RDI == '\x01') && (cVar1 = unaff_RDI[1], iVar4 = iVar3, cVar1 != '\0')) {
    if (cVar1 < '8') {
      if ('/' < cVar1) {
LAB_00e9118e:
        iVar4 = (int)cVar1;
      }
    }
    else if (cVar1 == 'c') goto LAB_00e9118e;
  }
  uVar2 = iVar4 - 0x30U;
  if (9 < iVar4 - 0x30U) {
    uVar2 = 0xffffffff;
  }
  if (DAT_00ea03cc <= (int)uVar2) {
    return 0;
  }
  if (uVar2 != 0xffffffff) {
    FUN_00e91015();
  }
  if ((*unaff_RDI == '\x01') && (cVar1 = unaff_RDI[1], cVar1 != '\0')) {
    if (cVar1 < '8') {
      if (cVar1 < '0') goto LAB_00e911db;
    }
    else if (cVar1 != 'c') goto LAB_00e911db;
    unaff_RDI = unaff_RDI + 2;
  }
LAB_00e911db:
  local_158 = local_res8;
  local_150 = local_48;
  local_160[0] = 8;
  uVar2 = FUN_00e91758(local_160,unaff_RDI);
  FUN_00e91015();
  if (0xff < uVar2) {
    FUN_00e91015();
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



ulonglong FUN_00e91248(void)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int *piVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong unaff_RSI;
  uint unaff_EDI;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_40 [32];
  
  local_58 = 0x44f9105cd5d1de3c;
  local_50 = 0x31001298efbca99e;
  DAT_00ee4038 = (int *)FUN_00e8e580();
  cVar1 = DAT_00ea03c8;
  if (DAT_00ee4038 == (int *)0x0) {
    uVar3 = 0;
    uVar7 = 0xffffffffffffffff;
    for (lVar4 = 0; (uint)lVar4 < unaff_EDI; lVar4 = lVar4 + 1) {
      piVar5 = (int *)(*(longlong *)(unaff_RSI + 8) * lVar4 + unaff_RSI + 0x28);
      if (*piVar5 == 0xf) {
        uVar6 = *(ulonglong *)(piVar5 + 2);
        if (uVar6 < uVar7) {
          uVar7 = uVar6;
        }
        uVar6 = *(longlong *)(piVar5 + 6) * 0x1000 + uVar6;
        if (uVar3 < uVar6) {
          uVar3 = uVar6;
        }
      }
    }
    if (uVar7 != 0xffffffffffffffff) {
      uVar3 = ((uVar3 - 1 | 0x1fffff) - (uVar7 & 0xffffffffffe00000)) + 0x1000000 >> 0x18;
      lVar4 = uVar3 + 0x18;
      if (DAT_00ea03c8 == '\0') {
        DAT_00ee4038 = (int *)0x0;
        uVar2 = FUN_00e8d760(&DAT_00ee4038,lVar4,local_40);
        uVar6 = (ulonglong)(uVar2 & 0x7fffffff) | (ulonglong)((int)uVar2 < 0) << 0x3f;
      }
      else {
        uVar6 = (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x40))(9,lVar4,&DAT_00ee4038);
      }
      if (uVar6 != 0) {
LAB_00e91468:
        FUN_00e91139();
        return uVar6;
      }
      *DAT_00ee4038 = 1;
      DAT_00ee4038[1] = 0x200000;
      piVar5 = DAT_00ee4038;
      *(ulonglong *)(DAT_00ee4038 + 2) = uVar7 & 0xffffffffffe00000;
      *(ulonglong *)(piVar5 + 4) = uVar3;
      FUN_00e86200();
      if (cVar1 == '\0') {
        uVar2 = FUN_00e8d760(local_40,DAT_00ee4038);
        if (uVar2 != 0) {
          uVar6 = (ulonglong)(uVar2 & 0x7fffffff) | (ulonglong)((int)uVar2 < 0) << 0x3f;
          FUN_00e8d760();
          goto LAB_00e91468;
        }
      }
      else {
        uVar6 = (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0xc0))(&local_58);
        if (uVar6 != 0) {
          (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x48))(DAT_00ee4038);
          goto LAB_00e91468;
        }
      }
    }
  }
  else if (*DAT_00ee4038 != 1) {
    FUN_00e91139();
    return 0x8000000000000003;
  }
  return 0;
}



void FUN_00e9147d(void)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulonglong uVar4;
  ulonglong *puVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong unaff_RSI;
  ulonglong uVar8;
  ulonglong unaff_RDI;
  int iVar9;
  ulonglong uVar10;
  
  uVar7 = CONCAT44(0,*(uint *)(DAT_00ee4038 + 4));
  lVar1 = *(longlong *)(DAT_00ee4038 + 0x10);
  if (unaff_RSI - unaff_RDI < uVar7 * 2) {
    FUN_00e8d330();
    return;
  }
  uVar8 = (ulonglong)(*(uint *)(DAT_00ee4038 + 4) - 1);
  if ((uVar8 & unaff_RDI) != 0) {
    unaff_RDI = (unaff_RDI - 1 | uVar7 - 1) + 1;
    FUN_00e8d330();
  }
  if ((uVar8 & unaff_RSI) != 0) {
    unaff_RSI = -uVar7 & unaff_RSI;
    FUN_00e8d330();
  }
  if (unaff_RDI < *(ulonglong *)(DAT_00ee4038 + 8)) {
    FUN_00e8d330();
    unaff_RDI = *(ulonglong *)(DAT_00ee4038 + 8);
  }
  uVar8 = *(ulonglong *)(DAT_00ee4038 + 8);
  if (uVar8 <= unaff_RSI) {
    uVar10 = lVar1 * uVar7 * 8;
    uVar4 = unaff_RSI - uVar8;
    if (uVar10 < unaff_RSI - uVar8) {
      FUN_00e8d330();
      uVar4 = uVar10;
    }
    uVar4 = (uVar4 + (uVar8 - unaff_RDI)) / uVar7 & 0xffffffff;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar7;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = unaff_RDI - uVar8;
    auVar3 = auVar3 / auVar2;
    puVar5 = (ulonglong *)(DAT_00ee4038 + 0x18 + (auVar3._0_8_ >> 6 & 0x3ffffff) * 8);
    uVar6 = auVar3._0_4_ & 0x3f;
    iVar9 = 0x40 - uVar6;
    uVar8 = -1L << (sbyte)uVar6;
    uVar7 = uVar4;
    while( true ) {
      uVar6 = (int)uVar7 - iVar9;
      if ((int)uVar6 < 0) break;
      *puVar5 = *puVar5 | uVar8;
      uVar7 = (ulonglong)uVar6;
      puVar5 = puVar5 + 1;
      uVar8 = 0xffffffffffffffff;
      iVar9 = 0x40;
    }
    if ((int)uVar7 != 0) {
      *puVar5 = *puVar5 | 0xffffffffffffffffU >> (-((char)uVar4 + auVar3[0]) & 0x3fU) & uVar8;
    }
    return;
  }
  return;
}



void FUN_00e9169f(void)

{
  char cVar1;
  longlong lVar2;
  uint unaff_ESI;
  longlong unaff_RDI;
  
  lVar2 = 0;
  do {
    cVar1 = (char)unaff_ESI;
    unaff_ESI = unaff_ESI * 0xccd >> 0xf;
    *(char *)(unaff_RDI + -1 + lVar2) = cVar1 + '0' + (char)unaff_ESI * -10;
    lVar2 = lVar2 + -1;
  } while (lVar2 != -3);
  *(char *)(unaff_RDI + -4) = (char)unaff_ESI + '0';
  return;
}



ulonglong FUN_00e916cf(void)

{
  ulonglong unaff_RSI;
  ulonglong uVar1;
  
  uVar1 = (unaff_RSI & 0xffffffff) * 0x346dc5d7 >> 0x2b;
  FUN_00e9169f();
  return uVar1 & 0xffffffff;
}



int FUN_00e916f0(void)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  uint *unaff_RSI;
  longlong *unaff_RDI;
  
  cVar1 = *(char *)*unaff_RDI;
  if ((int)cVar1 - 0x30U < 10) {
    iVar4 = 0;
    while( true ) {
      pcVar3 = (char *)*unaff_RDI;
      if (9 < (int)*pcVar3 - 0x30U) break;
      *unaff_RDI = (longlong)(pcVar3 + 1);
      iVar4 = iVar4 * 10 + -0x30 + (int)*pcVar3;
    }
    return iVar4;
  }
  iVar4 = 0;
  if (cVar1 == '*') {
    *unaff_RDI = (longlong)((char *)*unaff_RDI + 1);
    uVar2 = *unaff_RSI;
    if (uVar2 < 0x30) {
      piVar5 = (int *)((ulonglong)uVar2 + *(longlong *)(unaff_RSI + 4));
      *unaff_RSI = uVar2 + 8;
    }
    else {
      piVar5 = *(int **)(unaff_RSI + 2);
      *(int **)(unaff_RSI + 2) = piVar5 + 2;
    }
    iVar4 = *piVar5;
  }
  return iVar4;
}



ulonglong FUN_00e91758(uint *param_1,byte *param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  byte bVar3;
  ushort uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  byte *pbVar15;
  ulonglong uVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  char cVar20;
  uint uVar21;
  uint uVar22;
  ulonglong *puVar23;
  ulonglong uVar24;
  ulonglong unaff_RSI;
  uint *puVar25;
  longlong unaff_RDI;
  int iVar26;
  ulonglong uVar27;
  char *pcVar28;
  byte *local_70;
  undefined2 local_66;
  uint local_64 [5];
  uint auStack_50 [2];
  ulonglong *local_48;
  longlong local_40;
  
  uVar24 = 0;
  puVar25 = auStack_50;
  for (lVar18 = 6; local_70 = param_2, lVar18 != 0; lVar18 = lVar18 + -1) {
    *puVar25 = *param_1;
    param_1 = param_1 + 1;
    puVar25 = puVar25 + 1;
  }
LAB_00e9178d:
  if (*local_70 != 0) {
    if ((*local_70 == 0x25) &&
       (pbVar15 = local_70 + 1, pbVar1 = local_70 + 1, local_70 = pbVar15, *pbVar1 != 0x25)) {
      bVar5 = false;
      bVar11 = false;
      bVar8 = false;
      bVar7 = false;
      bVar6 = false;
      bVar10 = false;
      do {
        bVar3 = *pbVar15;
        if (bVar3 == 0x2b) {
          bVar6 = true;
        }
        else if ((char)bVar3 < ',') {
          if (bVar3 == 0x20) {
            bVar7 = true;
          }
          else {
            if (bVar3 != 0x23) goto LAB_00e9180a;
            bVar11 = true;
          }
        }
        else if (bVar3 == 0x2d) {
          bVar10 = true;
        }
        else {
          if (bVar3 != 0x30) goto LAB_00e9180a;
          bVar8 = true;
        }
        pbVar15 = pbVar15 + 1;
        bVar5 = true;
      } while( true );
    }
    if (uVar24 < unaff_RSI) {
      *(byte *)(unaff_RDI + uVar24) = *local_70;
    }
    uVar24 = uVar24 + 1;
    goto LAB_00e91f66;
  }
switchD_00e918c7_caseD_65:
  if (unaff_RSI != 0) {
    uVar27 = unaff_RSI - 1;
    if (uVar24 < unaff_RSI - 1) {
      uVar27 = uVar24;
    }
    *(undefined1 *)(unaff_RDI + uVar27) = 0;
  }
  return uVar24 & 0xffffffff;
LAB_00e9180a:
  if (bVar5) {
    local_70 = pbVar15;
  }
  iVar13 = FUN_00e916f0();
  if (iVar13 < 0) {
    iVar13 = -iVar13;
    bVar10 = true;
  }
  bVar5 = false;
  if (bVar10) {
    bVar8 = false;
  }
  uVar27 = 0xffffffffffffffff;
  if (*local_70 == 0x2e) {
    local_70 = local_70 + 1;
    iVar14 = FUN_00e916f0();
    uVar27 = (ulonglong)iVar14;
    if (-1 < iVar14) {
      bVar8 = false;
    }
  }
  puVar23 = local_48;
  bVar9 = false;
  iVar14 = -1;
  bVar3 = *local_70;
  pbVar15 = local_70;
  if ((bVar3 & 0xfb) == 0x68) {
    iVar14 = (int)(char)bVar3;
    pbVar15 = local_70 + 1;
    if (bVar3 == local_70[1]) {
      iVar14 = iVar14 + -0x20;
      pbVar15 = local_70 + 2;
    }
  }
  local_70 = pbVar15;
  bVar3 = *local_70;
  if (bVar3 == 0x58) {
    iVar17 = 0x10;
    goto LAB_00e91a93;
  }
  switch(bVar3) {
  case 99:
    bVar11 = false;
    pcVar28 = (char *)&local_66;
    if (iVar14 != 0x6c) {
      if (auStack_50[0] < 0x30) {
        puVar23 = (ulonglong *)((ulonglong)auStack_50[0] + local_40);
        auStack_50[0] = auStack_50[0] + 8;
      }
      else {
        local_48 = local_48 + 1;
      }
      iVar26 = 1;
      cVar20 = '\0';
      local_66 = CONCAT11(local_66._1_1_,(char)(uint)*puVar23);
      uVar16 = 1;
      goto LAB_00e91da7;
    }
    if (auStack_50[0] < 0x30) {
      puVar23 = (ulonglong *)((ulonglong)auStack_50[0] + local_40);
      auStack_50[0] = auStack_50[0] + 8;
    }
    else {
      local_48 = local_48 + 1;
    }
    local_64[0]._0_2_ = 0;
    uVar27 = 0x7fffffff;
    local_66 = (short)(uint)*puVar23;
LAB_00e919ac:
    bVar5 = true;
    uVar16 = 0;
    puVar25 = (uint *)pcVar28;
    while ((uVar16 < uVar27 && (uVar4 = (ushort)*puVar25, uVar4 != 0))) {
      lVar18 = (longlong)(int)((2 - (uint)(uVar4 < 0x80)) + (uint)(0x7ff < uVar4));
      if (uVar27 < lVar18 + uVar16) break;
      puVar12 = (uint *)((longlong)puVar25 + 2);
      if ((uVar4 & 0xfc00) == 0xd800) {
        if (uVar27 == lVar18 + uVar16) break;
        if ((*puVar25 & 0xfc000000) == 0xdc000000) {
          lVar18 = lVar18 + 1;
          puVar12 = puVar25 + 1;
        }
      }
      puVar25 = puVar12;
      uVar16 = uVar16 + lVar18;
    }
    break;
  case 100:
  case 0x69:
    bVar9 = true;
  case 0x75:
    bVar11 = false;
    iVar17 = 10;
LAB_00e91a93:
    if (bVar9) {
      if (iVar14 == 0x68) {
        if (auStack_50[0] < 0x30) {
          puVar23 = (ulonglong *)((ulonglong)auStack_50[0] + local_40);
          auStack_50[0] = auStack_50[0] + 8;
        }
        else {
          local_48 = local_48 + 1;
        }
        uVar16 = (ulonglong)(short)(ushort)*puVar23;
      }
      else if (iVar14 < 0x69) {
        if (iVar14 == 0x48) {
          if (auStack_50[0] < 0x30) {
            puVar23 = (ulonglong *)((ulonglong)auStack_50[0] + local_40);
            auStack_50[0] = auStack_50[0] + 8;
          }
          else {
            local_48 = local_48 + 1;
          }
          uVar16 = (ulonglong)(char)(byte)*puVar23;
        }
        else {
          if (iVar14 == 0x4c) goto LAB_00e91b56;
          if (auStack_50[0] < 0x30) {
            puVar23 = (ulonglong *)((ulonglong)auStack_50[0] + local_40);
            auStack_50[0] = auStack_50[0] + 8;
          }
          else {
            local_48 = local_48 + 1;
          }
          uVar16 = (ulonglong)(int)(uint)*puVar23;
        }
      }
      else {
LAB_00e91b56:
        if (auStack_50[0] < 0x30) {
          puVar23 = (ulonglong *)((ulonglong)auStack_50[0] + local_40);
          auStack_50[0] = auStack_50[0] + 8;
        }
        else {
          local_48 = local_48 + 1;
        }
        uVar16 = *puVar23;
      }
    }
    else {
LAB_00e91b41:
      if (iVar14 == 0x68) {
        if (auStack_50[0] < 0x30) {
          puVar23 = (ulonglong *)((ulonglong)auStack_50[0] + local_40);
          auStack_50[0] = auStack_50[0] + 8;
        }
        else {
          local_48 = local_48 + 1;
        }
        uVar16 = (ulonglong)(ushort)*puVar23;
      }
      else {
        if (0x68 < iVar14) goto LAB_00e91b56;
        if (iVar14 == 0x48) {
          if (auStack_50[0] < 0x30) {
            puVar23 = (ulonglong *)((ulonglong)auStack_50[0] + local_40);
            auStack_50[0] = auStack_50[0] + 8;
          }
          else {
            local_48 = local_48 + 1;
          }
          uVar16 = (ulonglong)(byte)*puVar23;
        }
        else {
          if (iVar14 == 0x4c) goto LAB_00e91b56;
          if (auStack_50[0] < 0x30) {
            puVar23 = (ulonglong *)((ulonglong)auStack_50[0] + local_40);
            auStack_50[0] = auStack_50[0] + 8;
          }
          else {
            local_48 = local_48 + 1;
          }
          uVar16 = (ulonglong)(uint)*puVar23;
        }
      }
    }
    iVar26 = (int)uVar27;
    cVar20 = '\0';
    if (bVar9) {
      if ((longlong)uVar16 < 0) {
        uVar16 = -uVar16;
        cVar20 = '-';
      }
      else if (bVar6) {
        cVar20 = '+';
      }
      else {
        cVar20 = '\0';
        if (!bVar7) goto LAB_00e91c24;
        cVar20 = ' ';
      }
      iVar13 = iVar13 + -1;
    }
LAB_00e91c24:
    pcVar28 = (char *)auStack_50;
    if (iVar17 == 10) {
      if (uVar16 != 0) {
        FUN_00e916cf();
        FUN_00e916cf();
        FUN_00e916cf();
        FUN_00e916cf();
        FUN_00e9169f();
        pcVar28 = (char *)local_64;
        do {
          if ((char)*(uint *)pcVar28 != '0') break;
          pcVar28 = (char *)((longlong)pcVar28 + 1);
        } while ((uint *)pcVar28 != auStack_50);
      }
    }
    else if (iVar17 == 0x10) {
      for (; uVar16 != 0; uVar16 = uVar16 >> 4) {
        *(char *)((longlong)pcVar28 + -1) = "0123456789ABCDEF"[(uint)uVar16 & 0xf];
        pcVar28 = (char *)((longlong)pcVar28 + -1);
      }
    }
    else {
      for (; uVar16 != 0; uVar16 = uVar16 >> 3) {
        pcVar28 = (char *)((longlong)pcVar28 + -1);
        *pcVar28 = ((byte)uVar16 & 7) + 0x30;
      }
    }
    uVar16 = (longlong)auStack_50 - (longlong)pcVar28;
    if (iVar26 < 0) {
      iVar26 = 1;
    }
    if ((ulonglong)(longlong)iVar26 < uVar16) {
      iVar26 = (int)uVar16;
    }
    if (bVar11) {
      if ((iVar17 == 8) && ((longlong)iVar26 == uVar16)) {
        iVar26 = iVar26 + 1;
      }
      if ((iVar17 == 0x10) && (0 < iVar26)) {
        iVar13 = iVar13 + -2;
      }
      else {
        bVar11 = false;
      }
    }
    bVar5 = false;
    if ((bVar8) && (iVar26 < iVar13)) {
      iVar26 = iVar13;
    }
    goto LAB_00e91da7;
  default:
    goto switchD_00e918c7_caseD_65;
  case 0x6f:
    iVar17 = 8;
    goto LAB_00e91a93;
  case 0x70:
    if ((int)uVar27 < 0) {
      uVar27 = 0x10;
    }
  case 0x78:
    iVar26 = (int)uVar27;
    if (bVar3 != 0x70) {
      iVar17 = 0x10;
      goto LAB_00e91b41;
    }
    if (auStack_50[0] < 0x30) {
      puVar23 = (ulonglong *)((ulonglong)auStack_50[0] + local_40);
      auStack_50[0] = auStack_50[0] + 8;
    }
    else {
      local_48 = local_48 + 1;
    }
    uVar16 = *puVar23;
    iVar17 = 0x10;
    cVar20 = '\0';
    goto LAB_00e91c24;
  case 0x73:
    bVar5 = false;
    if ((int)uVar27 < 0) {
      uVar27 = 0x7fffffff;
    }
    if (auStack_50[0] < 0x30) {
      puVar23 = (ulonglong *)((ulonglong)auStack_50[0] + local_40);
      auStack_50[0] = auStack_50[0] + 8;
    }
    else {
      local_48 = local_48 + 1;
    }
    pcVar28 = (char *)*puVar23;
    if ((uint *)pcVar28 == (uint *)0x0) {
      pcVar28 = &DAT_00e9e557;
      if (5 < (int)uVar27) {
        pcVar28 = "(null)";
      }
    }
    else if (iVar14 == 0x6c) goto LAB_00e919ac;
    uVar16 = FUN_00e85dd0();
  }
  bVar11 = false;
  iVar26 = (int)uVar16;
  cVar20 = '\0';
LAB_00e91da7:
  iVar13 = iVar13 - iVar26;
  if (!bVar10) {
    for (uVar27 = uVar24; 0 < (iVar13 + (int)uVar24) - (int)uVar27; uVar27 = uVar27 + 1) {
      if (uVar27 < unaff_RSI) {
        *(undefined1 *)(unaff_RDI + uVar27) = 0x20;
      }
    }
    iVar14 = 0;
    if (-1 < iVar13) {
      iVar14 = iVar13;
    }
    iVar13 = (iVar13 + -1) - iVar14;
    uVar24 = uVar24 + (longlong)iVar14;
  }
  if (cVar20 != '\0') {
    if (uVar24 < unaff_RSI) {
      *(char *)(unaff_RDI + uVar24) = cVar20;
    }
    uVar24 = uVar24 + 1;
  }
  if (bVar11) {
    if (uVar24 < unaff_RSI) {
      *(undefined1 *)(unaff_RDI + uVar24) = 0x30;
    }
    if (uVar24 + 1 < unaff_RSI) {
      *(undefined1 *)(unaff_RDI + 1 + uVar24) = 0x58;
    }
    uVar24 = uVar24 + 2;
  }
  for (uVar27 = (ulonglong)iVar26; uVar16 < uVar27; uVar27 = uVar27 - 1) {
    if (uVar24 < unaff_RSI) {
      *(undefined1 *)(unaff_RDI + uVar24) = 0x30;
    }
    uVar24 = uVar24 + 1;
  }
  uVar27 = uVar24;
  if (bVar5) {
    while (uVar24 = uVar27, uVar2 = uVar16 - 1, uVar16 != 0) {
      uVar4 = (ushort)*(uint *)pcVar28;
      puVar25 = (uint *)((longlong)pcVar28 + 2);
      uVar27 = uVar24 + 1;
      if ((uVar4 & 0xf800) == 0xd800) {
        if (((uVar4 & 0x400) == 0) && ((*(ushort *)((longlong)pcVar28 + 2) & 0xfc00) == 0xdc00)) {
          puVar25 = (uint *)((longlong)pcVar28 + 4);
          uVar21 = (uint)uVar4 * 0x400 + -0x35fdc00 + (uint)*(ushort *)((longlong)pcVar28 + 2);
        }
        else {
          uVar21 = 0xfffd;
        }
        iVar14 = 2;
LAB_00e91ed0:
        iVar14 = (uint)(0xffff < uVar21) + iVar14;
        pbVar15 = (byte *)(unaff_RDI + uVar24);
        lVar18 = (longlong)iVar14;
        if (uVar24 < unaff_RSI) {
          *pbVar15 = 0;
        }
        if (lVar18 + uVar27 < unaff_RSI) {
          *pbVar15 = (byte)(0x780 >> ((byte)iVar14 & 0x1f));
          lVar19 = lVar18;
          do {
            uVar22 = uVar21 >> 6;
            pbVar15[lVar19] = (byte)uVar21 & 0x3f | 0x80;
            lVar19 = lVar19 + -1;
            uVar21 = uVar22;
          } while (lVar19 != 0);
          *pbVar15 = *pbVar15 | (byte)uVar22;
        }
        uVar16 = uVar2 - lVar18;
        uVar27 = lVar18 + uVar27;
        pcVar28 = (char *)puVar25;
      }
      else {
        uVar21 = (uint)uVar4;
        if (0x7f < uVar4) {
          iVar14 = 2 - (uint)(uVar21 < 0x800);
          goto LAB_00e91ed0;
        }
        uVar16 = uVar2;
        pcVar28 = (char *)puVar25;
        if (uVar24 < unaff_RSI) {
          *(char *)(unaff_RDI + uVar24) = (char)uVar4;
        }
      }
    }
  }
  else {
    uVar16 = uVar16 + uVar24;
    for (; uVar24 != uVar16; uVar24 = uVar24 + 1) {
      if (uVar24 < unaff_RSI) {
        uVar21 = *(uint *)pcVar28;
        pcVar28 = (char *)((longlong)pcVar28 + 1);
        *(char *)(unaff_RDI + uVar24) = (char)uVar21;
      }
    }
  }
  for (uVar27 = uVar24; 0 < (iVar13 + (int)uVar24) - (int)uVar27; uVar27 = uVar27 + 1) {
    if (uVar27 < unaff_RSI) {
      *(undefined1 *)(unaff_RDI + uVar27) = 0x20;
    }
  }
  if (iVar13 < 0) {
    iVar13 = 0;
  }
  uVar24 = uVar24 + (longlong)iVar13;
LAB_00e91f66:
  local_70 = local_70 + 1;
  goto LAB_00e9178d;
}



void FUN_00e91fa2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 local_res8 [32];
  undefined4 local_50 [2];
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 local_38 [24];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_48 = local_res8;
  local_40 = local_38;
  local_50[0] = 0x18;
  local_20 = param_1;
  local_18 = param_3;
  local_10 = param_4;
  FUN_00e91758(local_50);
  return;
}



// WARNING: Removing unreachable block (ram,0x00e92012)
// WARNING: Removing unreachable block (ram,0x00e92004)

longlong FUN_00e91fe4(void)

{
  uint *puVar1;
  longlong lVar2;
  longlong local_20;
  
  if ((DAT_00ea03c8 != '\0') && (puVar1 = (uint *)cpuid_basic_info(0), 6 < *puVar1)) {
    lVar2 = cpuid_Extended_Feature_Enumeration_info(7);
    if ((*(uint *)(lVar2 + 0xc) >> 0x10 & 1) != 0) {
      lVar2 = FUN_00e908ca(*(uint *)(lVar2 + 0xc),0xffffffff);
      if (lVar2 != 0) {
        return lVar2;
      }
      DAT_00ee4048 = FUN_00e862a0();
      FUN_00e86200();
      *(int *)(local_20 + 0x60) = *(int *)(local_20 + 0x60) + (int)local_20;
      FUN_00e9222a();
      return 0;
    }
  }
  return 0;
}



void FUN_00e920a2(undefined8 param_1)

{
  ulonglong *puVar1;
  ulonglong *in_CR3;
  uint in_CR4;
  
  if ((((in_CR4 & 0x1000) != 0) == (bool)DAT_00ee4040) && (DAT_00ee4048 != (code *)0x0)) {
    if ((in_CR4 & 0x1000) == 0) {
      puVar1 = (ulonglong *)FUN_00e86200(param_1,0x1000);
      *puVar1 = (ulonglong)in_CR3 | 0x67;
    }
    else if (0xffffffff < (*in_CR3 & 0xfffffffffffff000)) {
      FUN_00e862a0(param_1,0x1000);
    }
    GlobalDescriptorTableRegister(0xe9da100017);
    (*DAT_00ee4048)();
  }
  return;
}



void FUN_00e9213c(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 unaff_RSI;
  undefined1 auStack_48 [32];
  undefined1 auStack_28 [40];
  
  puVar2 = auStack_28;
  uVar1 = unaff_RSI;
  if (DAT_00ea03c8 != '\0') {
    puVar2 = auStack_48;
    (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0xd8))();
  }
  *(undefined8 *)(puVar2 + -8) = 0xe92191;
  FUN_00e8d760(0,(uint)uVar1 | (uint)((ulonglong)unaff_RSI >> 0x20),0,puVar2 + 8);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



ulonglong FUN_00e9222a(void)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar8;
  undefined1 auStack_88 [24];
  ulonglong local_70;
  longlong local_68;
  ulonglong local_58;
  int local_50;
  
  cVar1 = DAT_00ea03c8;
  uVar3 = unaff_RDI + unaff_RSI;
  uVar7 = unaff_RDI & 0xfffffffffffff000;
  uVar6 = uVar3 + 0xfff & 0xfffffffffffff000;
  if (DAT_00ee4068 == 0) {
    if (DAT_00ee4050 != 0) {
      do {
        do {
          if (uVar3 <= unaff_RDI) goto LAB_00e923bc;
          if (DAT_00ea03c8 == '\0') {
            uVar2 = FUN_00e8d760(&local_70,unaff_RDI >> 0x20,auStack_88);
            uVar4 = (ulonglong)(uVar2 & 0x7fffffff) | (ulonglong)((int)uVar2 < 0) << 0x3f;
          }
          else {
            uVar4 = (**(code **)(DAT_00ee4050 + 0x38))(unaff_RDI);
          }
          if (uVar4 != 0) goto LAB_00e923bc;
          unaff_RDI = local_68 + local_70;
        } while ((local_50 != 2) || ((local_58 & 0x24000) == 0));
        uVar4 = local_70;
        if (local_70 < uVar7) {
          uVar4 = uVar7;
        }
        uVar8 = unaff_RDI;
        if (uVar6 <= unaff_RDI) {
          uVar8 = uVar6;
        }
        uVar5 = uVar8 - uVar4;
        if (DAT_00ea03c8 == '\0') {
          uVar2 = FUN_00e8d760(uVar5 & 0xffffffff,uVar4 >> 0x20,uVar5 >> 0x20,8);
          uVar4 = (ulonglong)(uVar2 & 0x7fffffff) | (ulonglong)((int)uVar2 < 0) << 0x3f;
        }
        else {
          uVar4 = (**(code **)(DAT_00ee4050 + 0x40))(uVar4,uVar5,8);
        }
      } while (uVar4 == 0);
      FUN_00e91139(uVar4,uVar8);
    }
LAB_00e923bc:
    uVar3 = 0;
  }
  else {
    uVar6 = uVar6 - uVar7;
    if (DAT_00ea03c8 == '\0') {
      uVar2 = FUN_00e8d760(unaff_RDI >> 0x20,(uint)unaff_RDI & 0xfffff000,uVar6 & 0xffffffff,
                           uVar6 >> 0x20);
      uVar3 = (ulonglong)(uVar2 & 0x7fffffff) | (ulonglong)((int)uVar2 < 0) << 0x3f;
    }
    else {
      uVar3 = (**(code **)(DAT_00ee4068 + 8))(DAT_00ee4068,uVar7,uVar6,0x20000);
    }
    if (uVar3 == 0) {
      if (cVar1 == '\0') {
        uVar2 = FUN_00e8d760(unaff_RDI >> 0x20,(uint)unaff_RDI & 0xfffff000,uVar6 & 0xffffffff,
                             uVar6 >> 0x20);
        uVar3 = (ulonglong)(uVar2 & 0x7fffffff) | (ulonglong)((int)uVar2 < 0) << 0x3f;
      }
      else {
        uVar3 = (**(code **)(DAT_00ee4068 + 0x10))(DAT_00ee4068,uVar7,uVar6,0x4000);
      }
      if (uVar3 == 0) {
        return 0;
      }
    }
    FUN_00e91139();
  }
  return uVar3;
}



// WARNING: Removing unreachable block (ram,0x00e926b4)
// WARNING: Type propagation algorithm not settling

void FUN_00e9249b(undefined8 param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulonglong *puVar3;
  undefined *puVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong *unaff_RBX;
  uint uVar17;
  longlong *unaff_RSI;
  ulonglong *puVar18;
  ulonglong *puVar19;
  ulonglong *puVar20;
  ulonglong *in_R11;
  uint uVar21;
  ulonglong uVar22;
  undefined *puVar23;
  uint uVar24;
  char *pcVar25;
  undefined4 *puVar26;
  bool bVar27;
  ulonglong local_108;
  undefined8 *local_100;
  int local_d8;
  uint local_d4;
  undefined1 local_d0 [8];
  undefined8 *local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  undefined8 *local_a8;
  ulonglong local_a0 [3];
  undefined8 *local_88;
  undefined8 local_80;
  ulonglong *local_78;
  undefined8 local_70;
  ulonglong *local_68;
  ulonglong *local_60;
  ulonglong local_58 [5];
  
  local_a0[1] = 0x4b4a40ecf4560cf6;
  local_a0[2] = 0x89b1d0571dbf92a1;
  local_c8 = (undefined8 *)0x0;
  DAT_00ea6038 = param_2;
  DAT_00ee4058 = unaff_RSI;
  if (*unaff_RSI == 0x5453595320494249) {
    FUN_00e8cab0();
    lVar11 = FUN_00e8c4c0();
    if (lVar11 == 0) {
      plVar10 = (longlong *)FUN_00e8e580();
      DAT_00ee4050 = plVar10;
      if (plVar10 != (longlong *)0x0) goto LAB_00e9256b;
      goto LAB_00e92592;
    }
    FUN_00e91139();
    unaff_RBX = param_2;
  }
  do {
    param_2 = unaff_RBX;
    plVar10 = (longlong *)FUN_00e9213c();
LAB_00e9256b:
    if (*plVar10 != 0x565245535f455844) {
      FUN_00e91139();
      DAT_00ee4050 = (longlong *)0x0;
    }
LAB_00e92592:
    cVar6 = DAT_00ea03c8;
    if (DAT_00ea03c8 == '\0') {
      DAT_00ee4068._4_4_ = 0;
      FUN_00e8d760(&DAT_00ee4068,0);
    }
    else {
      (**(code **)(DAT_00ee4058[0xc] + 0x140))(local_a0 + 1,0);
    }
    lVar11 = FUN_00e91fe4();
    if (lVar11 == 0) {
      puVar23 = &DAT_00e9db40;
      uVar22 = CONCAT44((int)param_2[0x19],(int)param_2[0x45]);
      while( true ) {
        uVar12 = FUN_00e85f70();
        puVar4 = puVar23;
        if (uVar22 == uVar12) break;
        if (((uVar22 < uVar12) && (((&DAT_00e96260)[*(byte *)(uVar12 - 1)] & 0x20) != 0)) ||
           (puVar23 = puVar23 + 0xe, puVar4 = DAT_00ee4060, puVar23 == &DAT_00e9db6a)) break;
      }
      DAT_00ee4060 = puVar4;
      lVar11 = FUN_00e8dd8e();
      if (lVar11 != 0) goto LAB_00e93bdd;
      if (0 < DAT_00ee4004) {
        *(ushort *)((longlong)param_2 + 0x236) = *(ushort *)((longlong)param_2 + 0x236) | 0x80;
      }
      local_58[0] = 0;
      if (DAT_00ee4009 == '\0') {
        FUN_00e93f09();
        uVar22 = FUN_00e87040();
        local_58[0] = uVar22 ^ local_58[0];
        if ((*(uint *)(DAT_00ee4058 + 1) < 0x20001) && (iVar7 = FUN_00e85d40(), iVar7 == 0)) {
          FUN_00e91139();
LAB_00e9277f:
          in_R11 = (ulonglong *)0x0;
          local_58[0] = local_58[0] & 0xffffffff00000000;
        }
        else if (DAT_00ee4060 != (undefined *)0x0) {
          FUN_00e91139();
          goto LAB_00e9277f;
        }
        *(byte *)((longlong)DAT_00ea6038 + 0x211) = *(byte *)((longlong)DAT_00ea6038 + 0x211) | 2;
      }
      lVar11 = FUN_00e94557(local_58[0] & 0xffffffff,&local_68,1,0x1000000);
      if (lVar11 != 0) goto LAB_00e93bdd;
      lVar11 = FUN_00e856c0();
      puVar3 = local_68;
      if (lVar11 == -1) {
        FUN_00e90975();
        goto LAB_00e93bdd;
      }
      lVar13 = FUN_00e9222a();
      if (lVar13 != 0) goto LAB_00e93bdd;
      lVar13 = FUN_00e8e63d(&local_c8,0xffffffffffffffff);
      if (lVar13 == 0) {
        if ((local_c8 != (undefined8 *)0x0) && (local_c8[1] != 0)) {
          uVar1 = *local_c8;
          *(int *)(param_2 + 0x43) = (int)uVar1;
          *(int *)(param_2 + 0x18) = (int)((ulonglong)uVar1 >> 0x20);
          uVar1 = local_c8[1];
          *(int *)((longlong)param_2 + 0x21c) = (int)uVar1;
          *(int *)((longlong)param_2 + 0xc4) = (int)((ulonglong)uVar1 >> 0x20);
        }
        if (*(char *)((longlong)param_2 + 0x1ec) == '\0') {
          uVar5 = FUN_00e94877();
          *(undefined1 *)((longlong)param_2 + 0x1ec) = uVar5;
        }
        FUN_00e94b51();
        FUN_00e93fe1();
        FUN_00e94c72();
        local_88 = (undefined8 *)&DAT_4a3823dc9042a9de;
        local_80 = 0x6a5180d0de7afb96;
        local_78 = (ulonglong *)&DAT_41cbf4fa982c298b;
        local_70 = 0x39b88f68aa7738b8;
        FUN_00e86200();
        local_c0 = 0;
        if (cVar6 == '\0') {
          uVar8 = FUN_00e8d760(0,&local_88);
          uVar22 = (ulonglong)(uVar8 & 0x7fffffff) | (ulonglong)((int)uVar8 < 0) << 0x3f;
        }
        else {
          uVar22 = (**(code **)(DAT_00ee4058[0xc] + 0xb0))(2);
        }
        if (uVar22 == 0x8000000000000005) {
          uVar22 = FUN_00e8fac1();
        }
        if (uVar22 != 0) {
          local_c0 = 0;
          if (cVar6 == '\0') {
            in_R11 = local_58;
            uVar8 = FUN_00e8d760(0,&local_78);
            uVar22 = (ulonglong)(uVar8 & 0x7fffffff) | (ulonglong)((int)uVar8 < 0) << 0x3f;
          }
          else {
            uVar22 = (**(code **)(DAT_00ee4058[0xc] + 0xb0))(2,&local_78,0,&local_c0,0,0x3430000);
          }
          if (uVar22 == 0x8000000000000005) {
            local_b0 = 0;
            local_b8 = local_c0;
            local_a8 = (undefined8 *)0x0;
            if (cVar6 == '\0') {
              iVar7 = FUN_00e8d760();
              if (iVar7 == 0) {
                uVar22 = 0x3430000;
                iVar7 = FUN_00e8d760(0,&local_78);
                if (iVar7 == 0) goto LAB_00e92af2;
LAB_00e92d6f:
                FUN_00e8d760(uVar22,local_58);
              }
            }
            else {
              lVar13 = (**(code **)(DAT_00ee4058[0xc] + 0x40))(2);
              if (lVar13 == 0) {
                lVar13 = (**(code **)(DAT_00ee4058[0xc] + 0xb0))(2);
                if (lVar13 == 0) {
LAB_00e92af2:
                  local_100 = (undefined8 *)0x0;
                  iVar7 = 0;
                  local_108._0_4_ = 0;
                  for (uVar12 = 0; uVar22 = local_b0,
                      uVar12 < local_b8 / ((-(ulonglong)(cVar6 == '\0') & 0xfffffffffffffffc) + 8);
                      uVar12 = uVar12 + 1) {
                    if (cVar6 == '\0') {
                      uVar22 = (ulonglong)*(uint *)(local_b0 + uVar12 * 4);
                    }
                    else {
                      uVar22 = *(ulonglong *)(local_b0 + uVar12 * 8);
                    }
                    local_68 = (ulonglong *)0x4ca568b84cf5b200;
                    local_60 = (ulonglong *)0x9a02503f3eb2ec9e;
                    if (cVar6 == '\0') {
                      in_R11 = (ulonglong *)0x0;
                      local_a8 = (undefined8 *)((ulonglong)local_a8 & 0xffffffff);
                      uVar8 = FUN_00e8d760();
                      uVar14 = (ulonglong)(uVar8 & 0x7fffffff) | (ulonglong)((int)uVar8 < 0) << 0x3f
                      ;
                    }
                    else {
                      uVar14 = (**(code **)(DAT_00ee4058[0xc] + 0x98))(uVar22);
                    }
                    if (uVar14 == 0) {
                      local_a0[0] = 0;
                      if (cVar6 == '\0') {
                        FUN_00e8d760(local_a0,&local_68);
                        uVar8 = FUN_00e8d760(&local_d4,&local_d8,local_d0);
                        uVar22 = (ulonglong)(uVar8 & 0x7fffffff) |
                                 (ulonglong)((int)uVar8 < 0) << 0x3f;
                      }
                      else {
                        (**(code **)(DAT_00ee4058[0xc] + 0x98))(uVar22,&local_68,local_a0);
                        uVar22 = (*(code *)*local_a8)(local_a8);
                      }
                      if ((uVar22 == 0) && ((local_100 == (undefined8 *)0x0 || (local_a0[0] != 0))))
                      {
                        uVar22 = (ulonglong)local_d4;
                        local_108._0_4_ = local_d4;
                        iVar7 = local_d8;
                        if (local_a0[0] != 0) break;
                        local_100 = local_a8;
                      }
                    }
                  }
                  if ((uint)local_108 != 0 || iVar7 != 0) {
                    *(undefined1 *)((longlong)param_2 + 0xf) = 0x70;
                    *(undefined2 *)((longlong)param_2 + 0x16) = 0x20;
                    *(short *)((longlong)param_2 + 0x14) = (short)(uint)local_108;
                    *(short *)((longlong)param_2 + 0x12) = (short)iVar7;
                    *(undefined8 *)((longlong)param_2 + 0x26) = 0x1808000808081008;
                  }
                  if (cVar6 == '\0') goto LAB_00e92d6f;
                }
                (**(code **)(DAT_00ee4058[0xc] + 0x48))(local_b0);
              }
            }
          }
        }
        local_68 = (ulonglong *)0x4ca568b84cf5b200;
        local_a8 = (undefined8 *)0x0;
        local_60 = (ulonglong *)0x9a02503f3eb2ec9e;
        local_a0[0] = 0;
        if (cVar6 == '\0') {
          iVar7 = FUN_00e8d760(0,&local_68,local_a0,0);
          if (iVar7 == -0x7ffffffb) {
            local_a8 = (undefined8 *)((ulonglong)local_a8 & 0xffffffff);
            uVar8 = FUN_00e8d760(&local_a8,local_a0[0]);
            uVar22 = (ulonglong)(uVar8 & 0x7fffffff) | (ulonglong)((int)uVar8 < 0) << 0x3f;
            goto LAB_00e92eaa;
          }
LAB_00e92fa5:
          if (iVar7 == 0) {
LAB_00e92f08:
            puVar20 = (ulonglong *)param_2[0x4a];
            puVar18 = (ulonglong *)param_2[0x4a];
            while (puVar19 = puVar20, puVar19 != (ulonglong *)0x0) {
              puVar18 = puVar19;
              puVar20 = (ulonglong *)*puVar19;
            }
            for (uVar22 = 0;
                uVar22 < local_a0[0] / ((-(ulonglong)(cVar6 == '\0') & 0xfffffffffffffffc) + 8);
                uVar22 = uVar22 + 1) {
              if (cVar6 == '\0') {
                uVar12 = (ulonglong)*(uint *)((longlong)local_a8 + uVar22 * 4);
              }
              else {
                uVar12 = local_a8[uVar22];
              }
              local_88 = (undefined8 *)0x0;
              if (cVar6 == '\0') {
                uVar8 = FUN_00e8d760();
                uVar12 = (ulonglong)(uVar8 & 0x7fffffff) | (ulonglong)((int)uVar8 < 0) << 0x3f;
              }
              else {
                uVar12 = (**(code **)(DAT_00ee4058[0xc] + 0x98))(uVar12);
              }
              puVar2 = local_88;
              if ((uVar12 == 0) && (local_88 != (undefined8 *)0x0)) {
                local_78 = (ulonglong *)0x0;
                if (cVar6 == '\0') {
                  local_108 = (ulonglong)*(uint *)(local_88 + 10);
                  uVar12 = local_88[9];
                }
                else {
                  local_108 = local_88[0x13];
                  uVar12 = local_88[0x12];
                }
                if ((uVar12 - 1 < 0x1000000) && (local_108 != 0)) {
                  if (cVar6 == '\0') {
                    uVar8 = FUN_00e8d760();
                    uVar14 = (ulonglong)(uVar8 & 0x7fffffff) | (ulonglong)((int)uVar8 < 0) << 0x3f;
                  }
                  else {
                    uVar14 = (**(code **)(DAT_00ee4058[0xc] + 0x40))(2);
                  }
                  if (uVar14 == 0) {
                    FUN_00e86200();
                    puVar20 = local_78;
                    // WARNING (jumptable): Read-only address (ram,0x0000000c) is written
                    *(int *)((longlong)local_78 + 0xc) = (int)uVar12 + 0x30;
                    // WARNING (jumptable): Read-only address (ram,0x00000008) is written
                    *(int *)(local_78 + 1) = 3;
                    // WARNING (jumptable): Read-only address (ram,0x00000000) is written
                    *local_78 = 0;
                    // WARNING (jumptable): Read-only address (ram,0x00000018) is written
                    local_78[3] = uVar12;
                    if (cVar6 == '\0') {
                      iVar7 = FUN_00e8d760(0);
                      if ((iVar7 != 0) || (iVar7 = FUN_00e8d760(2,1), iVar7 != 0))
                      goto LAB_00e93203;
                    // WARNING (jumptable): Read-only address (ram,0x0000003c) is written
                      *(int *)((longlong)local_78 + 0x3c) = 0;
                    // WARNING (jumptable): Read-only address (ram,0x00000034) is written
                      *(int *)((longlong)local_78 + 0x34) = 0;
                    // WARNING (jumptable): Read-only address (ram,0x0000002c) is written
                      *(int *)((longlong)local_78 + 0x2c) = 0;
                    // WARNING (jumptable): Read-only address (ram,0x00000024) is written
                      *(int *)((longlong)local_78 + 0x24) = 0;
                      iVar7 = FUN_00e8d760(local_78 + 5,local_78 + 4,local_78 + 6);
                      if (iVar7 == 0) goto LAB_00e93289;
LAB_00e93318:
                      FUN_00e8d760();
                    }
                    else {
                      lVar13 = (*(code *)puVar2[6])(puVar2);
                      if ((lVar13 == 0) && (lVar13 = (*(code *)puVar2[6])(puVar2), lVar13 == 0)) {
                        lVar13 = (*(code *)puVar2[0xe])(puVar2);
                        if (lVar13 == 0) {
LAB_00e93289:
                          FUN_00e862a0();
                          if (puVar18 == (ulonglong *)0x0) {
                            param_2[0x4a] = (ulonglong)puVar20;
                            puVar18 = puVar20;
                          }
                          else {
                            *puVar18 = (ulonglong)puVar20;
                            puVar18 = puVar20;
                          }
                          goto LAB_00e9334a;
                        }
                      }
                      else {
LAB_00e93203:
                        FUN_00e91139();
                        if (cVar6 == '\0') goto LAB_00e93318;
                      }
                      (**(code **)(DAT_00ee4058[0xc] + 0x48))(local_78);
                    }
                  }
                  else {
                    FUN_00e91139();
                  }
                }
              }
LAB_00e9334a:
            }
            if (cVar6 != '\0') goto LAB_00e92f5c;
          }
          FUN_00e8d760();
        }
        else {
          lVar13 = (**(code **)(DAT_00ee4058[0xc] + 0xb0))(2,&local_68,0,local_a0,0,in_R11);
          if (lVar13 == -0x7ffffffffffffffb) {
            uVar22 = (**(code **)(DAT_00ee4058[0xc] + 0x40))(2,local_a0[0]);
LAB_00e92eaa:
            if (uVar22 == 0) {
              if (cVar6 == '\0') {
                iVar7 = FUN_00e8d760(0,&local_68);
                goto LAB_00e92fa5;
              }
              lVar13 = (**(code **)(DAT_00ee4058[0xc] + 0xb0))(2);
              goto LAB_00e92f03;
            }
            FUN_00e91139();
          }
          else {
LAB_00e92f03:
            if (lVar13 == 0) goto LAB_00e92f08;
LAB_00e92f5c:
            (**(code **)(DAT_00ee4058[0xc] + 0x48))(local_a8);
          }
        }
        iVar7 = FUN_00e85d40();
        if (iVar7 == 0) {
          local_68 = (ulonglong *)&DAT_44fbf6c391bd12fe;
          local_60 = (ulonglong *)0xe03a30ab2251b7a5;
          local_a0[0] = local_a0[0] & 0xffffffff00000000;
          if (cVar6 == '\0') {
            in_R11 = (ulonglong *)0x0;
            local_78 = (ulonglong *)((ulonglong)local_78 & 0xffffffff);
            iVar7 = FUN_00e8d760(&local_78);
            if (iVar7 == 0) {
              bVar27 = (int)*local_78 == 0x10000;
              goto LAB_00e9346c;
            }
          }
          else {
            lVar13 = (**(code **)(DAT_00ee4058[0xc] + 0x140))(&local_68);
            if (lVar13 == 0) {
              bVar27 = *local_78 == 0x10000;
LAB_00e9346c:
              if (bVar27) {
                if (cVar6 == '\0') {
                  FUN_00e8d760(local_a0);
                }
                else {
                  (*(code *)local_78[4])(local_78);
                }
                if ((int)local_a0[0] != 0) {
                  while( true ) {
                    while( true ) {
                      if (cVar6 == '\0') {
                        local_88 = (undefined8 *)((ulonglong)local_88 & 0xffffffff);
                        uVar8 = FUN_00e8d760();
                        uVar22 = (ulonglong)(uVar8 & 0x7fffffff) |
                                 (ulonglong)((int)uVar8 < 0) << 0x3f;
                      }
                      else {
                        uVar22 = (**(code **)(DAT_00ee4058[0xc] + 0x40))(2);
                      }
                      if (uVar22 != 0) goto LAB_00e9353d;
                      if (cVar6 == '\0') break;
                      lVar13 = (*(code *)local_78[4])(local_78);
                      if (lVar13 != -0x7ffffffffffffffb) goto LAB_00e93578;
                      (**(code **)(DAT_00ee4058[0xc] + 0x48))(local_88);
                    }
                    iVar7 = FUN_00e8d760(local_a0,local_88 + 2);
                    if (iVar7 != -0x7ffffffb) break;
                    FUN_00e8d760();
                  }
LAB_00e93578:
                  *(undefined4 *)(local_88 + 1) = 5;
                  *local_88 = 0;
                  *(int *)((longlong)local_88 + 0xc) = (int)local_a0[0];
                  puVar2 = (undefined8 *)param_2[0x4a];
                  if ((undefined8 *)param_2[0x4a] == (undefined8 *)0x0) {
                    param_2[0x4a] = (ulonglong)local_88;
                  }
                  else {
                    do {
                      puVar15 = puVar2;
                      puVar2 = (undefined8 *)*puVar15;
                    } while (puVar2 != (undefined8 *)0x0);
                    *puVar15 = local_88;
                  }
                }
              }
              else {
LAB_00e9353d:
                FUN_00e91139();
              }
              if (cVar6 == '\0') goto LAB_00e9374c;
            }
            lVar13 = FUN_00e949ed();
            if ((lVar13 != 0) && (lVar13 = FUN_00e94b08(), lVar13 != 0)) {
              pcVar25 = "MacBookPro11,3";
              do {
                iVar7 = FUN_00e85d60();
                if (iVar7 == 0) {
                  bVar27 = true;
                  goto LAB_00e9368c;
                }
                pcVar25 = pcVar25 + 0xf;
              } while (pcVar25 != "");
              bVar27 = false;
LAB_00e9368c:
              if (bVar27) {
                local_58[0] = 0x45e67d5cc5c5da95;
                local_58[1] = 0x7700b12bd53ff1b2;
                lVar13 = (**(code **)(DAT_00ee4058[0xc] + 0x140))(local_58);
                if (lVar13 == 0) {
                  if ((1 < *local_68) &&
                     (lVar13 = (*(code *)local_68[2])("Apple Inc."), lVar13 != 0)) {
                    FUN_00e91139();
                  }
                  if ((*local_68 != 0) &&
                     (lVar13 = (*(code *)local_68[1])("Mac OS X 10.9"), lVar13 != 0)) {
                    FUN_00e91139();
                  }
                }
              }
            }
          }
        }
LAB_00e9374c:
        local_68 = (ulonglong *)0x453138a7c5a010fe;
        local_60 = (ulonglong *)0x4916fdd200054a8a;
        if (cVar6 == '\0') {
          local_78 = (ulonglong *)((ulonglong)local_78 & 0xffffffff);
          uVar8 = FUN_00e8d760(&local_78,0,local_58);
          uVar22 = (ulonglong)(uVar8 & 0x7fffffff) | (ulonglong)((int)uVar8 < 0) << 0x3f;
        }
        else {
          uVar22 = (**(code **)(DAT_00ee4058[0xc] + 0x140))(&local_68,0,&local_78);
        }
        if (uVar22 == 0) {
          if (cVar6 == '\0') {
            uVar8 = FUN_00e8d760();
            uVar22 = (ulonglong)(uVar8 & 0x7fffffff) | (ulonglong)((int)uVar8 < 0) << 0x3f;
          }
          else {
            uVar22 = (*(code *)*local_78)(local_78);
          }
          if (uVar22 != 0) {
            FUN_00e91139();
          }
        }
        local_60 = param_2 + 0x38;
        local_88 = (undefined8 *)0x0;
        local_68 = param_2;
        lVar13 = FUN_00e90605();
        if (lVar13 != 0) goto LAB_00e93bdd;
        uVar24 = 0;
        uVar8 = (uint)(*local_78 / local_78[1]);
        if (uVar8 < 0x71) {
LAB_00e93959:
          uVar22 = FUN_00e91248();
          if (cVar6 != '\0') goto LAB_00e93971;
LAB_00e93991:
          FUN_00e8d760();
        }
        else {
          lVar13 = (ulonglong)(uVar8 - 0x70) * 0x14 + 0x10;
          if (local_88 == (undefined8 *)0x0) {
            if (cVar6 != '\0') goto LAB_00e938e7;
LAB_00e93918:
            local_88 = (undefined8 *)((ulonglong)local_88 & 0xffffffff);
            uVar8 = FUN_00e8d760(&local_88,lVar13,local_58);
            if (uVar8 == 0) goto LAB_00e93913;
            uVar24 = 0;
            uVar22 = (ulonglong)(uVar8 & 0x7fffffff) | (ulonglong)((int)uVar8 < 0) << 0x3f;
            goto LAB_00e93991;
          }
          if (cVar6 == '\0') {
            FUN_00e8d760();
            local_88 = (undefined8 *)0x0;
            goto LAB_00e93918;
          }
          (**(code **)(DAT_00ee4058[0xc] + 0x48))();
          local_88 = (undefined8 *)0x0;
LAB_00e938e7:
          uVar24 = 0;
          uVar22 = (**(code **)(DAT_00ee4058[0xc] + 0x40))(2,lVar13,&local_88);
          if (uVar22 == 0) {
LAB_00e93913:
            uVar24 = (uint)lVar13;
            goto LAB_00e93959;
          }
LAB_00e93971:
          (**(code **)(DAT_00ee4058[0xc] + 0x48))(local_78);
        }
        if ((uVar22 == 0) && (lVar13 = FUN_00e8e3a7(), puVar2 = local_88, lVar13 == 0)) {
          uVar17 = 0;
          puVar20 = (ulonglong *)0x0;
          *(undefined4 *)(param_2 + 0x3c) = 0x8000;
          uVar9 = *(uint *)((longlong)param_2 + 0x1d4) / (uint)param_2[0x39];
          uVar8 = uVar9 * 0x14 + 0x10;
          uVar21 = 0;
          puVar18 = param_2 + 0x5a;
          do {
            if (uVar9 == uVar21) {
              if (0x80 < uVar17) {
                    // WARNING (jumptable): Read-only address (ram,0x00000008) is written
                *(undefined4 *)(puVar2 + 1) = 1;
                    // WARNING (jumptable): Read-only address (ram,0x00000000) is written
                *puVar2 = 0;
                    // WARNING (jumptable): Read-only address (ram,0x0000000c) is written
                *(uint *)((longlong)puVar2 + 0xc) = (uVar17 - 0x80) * 0x14;
                puVar15 = (undefined8 *)param_2[0x4a];
                if ((undefined8 *)param_2[0x4a] == (undefined8 *)0x0) {
                  param_2[0x4a] = (ulonglong)puVar2;
                }
                else {
                  do {
                    puVar16 = puVar15;
                    puVar15 = (undefined8 *)*puVar16;
                  } while (puVar15 != (undefined8 *)0x0);
                  *puVar16 = puVar2;
                }
                uVar17 = 0x80;
              }
              *(char *)(param_2 + 0x3d) = (char)uVar17;
              FUN_00e8c5c0();
              FUN_00e920a2();
                    // WARNING: Could not recover jumptable at 0x00e93bca. Too many branches
                    // WARNING: Treating indirect jump as call
              (*(code *)(lVar11 + (longlong)puVar3))();
              return;
            }
            puVar26 = (undefined4 *)
                      (CONCAT44(*(undefined4 *)((longlong)param_2 + 0x1dc),(int)param_2[0x3a]) +
                      (ulonglong)(uVar21 * (int)param_2[0x39]));
            puVar19 = puVar18;
            switch(*puVar26) {
            case 0:
            case 5:
            case 6:
            case 0xb:
            case 0xc:
            case 0xd:
              iVar7 = 2;
              break;
            case 1:
            case 2:
            case 3:
            case 4:
            case 7:
              cVar6 = FUN_00e8dd80();
              if ((cVar6 == '\0') ||
                 (iVar7 = -0x10000001, (*(byte *)((longlong)puVar26 + 0x22) & 4) == 0))
              goto LAB_00e93ad6;
              break;
            case 8:
              iVar7 = 5;
              break;
            case 9:
              iVar7 = 3;
              break;
            case 10:
              iVar7 = 4;
              break;
            case 0xe:
              iVar7 = 7;
              break;
            case 0xf:
              FUN_00e9147d();
LAB_00e93ad6:
              iVar7 = 1;
              break;
            default:
              goto switchD_00e93a64_default;
            }
            if (((puVar20 == (ulonglong *)0x0) || ((int)puVar20[2] != iVar7)) ||
               (*puVar20 + puVar20[1] != *(longlong *)(puVar26 + 2))) {
              if (uVar17 == 0x80) {
                if ((puVar2 == (undefined8 *)0x0) || (uVar24 < uVar8)) break;
                puVar18 = puVar2 + 2;
              }
              uVar17 = uVar17 + 1;
              puVar19 = (ulonglong *)((longlong)puVar18 + 0x14);
              *puVar18 = *(ulonglong *)(puVar26 + 2);
              lVar13 = *(longlong *)(puVar26 + 6);
              *(int *)(puVar18 + 2) = iVar7;
              puVar18[1] = lVar13 << 0xc;
              puVar20 = puVar18;
            }
            else {
              puVar20[1] = *(longlong *)(puVar26 + 6) * 0x1000 + puVar20[1];
            }
switchD_00e93a64_default:
            uVar8 = uVar8 - 0x14;
            uVar21 = uVar21 + 1;
            puVar18 = puVar19;
          } while( true );
        }
        goto LAB_00e93bdd;
      }
    }
    else {
LAB_00e93bdd:
      FUN_00e91139();
    }
    FUN_00e91139();
    unaff_RBX = param_2;
  } while( true );
}



void entry(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong *puVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *unaff_R12;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_50 [32];
  
  local_68 = 0x11d295625b1b31a1;
  local_60 = 0x3b7269c9a0003f8e;
  DAT_00ee4058 = param_2;
  if (*param_2 == 0x5453595320494249) {
    if (DAT_00ea03c8 == '\0') {
      DAT_00ee4070._4_4_ = 0;
      uVar4 = FUN_00e8d760(&DAT_00ee4070,&local_68,local_50);
      uVar1 = (ulonglong)(uVar4 & 0x7fffffff) | (ulonglong)((int)uVar4 < 0) << 0x3f;
    }
    else {
      uVar1 = (**(code **)(param_2[0xc] + 0x98))(param_1,&local_68,&DAT_00ee4070);
    }
    unaff_R12 = param_2;
    if (uVar1 == 0) goto LAB_00e93cca;
    FUN_00e91139();
  }
  while( true ) {
    do {
      FUN_00e9213c();
LAB_00e93cca:
      lVar2 = FUN_00e908ca();
    } while (lVar2 != 0);
    uVar1 = FUN_00e86200();
    *(undefined1 *)(uVar1 + 0x210) = 0x21;
    *(undefined2 *)(uVar1 + 0x1f2) = 1;
    *(undefined2 *)(uVar1 + 0x1fa) = 0xffff;
    *(undefined4 *)(uVar1 + 0x22c) = 0x7fffffff;
    lVar2 = FUN_00e8e1d2();
    if (lVar2 != 0) break;
    FUN_00e90975();
  }
  *(int *)(uVar1 + 0x228) = (int)lVar2;
  *(int *)(uVar1 + 200) = (int)((ulonglong)lVar2 >> 0x20);
  FUN_00e9249b();
  FUN_00e86200();
  FUN_00e9249b();
  puVar3 = (ulonglong *)(param_1 + ((ulonglong)unaff_R12 >> 6 & 0x3ffffff) * 8);
  uVar4 = (uint)unaff_R12 & 0x3f;
  iVar7 = 0x40 - uVar4;
  uVar6 = -1L << (sbyte)uVar4;
  uVar5 = uVar1 & 0xffffffff;
  while( true ) {
    uVar4 = (int)uVar5 - iVar7;
    if ((int)uVar4 < 0) break;
    *puVar3 = *puVar3 | uVar6;
    uVar5 = (ulonglong)uVar4;
    puVar3 = puVar3 + 1;
    uVar6 = 0xffffffffffffffff;
    iVar7 = 0x40;
  }
  if ((int)uVar5 != 0) {
    *puVar3 = *puVar3 | 0xffffffffffffffffU >> (-((char)uVar1 + (char)unaff_R12) & 0x3fU) & uVar6;
  }
  return;
}



// WARNING: Type propagation algorithm not settling

ulonglong FUN_00e93f09(void)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong local_50 [4];
  undefined1 local_30 [24];
  
  cVar1 = DAT_00ea03c8;
  local_50[1] = 0x433deade3152bca5;
  local_50[2] = 0x441f29dc1cc02e86;
  local_50[0] = 0;
  if (DAT_00ea03c8 == '\0') {
    uVar2 = FUN_00e8d760(local_50,0,local_30);
    uVar3 = (ulonglong)(uVar2 & 0x7fffffff) | (ulonglong)((int)uVar2 < 0) << 0x3f;
  }
  else {
    uVar3 = (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x140))(local_50 + 1,0,local_50);
  }
  if (uVar3 == 0) {
    if (cVar1 == '\0') {
      uVar2 = FUN_00e8d760();
      uVar3 = (ulonglong)(uVar2 & 0x7fffffff) | (ulonglong)((int)uVar2 < 0) << 0x3f;
    }
    else {
      uVar3 = (**(code **)(local_50[0] + 8))(local_50[0],0);
    }
  }
  return uVar3;
}



// WARNING: Type propagation algorithm not settling

ulonglong FUN_00e93fe1(void)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint *puVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 in_R11;
  undefined4 *local_a0;
  longlong local_98;
  longlong local_90 [8];
  undefined1 local_50 [32];
  
  cVar3 = DAT_00ea03c8;
  local_90[1] = 0x433deade3152bca5;
  local_90[2] = 0x441f29dc1cc02e86;
  local_90[3] = 0x4827b6e8e43176d7;
  local_90[4] = 0x6185b6c4fd7f84b7;
  local_90[5] = 0x42f27ceb1ce1e5bc;
  local_90[6] = 0x7bf580f1ad8ae581;
  local_a0 = (undefined4 *)0x0;
  local_98 = 0;
  local_90[0] = 0;
  if (DAT_00ea03c8 == '\0') {
    uVar8 = 0;
    uVar4 = FUN_00e8d760(local_90,0,local_50);
    uVar6 = (ulonglong)(uVar4 & 0x7fffffff) | (ulonglong)((int)uVar4 < 0) << 0x3f;
  }
  else {
    uVar8 = 0;
    uVar6 = (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x140))(local_90 + 1,0,local_90);
  }
  plVar2 = local_90 + 5;
  if (cVar3 == '\0') {
    FUN_00e8d760(0,plVar2,&local_98,0);
  }
  else {
    (**(code **)(*(longlong *)(DAT_00ee4058 + 0x58) + 0x48))
              (L"RandomSeed",plVar2,0,&local_98,0,uVar8);
  }
  if ((uVar6 != 0) && (local_98 == 0)) {
    return uVar6;
  }
  iVar9 = (uint)(uVar6 == 0) * 0x20 + (int)local_98;
  puVar7 = (uint *)FUN_00e8e580();
  uVar4 = 0;
  if ((puVar7 != (uint *)0x0) && (uVar5 = *puVar7, uVar4 = 0, uVar5 < 0x201)) {
    iVar9 = iVar9 + uVar5;
    uVar4 = uVar5;
  }
  uVar6 = (ulonglong)iVar9;
  if (cVar3 == '\0') {
    local_a0 = (undefined4 *)((ulonglong)local_a0 & 0xffffffff);
    lVar10 = -1;
    if (uVar6 < 0xfffffffffffffffc) {
      lVar10 = uVar6 + 4;
    }
    uVar5 = FUN_00e8d760(&local_a0,lVar10);
    uVar6 = (ulonglong)(uVar5 & 0x7fffffff) | (ulonglong)((int)uVar5 < 0) << 0x3f;
  }
  else {
    lVar10 = -1;
    if (uVar6 < 0xfffffffffffffffc) {
      lVar10 = uVar6 + 4;
    }
    uVar6 = (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x40))(9,lVar10);
  }
  if (uVar6 != 0) goto LAB_00e94528;
  lVar10 = 0;
  if (local_90[0] != 0) {
    if (cVar3 == '\0') {
      uVar5 = FUN_00e8d760(0x20,local_90 + 3,local_a0 + 1,local_50);
      uVar6 = (ulonglong)(uVar5 & 0x7fffffff) | (ulonglong)((int)uVar5 < 0) << 0x3f;
    }
    else {
      uVar6 = (**(code **)(local_90[0] + 8))(local_90[0],local_90 + 3,0x20,local_a0 + 1);
    }
    if (uVar6 == 0x8000000000000003) {
      if (cVar3 == '\0') {
        uVar5 = FUN_00e8d760(0x20,0,local_a0 + 1,local_50);
        uVar6 = (ulonglong)(uVar5 & 0x7fffffff) | (ulonglong)((int)uVar5 < 0) << 0x3f;
      }
      else {
        uVar6 = (**(code **)(local_90[0] + 8))(local_90[0],0,0x20,local_a0 + 1);
      }
    }
    lVar10 = (ulonglong)(uVar6 == 0) << 5;
  }
  if (local_98 != 0) {
    if (cVar3 == '\0') {
      uVar5 = FUN_00e8d760(0,plVar2,&local_98,(longlong)local_a0 + lVar10 + 4);
      if (uVar5 == 0) {
        uVar5 = FUN_00e8d760(0,plVar2,0,0);
        uVar6 = (ulonglong)(uVar5 & 0x7fffffff) | (ulonglong)((int)uVar5 < 0) << 0x3f;
        goto LAB_00e943c8;
      }
      uVar6 = (ulonglong)(uVar5 & 0x7fffffff) | (ulonglong)((int)uVar5 < 0) << 0x3f;
    }
    else {
      lVar1 = *(longlong *)(DAT_00ee4058 + 0x58);
      uVar6 = (**(code **)(lVar1 + 0x48))
                        (L"RandomSeed",plVar2,0,&local_98,(longlong)local_a0 + lVar10 + 4,in_R11);
      if (uVar6 == 0) {
        uVar6 = (**(code **)(*(longlong *)(DAT_00ee4058 + 0x58) + 0x58))
                          (L"RandomSeed",plVar2,0,0,0,lVar1);
LAB_00e943c8:
        if (uVar6 == 0) {
          lVar10 = lVar10 + local_98;
          goto LAB_00e943f0;
        }
      }
    }
    FUN_00e86200();
  }
LAB_00e943f0:
  if (lVar10 != 0) {
    if (uVar4 != 0) {
      lVar10 = lVar10 + (int)uVar4;
      FUN_00e862a0();
    }
    *local_a0 = (int)lVar10;
    if (cVar3 == '\0') {
      uVar5 = FUN_00e8d760(local_50,local_a0);
      uVar6 = (ulonglong)(uVar5 & 0x7fffffff) | (ulonglong)((int)uVar5 < 0) << 0x3f;
    }
    else {
      uVar6 = (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0xc0))(local_90 + 5);
    }
    if (uVar6 == 0) {
      if (uVar4 == 0) {
        return 0;
      }
      FUN_00e86200();
      if (cVar3 != '\0') {
        (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x48))(puVar7);
        return 0;
      }
      FUN_00e8d760();
      return 0;
    }
  }
  FUN_00e86200();
  if (cVar3 == '\0') {
    FUN_00e8d760(local_a0,local_50);
  }
  else {
    (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x48))();
  }
LAB_00e94528:
  FUN_00e91139();
  if (puVar7 != (uint *)0x0) {
    FUN_00e91139();
  }
  return uVar6;
}



ulonglong FUN_00e94557(ulonglong param_1,longlong *param_2,undefined4 param_3,ulonglong param_4)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  int *piVar10;
  ulonglong unaff_RSI;
  int iVar11;
  longlong unaff_RDI;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong local_res8;
  ulonglong *local_60;
  longlong local_58;
  undefined1 local_50 [32];
  
  uVar4 = FUN_00e90605();
  if (uVar4 == 0) {
    if (unaff_RSI < 0x1000) {
      unaff_RSI = 0x1000;
    }
    uVar4 = 0x3f;
    if (unaff_RSI != 0) {
      for (; unaff_RSI >> uVar4 == 0; uVar4 = uVar4 - 1) {
      }
    }
    lVar5 = 1L << ((byte)uVar4 & 0x3f);
    uVar13 = unaff_RDI - 1U | 0xfff;
    lVar9 = 0;
    uVar8 = uVar13 + 1;
    lVar15 = 0;
    iVar11 = 0;
    while( true ) {
      if (*local_60 <= (ulonglong)(longlong)iVar11) break;
      piVar10 = (int *)((longlong)local_60 + (longlong)iVar11 + 0x28U);
      lVar14 = 0;
      uVar1 = *(undefined8 *)(piVar10 + 8);
      uVar7 = uVar4;
      if (*piVar10 == 7) {
        cVar2 = FUN_00e8dd80();
        uVar7 = uVar4 & 0xffffffff;
        if ((cVar2 == '\0') || (((uint)uVar1 >> 0x12 & 1) == 0)) {
          uVar12 = *(ulonglong *)(piVar10 + 2);
          uVar6 = (uVar12 - 1) + *(longlong *)(piVar10 + 6) * 0x1000;
          if (local_res8 < uVar6) {
            uVar6 = local_res8;
          }
          lVar14 = 0;
          if (uVar8 <= uVar6) {
            if (uVar12 <= param_4) {
              uVar12 = param_4;
            }
            uVar6 = uVar6 - uVar13 & -lVar5;
            lVar14 = 0;
            uVar12 = (uVar12 - 1 | lVar5 - 1U) + 1;
            if (uVar12 <= uVar6) {
              lVar14 = (uVar6 - uVar12 >> ((byte)uVar4 & 0x3f)) + 1;
            }
          }
        }
      }
      lVar9 = lVar9 + lVar14;
      *(longlong *)(piVar10 + 4) = lVar14;
      if (((uint)uVar1 >> 0x10 & 1) != 0) {
        lVar15 = lVar15 + lVar14;
      }
      iVar11 = iVar11 + (int)local_60[1];
      uVar4 = uVar7;
    }
    if (lVar15 != 0) {
      lVar9 = lVar15;
    }
    uVar4 = lVar9 * (param_1 & 0xffffffff) >> 0x20;
    for (iVar11 = 0; uVar13 = (ulonglong)iVar11, uVar13 < *local_60;
        iVar11 = iVar11 + (int)local_60[1]) {
      if ((lVar15 == 0) || ((*(byte *)((longlong)local_60 + uVar13 + 0x4a) & 1) != 0)) {
        uVar7 = *(ulonglong *)((longlong)local_60 + uVar13 + 0x38);
        if (uVar4 < uVar7) {
          uVar13 = *(ulonglong *)((longlong)local_60 + uVar13 + 0x30);
          if (uVar13 <= param_4) {
            uVar13 = param_4;
          }
          local_58 = (uVar13 - 1 | unaff_RSI - 1) + 1 + uVar4 * unaff_RSI;
          uVar8 = uVar8 >> 0xc;
          if (DAT_00ea03c8 == '\0') {
            uVar3 = FUN_00e8d760(uVar8,param_3,&local_58,local_50);
            uVar4 = (ulonglong)(uVar3 & 0x7fffffff) | (ulonglong)((int)uVar3 < 0) << 0x3f;
          }
          else {
            uVar4 = (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x28))
                              (2,param_3,uVar8,&local_58);
          }
          if (uVar4 == 0) {
            *param_2 = local_58;
          }
          goto LAB_00e947bc;
        }
        uVar4 = uVar4 - uVar7;
      }
    }
    uVar4 = 0x8000000000000009;
LAB_00e947bc:
    if (DAT_00ea03c8 == '\0') {
      FUN_00e8d760(local_60,local_50);
    }
    else {
      (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x48))();
    }
  }
  return uVar4;
}



ulonglong FUN_00e9480c(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (DAT_00ea03c8 == '\0') {
    uVar1 = FUN_00e8d760(param_2);
    uVar2 = (ulonglong)(uVar1 & 0x7fffffff) | (ulonglong)((int)uVar1 < 0) << 0x3f;
  }
  else {
    uVar2 = (**(code **)(*(longlong *)(DAT_00ee4058 + 0x58) + 0x48))();
  }
  return uVar2;
}



// WARNING: Type propagation algorithm not settling

undefined8 FUN_00e94877(void)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  char local_62;
  char local_61;
  ulonglong local_60 [8];
  
  local_61 = '\0';
  local_60[1] = 0x11d293ca8be4df61;
  local_60[0] = 1;
  local_60[2] = 0x8c2b0398e0000daa;
  lVar2 = FUN_00e9480c(local_60,0,&local_62);
  if (lVar2 != -0x7ffffffffffffff2) {
    if (lVar2 != 0) {
      FUN_00e91139();
      return 1;
    }
    local_60[4] = 0x8c2b0398e0000daa;
    local_60[0] = 1;
    local_60[3] = 0x11d293ca8be4df61;
    FUN_00e9480c(local_60,0,&local_61);
    if ((local_62 != '\0') && (local_61 != '\x01')) {
      local_60[1] = 1;
      if (DAT_00ea03c8 == '\0') {
        uVar1 = FUN_00e8d760(local_60,&DAT_00e9dba0,local_60 + 1);
        uVar3 = (ulonglong)(uVar1 & 0x7fffffff) | (ulonglong)((int)uVar1 < 0) << 0x3f;
      }
      else {
        uVar3 = (**(code **)(*(longlong *)(DAT_00ee4058 + 0x58) + 0x48))
                          (L"MokSBStateRT",&DAT_00e9dba0,local_60,local_60 + 1,&local_61,
                           L"SetupMode");
      }
      if (((uVar3 != 0) || ((local_60[0] & 1) != 0)) || (local_61 != '\x01')) {
        FUN_00e91139();
        return 3;
      }
    }
  }
  return 2;
}



undefined8 FUN_00e949ed(void)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 local_5c [18];
  undefined2 local_4a;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_20 [24];
  
  cVar1 = DAT_00ea03c8;
  local_4a = 0xfffe;
  if (DAT_00ea03c8 == '\0') {
    uStack_3c = 0;
    local_30 = 0xf7fa4a9fb3b97e94;
    local_38 = 0x4940cb3603583ff6;
    uVar2 = FUN_00e8d760(&local_40,0,local_20);
    uVar3 = (ulonglong)(uVar2 & 0x7fffffff) | (ulonglong)((int)uVar2 < 0) << 0x3f;
  }
  else {
    local_38 = 0x4940cb3603583ff6;
    local_30 = 0xf7fa4a9fb3b97e94;
    uVar3 = (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x140))(&local_38,0,&local_40);
  }
  if (uVar3 == 0) {
    if (cVar1 == '\0') {
      uStack_44 = 0;
      uVar2 = FUN_00e8d760(local_5c,&local_4a,&local_48,0);
      uVar3 = (ulonglong)(uVar2 & 0x7fffffff) | (ulonglong)((int)uVar2 < 0) << 0x3f;
    }
    else {
      uVar3 = (**(code **)(CONCAT44(uStack_3c,local_40) + 0x18))
                        (CONCAT44(uStack_3c,local_40),&local_4a,local_5c,&local_48,0,cVar1);
    }
    if (uVar3 == 0) {
      return CONCAT44(uStack_44,local_48);
    }
  }
  return 0;
}



longlong FUN_00e94b08(void)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  byte *unaff_RSI;
  longlong unaff_RDI;
  
  if (unaff_RDI == 0) {
LAB_00e94b15:
    lVar2 = 0;
  }
  else {
    lVar2 = unaff_RDI + (ulonglong)*(byte *)(unaff_RDI + 1);
    for (iVar3 = 1; iVar3 < (int)(uint)*unaff_RSI; iVar3 = iVar3 + 1) {
      iVar1 = FUN_00e85f40();
      if (iVar1 == 0) goto LAB_00e94b15;
      lVar2 = lVar2 + 1 + (longlong)iVar1;
    }
  }
  return lVar2;
}



void FUN_00e94b51(void)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_51;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  local_48 = 0x41be32d4e20939be;
  local_40 = 0x2998d4857f8950a1;
  local_50 = 0;
  local_51 = 1;
  if (DAT_00ea03c8 == '\0') {
    iVar1 = FUN_00e8d760(0,&local_48,&local_50,0);
    if (iVar1 != -0x7ffffff2) {
      FUN_00e8d760(7,&local_48,1,&local_51);
    }
  }
  else {
    lVar2 = (**(code **)(*(longlong *)(DAT_00ee4058 + 0x58) + 0x48))
                      (L"MemoryOverwriteRequestControl",&local_48,0,&local_50,0);
    if (lVar2 != -0x7ffffffffffffff2) {
      (**(code **)(*(longlong *)(DAT_00ee4058 + 0x58) + 0x58))
                (L"MemoryOverwriteRequestControl",&local_48,7,1,&local_51);
    }
  }
  return;
}



undefined4 * FUN_00e94c72(void)

{
  char cVar1;
  longlong lVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  longlong lVar12;
  int **ppiVar13;
  longlong lVar14;
  longlong lVar15;
  int *piVar16;
  undefined4 *puVar17;
  undefined8 in_R11;
  int iVar18;
  int local_c4;
  undefined1 local_9b;
  short local_9a;
  int *local_98;
  longlong local_90;
  int **local_88;
  undefined4 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_50 [8];
  
  cVar3 = DAT_00ea03c8;
  local_78 = 0x42be7455607f766c;
  local_70 = 0xf72b26dd7e40b93;
  local_98 = (int *)0x0;
  local_90 = 0;
  local_88 = (int **)0x0;
  if (DAT_00ea03c8 == '\0') {
    uVar6 = FUN_00e8d760(&local_88,0);
    uVar9 = (ulonglong)(uVar6 & 0x7fffffff) | (ulonglong)((int)uVar6 < 0) << 0x3f;
  }
  else {
    uVar9 = (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x140))(&local_78,0);
  }
  if (uVar9 == 0) {
    if (cVar3 == '\0') {
      ppiVar13 = &local_98;
      uVar6 = FUN_00e8d760(&local_98,2,&local_90,&local_9b);
      uVar9 = (ulonglong)(uVar6 & 0x7fffffff) | (ulonglong)((int)uVar6 < 0) << 0x3f;
    }
    else {
      ppiVar13 = local_88;
      uVar9 = (*(code *)local_88[1])(local_88,2,&local_98,&local_90,&local_9b,in_R11);
    }
    if ((uVar9 != 0) || (local_98 == (int *)0x0)) {
      if (cVar3 == '\0') {
        puVar10 = local_50;
        uVar6 = FUN_00e8d760(&local_98,1,&local_90,&local_9b);
        puVar11 = (undefined4 *)
                  ((ulonglong)(uVar6 & 0x7fffffff) | (ulonglong)((int)uVar6 < 0) << 0x3f);
      }
      else {
        puVar10 = (undefined4 *)
                  (*(code *)local_88[1])(local_88,1,&local_98,&local_90,&local_9b,ppiVar13);
        puVar11 = puVar10;
      }
      cVar1 = '\x01';
      puVar17 = (undefined4 *)0x0;
      goto LAB_00e94f1c;
    }
    puVar10 = (undefined4 *)FUN_00e8e580();
    cVar1 = '\x02';
    puVar17 = puVar10;
  }
  else {
    local_68 = 0x41a672f496751a3d;
    local_60 = 0x6bae670e5ded94a7;
    local_80 = (undefined4 *)0x0;
    if (cVar3 == '\0') {
      uVar6 = FUN_00e8d760(&local_80,0,local_50);
      puVar11 = (undefined4 *)
                ((ulonglong)(uVar6 & 0x7fffffff) | (ulonglong)((int)uVar6 < 0) << 0x3f);
    }
    else {
      puVar11 = (undefined4 *)
                (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x140))(&local_68,0,&local_80);
    }
    if (puVar11 != (undefined4 *)0x0) {
      return puVar11;
    }
    if (cVar3 == '\0') {
      uVar6 = FUN_00e8d760();
      puVar11 = (undefined4 *)
                ((ulonglong)(uVar6 & 0x7fffffff) | (ulonglong)((int)uVar6 < 0) << 0x3f);
    }
    else {
      puVar11 = (undefined4 *)(**(code **)(local_80 + 2))(local_80,2,&local_98,&local_90,&local_9b);
    }
    puVar10 = (undefined4 *)FUN_00e8e580();
    cVar1 = '\x02';
    puVar17 = puVar10;
LAB_00e94f1c:
    if (puVar11 != (undefined4 *)0x0) {
      return puVar10;
    }
  }
  lVar12 = local_90;
  piVar4 = local_98;
  if (local_98 == (int *)0x0) {
    return puVar10;
  }
  local_68 = 0x4943eca2b7799cb0;
  local_60 = 0xfa47b707ae1f6796;
  local_80 = (undefined4 *)0x0;
  lVar14 = 0;
  if (local_90 == 0) goto LAB_00e95078;
  if (cVar1 == '\x02') {
    puVar11 = local_50;
    for (lVar14 = 5; lVar14 != 0; lVar14 = lVar14 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    iVar8 = *(int *)(local_90 + 8);
    iVar18 = *(int *)(local_90 + 4);
    if ((((*local_98 == 0) && (local_98[1] == 3)) && (iVar5 = FUN_00e85d40(), iVar5 == 0)) &&
       (((iVar5 = FUN_00e85d40(), iVar5 == 0 && (iVar8 == piVar4[0xe])) && (piVar4[0xe] != 0)))) {
      piVar16 = (int *)(lVar12 + 0xc);
      iVar5 = 0;
      do {
        FUN_00e862a0(piVar16,2);
        piVar16 = (int *)((longlong)piVar16 + 2);
        lVar14 = 0;
        do {
          uVar6 = (uint)lVar14;
          if ((uint)piVar4[0xe] <= uVar6) {
            if (piVar4[0xe] == uVar6) goto LAB_00e94f90;
            goto LAB_00e9504c;
          }
          lVar15 = lVar14 + 0xf;
          lVar14 = lVar14 + 1;
        } while ((short)piVar4[lVar15] != local_9a);
        piVar16 = (int *)((longlong)piVar16 +
                         (ulonglong)*(ushort *)((longlong)piVar4 + (longlong)(int)uVar6 * 4 + 0x3e))
        ;
LAB_00e9504c:
        iVar5 = iVar5 + 1;
      } while (iVar5 != iVar8);
      if (iVar18 == 0 && *piVar16 == 0) goto LAB_00e94f90;
      iVar8 = ((int)piVar16 + 4 + *piVar16) - (int)lVar12;
    }
    else {
LAB_00e94f90:
      iVar8 = 0;
    }
    lVar14 = (longlong)iVar8;
  }
  else {
    lVar14 = (ulonglong)*(uint *)(local_90 + 0x1c) + 0x20;
  }
  lVar14 = (lVar12 - (longlong)piVar4) + lVar14;
LAB_00e95078:
  if (cVar3 == '\0') {
    local_80 = (undefined4 *)((ulonglong)local_80 & 0xffffffff);
    uVar6 = FUN_00e8d760(&local_80,lVar14 + 0xc,local_50);
    uVar9 = (ulonglong)(uVar6 & 0x7fffffff) | (ulonglong)((int)uVar6 < 0) << 0x3f;
  }
  else {
    uVar9 = (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x40))(9,lVar14 + 0xc,&local_80);
  }
  if (uVar9 == 0) {
    iVar18 = 0;
    iVar8 = iVar18;
    if ((puVar17 != (undefined4 *)0x0) && (iVar8 = 0, *(longlong *)(puVar17 + 2) != 0)) {
      for (local_c4 = (int)*(longlong *)(puVar17 + 2); iVar8 = iVar18, 0 < local_c4;
          local_c4 = local_c4 + -1) {
        lVar12 = (longlong)puVar17 + (longlong)iVar18 + 0x10;
        puVar11 = local_50;
        for (lVar15 = 5; lVar15 != 0; lVar15 = lVar15 + -1) {
          *puVar11 = 0;
          puVar11 = puVar11 + 1;
        }
        iVar8 = *(int *)(lVar12 + 8);
        iVar5 = *(int *)(lVar12 + 4);
        if (((((*piVar4 == 0) && (piVar4[1] == 3)) && (iVar7 = FUN_00e85d40(0,0x14), iVar7 == 0)) &&
            ((iVar7 = FUN_00e85d40(), iVar7 == 0 && (iVar8 == piVar4[0xe])))) && (piVar4[0xe] != 0))
        {
          piVar16 = (int *)(lVar12 + 0xc);
          iVar7 = 0;
          do {
            FUN_00e862a0(piVar16,2);
            piVar16 = (int *)((longlong)piVar16 + 2);
            lVar15 = 0;
            do {
              uVar6 = (uint)lVar15;
              if ((uint)piVar4[0xe] <= uVar6) {
                if (piVar4[0xe] == uVar6) goto LAB_00e95147;
                goto LAB_00e95206;
              }
              lVar2 = lVar15 + 0xf;
              lVar15 = lVar15 + 1;
            } while ((short)piVar4[lVar2] != local_9a);
            piVar16 = (int *)((longlong)piVar16 +
                             (ulonglong)
                             *(ushort *)((longlong)piVar4 + (longlong)(int)uVar6 * 4 + 0x3e));
LAB_00e95206:
            iVar7 = iVar7 + 1;
          } while (iVar7 != iVar8);
          iVar8 = ((int)piVar16 + 4 + *piVar16) - (int)lVar12;
          if (*piVar16 == 0 && iVar5 == 0) goto LAB_00e95147;
        }
        else {
LAB_00e95147:
          iVar8 = 0;
        }
        iVar18 = iVar18 + iVar8;
      }
    }
    FUN_00e86200();
    *local_80 = (int)lVar14;
    local_80[1] = iVar8;
    *(char *)(local_80 + 2) = cVar1;
    FUN_00e862a0();
    if (cVar3 == '\0') {
      puVar11 = (undefined4 *)FUN_00e8d760(local_50,local_80);
      if ((int)puVar11 != 0) {
        puVar11 = (undefined4 *)FUN_00e8d760();
      }
    }
    else {
      lVar12 = (**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0xc0))(&local_68);
      puVar11 = (undefined4 *)0x0;
      if (lVar12 != 0) {
        puVar11 = (undefined4 *)(**(code **)(*(longlong *)(DAT_00ee4058 + 0x60) + 0x48))(local_80);
      }
    }
  }
  else {
    puVar11 = (undefined4 *)FUN_00e91139();
  }
  return puVar11;
}



// WARNING: Control flow encountered bad instruction data

void FUN_00e95320(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}


