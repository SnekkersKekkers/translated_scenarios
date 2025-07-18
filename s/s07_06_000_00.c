BGOpen("ex020",0);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("S070600000_06_000");
    MsgDisp("Himuro","Wow, so many people...");
    MsgDisp("主人公","It's because it's New Years.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    ChEyeOpenLevel(6,8);
    VoicePlay("S070600000_06_010");
    MsgDisp("Himuro","I feel tired and the year just started.");
    MsgDisp("主人公","Geez, don't say that.");
    ChEye(6,2);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("S070600000_06_020");
    MsgDisp("Himuro","Haa...");
    break ;
    case 3:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    ChEyeOpenLevel(6,8);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("S070600000_06_030");
    MsgDisp("Himuro","I prepared myself but...
It's still more crowded than I expected.");
    MsgDisp("主人公","It's because it's New Year.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("S070600000_06_040");
    MsgDisp("Himuro","Isn't there another route they could do
this?");
    MsgDisp("主人公","Eh, another route?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("S070600000_06_050");
    MsgDisp("Himuro","This is so inefficient.
It would be better to hold this kind of
thing in a larger area.");
    ChEye(6,2);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("S070600000_06_060");
    MsgDisp("Himuro","...Or something like that.
I guess there's no point in complaining
about it now.");
    break ;
    case 4:
    case 5:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    ChLayout(1);
    ScrFadeIn(0);
    MsgDisp("主人公","It's crowded...");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("S070600000_06_070");
    MsgDisp("Himuro","I suppose so.
Be careful to not get separated.");
    MsgDisp("主人公","Understood.
I'll be careful——");
    SEPlay("EV_SE_699");
    Wait(10,0);
    ScrQuake(5);
    MsgDisp("主人公","Woww∋");
    ChEye(6,2);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("S070600000_06_080");
    MsgDisp("Himuro","It's like I thought...
Can't be helped.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("S070600000_06_090");
    MsgDisp("Himuro","...Yeah.");
    MsgDisp("主人公","Huh?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    ChCheek(6,5);
    VoicePlay("S070600000_06_100");
    MsgDisp("Himuro","Let's hold hands so you don't fall or get
lost.");
    MsgDisp("主人公","Uh, sure...
Go ahead.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    VoicePlay("S070600000_06_110");
    MsgDisp("Himuro","Yeah.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    Wait(10,0);
    SEPlay("EV_SE_504");
    SEWait();
    Wait(50,0);
    VoicePlay("S070600000_06_120");
    MsgDisp("Himuro","......");
    MsgDisp("主人公","(｛氷室＊＊｝ and I went silent...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
MsgClose();
ScrFadeOut(0,0);
ChClose(6,0,0);
