BGOpen("fp410",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4,1);
ScrFadeIn(0);
VoicePlay("B040210101_02_000");
MsgDisp("Sassa","Habataki-style pottery?
How is it different to the normal one?");
MsgSel("It seems like it has a seashell pattern","It's completely different??","Is it the name?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040210101_02_010");
    MsgDisp("Sassa","Heeh, so that's it.
I completely don't get it though.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(0);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("B040210101_02_020");
    MsgDisp("Sassa","You say it's completely different, but to
my eyes it just looks like normal potter
though.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B040210101_02_030");
    MsgDisp("Sassa","Uuugh...
Haha, if you were a curator you might like
this place.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
