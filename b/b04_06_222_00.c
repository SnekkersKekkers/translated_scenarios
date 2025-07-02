BGOpen("tr310",0);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ScrFadeIn(0);
ChMotion(6,4,1);
VoicePlay("B040622200_06_000");
MsgDisp("Himuro","It's empty.");
MsgSel("We've basically got it to ourselves huh?","What a shame...","Will they be alright with the maintenance costs?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040622200_06_010");
    MsgDisp("Himuro","How optimistic.
I don't dislike that way of thinking.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    VoicePlay("B040622200_06_020");
    MsgDisp("Himuro","Really?
I don't think it's something t
o worry about though?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040622200_06_030");
    MsgDisp("Himuro","Well, that is something to worry about.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
