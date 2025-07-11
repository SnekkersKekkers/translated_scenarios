BGOpen("fp410",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
ScrFadeIn(0);
VoicePlay("B040710102_07_000");
MsgDisp("Mikage","Phew, let's sit down and take a
breather...");
MsgSel("Should I tell Vice-Principal Himuro?","Then, me too...","｛御影＊＊｝, do your best!");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(7,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(7,2);
        ChMouth(7,5);
        ChMotion(7,1);
        VoicePlay("B040710102_07_010");
        MsgDisp("Mikage","Wait, wait, you're scary,");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(7,2);
        ChMouth(7,1);
        ChMotion(7,4);
        VoicePlay("B040710102_07_020");
        MsgDisp("Mikage","Ugh...");
        MsgDisp("主人公","Hehe.");
        ChEye(7,2);
        ChMouth(7,0);
        ChMotion(7,3);
        VoicePlay("B040710102_07_030");
        MsgDisp("Mikage","Hey.
You're screwing with me aren't you?");
        MsgDisp("主人公","I'm sorry...");
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,0);
        VoicePlay("B040710102_07_040");
        MsgDisp("Mikage","No, no, don't look so down.");
        MsgDisp("主人公","O—kay.");
        ChEye(7,2);
        ChMouth(7,3);
        ChMotion(7,1);
        VoicePlay("B040710102_07_050");
        MsgDisp("Mikage","...Oi.");
        MsgDisp("主人公","I'm sorry!
I'm going to look around once more!");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(3);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("B040710102_07_060");
    MsgDisp("Mikage","Yeah, you sit too. 
You need to take a break every 
once in a while.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,1);
    VoicePlay("B040710102_07_070");
    MsgDisp("Mikage","Oooh, Madonna-chan's cute voice
is cheering me up!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
