BGOpen("ne320",0);
BGMPlay("BGM_PLACE_BALLING_DARTS",0.01);
ChLayout(1);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
ScrFadeIn(0);
VoicePlay("B040315200_03_000");
MsgDisp("Honda","Do you like it?
Darts that is.");
MsgSel("It's a grown up hobby I guess?","For now, I'll just throw until I hit it!","Can you teach me the rules?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,3);
    VoicePlay("B040315200_03_010");
    MsgDisp("Honda","Heeh, I look forward to it.
If you say that, you must be really good
at it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040315200_03_020");
    MsgDisp("Honda","Hahaha, what do you intend on hitting?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("B040315200_03_030");
    MsgDisp("Honda","Yep yep, fine by me.
I can't teach you the technique, though.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
