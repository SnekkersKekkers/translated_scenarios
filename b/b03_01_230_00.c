BGOpen("tr410",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B030123000_01_000");
MsgDisp("Kazama","So, where to?");
MsgSel("The Roller Coaster sounds fun!","Let's ride the ferris wheel.","I want to try bungee jumping!","I want to ride the tea cups.");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B030123000_01_010");
    MsgDisp("Kazama","Didn't expect that, but let's go.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0,0);
    Wait(40,0);
    BGOpen("tr420",0);
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0,1);
    ChEyeOpenLevel(1,10);
    ScrFadeIn(0);
    ChEye(1,4);
    ChMouth(1,0);
    ChEyeOpenLevel(1,0);
    VoicePlay("B030123000_01_020");
    MsgDisp("Kazama","Now that you're here, you know you can't
get off.");
    ChEye(1,0);
    ChEyeOpenLevel(1,10);
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B030123000_01_030");
    MsgDisp("Kazama","I agree.
Alright, let's go!");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0,0);
    Wait(40,0);
    BGOpen("tr430",0);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    ChEyeOpenLevel(1,10);
    ScrFadeIn(0);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    Wait(10,0);
    ChEyeOpenLevel(1,#1);
    VoicePlay("B030123000_01_040");
    MsgDisp("Kazama","I wonder what color car will come.");
    break ;
    case 2:
    MsgDispSksp(1,0);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("B030123000_01_050");
    MsgDisp("Kazama","Hey, did I hear you right just now...?");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0,0);
    Wait(40,0);
    BGOpen("tr440",0);
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,0,1);
    ChEyeOpenLevel(1,8);
    ScrFadeIn(0);
    VoicePlay("B030123000_01_060");
    MsgDisp("Kazama","If you want to turn back, now's your
chance.");
    break ;
    case 3:
    MsgDispSksp(1,0);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B030123000_01_070");
    MsgDisp("Kazama","Sounds good, let's go.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0,0);
    Wait(40,0);
    BGOpen("tr450",0);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0,1);
    ChEyeOpenLevel(1,8);
    ScrFadeIn(0);
    VoicePlay("B030123000_01_080");
    MsgDisp("Kazama","It might spin too much, so be careful.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
