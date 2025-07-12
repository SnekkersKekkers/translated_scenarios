BGOpen("tr420",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
MsgClose();
ChOpen(3,255,0,4,4,#1,#1,0,0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040323101_03_000");
MsgDisp("Honda","You really like going on 
this again and again huh?");
MsgSel("I love it▼","It's because I want to see｛本多＊＊｝'s expressions'","It's because it's a staple of amusement parks");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(3,1);
    ChMouth(3,3);
    ChMotion(3,4);
    VoicePlay("B040323101_03_010");
    MsgDisp("Honda","Okay... what is it about roller 
coasters that fascinates you so much?
Let's reconfirm it!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(3,1);
    ChSet(3,2);
    VoicePlay("B040323101_03_020");
    MsgDisp("Honda","Ehhhー...
You want to see my
face frozen in fear?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,0);
    VoicePlay("B040323101_03_030");
    MsgDisp("Honda","Well, I kind of get 
why you can't miss it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
