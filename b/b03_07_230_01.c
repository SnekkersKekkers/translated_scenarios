BGOpen("tr410",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0,1);
ScrFadeIn(0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("B030723001_07_000");
MsgDisp("Mikage","Which one should we try?
Look, they also have a haunted house.");
MsgSel("Roller coaster sounds fun","Let's ride the ferris wheel","I want to try bungee jumping!","I want to ride the tea cups","Shall we enter the haunted house?");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("B030723001_07_010");
    MsgDisp("Mikage","Then that's what's coming up next...
... Understood.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0,0);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,0);
    ChEyeOpenLevel(7,-1);
    Wait(40,0);
    BGOpen("tr420",0);
    ScrFadeIn(0);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("B030723001_07_020");
    MsgDisp("Mikage","I thought I was prepared for it, but...");
    break ;
    case 1:
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,0,1);
    VoicePlay("B030723001_07_030");
    MsgDisp("Mikage","Yeah, sounds good.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0,0);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,0);
    ChEyeOpenLevel(7,-1);
    Wait(40,0);
    BGOpen("tr430",0);
    ScrFadeIn(0);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("B030723001_07_040");
    MsgDisp("Mikage","... Alright, let's get on.");
    break ;
    case 2:
    MsgDispSksp(1,0);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("B030723001_07_050");
    MsgDisp("Mikage","Why would you say that...?
Surely you're kidding?");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0,0);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,0);
    ChEyeOpenLevel(7,-1);
    Wait(40,0);
    BGOpen("tr440",0);
    ScrFadeIn(0);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("B030723001_07_060");
    MsgDisp("Mikage","You're actually serious...");
    break ;
    case 3:
    MsgDispSksp(1,0);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("B030723001_07_070");
    MsgDisp("Mikage","Well, that's a safe spot.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0,0);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    ChEyeOpenLevel(7,-1);
    Wait(40,0);
    BGOpen("tr450",0);
    ScrFadeIn(0);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("B030723001_07_080");
    MsgDisp("Mikage","Look like I better not let my guard
down...");
    break ;
    case 4:
    MsgDispSksp(1,0);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("B030723001_07_090");
    MsgDisp("Mikage","Yeah. It's only around for a limited time,
so let's go.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0,0);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    ChEyeOpenLevel(7,-1);
    Wait(40,0);
    BGOpen("tr460",0);
    ScrFadeIn(0);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,4);
    VoicePlay("B030723001_07_100");
    MsgDisp("Mikage","Whoa...
This has a seriously cool atmosphere.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
