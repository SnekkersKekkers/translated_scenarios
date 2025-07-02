EnvAutoSet(0);
EnvPlay("SE_ENV_BG_WF720_CO2",0.5);
BGOpen("wf710",2);
ChOpen(7,255,4,0,0,-1,-1,0,0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040706502_07_000");
MsgDisp("Mikage","This summer has ended too huh...");
MsgSel("Let's enjoy this moment!","As soon as the fireworks are over, it's over...","Let's come next summer too.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("B040706502_07_010");
    MsgDisp("Mikage","Ooh, you get it don't you?～
That's for the best.");
    MsgDispSksp(1,6);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(7,2);
    ChMouth(7,3);
    ChMotion(7,1);
    VoicePlay("B040706502_07_020");
    MsgDisp("Mikage","Even though there were many 
thousands of them...
But the end must come.");
    MsgDispSksp(1,6);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    switch (ChPrmGet(7,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        ChEye(7,2);
        ChMouth(7,0);
        ChMotion(7,2);
        VoicePlay("B040706502_07_030");
        MsgDisp("Mikage","Well, yeah, that's true.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(7,2);
        ChMouth(7,0);
        ChMotion(7,2);
        VoicePlay("B040706502_07_040");
        MsgDisp("Mikage","No, even I don't think this
is like me either but..");
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,0);
        VoicePlay("B040706502_07_050");
        MsgDisp("Mikage","...But thanks to you, 
I might be able to get out of 
this spiral.");
        MsgDisp("主人公","Spiral?");
        ChEye(7,1);
        ChMouth(7,0);
        ChMotion(7,4);
        VoicePlay("B040706502_07_060");
        MsgDisp("Mikage","Maybe, next year, a 
different summer will come.");
        MsgDisp("主人公","Eh...");
        ChEye(7,2);
        ChMouth(7,0);
        ChMotion(7,5);
        ChEyeOpenLevel(7,0);
        VoicePlay("B040706502_07_070");
        MsgDisp("Mikage","...Damn, what am I saying...");
        ChEye(7,2);
        ChMouth(7,0);
        ChMotion(7,3);
        VoicePlay("B040706502_07_080");
        MsgDisp("Mikage","If I kept repeating \"eternal highschooler\"
shtick, like an idiot, you'd probably just
get sick of me.");
        MsgDisp("主人公","｛御影＊＊｝...?");
        ChEye(7,2);
        ChMouth(7,3);
        ChMotion(7,1);
        VoicePlay("B040706502_07_090");
        MsgDisp("Mikage","Haa, it's no good.
This isn't a conversation to be had
under fireworks. Let's talk about this
properly once I've collected myself.");
        MsgDisp("主人公","(｛御影＊＊｝...
did something happen...?)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    default :
    DbgAssert(0);
    break ;
    }
EnvAutoSet(1);
