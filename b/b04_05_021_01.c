BGOpen("wf210",0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040502101_05_000");
MsgDisp("Hiiragi","The sunrise seen from here would surely be
beautiful.");
MsgSel("I want to see the first sunrise of the year!","What about the sunset?","What time should we meet?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B040502101_05_010");
    MsgDisp("Hiiragi","That would be nice!
It would be fun to spend new years day
with you.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(5,2);
    ChMouth(5,2);
    ChMotion(5,4);
    ChEyeOpenLevel(5,9);
    VoicePlay("B040502101_05_020");
    MsgDisp("Hiiragi","Umm... I wonder? You appear to know more
about it than I do.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("B040502101_05_030");
    MsgDisp("Hiiragi","Haha, how about around 4 'o clock?
You're getting hasty, huh.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
