BGOpen("tr230",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(3,3);
ChEye(3,0);
ChMouth(3,0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040321202_03_000");
MsgDisp("Honda","It's a talking cockatiel plushie.");
MsgSel("The golden feather on its head is cute.","It seems a bit loud huh?","It looks a bit like ｛本多＊＊｝?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040321202_03_010");
    MsgDisp("Honda","Yep yep, and it looks wise!");
    MsgDispBGSksp(1,3);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(3,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(3,0);
        ChMouth(3,2);
        ChMotion(3,0,1);
        VoicePlay("B040321202_03_020");
        MsgDisp("Honda","Is that so?
Its cheerfulness gives me a good feeling.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(3,0);
        ChMouth(3,4);
        ChMotion(3,0);
        VoicePlay("B040321202_03_030");
        MsgDisp("Honda","Is thats so?
I'll give it a whirl.
Good morningー.");
        ChMouth(3,0);
        SEPlay("EV_SE_796",0,0.9);
        MsgDisp("Stuffed Animal","Good morningー.");
        MsgDisp("主人公","Hehe, it's voice is a little off.
But it's cute.");
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,1);
        VoicePlay("B040321202_03_040");
        MsgDisp("Honda","Yep yep.
It's cool that it doesn't play it back
just as it is.");
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,3);
        VoicePlay("B040321202_03_050");
        MsgDisp("Honda","Then, let's enjoy today together!");
        MsgDisp("主人公","Hehe, yeah.");
        ChEye(3,5);
        ChMouth(3,4);
        ChMotion(3,5);
        SEPlay("EV_SE_797",0,0.9);
        MsgDisp("Stuffed Animal","Let's enjoy today together!
Let's enjoy today together!
Let's enjoy today toget——");
        MsgDisp("主人公","Ehhh!");
        ChEye(3,0);
        ChMouth(3,4);
        ChMotion(3,0);
        VoicePlay("B040321202_03_060");
        MsgDisp("Honda","Huh, it won't stop?
I'm sorry to the store clerk!");
        SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
        SEStop("EV_SE_797",3);
        MsgClose();
        ChClose(3);
        SEWait();
        Wait(30,0);
        SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
        SEWait();
        MsgClose();
        ChOpen(3,255,2,2,2,#1,#1,0,0);
        VoicePlay("B040321202_03_070");
        MsgDisp("Honda","Haa, seems like it was broken.
I might become weak around cockatiels
now...");
        MsgDisp("主人公","Hehe, then, after this let's take our time
to look around.");
        ChEye(3,0);
        ChMouth(3,0);
        ChMotion(3,1);
        VoicePlay("B040321202_03_080");
        MsgDisp("Honda","Yep yep, that's right.
Let's enjoy today together!");
        ChEye(3,4);
        ChMouth(3,0);
        ChMotion(3,5);
        ChEyeOpenLevel(3,9);
        VoicePlay("B040321202_03_090");
        MsgDisp("Honda","Let's go whilst they're 
not mimicking us.");
        MsgDisp("主人公","(｛本多＊＊｝, thank you for always giving
me a good time.)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    ChEyeOpenLevel(3,#1);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040321202_03_100");
    MsgDisp("Honda","Is that so?
Well, they're smart birds, so I'm happy.");
    MsgDispBGSksp(1,3);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
