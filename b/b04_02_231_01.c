BGOpen("tr420",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(2,255,3,0,4,-1,-1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040223101_02_000");
MsgDisp("Sassa","Apparently sitting at the 
end of a rollercoaster is most fun.");
MsgSel("Let's do a field study","I prefer then front","Let's keep riding until we get to the back");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040223101_02_010");
    MsgDisp("Sassa","If you don't experience it for yourself, 
you won't know1");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("B040223101_02_020");
    MsgDisp("Sassa","You have your stubborn points too.
Well, it's fun in the front too.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,1);
    VoicePlay("B040223101_02_030");
    MsgDisp("Sassa","Did I say thatー?
Then let's ride 100 times in a row!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
