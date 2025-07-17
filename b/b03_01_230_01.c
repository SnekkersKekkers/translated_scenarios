BGOpen("tr410",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B030123001_01_000");
MsgDisp("Kazama","Well then, what should we do?");
MsgSel("The Roller Coaster sounds fun!","Let's ride the ferris wheel.","I want to try bungee jumping!","I want to ride the tea cups.","Let's go in the haunted house.");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(1,0);
    ChMouth(1,1);
    ChMotion(1,3);
    VoicePlay("B030123001_01_010");
    MsgDisp("Kazama","OK!
Let's scream our lungs out!");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0,0);
    Wait(40,0);
    BGOpen("tr420",0);
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    ChEyeOpenLevel(1,10);
    ScrFadeIn(0);
    ChMouth(1,3);
    ChEyeOpenLevel(1,8);
    VoicePlay("B030123001_01_020");
    MsgDisp("Kazama","Everyone else's screams make for great
sound effects, don't they?");
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B030123001_01_030");
    MsgDisp("Kazama","Right.
We'll start off with the ferris wheel.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0,0);
    Wait(40,0);
    BGOpen("tr430",0);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    ScrFadeIn(0);
    VoicePlay("B030123001_01_040");
    MsgDisp("Kazama","It'd be nice if it was a little bigger.
Then we could ride for longer.");
    break ;
    case 2:
    MsgDispSksp(1,0);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0,1);
    VoicePlay("B030123001_01_050");
    MsgDisp("Kazama","You can't just try it all out, you know?");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0,0);
    Wait(40,0);
    BGOpen("tr440",0);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0,1);
    ChEyeOpenLevel(1,8);
    ScrFadeIn(0);
    ChEyeOpenLevel(1,0);
    SEPlay("EV_SE_549",0.01);
    SEWait();
    VoicePlay("B030123001_01_060");
    MsgDisp("Kazama","It's a totally different kind of scream
from going on a roller coaster...");
    break ;
    case 3:
    MsgDispSksp(1,0);
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("B030123001_01_070");
    MsgDisp("Kazama","Sounds good.
Looks like it's empty.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0,0);
    Wait(40,0);
    BGOpen("tr450",0);
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,0,1);
    ScrFadeIn(0);
    VoicePlay("B030123001_01_080");
    MsgDisp("Kazama","That person there looked a little pale,
are they okay...?");
    break ;
    case 4:
    MsgDispSksp(1,0);
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B030123001_01_090");
    MsgDisp("Kazama","It's here.
That's totally that.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0,0);
    Wait(40,0);
    BGOpen("tr460",0);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    ChEyeOpenLevel(1,10);
    ScrFadeIn(0);
    ChEyeOpenLevel(1,8);
    VoicePlay("B030123001_01_100");
    MsgDisp("Kazama","Yeah.
This place has great vibes right here.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
