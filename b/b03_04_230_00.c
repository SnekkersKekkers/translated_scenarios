BGOpen("tr410",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B030423000_04_000");
MsgDisp("Nanatsumori","There's a lot to do here.
Where do you want to go?");
MsgSel("Roller coaster sounds fun","Let's ride the ferris wheel","I want to try bungee jumping!","I want to ride the teacups");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,2,1);
    ChEyeOpenLevel(4,8);
    VoicePlay("B030423000_04_010");
    MsgDisp("Nanatsumori","Of course you do...");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0,0);
    ChEye(4,2);
    ChMotion(4,0,1);
    Wait(40,0);
    BGOpen("tr420",0);
    ScrFadeIn(0);
    ChMotion(4,2,1);
    VoicePlay("B030423000_04_020");
    MsgDisp("Nanatsumori","Thinking about how to make a shoot in high
winds... Of course, you just have to
quickly fix your hair.");
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B030423000_04_030");
    MsgDisp("Nanatsumori","I agree.
A relaxed start to a
cheerful day.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0,0);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    Wait(40,0);
    BGOpen("tr430",0);
    ScrFadeIn(0);
    VoicePlay("B030423000_04_040");
    MsgDisp("Nanatsumori","We'll definitely get some good shots.
Ah, watch your step getting on.");
    break ;
    case 2:
    MsgDispSksp(1,0);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,2,1);
    ChEyeOpenLevel(4,7);
    VoicePlay("B030423000_04_050");
    MsgDisp("Nanatsumori","There's still the tried and true way... We
could still do something completely
different...");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0,0);
    ChEye(4,1);
    ChMouth(4,2);
    ChMotion(4,0,1);
    Wait(40,0);
    BGOpen("tr440",0);
    ScrFadeIn(0);
    ChMotion(4,2,1);
    ChEyeOpenLevel(4,0);
    VoicePlay("B030423000_04_060");
    MsgDisp("Nanatsumori","That's right.
I can always fix my hair later, right?
I'm resolved now!");
    break ;
    case 3:
    MsgDispSksp(1,0);
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,2,1);
    ChEyeOpenLevel(4,8);
    VoicePlay("B030423000_04_070");
    MsgDisp("Nanatsumori","I see...
Spinning and twirling around, huh.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0,0);
    ChEye(4,0);
    ChMouth(4,2);
    ChMotion(4,0,1);
    Wait(40,0);
    BGOpen("tr450",0);
    ScrFadeIn(0);
    ChMotion(4,2,1);
    VoicePlay("B030423000_04_080");
    MsgDisp("Nanatsumori","I'll leave the steering up to you.
Don't spin it too fast.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
