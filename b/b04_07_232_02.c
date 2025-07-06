BGOpen("tr430",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(7,255,0,2,0,-1,-1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040723202_07_000");
MsgDisp("Mikage","What will we do if 
this stops halfway...?");
MsgSel("That's great; we get to ride longer.","It might be nice to get stuck with｛御影＊＊｝","Let's believe in Habataki Land Town.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(7,2);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("B040723202_07_010");
    MsgDisp("Mikage","That way of thinking is impressive.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(7,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(7,2);
        ChMouth(7,0);
        ChMotion(7,2);
        VoicePlay("B040723202_07_020");
        MsgDisp("Mikage","Theres no way it would be nice?
What would we do if we were at the top...");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(7,2);
        ChMouth(7,0);
        ChMotion(7,4);
        VoicePlay("B040723202_07_030");
        MsgDisp("Mikage","Do you really like
this that much?");
        MsgDisp("主人公","Yes.
Especially when I'm with ｛御影＊＊｝.");
        ChEye(7,1);
        ChMouth(7,0);
        ChMotion(7,2);
        VoicePlay("B040723202_07_040");
        MsgDisp("Mikage","Uugh...
I-I see.");
        ChEye(7,1);
        ChMouth(7,0);
        ChMotion(7,1);
        VoicePlay("B040723202_07_050");
        MsgDisp("Mikage","Got it, let's go on again. ");
        MsgDisp("主人公","Eh?
Is that okay?!");
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,5);
        VoicePlay("B040723202_07_060");
        MsgDisp("Mikage","Yeah, shall we go?");
        MsgClose();
        ScrFadeOut(0);
        EfctClose();
        SEPlay("EV_SE_AMUSE_002");
        MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
        BGOpen("tr431",0);
        ChEye(7,2);
        ChMouth(7,0);
        ChMotion(7,4);
        SEStop("EV_SE_AMUSE_002",1);
        ScrFadeIn(0);
        SEPlay("EV_SE_084",0.2,0.6);
        Wait(70,0);
        VoicePlay("B040723202_07_070");
        MsgDisp("Mikage","Have we reached the top?");
        SEStop("EV_SE_084",0.5);
        MsgDisp("主人公","Yes.
Now!");
        ChEye(7,2);
        ChMouth(7,0);
        ChMotion(7,0);
        VoicePlay("B040723202_07_080");
        MsgDisp("Mikage","Oh, we did it.
How was it? Were you satisfied?");
        MsgDisp("主人公","Yes!
Ah, I saw Habataki Castle!");
        ChEye(7,2);
        ChMouth(7,3);
        ChMotion(7,1);
        VoicePlay("B040723202_07_090");
        MsgDisp("Mikage","O-Oh.
don't stand up～");
        MsgDisp("主人公","｛御影＊＊｝ and Hanegasaki beach too!");
        ChEye(7,1);
        ChMouth(7,3);
        ChMotion(7,5);
        VoicePlay("B040723202_07_100");
        MsgDisp("Mikage","O-Oh.
Don't stand up～");
        MsgClose();
        ScrFadeOut(0);
        MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
        BGOpen("tr430",0);
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,4);
        ChEyeOpenLevel(7,7);
        ScrFadeIn(0);
        VoicePlay("B040723202_07_110");
        MsgDisp("Mikage","Haa, that was fun～......");
        MsgDisp("主人公","(I ended up getting to ride the
ferris wheel twice,
｛御影＊＊｝, thank you.)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(3);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,5);
    VoicePlay("B040723202_07_120");
    MsgDisp("Mikage","...I see.
After that, it depends on me.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
