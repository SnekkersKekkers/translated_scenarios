BGOpen("ne310",0);
BGMPlay("BGM_PLACE_BALLING_DARTS",0.01);
ChLayout(1);
ChEye(3,1);
ChMouth(3,1);
ChMotion(3,5,1);
ScrFadeIn(0);
VoicePlay("B040315102_03_000");
MsgDisp("Honda","Oh, the no. 7 and 10 pins are still left.");
MsgSel("Everyone has days like this.","It's tough even for pros?","Let's knock down one for sure.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,4);
    VoicePlay("B040315102_03_010");
    MsgDisp("Honda","What's the chance of this happening...");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(3,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChSet(3,2);
        VoicePlay("B040315102_03_020");
        MsgDisp("Honda","Hah... official records say it's 
less common than a perfect game. 
Ah, it's impossible...");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(3,4);
        ChMouth(3,0);
        ChMotion(3,1);
        VoicePlay("B040315102_03_030");
        MsgDisp("Honda","Right. I'll go for the safe one.");
        MsgDisp("主人公","You can do it ｛本多＊＊｝!");
        ChEye(3,0);
        ChMouth(3,0);
        ChMotion(3,4);
        VoicePlay("B040315102_03_040");
        MsgDisp("Honda","When you say that, I start to feel
confident. You're good at influencing me.");
        MsgDisp("主人公","I didn't mean to?");
        ChEye(3,4);
        ChMouth(3,4);
        ChMotion(3,0);
        VoicePlay("B040315102_03_050");
        MsgDisp("Honda","Really? If it was unintentional, then
maybe I'm just pretty susceptible to
you...");
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,1);
        VoicePlay("B040315102_03_060");
        MsgDisp("Honda","Hey, say what you said earlier again.
That I can do it.");
        MsgDisp("主人公","Um... you can do it ｛本多＊＊｝!");
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,3);
        VoicePlay("B040315102_03_070");
        MsgDisp("Honda","Yup. If you say that, I can do it!");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
        ChClose(3);
        Wait(40);
        SEWait();
        SEPlay("EV_SE_514");
        SEWait();
        MsgDisp("主人公","｛本多＊＊｝, that's amazing!");
        MsgClose();
        SEPlay("EV_SE_544");
        ChOpen(3,255,5,3,3,#1,#1,0,0);
        VoicePlay("B040315102_03_080");
        MsgDisp("Honda","That's incredible! The odds of me knocking
down a split 7 and 10 are astronomical!");
        MsgDisp("主人公","It's 'cause you're skilled, ｛本多＊＊｝.");
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,4);
        ChEyeOpenLevel(3,0);
        VoicePlay("B040315102_03_090");
        MsgDisp("Honda","...If I could spend my life with you like
this, I could become one of the world's
greats.");
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,5);
        VoicePlay("B040315102_03_100");
        MsgDisp("Honda","Let's contribute to humanity together!");
        MsgDisp("主人公","(｛本多＊＊｝...you're exaggerating.)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040315102_03_110");
    MsgDisp("Honda","That's the correct decision.
Let's play it safe.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
