#include "pch.h"
#include "skCrypter.h"
#include "fiodevutils.h"
#include <iomanip>
#include <ctime>

static void LogInfo(const char* message) {
    auto t = std::time(nullptr);
    auto tm = *std::localtime(&t);
    std::cout << "[" << std::put_time(&tm, "%H:%M:%S") << "][" << GetCurrentProcessId() << "][info] " << message << "\n";
}

struct ValveColor {
    unsigned char r, g, b, a;
    ValveColor(unsigned char r, unsigned char g, unsigned char b, unsigned char a = 255) : r(r), g(g), b(b), a(a) {}
};

typedef void(__cdecl* ConColorMsgFn)(const ValveColor&, const char*, ...);

static void PrintToConsole() {
    typedef void* (*CreateInterfaceFn)(const char*, int*);
    CreateInterfaceFn engineFactory = (CreateInterfaceFn)GetProcAddress(GetModuleHandleA(skCrypt("engine.dll")), skCrypt("CreateInterface"));
    if (!engineFactory) return;

    void* engine = engineFactory(skCrypt("VEngineClient014"), nullptr);
    if (!engine) return;

    typedef void(__thiscall* ClientCmdFn)(void*, const char*, bool);
    void** vtable = *(void***)engine;
    if (vtable && vtable[114]) {
        ClientCmdFn clientCmd = (ClientCmdFn)vtable[114];
        clientCmd(engine, skCrypt("clear"), false);
        clientCmd(engine, skCrypt("showconsole"), false);
    }

    Sleep(100);

    HMODULE tier0 = GetModuleHandleA(skCrypt("tier0.dll"));
    if (!tier0) return;
    ConColorMsgFn ConColorMsg = (ConColorMsgFn)GetProcAddress(tier0, skCrypt("?ConColorMsg@@YAXABVColor@@PBDZZ"));
    if (!ConColorMsg) return;

    {
        const unsigned char _0[] = { 130,51,47,71,233,229,16,0,178,204,216,45,105,67,51,63,70,94,232,22,30,167,179,195,205,121,132,156,46,40,92,229,253,193,23,249,194,202,116,114,130,35,63,71,73,253,24,8,162,172,192,97,121,137,97 };
        ConColorMsg(ValveColor(255, 120, 120), fiodev::decrypt(_0, sizeof(_0)).c_str());
        const unsigned char _1[] = { 130,51,47,95,241,253,8,24,170,212,216,80,105,49,51,63,70,94,232,22,30,167,179,195,205,121,132,156,46,40,92,229,253,188,23,11,194,202,116,114,130,35,63,71,73,253,24,8,162,172,192,97,121,137,97 };
        ConColorMsg(ValveColor(255, 120, 120), fiodev::decrypt(_1, sizeof(_1)).c_str());
        const unsigned char _2[] = { 130,51,47,95,241,253,8,24,170,212,216,105,113,129,51,63,70,94,232,22,30,167,179,195,205,121,132,156,46,40,92,229,253,5,15,187,194,202,116,114,130,35,63,71,73,253,24,8,162,172,192,97,121,137,97 };
        ConColorMsg(ValveColor(255, 120, 120), fiodev::decrypt(_2, sizeof(_2)).c_str());
        const unsigned char _3[] = { 130,51,47,71,233,229,16,24,170,212,216,113,105,153,51,63,72,154,240,14,220,169,179,195,213,97,156,88,54,48,68,229,229,29,23,187,218,202,116,114,154,59,63,71,81,253,24,8,186,238,206,97,121,99 };
        ConColorMsg(ValveColor(255, 120, 120), fiodev::decrypt(_3, sizeof(_3)).c_str());
        const unsigned char _4[] = { 130,51,47,95,241,253,8,24,170,212,216,113,105,153,51,123,94,70,234,20,6,191,241,195,213,97,156,44,44,40,92,229,229,29,23,187,218,202,116,106,130,35,63,71,81,253,24,16,160,180,216,35,121,99 };
        ConColorMsg(ValveColor(255, 120, 120), fiodev::decrypt(_4, sizeof(_4)).c_str());
        const unsigned char _5[] = { 130,51,47,95,241,253,8,24,170,212,216,113,105,153,51,39,94,70,232,22,6,191,171,195,213,97,156,156,46,40,92,229,229,29,23,187,218,202,116,106,130,35,63,71,81,253,24,16,162,180,216,121,121,99 };
        ConColorMsg(ValveColor(255, 120, 120), fiodev::decrypt(_5, sizeof(_5)).c_str());
        const unsigned char _6[] = { 130,51,47,95,241,253,8,24,170,212,216,113,105,153,51,134,94,70,230,24,6,191,3,195,213,97,156,156,46,40,92,229,229,29,23,187,251,202,116,40,140,35,63,71,81,253,24,16,162,180,216,121,121,99 };
        ConColorMsg(ValveColor(255, 120, 120), fiodev::decrypt(_6, sizeof(_6)).c_str());
        const unsigned char _7[] = { 130,51,47,95,241,253,8,24,170,212,216,113,105,153,51,63,68,103,240,14,174,165,179,195,213,97,156,156,46,40,92,229,229,29,23,187,194,208,85,114,154,59,39,71,81,253,24,16,162,180,216,121,121,99 };
        ConColorMsg(ValveColor(255, 120, 120), fiodev::decrypt(_7, sizeof(_7)).c_str());
        const unsigned char _11[] = {112,65};
        ConColorMsg(ValveColor(255, 255, 255), fiodev::decrypt(_11, sizeof(_11)).c_str());
        const unsigned char _12[] = { 33,141,126,144,163,180,220,208,23,212 };
        ConColorMsg(ValveColor(153, 204, 50), fiodev::decrypt(_12, sizeof(_12)).c_str());
        const unsigned char _13[] = {91,103,123,95,161,188,220,219,226,17,11,105,48,81,99,115,143,155,172,252};
        ConColorMsg(ValveColor(255, 255, 255), fiodev::decrypt(_13, sizeof(_13)).c_str());
        const unsigned char _14[] = {33,108,118,146,180,174,205,214,249,17,229,105};
        ConColorMsg(ValveColor(153, 204, 50), fiodev::decrypt(_14, sizeof(_14)).c_str());
        const unsigned char _15[] = { 82,126,112,154,241,169,192,217,228,31,11,105,55,83,124,114,70,120,161,217,204,238,231,11,205,45,75,156,107,123,151,177,253,195,192,233,194,16,45,36,76,106,113,128,73,178,201,195,234,162,170,139 };
        ConColorMsg(ValveColor(255, 255, 255), fiodev::decrypt(_15, sizeof(_15)).c_str());
    }
}
static void thread(HMODULE base) {
    AllocConsole();
    const unsigned char _title[] = { 60,98,120,141,184,169,192 };
    SetConsoleTitleA(fiodev::decrypt(_title, sizeof(_title)).c_str());
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coord = { 160, 30 };
    SetConsoleScreenBufferSize(hConsole, coord);
    SMALL_RECT rect = { 0, 0, 159, 29 };
    SetConsoleWindowInfo(hConsole, TRUE, &rect);
    freopen(skCrypt("CONOUT$"), "w", stdout);
    system("cls");

    {
        const unsigned char _[] = { 83,101,126,139,184,188,196,209,240,29,22,46,127,143,61 };
        LogInfo(fiodev::decrypt(_, sizeof(_)).c_str());
    }
    skeet_t* skeet = skeet_t::getInstance(base);
    if (!skeet->map())
        return;

    {
        const unsigned char _[] = { 95,120,99,148,241,191,193,214,235,6,1,105,60,64,99,111,131,154,232,197,203,228,240,6,30,42,66,73,98,100,133,229,245,21,215,169,228,241,124,122,146,35,125,158,157,160,211,16,227,248,192,113,33,157,152,52,47,70,240,254,22,22,181 };
        LogInfo(fiodev::decrypt(_, sizeof(_)).c_str());
    }

    {
        const unsigned char _[] = { 72,110,100,144,189,171,193,214,237,212,17,36,33,78,97,107,149,94,169,216,218,167,225,6,15,44,77,80,106,97,146,162,253,172,194,235,13,0,56,106,35,103,123,149,140,182,211,16,22,237,2,45,60,137,131,142,159,98,233,224,8,17 };
        LogInfo(fiodev::decrypt(_, sizeof(_)).c_str());
    }
    skeet->fix_imports();
    {
        const unsigned char _[] = { 51,138,131,95,163,184,202,205,227,24,12,105,34,84,112,124,131,141,187,208,203,235,255,26,204,121,37,80,98,40,120,201,209,5,198,246,18,29,62,62,81,35,109,130,154,170,204,198,231,232,206 };
        LogInfo(fiodev::decrypt(_, sizeof(_)).c_str());
    }

    {
        const unsigned char _[] = { 91,123,103,147,168,180,198,223,170,25,29,36,62,83,106,63,150,159,188,213,214,226,224,195,12,55,64,156,102,103,147,174,180,203,200,187,230,234,117,101,39,109,120,142,135,160,0,192,237,229,14,53,60,91,88,41,48,88 };
        LogInfo(fiodev::decrypt(_, sizeof(_)).c_str());
    }
    skeet->extra();
    {
        const unsigned char _[] = { 87,110,122,144,163,164,8,200,235,0,27,33,52,82,51,126,136,154,232,211,208,224,250,13,8,121,76,83,97,99,143,229,188,213,223,247,11,23,40,106,81,118,124,132,140,182,211,214,247,224,12,56,119 };
        LogInfo(fiodev::decrypt(_, sizeof(_)).c_str());
    }

    {
        const unsigned char _[] = { 53,128,57 };
        LogInfo(fiodev::decrypt(_, sizeof(_)).c_str());
    }
    {
        const unsigned char _[] = { 33,108,118,146,180,174,205,214,249,17,229,105,57,84,116,122,70,138,160,215,208,236,224,195,11,43,75,81,46,142,149,170,175,204,219,243,194,6,35,106,71,112,116,147,73,163,207,194,162,238,1,47,55,64,69,96,62,129,169,189,206,17 };
        LogInfo(fiodev::decrypt(_, sizeof(_)).c_str());
    }
    std::cout.flush();

    skeet->entry();

    Sleep(500);
    PrintToConsole();
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        DisableThreadLibraryCalls(hModule);
        CloseHandle(CreateThread(0, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(thread), hModule, 0, 0));
        break;
    }
    return TRUE;
}