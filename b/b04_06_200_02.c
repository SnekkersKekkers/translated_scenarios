BGOpen("tr110",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChLayout(1);
ChClose(6,0,0);
ChLayout(1);
ScrFadeIn(0);
SEPlay("EV_SE_564");
SEWait();
SEPlay("EV_SE_011");
SEWait();
MsgClose();
ChOpen(6,32,0,2,1,0,#1,0,0);
VoicePlay("B040620002_06_000");
MsgDisp("Himuro","Uwaa∋
...ow.");
MsgSel("A-Are you alright?","It's difficult isn't it?","You're so clumsy!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(6,2);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("B040620002_06_010");
    MsgDisp("Himuro","...Can't you see?");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(6,2);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040620002_06_020");
    MsgDisp("Himuro","Yeah.
I'm still not used to it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(6,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(6,1);
        ChMouth(6,0);
        ChMotion(6,4);
        VoicePlay("B040620002_06_030");
        MsgDisp("Himuro","You have no right 
to laugh at me.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(6,1);
        ChMouth(6,1);
        ChMotion(6,0);
        ChCheek(6,10);
        VoicePlay("B040620002_06_040");
        MsgDisp("Himuro","...............");
        MsgDisp("主人公","Hehe, can you
give me your hand?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        VoicePlay("B040620002_06_050");
        MsgDisp("Himuro","...Yeah.");
        MsgDisp("主人公","Yep, go ahead.");
        MsgClose();
        ChClose(6);
        SEPlay("EV_SE_760");
        SEWait();
        SEPlay("EV_SE_565");
        MsgDisp("主人公","Eh... waa∋");
        SEPlay("EV_SE_011");
        ScrQuake(1);
        Wait(80,0);
        MsgDisp("主人公","Hey, that was mean!
You tugged on me on purpose just now
didn't you?");
        MsgClose();
        ChLayout(0);
        ChOpen(6,32,1,3,3,#1,#1,0,0);
        VoicePlay("B040620002_06_060");
        MsgDisp("Himuro","Haha!
This is payback for laughing at me. ");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        ChCheek(6,10);
        VoicePlay("B040620002_06_070");
        MsgDisp("Himuro","∋");
        MsgDisp("主人公","(H-He's so close!)");
        SEPlay("EV_SE_552",0,1);
        ChClose(6,0,30);
        MsgClose();
        ChLayout(1);
        ChOpen(6,32,4,0,0,#1,#1,0,0);
        SEWait();
        VoicePlay("B040620002_06_080");
        MsgDisp("Himuro","A-Anyways.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,1);
        VoicePlay("B040620002_06_090");
        MsgDisp("Himuro","We both need to be careful or we'll get
hurt.
Come on, give me your hand.");
        MsgDisp("主人公","............");
        SEPlay("EV_SE_760");
        SEWait();
        Wait(60,0);
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        ChEyeOpenLevel(6,7);
        ChCheek(6,0);
        VoicePlay("B040620002_06_100");
        MsgDisp("Himuro","...You tried to get back at me just now
didn't you?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,1);
        ChEyeOpenLevel(6,0);
        VoicePlay("B040620002_06_110");
        MsgDisp("Himuro","I don't know anymore, I'm leaving you
here.");
        MsgDisp("主人公","Ehhh∋　How cruel!");
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
