MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(4,#1);
ChMouthOpenLevel(4,#1);
ChCheek(4,0);
BGOpen("tr470",2);
BGMPlay("BGM_PLACE_AMUSE_NIGHT",0.01);
ChLayout(1);
ChEye(4,4);
ChMouth(4,3);
ChMotion(4,0);
ScrFadeIn(0);
ChMotion(4,3,1);
VoicePlay("B040423600_04_000");
MsgDisp("Nanatsumori","Amazingー...
I'm super excited...");
MsgSel("That float is so cute! I'll take a picture.","Pretty... It's like I'm in a dream.","I can't see anything because people are in the way...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040423600_04_010");
    MsgDisp("Nanatsumori","Oh, it's colorful.
It's about time for a photo opp.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040423600_04_020");
    MsgDisp("Nanatsumori","Yeah. It's kinda like... I feel like I'm
flying in the sky like this?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,0,1);
    VoicePlay("B040423600_04_030");
    MsgDisp("Nanatsumori","...I'll hold back.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
