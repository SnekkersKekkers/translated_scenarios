BGOpen("tr440",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChNanaType(#1);
ChOpen(4,255,0,2,2,8,#1,0,0);
ScrFadeIn(0);
ChMotion(4,2,1);
VoicePlay("B040423301_04_000");
MsgDisp("Nanatsumori","Something like this...
I wonder who looked at it and thought, 
\"Damn, let's try this\".");
MsgSel("because it's interesting of course!","It seems to be a rite of passage in a foreign country.","I completely don't understand it...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChMotion(4,0,1);
    VoicePlay("B040423301_04_010");
    MsgDisp("Nanatsumori","So, who decided it was fun?");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,1,1);
    VoicePlay("B040423301_04_020");
    MsgDisp("Nanatsumori","Seriously∋
Everyone born in that
country is a hero...");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040423301_04_030");
    MsgDisp("Nanatsumori","I don't get it at all either.
So why do we go out of our way to
do something we don't understand?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
