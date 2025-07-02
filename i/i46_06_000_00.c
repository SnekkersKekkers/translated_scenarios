BGOpen("ar200",0);
ChLayout(1);
ScrFadeIn(0);
SEPlay("EV_SE_654");
Wait(50,0);
MsgClose();
BGMPlay("BGM_C06_INORI_A",0.01);
ChOpen(6,35,0,0,0,-1,-1,0,0);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgDisp("主人公","Ah!
Oh no......");
    ChEye(6,1);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("I460600000_06_000");
    MsgDisp("Himuro","Haa......");
    MsgDisp("主人公","S, sorry.
I'll clean it up now.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    ChEyeOpenLevel(6,8);
    VoicePlay("I460600000_06_010");
    MsgDisp("Himuro","Do that.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    ChEyeOpenLevel(6,8);
    VoicePlay("I460600000_06_020");
    MsgDisp("Himuro","And don't relax just because
you're used to the work.
You'll make more mistakes.");
    MsgDisp("主人公","O, okay.");
    MsgDisp("主人公","(Like ｛氷室＊＊｝ told me to,
I'll have to get it together......!)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Ah!
Oh no......");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I460600000_06_030");
    MsgDisp("Himuro","…………");
    MsgDisp("主人公","S, sorry!
I'll clean it up now.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("I460600000_06_040");
    MsgDisp("Himuro","It's fine. I'll help.");
    MsgDisp("主人公","Huh, I'm fine!");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I460600000_06_050");
    MsgDisp("Himuro","Don't get the wrong idea.
It's a bother like this.
It'll be faster if we both work.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I460600000_06_060");
    MsgDisp("Himuro","Efficiency first.
Am I wrong?");
    MsgDisp("主人公","I, I see.
Thanks!");
    ChEye(6,2);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("I460600000_06_070");
    MsgDisp("Himuro","…………");
    MsgDisp("主人公","(I troubled ｛氷室＊＊｝......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
