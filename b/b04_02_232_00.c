BGOpen("tr430",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(2,255,2,0,2,7,#1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040223200_02_000");
MsgDisp("Sassa","It'll be a full 15 minutes.");
MsgSel("We'll get to enjoy a beautiful view♪","It feels so good that I feel sleepy.","It's so tall, cramped, and scary...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040223200_02_010");
    MsgDisp("Sassa","Well, that's the only thing to do hereー.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("B040223200_02_020");
    MsgDisp("Sassa","If you want to sleep,
there's better places for it.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(0);
    ChEye(2,2);
    ChMouth(2,2);
    ChMotion(2,0);
    VoicePlay("B040223200_02_030");
    MsgDisp("Sassa","Eh... you were the one who said you wanted
to ride it.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
