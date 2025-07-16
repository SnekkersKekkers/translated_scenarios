BGOpen("bh210",0);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
ScrFadeIn(0);
VoicePlay("B040230002_02_000");
MsgDisp("Sassa","In these sorts of situations, the Mom
would usually be standing at the door and
listening in right?");
MsgSel("It happens in drama and manga often huh?","I have to greet her once more","｛颯砂＊＊｝, can you go check?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B040230002_02_010");
    MsgDisp("Sassa","Right right!
She'd keep bringing in tea refills or
something.");
    MsgDispBGSksp(1,2);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("B040230002_02_020");
    MsgDisp("Sassa","No, no, it's just a joke.");
    MsgDateResultDisp();
    break ;
    case 2:
    switch (ChPrmGet(2,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(2,2);
        ChMouth(2,2);
        ChMotion(2,4);
        VoicePlay("B040230002_02_030");
        MsgDisp("Sassa","Don't be so scared...
Well, like me she's big, but she's a funny
person.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("B040230002_02_040");
        MsgDisp("Sassa","No, no it was just a joke——");
        ChEye(2,4);
        ChMouth(2,0);
        ChMotion(2,0);
        VoicePlay("B040230002_02_050");
        MsgDisp("Sassa","...Understood, wait a second.");
        MsgClose();
        SEPlay("EV_SE_538",0,0.5);
        ChClose(2);
        SEWait();
        SEPlay("EV_SE_DOOR_022");
        SEWait();
        SEPlay("EV_SE_DOOR_023");
        SEWait();
        VoicePlay("B040230002_02_060");
        MsgDisp("Sassa","Haha, Mom, what are you doing?");
        SEPlay("EV_SE_540");
        SEWait();
        VoicePlay("B040230002_02_070");
        MsgDisp("Sassa","Why are you running away?!");
        MsgDisp("主人公","Ehhh∋");
        MsgClose();
        SEPlay("EV_SE_DOOR_022");
        SEWait();
        SEPlay("EV_SE_DOOR_023");
        SEWait();
        SEPlay("EV_SE_538",0,0.5);
        SEWait();
        ChOpen(2,255,3,3,3,#1,#1,0,0);
        VoicePlay("B040230002_02_080");
        MsgDisp("Sassa","She really was there∈");
        MsgDisp("主人公","W-What should I do?
I have to go greet her...");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("B040230002_02_090");
        MsgDisp("Sassa","Didn't you already do that when you came
in?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,3);
        VoicePlay("B040230002_02_100");
        MsgDisp("Sassa","Why are you both getting flustered?
You make a good combination you know?");
        MsgDisp("主人公","Me and ｛颯砂＊＊｝'s mom?");
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,4);
        VoicePlay("B040230002_02_110");
        MsgDisp("Sassa","Yeah.
Isn't it better if you get along?
For the future... you know.");
        MsgDisp("主人公","(...
Waa, what should I do, should I greet her
again?)");
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
