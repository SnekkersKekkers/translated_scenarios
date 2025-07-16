BGOpen("tr320",0);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
ScrFadeIn(0);
VoicePlay("B040222101_02_000");
MsgDisp("Sassa","The stairs here are quite steep.");
MsgSel("I'm a bit tired...","I can still keep going!","People in the olden days climbed up with their kimonos huh");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("B040222101_02_010");
    MsgDisp("Sassa","Seriously?
You're not getting quite enough exercise.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040222101_02_020");
    MsgDisp("Sassa","Oh, as expected of you!
But, the descent is quite hard on your
legs too, so lets conserve our energy.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B040222101_02_030");
    MsgDisp("Sassa","Yeah, it must have been tough for the
princesses and stuff.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
