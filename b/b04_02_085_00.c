BGOpen("fp200",0);
ChLayout(1);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0,1);
ScrFadeIn(0);
VoicePlay("B040208500_02_000");
MsgDisp("Sassa","It's only here that has a strange
atmosphere... It's somewhat like a
different world, huh?");
MsgSel("Is it the fireflies' doing?","Yeah, I have a feeling something is going to happen","Have you heard the rumours of this place?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("B040208500_02_010");
    MsgDisp("Sassa","Firefly?
It's the middle of winter.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B040208500_02_020");
    MsgDisp("Sassa","Yeah, it's definitely 
like the setting of a suspense dramsa.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040208500_02_030");
    MsgDisp("Sassa","I've done my homework.
It seems like you can hear the
other person's inner voice.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
