BGOpen("tr410",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChMouth(5,4);
VoicePlay("B030523001_05_000");
MsgDisp("Hiiragi","I get excited just looking at the
amusement park map.
So, have you decided?");
MsgSel("The roller coaster is good","Let's ride the ferris wheel.","I want to try Bungee Jumping","I want to ride the teacup","Let's go inside the Haunted House");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B030523001_05_010");
    MsgDisp("Hiiragi","I totally agree.
Let's go.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0,0);
    Wait(40,0);
    BGOpen("tr420",0);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,0);
    ChLayout(1);
    ScrFadeIn(0);
    ChMotion(5,3);
    VoicePlay("B030523001_05_020");
    MsgDisp("Hiiragi","I wonder which seats we'll get.
I'm looking forward to it.");
    break ;
    case 1:
    MsgDispSksp(1,0);
    VoicePlay("B030523001_05_030");
    MsgDisp("Hiiragi","That's good.
Let's enjoy the view.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0,0);
    Wait(40,0);
    BGOpen("tr430",0);
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0);
    ChLayout(1);
    ScrFadeIn(0);
    ChMotion(5,4);
    VoicePlay("B030523001_05_040");
    MsgDisp("Hiiragi","The scenery is beautiful until you look
down...This is the charm of riding the
Ferris Wheel.");
    break ;
    case 2:
    MsgDispSksp(1,0);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B030523001_05_050");
    MsgDisp("Hiiragi","That feeling of falling for a long time,
is that something you like?");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0,0);
    Wait(40,0);
    BGOpen("tr440",0);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,2);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("B030523001_05_060");
    MsgDisp("Hiiragi","It would be more fun if we could jump
together, but that may be dangerous.");
    break ;
    case 3:
    MsgDispSksp(1,0);
    VoicePlay("B030523001_05_070");
    MsgDisp("Hiiragi","Understood.
I'll let you steer.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0,0);
    Wait(40,0);
    BGOpen("tr450",0);
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0,1);
    ChLayout(1);
    ScrFadeIn(0);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B030523001_05_080");
    MsgDisp("Hiiragi","I'll hold on tightly, so turn as much as
you like.");
    break ;
    case 4:
    MsgDispSksp(1,0);
    ChEye(5,2);
    ChMouth(5,4);
    ChEyeOpenLevel(5,8);
    VoicePlay("B030523001_05_090");
    MsgDisp("Hiiragi","It's over there, alright...");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0,0);
    ChEyeOpenLevel(5,#1);
    Wait(40,0);
    BGOpen("tr460",0);
    ChEye(5,0);
    ChMouth(5,0);
    ChMotion(5,2,1);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("B030523001_05_100");
    MsgDisp("Hiiragi","The props here need a bit more work,
somehow...");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
