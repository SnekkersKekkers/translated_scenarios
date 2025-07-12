MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(7,#1);
ChMouthOpenLevel(7,#1);
ChCheek(7,0);
BGOpen("ex020",0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("S120700000_07_000");
    MsgDisp("Mikage","Alright, time to leave.
Thanks to you, the year is off to a
good start.");
    MsgDisp("主人公","Same for me.");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("S120700000_07_010");
    MsgDisp("Mikage","Right.
I can't give you a gift for New Years
because Vice Principal Himuro might
scold me for it.");
    MsgDisp("主人公","Hehe, I understand.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("S120700000_07_020");
    MsgDisp("Mikage","Okay then, go straight home.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(7);
    Wait(30);
    MsgDisp("主人公","(I visited the shrine with
｛御影＊＊｝!
Looks like this year will be another
good year!)");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 3:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("S120700000_07_030");
    MsgDisp("Mikage","My body and spirit both feel
refreshed.");
    MsgDisp("主人公","Yeah.
｛御影＊＊｝, thanks for coming with me.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("S120700000_07_040");
    MsgDisp("Mikage","It's helpful when you say that.
Sorry for dragging you around so much
first thing in the year.");
    MsgDisp("主人公","No, it was fun.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("S120700000_07_050");
    MsgDisp("Mikage","Okay, I'll take you home.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO_LONG");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    SEWait();
    break ;
    case 4:
    case 5:
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("S120700000_07_060");
    MsgDisp("Mikage","It's nice it was so lively, even
if it's a little tiring.
Are you okay?");
    MsgDisp("主人公","The liveliness is what made it
fun.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("S120700000_07_070");
    MsgDisp("Mikage","That's true.
Alright, let's go back.");
    MsgDisp("主人公","Not yet......");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("S120700000_07_080");
    MsgDisp("Mikage","Hey, it's New Years, so I have to
make sure to return you safely to your
family.
I'll take you, come.");
    MsgDisp("主人公","Okay, thank you.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO_LONG");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    SEWait();
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
