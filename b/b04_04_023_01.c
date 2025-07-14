MsgClose();
ChNanaType(#1);
ChOpen(4,255,0,0,2,8,#1,0,0);
VoicePlay("B040402301_04_000");
MsgDisp("Nanatsumori","the sea, the sky and the wharf are all
blueー......");
MsgSel("I feel so refreshed!","It makes me feel kinda hazy","Shall I take a picture with the image of blue in mind?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,2,1);
    VoicePlay("B040402301_04_010");
    MsgDisp("Nanatsumori","Yeah. I'm more like a red type of person,
so this is hurting my eyes...");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(4,4);
    ChMouth(4,4);
    ChMotion(4,1,1);
    ChEyeOpenLevel(4,8);
    VoicePlay("B040402301_04_020");
    MsgDisp("Nanatsumori","That's how it feels like.
This is like a world without boundary
lines.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040402301_04_030");
    MsgDisp("Nanatsumori","I see...it's a world of blue. It's a world
that can only be created during the day.
Nice advice.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
