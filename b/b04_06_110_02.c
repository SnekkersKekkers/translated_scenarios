BGMPlay("BGM_PLACE_POOL",0.01);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040611002_06_000");
MsgDisp("Himuro","I wonder what's so fun
about a water slide.");
MsgSel("Sliding down is exhilarating! ","Let's find out together!","I don't know...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040611002_06_010");
    MsgDisp("Himuro","Well, it's probably something like that.
It feels similar to a rollercoaster.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    switch (ChPrmGet(6,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        ChEye(6,1);
        ChMouth(6,0);
        ChMotion(6,2);
        ChEyeOpenLevel(6,0);
        VoicePlay("B040611002_06_020");
        MsgDisp("Himuro","You're free to go on your own.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,5);
        VoicePlay("B040611002_06_030");
        MsgDisp("Himuro","That one?
Together?");
        MsgDisp("主人公","Yeah/
Can we not?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,2);
        VoicePlay("B040611002_06_040");
        MsgDisp("Himuro","But that one——");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,2);
        ChEyeOpenLevel(6,0);
        ChCheek(6,10);
        VoicePlay("B040611002_06_050");
        MsgDisp("Himuro","..................");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        VoicePlay("B040611002_06_060");
        MsgDisp("Himuro","Well, since you're insistent, 
IU'll think about it.");
        MsgDisp("主人公","Yay!");
        MsgClose();
        ScrFadeOut(0);
        ChClose(6);
        MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
        ScrFadeIn(0);
        MsgDisp("主人公","Haa, that was fun!
How was it for you, ｛氷室＊＊｝?");
        ChOpen(6,31,2,0,2,#1,#1,10,0);
        VoicePlay("B040611002_06_070");
        MsgDisp("Himuro","...Closer than I thought.");
        MsgDisp("主人公","Eh?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,5);
        VoicePlay("B040611002_06_080");
        MsgDisp("Himuro","I-It's nothing!");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,1);
        VoicePlay("B040611002_06_090");
        MsgDisp("Himuro","I'm going for a little swim.
...My worldly desires are disrupting me.");
        MsgClose();
        SEPlay("EV_SE_563");
        MsgClose();
        ChClose(6);
        VoicePlay("B040611002_06_100");
        MsgDisp("Himuro","Haa... this is the worst.");
        MsgDisp("主人公","(???)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(4);
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,1);
    VoicePlay("B040611002_06_110");
    MsgDisp("Himuro","If neither of us get it, 
I wonder if it's worth trying...
are you ready? ");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
