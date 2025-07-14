BGOpen("ne600",1);
MsgClose();
ChOpen(5,253,0,0,3,#1,#1,0,0,0,0);
ChLayout(1);
ScrFadeIn(0);
MsgSel("Today's movie was the best!","Today's movie was so-so","Today's movie was a miss, huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(5,3);
    ChMotion(5,3);
    VoicePlay("B040518400_05_000");
    MsgDisp("Hiiragi","Yes, it made people of all ages and
genders happy.
That is what I should aim for.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,2);
    VoicePlay("B040518400_05_010");
    MsgDisp("Hiiragi","Everyone has their own interpretations.
As for my rating, I thought it was
wonderful.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("B040518400_05_020");
    MsgDisp("Hiiragi","Differences in interpretation, differences
in explanation. I'd like to know why the
ratings are so different.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
