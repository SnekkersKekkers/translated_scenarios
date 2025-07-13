BGOpen("tr110",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChLayout(1);
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0,1);
ScrFadeIn(0);
VoicePlay("B040320000_03_000");
MsgDisp("Honda","Woah, you give off that vibe you know.
That of an expert. Are you actually good?");
MsgSel("You can call me the Snow Princess!","As long as I don't fall......","I want you to teach me......");
switch (MsgSelRsltGet()){
    case 0:
    if (PlPrmGet(2)>=40){
        DateRateSet(3);
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,5);
        VoicePlay("B040320000_03_010");
        MsgDisp("Honda","That's amazing!
How do you control your body so well?");
        MsgDispSksp(1,8);
        MsgDateResultDisp();
        MsgDispSksp(0);
        }
    else {
        DateRateSet(0);
        ChEye(3,4);
        ChMouth(3,0);
        ChMotion(3,4);
        VoicePlay("B040320000_03_020");
        MsgDisp("Honda","Mmhm...... It's a good thing there are
many different types of princesses.");
        MsgDateResultDisp();
        }
    break ;
    case 1:
    DateRateSet(4);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("B040320000_03_030");
    MsgDisp("Honda","Yepyep, I want you to teach me that.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChSet(3,2);
    VoicePlay("B040320000_03_040");
    MsgDisp("Honda","Huh, I was hoping you'd teach me too......");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
