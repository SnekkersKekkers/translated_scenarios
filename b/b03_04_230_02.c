MsgClose();
ScrFadeOut(0);
ChLayout(1);
ChEyeOpenLevel(4,#1);
ChMouthOpenLevel(4,#1);
ChCheek(4,0);
BGOpen("tr410",1);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B030423002_04_000");
MsgDisp("Nanatsumori","There's a night parade after this.
What do you want to do? Want to watch?");
MsgSel("Yeah, I want to watch","Sorry, tonight's not good…");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("B030423002_04_010");
    MsgDisp("Nanatsumori","That's more like it.
I know a great spot to watch from.
Hey, let's go!");
    MsgDispSksp(0);
    MsgClose();
    ScrFadeOut(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,0,1);
    VoicePlay("B030423002_04_020");
    MsgDisp("Nanatsumori","Aww, too bad.
Well, oh well.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
