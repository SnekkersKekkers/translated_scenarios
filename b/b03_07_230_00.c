BGOpen("tr410",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0,1);
ScrFadeIn(0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("B030723000_07_000");
MsgDisp("Mikage","First off, where to?");
MsgSel("The Roller Coaster sounds fun!","Let's ride the ferris wheel.","I want to try bungee jumping!","I want to ride the tea cups.");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("B030723000_07_010");
    MsgDisp("Mikage","Oh...
Well, if you want to ride it, I'll go.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0,0);
    ChEye(7,0);
    ChMouth(7,4);
    ChMotion(7,0);
    ChEyeOpenLevel(7,#1);
    Wait(40,0);
    BGOpen("tr420",0);
    ScrFadeIn(0);
    ChEye(7,0);
    ChMouth(7,4);
    ChMotion(7,3);
    VoicePlay("B030723000_07_020");
    MsgDisp("Mikage","It's huge when you get up close to it.");
    break ;
    case 1:
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("B030723000_07_030");
    MsgDisp("Mikage","Ah, oh.
That's fine.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0,0);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    ChEyeOpenLevel(7,#1);
    Wait(40,0);
    BGOpen("tr430",0);
    ScrFadeIn(0);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("B030723000_07_040");
    MsgDisp("Mikage","Whoa∋
They made it huge...");
    break ;
    case 2:
    MsgDispSksp(1,0);
    ChEye(7,0);
    ChMouth(7,4);
    ChMotion(7,3);
    VoicePlay("B030723000_07_050");
    MsgDisp("Mikage","Oh...
... You've got some guts, you know.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0,0);
    ChEye(7,0);
    ChMouth(7,4);
    ChMotion(7,0);
    ChEyeOpenLevel(7,#1);
    Wait(40,0);
    BGOpen("tr440",0);
    ScrFadeIn(0);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("B030723000_07_060");
    MsgDisp("Mikage","I said I would too, after all...
Didn't I?");
    break ;
    case 3:
    MsgDispSksp(1,0);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("B030723000_07_070");
    MsgDisp("Mikage","Sounds good.
No issue there.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0,0);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    ChEyeOpenLevel(7,#1);
    Wait(40,0);
    BGOpen("tr450",0);
    ScrFadeIn(0);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("B030723000_07_080");
    MsgDisp("Mikage","It's unexpectedly dangerous...");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
